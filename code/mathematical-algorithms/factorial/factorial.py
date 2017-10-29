def fact(n):
    prod=1
    for i in range(1,n+1):
        prod=prod*i
    return prod

n=raw_input("Enter Number")
n=int(n)
p=fact(n)
print p
