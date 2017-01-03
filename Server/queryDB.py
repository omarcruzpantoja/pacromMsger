import sqlite3

class pacrom_db:
	def __init__(self, db_name):
		self.c = None
		self.db_name = db_name
		self.conn = None


	def Connect(self):
		try:
			self.conn = sqlite3.connect(self.db_name)
			self.c = self.conn.cursor()
			self.conn.isolation_level = None
			return 1
		except:
			return 0

	def Close(self):
		try:
			self.c.close()
			return 1
		except:
			return 0

	def AddMemberToLocalChat(self, userName):
		"""Once a user logged in to the local server, add them to the connected users"""
		query = """INSERT INTO localUser (uname) values ("%s")""" % userName
		print "[" + userName + "]"
		if userName == "":
			return 0
		try: 
			self.c.execute(query)
			return 1
		except sqlite3.IntegrityError as error:
			if error.message.split()[0] == "UNIQUE":
				return 0 
			else:
				raise

	

	def GetLocalChatUsers(self):
		"""Will be used to show all the connected users in the local server"""
		query = """ SELECT * FROM localUser"""

		try:
			self.c.execute(query)
			return self.c.fetchall()
		except:
			return 0