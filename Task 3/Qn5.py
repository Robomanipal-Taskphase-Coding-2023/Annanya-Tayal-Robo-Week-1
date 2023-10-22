def binary(num):

   if num == 0:
      return 0
   else:
      return (num % 2 + 10 * binary(int(num // 2)))


dec = int(input("Enter a number for conversion from decimal to binary: "))
print("The binary equivalent of",dec,"is:")
print(binary(dec))
