import sqlite3
def createDB():
	conn = sqlite3.connect("pacromDB.db")

	c = conn.cursor()
<<<<<<< HEAD
	c.execute("""DROP TABLE localUser""")
	c.execute("""DROP TABLE chatUser""")
	c.execute("""CREATE TABLE localUser (uname TEXT UNIQUE NOT NULL) """)
=======
	c.execute("""DROP TABLE localUser""") 
	c.execute("""DROP TABLE chatUser""")

	c.execute("""CREATE TABLE localUser (uname TEXT UNIQUE NOT NULL, ipAddress TEXT UNIQUE NOT NULL) """)
>>>>>>> d1ffcb6abffe5bde8ea69858e63c77859f15f9fc
	

	c.execute("""CREATE TABLE chatUser (uid INTEGER PRIMARY KEY ASC AUTOINCREMENT, uName TEXT UNIQUE NOT NULL, uPw TEXT NOT NULL, displayName TEXT NOT NULL, message TEXT, status TEXT NOT NULL )""" )

createDB() 

