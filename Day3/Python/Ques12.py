a=int(input("Enter first number:"))
b=int(input("Enter second number:"))
if a>b:
    m=a
else:
    max=b
while(True):
    if m%a==0 and m%b==0 :
        break
    m += 1
print("The LCM of number is:",m)