count=0
np=int(input("Enter no of pages: "))
print("Enter pages no: ")
page = list(map(int, input().rstrip().split()))

nf=int(input("Enter frame size: "))
frame=[]
for i in range(nf):
	frame.append(-1)

print("Ref String\t\t\tframe")
j=0
for i in range(0,np):
	print(" {}\t".format(page[i]),end="")
	avail=0
	for k in range(0,nf):
		if(frame[k]==page[i]):
			avail=1
	if(avail==0):
		frame[j]=page[i]
		j=(j+1)%nf
		count=count+1
		for k in range(0,nf):
			print("\t{}\t".format(frame[k]),end="")
	print("\n")
	
print("Page miss : {}".format(count))
print("Page hit : {}".format(np-count))


