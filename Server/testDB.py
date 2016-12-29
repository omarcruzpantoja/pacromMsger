from queryDB import *

db = pacrom_db("pacromDB.db")
db.Connect()
#db.AddMemberToLocalChat("")
test = db.GetLocalChatUsers()
