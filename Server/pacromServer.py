from queryDB import *
from Packet import *
import sys
import SocketServer
import threading

global HOST 

def usage():
	print """Usage: python %s <port, default=8000>""" % sys.argv[0] 
	sys.exit(0)



class MetadataTCPHandler(SocketServer.BaseRequestHandler):

	def handle_localRegister(self, db, p, newUser):
		userName = p.getLocalUserName(p)
		address = p.getLocalIP(p)

		if db.AddMemberToLocalChat(userName, address):
			self.request.sendall("Successfully Registered")
		else:
			self.request.sendall("DUP")
		# address = p.packet[2]
		# self.request.recv(2048)
		# if address == HOST:
		# 	self.request.sendallg("Successfully Connected")
		# else:
		# 	self.request.sendall("AHK") 

	def handle_localDelete(self,db,p):
		userName = p.getLocalUserName(p)
		address = p.getLocalIP(p)

		if db.removeMemberFromLocalChat(userName, address):
			self.request.sendall("Successfully Removed")
		else:
			self.request.sendall("AHK")
			
	def handle_localChatUsers(self, db, p):
		address = p.getLocalIP(p)
		users = db.GetLocalChatUsers(address) 
		if len(users) == 0:
			self.request.sendall("NoUsers")
		else:
			request = ""
			for user in users:
				request = request + user[0]+":"
			self.request.sendall(request)
	
	def handle(self):
		db = pacrom_db("pacromDB.db")
		db.Connect()

		p = Packet()
		p.packet = self.request.recv(2048)
		p.decodePacket()
		
		localChatUsers = []

		cmd = p.getCommand()
		print cmd 
		if cmd == "registerLocalChat":
			self.handle_localRegister(db, p, localChatUsers)
		elif cmd == "removeLocalChat":
			self.handle_localDelete(db, p)
		elif cmd == "localChatUsers":
			self.handle_localChatUsers(db, p)


class ChatLogServer(SocketServer.BaseRequestHandler):
	global users
	users = []
	
	def handle_localMessages(self, data, user):
		self.prepMsgToAll("message", user, data)

	def handle_refreshChatUsers(self):
		self.prepMsgToAll("refreshList", " ", " ")
	
	def handle_newUser(self, data):
		self.prepMsgToAll("newUser", data, " ") 
		self.handle_refreshChatUsers()

	def handle(self):
		global users
		msg = self.request[0].split("[NEW-MSG-REQUEST]")
		cmd = msg[0]
		data = msg[1]
		if cmd == "localMessage":
			userName = msg[2]
			print data
			self.handle_localMessages(data, userName)
		
		elif cmd == "removeFromChat":
			users.remove(self.client_address)
			self.handle_refreshChatUsers()
		
		elif cmd == "newUser":
			if self.client_address not in users:
				users.append(self.client_address)
			self.handle_newUser(data)

	def prepMsgToAll(self, query, user, data):
		information = data
		for userA in users:
			data = query + "`" + user + "`" + information
			self.request[1].sendto(data,userA)


# Activate the server; this will keep running until you
# interrupt the program with Ctrl-C
class mainServer(threading.Thread):
	def __init__(self, server):
		threading.Thread.__init__(self)
		self.server = server
	def run(self):
		print "Server Started"
		self.server.serve_forever()
		
class localChatServer(threading.Thread):
	def __init__(self, server):
		threading.Thread.__init__(self)
		self.server = server
	def run(self):
		print "Local Chat Server"
		self.server.serve_forever()

if __name__ == "__main__":
	global HOST
	HOST, PORT1, PORT2 = "192.168.0.14", 4000, 4001

	if len(sys.argv) > 1:
		try:
			PORT = int(sys.argv[1])
		except:
			usage()

	mServer = SocketServer.TCPServer((HOST, PORT1), MetadataTCPHandler)
	chatServer = SocketServer.UDPServer((HOST, PORT2), ChatLogServer)

	runMainServer = mainServer(mServer)
	runChatServer = localChatServer(chatServer)

	runMainServer.start()
	runChatServer.start()
