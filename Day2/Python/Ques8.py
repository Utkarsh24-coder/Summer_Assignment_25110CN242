n=(int(input("Enter a number:")))
a=n
rev=0
while n>0:
    rev=rev*10+(n%10)
    n=n//10
print("Reverse of a number is:",rev)
if a==rev:
    print(a,"is a Palindrome number.")
elif a!=rev:
    print(a,"is a Palindrome number.")