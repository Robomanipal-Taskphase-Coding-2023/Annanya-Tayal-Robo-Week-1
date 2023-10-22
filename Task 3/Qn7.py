import math
x1=int(input("Enter X coordinate 1: "))
x2=int(input("Enter X coordinate 2: "))
y1=int(input("Enter Y coordinate 1: "))
y2=int(input("Enter Y coordinate 2: "))
d=pow(pow((x1-x2),2)+pow((y1-y2),2),0.5)
print("Distance between the given points="+str(d))
