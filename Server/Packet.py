import json

class Packet:
	def __init__(self):
		self.packet = None

	def decodePacket(self):
		self.packet = self.packet.split(":")

	def getCommand(self):
		return self.packet[0]

	def getLocalUserName(self, p):
		return self.packet[1]