from queryDB import *
from Packet import *
import sys
import SocketServer

global HOST 

def usage():
	print """Usage: python %s <port, default=8000>""" % sys.argv[0] 
	sys.exit(0)

class MetadataTCPHandler(SocketServer.BaseRequestHandler):

	def handle_localRegister(self, db, p):
		userName = p.getLocalUserName(p)
		
		if db.AddMemberToLocalChat(userName):
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

		if db.removeMemberFromLocalChat(userName):
			self.request.sendall("Successfully Removed")
		else:
			self.request.sendall("AHK")
	def handle_localChatUsers(self, db):
		users = db.GetLocalChatUsers() 
		if len(users) = 0:
			self.request.sendall("NoUsers")
		else:
			request = ""
			for user in users:
				request = user+":"
			request = request[-1]
			self.request.sendall(request)
			


	def handle(self):
		db = pacrom_db("pacromDB.db")
		db.Connect()

		p = Packet()
		p.packet = self.request.recv(2048)
		p.decodePacket()
	
		cmd = p.getCommand()
		print cmd 
		if cmd == "registerLocalChat":
			self.handle_localRegister(db, p)
		elif cmd == "removeLocalChat":
			self.handle_localDelete(db, p)
		elif cmd == "localChatUsers":
			self.handle_localChatUsers(db)


if __name__ == "__main__":
    global HOST
    HOST, PORT = "192.168.0.14", 4001
    runLocalChat()

    if len(sys.argv) > 1:
    	try:
    		PORT = int(sys.argv[1])
    	except:
    		usage()

    server = SocketServer.TCPServer((HOST, PORT), MetadataTCPHandler)

    # Activate the server; this will keep running until you
    # interrupt the program with Ctrl-C
print "Server Started"
server.serve_forever()