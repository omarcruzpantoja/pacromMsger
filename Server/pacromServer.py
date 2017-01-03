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
		# 	self.request.sendall("Successfully Connected")
		# else:
		# 	self.request.sendall("AHK") 


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


if __name__ == "__main__":
    global HOST
    HOST, PORT = "192.168.0.21", 4001

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