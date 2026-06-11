x=(int(input("Enter the value of base(x):")))
n=(int(input("Enter the value of power(n):")))
pow=1
for i in range (0,n):
    pow *=x
print("The value of x^n is:",pow)