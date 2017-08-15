from math import exp

from math import tanh

class test:
	def value(self,index,in0,in1,in2,in3):
		self.input0 = (in0 - 17.4305)/4.45073
		self.input1 = (in1 - 0.459987)/0.0509152
		self.input2 = (in2 - 0.188581)/0.0656804
		self.input3 = (in3 - 134.719)/16.5033
		if index==0: return self.neuron0x7ff7d8736970();
		return 0.
	def neuron0x7ff7d8733dd0(self):
		return self.input0
	def neuron0x7ff7d87340d0(self):
		return self.input1
	def neuron0x7ff7d87343d0(self):
		return self.input2
	def neuron0x7ff7d87346d0(self):
		return self.input3
	def neuron0x7ff7d8734af0(self):
		input = -1.63837
		input = input + self.synapse0x7ff7d8598c40()
		input = input + self.synapse0x7ff7d856d7b0()
		input = input + self.synapse0x7ff7d83a6d60()
		input = input + self.synapse0x7ff7d8341610()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7ff7d8734d70(self):
		input = 1.51591
		input = input + self.synapse0x7ff7d8578460()
		input = input + self.synapse0x7ff7d8388e10()
		input = input + self.synapse0x7ff7d8564ba0()
		input = input + self.synapse0x7ff7d871b230()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7ff7d8735070(self):
		input = 1.51705
		input = input + self.synapse0x7ff7d8735370()
		input = input + self.synapse0x7ff7d87353a0()
		input = input + self.synapse0x7ff7d87353d0()
		input = input + self.synapse0x7ff7d8735400()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7ff7d8735430(self):
		input = -2.56977
		input = input + self.synapse0x7ff7d8735730()
		input = input + self.synapse0x7ff7d8735760()
		input = input + self.synapse0x7ff7d8735790()
		input = input + self.synapse0x7ff7d87357c0()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7ff7d87357f0(self):
		input = 0.988956
		input = input + self.synapse0x7ff7d8735af0()
		input = input + self.synapse0x7ff7d858dcf0()
		input = input + self.synapse0x7ff7d8735c20()
		input = input + self.synapse0x7ff7d8735c50()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7ff7d8735c80(self):
		input = -0.791521
		input = input + self.synapse0x7ff7d8735f00()
		input = input + self.synapse0x7ff7d8735f30()
		input = input + self.synapse0x7ff7d8735f60()
		input = input + self.synapse0x7ff7d8735f90()
		input = input + self.synapse0x7ff7d8735fc0()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7ff7d8735ff0(self):
		input = -0.794361
		input = input + self.synapse0x7ff7d87362f0()
		input = input + self.synapse0x7ff7d8736320()
		input = input + self.synapse0x7ff7d8736350()
		input = input + self.synapse0x7ff7d8736380()
		input = input + self.synapse0x7ff7d87363b0()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7ff7d87363e0(self):
		input = -1.7129
		input = input + self.synapse0x7ff7d87366e0()
		input = input + self.synapse0x7ff7d8736710()
		input = input + self.synapse0x7ff7d8736740()
		input = input + self.synapse0x7ff7d8735b20()
		input = input + self.synapse0x7ff7d8735b50()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7ff7d8736970(self):
		input = -0.105925
		input = input + self.synapse0x7ff7d8736af0()
		input = input + self.synapse0x7ff7d8736b20()
		input = input + self.synapse0x7ff7d8736b50()
		return (input*1)+0
	def synapse0x7ff7d8598c40(self):
		return (self.neuron0x7ff7d8733dd0()*0.646344)
	def synapse0x7ff7d856d7b0(self):
		return (self.neuron0x7ff7d87340d0()*0.298491)
	def synapse0x7ff7d83a6d60(self):
		return (self.neuron0x7ff7d87343d0()*-3.18771)
	def synapse0x7ff7d8341610(self):
		return (self.neuron0x7ff7d87346d0()*1.17465)
	def synapse0x7ff7d8578460(self):
		return (self.neuron0x7ff7d8733dd0()*-0.0678868)
	def synapse0x7ff7d8388e10(self):
		return (self.neuron0x7ff7d87340d0()*-2.33987)
	def synapse0x7ff7d8564ba0(self):
		return (self.neuron0x7ff7d87343d0()*-0.686663)
	def synapse0x7ff7d871b230(self):
		return (self.neuron0x7ff7d87346d0()*1.44586)
	def synapse0x7ff7d8735370(self):
		return (self.neuron0x7ff7d8733dd0()*0.105497)
	def synapse0x7ff7d87353a0(self):
		return (self.neuron0x7ff7d87340d0()*-1.04306)
	def synapse0x7ff7d87353d0(self):
		return (self.neuron0x7ff7d87343d0()*3.53678)
	def synapse0x7ff7d8735400(self):
		return (self.neuron0x7ff7d87346d0()*-2.63936)
	def synapse0x7ff7d8735730(self):
		return (self.neuron0x7ff7d8733dd0()*-0.0500028)
	def synapse0x7ff7d8735760(self):
		return (self.neuron0x7ff7d87340d0()*-1.27764)
	def synapse0x7ff7d8735790(self):
		return (self.neuron0x7ff7d87343d0()*-1.73997)
	def synapse0x7ff7d87357c0(self):
		return (self.neuron0x7ff7d87346d0()*1.21715)
	def synapse0x7ff7d8735af0(self):
		return (self.neuron0x7ff7d8733dd0()*-0.308959)
	def synapse0x7ff7d858dcf0(self):
		return (self.neuron0x7ff7d87340d0()*0.586429)
	def synapse0x7ff7d8735c20(self):
		return (self.neuron0x7ff7d87343d0()*-0.356656)
	def synapse0x7ff7d8735c50(self):
		return (self.neuron0x7ff7d87346d0()*0.247129)
	def synapse0x7ff7d8735f00(self):
		return (self.neuron0x7ff7d8734af0()*0.965771)
	def synapse0x7ff7d8735f30(self):
		return (self.neuron0x7ff7d8734d70()*1.69073)
	def synapse0x7ff7d8735f60(self):
		return (self.neuron0x7ff7d8735070()*-2.2074)
	def synapse0x7ff7d8735f90(self):
		return (self.neuron0x7ff7d8735430()*-0.819004)
	def synapse0x7ff7d8735fc0(self):
		return (self.neuron0x7ff7d87357f0()*-2.0816)
	def synapse0x7ff7d87362f0(self):
		return (self.neuron0x7ff7d8734af0()*-0.125372)
	def synapse0x7ff7d8736320(self):
		return (self.neuron0x7ff7d8734d70()*0.563333)
	def synapse0x7ff7d8736350(self):
		return (self.neuron0x7ff7d8735070()*-1.32493)
	def synapse0x7ff7d8736380(self):
		return (self.neuron0x7ff7d8735430()*-0.764042)
	def synapse0x7ff7d87363b0(self):
		return (self.neuron0x7ff7d87357f0()*-1.07839)
	def synapse0x7ff7d87366e0(self):
		return (self.neuron0x7ff7d8734af0()*0.763752)
	def synapse0x7ff7d8736710(self):
		return (self.neuron0x7ff7d8734d70()*0.843364)
	def synapse0x7ff7d8736740(self):
		return (self.neuron0x7ff7d8735070()*-2.46233)
	def synapse0x7ff7d8735b20(self):
		return (self.neuron0x7ff7d8735430()*1.32619)
	def synapse0x7ff7d8735b50(self):
		return (self.neuron0x7ff7d87357f0()*-0.789073)
	def synapse0x7ff7d8736af0(self):
		return (self.neuron0x7ff7d8735c80()*1.96147)
	def synapse0x7ff7d8736b20(self):
		return (self.neuron0x7ff7d8735ff0()*0.744947)
	def synapse0x7ff7d8736b50(self):
		return (self.neuron0x7ff7d87363e0()*0.20594)
