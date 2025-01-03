x=input("Enter your first name = ")
y= input("Enter your second name = ")
fullName=x+" "+y
print ("Your full name is = {}".format(fullName.upper()))

z=fullName.split()
print("Your first name is {} and second name is {}".format(z[0] , z[1]))
g=z[0]+z[1]+"@gmail.com"
print("IF YOUR EMAIL ADDRESS IS {}".format(g.lower()))
s=g.split('@')
print("First part of your gmail {} and last part of your gmail is {}".format(s[0],s[1]))
