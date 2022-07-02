t=long(input(""))
while(t--):
	n=long(input(""))
	x=long(input(""))

	print(((x*((2**(n-1))-1))+x)%1000000007)