seq=raw_input("Enter Binary sequence")
length=len(seq)
i=1
#print length
num=0
while length>0:
    num=num+int(int(seq[length-1])*i)
    i=i*2
    length=length-1
    #print num
print num
