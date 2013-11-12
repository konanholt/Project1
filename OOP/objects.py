class media:
	length = 0
	title = ''
	media_type = ''
	quantity = 0	

	def getLength(self):
		print self.length

	def getAvailability(self):
		print self.quantity;
	
	def rentMedia(self):
		if(self.quantity > 0):
			self.quantity = self.quantity - 1
	def returnMedia(self):
		self.quantity = self.quantity + 1
		
class movie(media):
	self.media_type = 'movie'
	def getCast(self)
		array_cast.append(director)
		array_cast.append(lead_actor)
		array_cast.append(lead_actress)
		array_cast.append(supporting_actor)
		array_cast.append(supporting_actress)
			return '\r'.join(array_cast)

class album(media):
	self.media_type = 'album'
	
	def getTrackListing(self)
		i = 0
		while(i <= arr_tracks):
			print(arr_tracks[i++])

	def getMusicians(self)
		array_musicians.append(vocals)
		array_musicians.append(lead_guitar)
		array_musicians.append(keyboard)
		array_musicians.append(drums)
			return '\r'.join(array_cast)




