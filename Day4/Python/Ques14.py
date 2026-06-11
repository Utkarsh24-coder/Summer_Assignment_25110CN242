a,b=0,1
n=(int(input("Enter number of terms:")))
print("Fibonaaci series upto",n,"terms")
for i in range (0,n-1):
    temp=b
    b=a+b
    a=temp
print(n,"th Fibonaaci term is:",a)