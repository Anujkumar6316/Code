# Class name should be in PasacalCase:
class Atm:
	# data and method name in Snake_case:

	# __init__ : constructor (magic/special/dunder method) 
	def __init__(self):
		self.pin=''
		self.balance=0

		self.menu()

	def menu(self):
		 user_input=int(input('''
		 		 	1. Create a pin.
		 		 	2. Deposite.
		 		 	3. Withdraw.
		 		 	4. Check balance.
		 		 	5. exit.\n'''))

		 if user_input==1:
		 	self.Pin()
		 elif user_input==2:
		 	self.Deposite()
		 elif user_input==3:
		 	self.Withdraw()
		 elif user_input==4:
		 	self.Balance_check()
		 else:
		 	print("Bye")

		 if user_input!=5:
			 self.menu()

	def Pin(self):
		self.pin=input("Enter the pin")

	def Deposite(self):
		tmp_pin=input("Enter pin:")
		if tmp_pin==self.pin:
			amt=int(input("Enter the Deposite amt: "))
			self.balance=self.balance+amt
		else:
			print("Invalid cridentials")

	def Withdraw(self):
		tmp_pin=input("Enter pin:")
		if tmp_pin==self.pin:
			amt=int(input("Enter the Withdraw amt: "))
			self.balance=self.balance-amt

	def Balance_check(self):
		tmp_pin=input("Enter pin:")
		if tmp_pin==self.pin:
			print(self.balance)
		else:
			print("Invalid cridentials")


# creating a basic calculator function..

class Fraction:
	def __init__(self,n,d):
		self.num=n
		self.den=d


	# this magic method is called when use print(obj)
	def __str__(self):
		return f"{self.num}/{self.den}"

	# this magic method is called when use print(obj+obj)
	def __add__(self,other):
		tmp_num=self.num*other.den+other.num*self.den
		tmp_den=self.den*other.den

		return f"{tmp_num}/{tmp_den}"

	def __sub__(self,other):
		tmp_num=self.num*other.den-other.num*self.den
		tmp_den=self.den*other.den

		return f"{tmp_num}/{tmp_den}"

	def __mul__(self,other):
		tmp_num=self.num*other.num
		tmp_den=self.den*other.den

		return f"{tmp_num}/{tmp_den}"

	def __truediv__(self,other):
		tmp_num=self.num*other.den
		tmp_den=self.den*other.num

		return f"{tmp_num}/{tmp_den}"


# ENCAPSULATION-->

# Instance variable-> class variable's which means every object will have different values

# private variable/method --> just add __ in prefix.
	# eg: self.__balance, def __func(self)

'''
__self.pin=self._Atm__pin
means we can use  
	print(obj._Atm__pin)
hence in python nothing is private
'''


# Aggregation-->
class customer:
	def __init__(self,name,age,address):
		self.name=name
		self.age=age
		self.address=address

	def edit_customer(self,new_name,new_age,new_city,new_pincode,new_state):
		self.name=new_name
		self.age=new_age
		self.address.Edit_address(new_city,new_pincode,new_state)

	def __str__(self):
		return f"Name: {self.name}\nAge: {self.age}\n{self.address}"


class Address:
	def __init__(self,city,pincode,state):
		self.city=city
		self.pincode=pincode
		self.state=state

	def Edit_address(self,new_city,new_pincode,new_state):
		self.state=new_state
		self.pincode=new_pincode
		self.city=new_city

	def __str__(self):
		return f"City: {self.city}\nPincode: {self.pincode}\nState: {self.state}"

# add=Address('Naugachia',853204,'Bihar')
# cust=customer('Anuj',19,add)
# print(cust)