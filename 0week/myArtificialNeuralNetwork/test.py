from math import exp

from math import tanh

class test:
	def value(self,index,in0,in1,in2):
		self.input0 = (in0 - 0.459987)/0.0509152
		self.input1 = (in1 - 0.188581)/0.0656804
		self.input2 = (in2 - 134.719)/16.5033
		if index==0: return self.neuron0x7fbbbbc161e0();
		return 0.
	def neuron0x7fbbbde55900(self):
		return self.input0
	def neuron0x7fbbbde5eea0(self):
		return self.input1
	def neuron0x7fbbbbb26270(self):
		return self.input2
	def neuron0x7fbbbde5f860(self):
		input = -0.035092
		input = input + self.synapse0x7fbbbbba2500()
		input = input + self.synapse0x7fbbbbb15760()
		input = input + self.synapse0x7fbbbde12450()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fbbbdeb91f0(self):
		input = -0.872491
		input = input + self.synapse0x7fbbbbb15950()
		input = input + self.synapse0x7fbbbb9b9390()
		input = input + self.synapse0x7fbbbbbe3670()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fbbbbc01c50(self):
		input = -0.232006
		input = input + self.synapse0x7fbbbbb24cb0()
		input = input + self.synapse0x7fbbbde2bd80()
		input = input + self.synapse0x7fbbbde91580()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fbbbb9ce250(self):
		input = -1.34372
		input = input + self.synapse0x7fbbbde73760()
		input = input + self.synapse0x7fbbbbb9e720()
		input = input + self.synapse0x7fbbbbb33c60()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fbbbde52280(self):
		input = -0.936406
		input = input + self.synapse0x7fbbbde14960()
		input = input + self.synapse0x7fbbbbb07700()
		input = input + self.synapse0x7fbbbde060e0()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fbbbde139f0(self):
		input = 0.249646
		input = input + self.synapse0x7fbbbbb9ccf0()
		input = input + self.synapse0x7fbbbde9e8c0()
		input = input + self.synapse0x7fbbbbb27ac0()
		input = input + self.synapse0x7fbbbbc1e470()
		input = input + self.synapse0x7fbbbb9d6730()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fbbbbc19700(self):
		input = -0.246357
		input = input + self.synapse0x7fbbbbc3b7a0()
		input = input + self.synapse0x7fbbbbbec010()
		input = input + self.synapse0x7fbbbbb766e0()
		input = input + self.synapse0x7fbbbbba2a80()
		input = input + self.synapse0x7fbbbbc13280()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fbbbdea0cf0(self):
		input = -1.35366
		input = input + self.synapse0x7fbbbbb09420()
		input = input + self.synapse0x7fbbbde70730()
		input = input + self.synapse0x7fbbbde04d90()
		input = input + self.synapse0x7fbbbdeb1cc0()
		input = input + self.synapse0x7fbbbde58960()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fbbbbc161e0(self):
		input = -0.451561
		input = input + self.synapse0x7fbbbdea0c80()
		input = input + self.synapse0x7fbbbbb1b280()
		input = input + self.synapse0x7fbbbb9b87f0()
		return (input*1)+0
	def synapse0x7fbbbbba2500(self):
		return (self.neuron0x7fbbbde55900()*1.46382)
	def synapse0x7fbbbbb15760(self):
		return (self.neuron0x7fbbbde5eea0()*-0.564966)
	def synapse0x7fbbbde12450(self):
		return (self.neuron0x7fbbbbb26270()*-7.55136)
	def synapse0x7fbbbbb15950(self):
		return (self.neuron0x7fbbbde55900()*1.86976)
	def synapse0x7fbbbb9b9390(self):
		return (self.neuron0x7fbbbde5eea0()*-3.39348)
	def synapse0x7fbbbbbe3670(self):
		return (self.neuron0x7fbbbbb26270()*0.894324)
	def synapse0x7fbbbbb24cb0(self):
		return (self.neuron0x7fbbbde55900()*1.33766)
	def synapse0x7fbbbde2bd80(self):
		return (self.neuron0x7fbbbde5eea0()*-2.68914)
	def synapse0x7fbbbde91580(self):
		return (self.neuron0x7fbbbbb26270()*2.80923)
	def synapse0x7fbbbde73760(self):
		return (self.neuron0x7fbbbde55900()*-0.808684)
	def synapse0x7fbbbbb9e720(self):
		return (self.neuron0x7fbbbde5eea0()*2.82957)
	def synapse0x7fbbbbb33c60(self):
		return (self.neuron0x7fbbbbb26270()*-1.03923)
	def synapse0x7fbbbde14960(self):
		return (self.neuron0x7fbbbde55900()*3.60321)
	def synapse0x7fbbbbb07700(self):
		return (self.neuron0x7fbbbde5eea0()*5.55714)
	def synapse0x7fbbbde060e0(self):
		return (self.neuron0x7fbbbbb26270()*1.9315)
	def synapse0x7fbbbbb9ccf0(self):
		return (self.neuron0x7fbbbde5f860()*0.0529258)
	def synapse0x7fbbbde9e8c0(self):
		return (self.neuron0x7fbbbdeb91f0()*-0.512113)
	def synapse0x7fbbbbb27ac0(self):
		return (self.neuron0x7fbbbbc01c50()*0.685008)
	def synapse0x7fbbbbc1e470(self):
		return (self.neuron0x7fbbbb9ce250()*0.351963)
	def synapse0x7fbbbb9d6730(self):
		return (self.neuron0x7fbbbde52280()*-0.287979)
	def synapse0x7fbbbbc3b7a0(self):
		return (self.neuron0x7fbbbde5f860()*1.40661)
	def synapse0x7fbbbbbec010(self):
		return (self.neuron0x7fbbbdeb91f0()*0.116562)
	def synapse0x7fbbbbb766e0(self):
		return (self.neuron0x7fbbbbc01c50()*0.165762)
	def synapse0x7fbbbbba2a80(self):
		return (self.neuron0x7fbbbb9ce250()*-1.28469)
	def synapse0x7fbbbbc13280(self):
		return (self.neuron0x7fbbbde52280()*2.50171)
	def synapse0x7fbbbbb09420(self):
		return (self.neuron0x7fbbbde5f860()*-4.26756)
	def synapse0x7fbbbde70730(self):
		return (self.neuron0x7fbbbdeb91f0()*2.75424)
	def synapse0x7fbbbde04d90(self):
		return (self.neuron0x7fbbbbc01c50()*1.32371)
	def synapse0x7fbbbdeb1cc0(self):
		return (self.neuron0x7fbbbb9ce250()*-2.30386)
	def synapse0x7fbbbde58960(self):
		return (self.neuron0x7fbbbde52280()*-2.07851)
	def synapse0x7fbbbdea0c80(self):
		return (self.neuron0x7fbbbde139f0()*0.940527)
	def synapse0x7fbbbbb1b280(self):
		return (self.neuron0x7fbbbbc19700()*-0.0891046)
	def synapse0x7fbbbb9b87f0(self):
		return (self.neuron0x7fbbbdea0cf0()*0.812361)
