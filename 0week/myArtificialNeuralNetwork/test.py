from math import exp

from math import tanh

class test:
	def value(self,index,in0,in1,in2):
		self.input0 = (in0 - 0.459987)/0.0509152
		self.input1 = (in1 - 0.188581)/0.0656804
		self.input2 = (in2 - 134.719)/16.5033
		if index==0: return self.neuron0x7fc5186c8b60();
		return 0.
	def neuron0x7fc51cc68f70(self):
		return self.input0
	def neuron0x7fc51cc69270(self):
		return self.input1
	def neuron0x7fc51cc69570(self):
		return self.input2
	def neuron0x7fc51cc69990(self):
		input = -3.17451
		input = input + self.synapse0x7fc51cc64e00()
		input = input + self.synapse0x7fc51a8f4440()
		input = input + self.synapse0x7fc51cc68f20()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fc51cc69c10(self):
		input = 0.444757
		input = input + self.synapse0x7fc51cc68970()
		input = input + self.synapse0x7fc51cc69f10()
		input = input + self.synapse0x7fc51cc69f40()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fc51cc69f70(self):
		input = 1.77138
		input = input + self.synapse0x7fc5186b7920()
		input = input + self.synapse0x7fc5186c7150()
		input = input + self.synapse0x7fc5186c76a0()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fc5186c76d0(self):
		input = -2.91198
		input = input + self.synapse0x7fc5186c79d0()
		input = input + self.synapse0x7fc5186c7a00()
		input = input + self.synapse0x7fc5186c7a30()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fc5186c7a60(self):
		input = -0.717954
		input = input + self.synapse0x7fc5186c7d60()
		input = input + self.synapse0x7fc5186c7d90()
		input = input + self.synapse0x7fc5186c7dc0()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fc5186c7f10(self):
		input = -0.577985
		input = input + self.synapse0x7fc5186c8210()
		input = input + self.synapse0x7fc5186c8240()
		input = input + self.synapse0x7fc5186c8370()
		input = input + self.synapse0x7fc5186c83a0()
		input = input + self.synapse0x7fc5186c83d0()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fc5186c8400(self):
		input = -1.02939
		input = input + self.synapse0x7fc5186c8680()
		input = input + self.synapse0x7fc5186c86b0()
		input = input + self.synapse0x7fc5186c86e0()
		input = input + self.synapse0x7fc5186c8710()
		input = input + self.synapse0x7fc5186c8740()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fc5186c8770(self):
		input = 0.273584
		input = input + self.synapse0x7fc5186c8a70()
		input = input + self.synapse0x7fc5186c8aa0()
		input = input + self.synapse0x7fc5186c8ad0()
		input = input + self.synapse0x7fc5186c8b00()
		input = input + self.synapse0x7fc5186c8b30()
		if input<-709. : return 0
		return ((1/(1+exp(-input)))*1)+0
	def neuron0x7fc5186c8b60(self):
		input = 1.49068
		input = input + self.synapse0x7fc5186c8d60()
		input = input + self.synapse0x7fc5186c8d90()
		input = input + self.synapse0x7fc5186c8dc0()
		return (input*1)+0
	def synapse0x7fc51cc64e00(self):
		return (self.neuron0x7fc51cc68f70()*1.98249)
	def synapse0x7fc51a8f4440(self):
		return (self.neuron0x7fc51cc69270()*-3.99748)
	def synapse0x7fc51cc68f20(self):
		return (self.neuron0x7fc51cc69570()*-3.67412)
	def synapse0x7fc51cc68970(self):
		return (self.neuron0x7fc51cc68f70()*-1.50553)
	def synapse0x7fc51cc69f10(self):
		return (self.neuron0x7fc51cc69270()*-2.41625)
	def synapse0x7fc51cc69f40(self):
		return (self.neuron0x7fc51cc69570()*2.28931)
	def synapse0x7fc5186b7920(self):
		return (self.neuron0x7fc51cc68f70()*-0.968989)
	def synapse0x7fc5186c7150(self):
		return (self.neuron0x7fc51cc69270()*2.25515)
	def synapse0x7fc5186c76a0(self):
		return (self.neuron0x7fc51cc69570()*-1.4954)
	def synapse0x7fc5186c79d0(self):
		return (self.neuron0x7fc51cc68f70()*0.791423)
	def synapse0x7fc5186c7a00(self):
		return (self.neuron0x7fc51cc69270()*0.910986)
	def synapse0x7fc5186c7a30(self):
		return (self.neuron0x7fc51cc69570()*2.8111)
	def synapse0x7fc5186c7d60(self):
		return (self.neuron0x7fc51cc68f70()*-2.64041)
	def synapse0x7fc5186c7d90(self):
		return (self.neuron0x7fc51cc69270()*-0.633454)
	def synapse0x7fc5186c7dc0(self):
		return (self.neuron0x7fc51cc69570()*-0.0649321)
	def synapse0x7fc5186c8210(self):
		return (self.neuron0x7fc51cc69990()*-1.044)
	def synapse0x7fc5186c8240(self):
		return (self.neuron0x7fc51cc69c10()*0.282821)
	def synapse0x7fc5186c8370(self):
		return (self.neuron0x7fc51cc69f70()*-1.15988)
	def synapse0x7fc5186c83a0(self):
		return (self.neuron0x7fc5186c76d0()*-0.327782)
	def synapse0x7fc5186c83d0(self):
		return (self.neuron0x7fc5186c7a60()*-0.710797)
	def synapse0x7fc5186c8680(self):
		return (self.neuron0x7fc51cc69990()*-1.69531)
	def synapse0x7fc5186c86b0(self):
		return (self.neuron0x7fc51cc69c10()*0.792513)
	def synapse0x7fc5186c86e0(self):
		return (self.neuron0x7fc51cc69f70()*-3.30808)
	def synapse0x7fc5186c8710(self):
		return (self.neuron0x7fc5186c76d0()*-0.638597)
	def synapse0x7fc5186c8740(self):
		return (self.neuron0x7fc5186c7a60()*-1.8031)
	def synapse0x7fc5186c8a70(self):
		return (self.neuron0x7fc51cc69990()*2.40606)
	def synapse0x7fc5186c8aa0(self):
		return (self.neuron0x7fc51cc69c10()*-2.56761)
	def synapse0x7fc5186c8ad0(self):
		return (self.neuron0x7fc51cc69f70()*2.65007)
	def synapse0x7fc5186c8b00(self):
		return (self.neuron0x7fc5186c76d0()*2.4925)
	def synapse0x7fc5186c8b30(self):
		return (self.neuron0x7fc5186c7a60()*0.849722)
	def synapse0x7fc5186c8d60(self):
		return (self.neuron0x7fc5186c7f10()*-0.871372)
	def synapse0x7fc5186c8d90(self):
		return (self.neuron0x7fc5186c8400()*1.54147)
	def synapse0x7fc5186c8dc0(self):
		return (self.neuron0x7fc5186c8770()*-1.44483)
