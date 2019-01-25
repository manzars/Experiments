def knapsack(n,profit,weight,cp):
	tp=0.0
	x=[]
	for i in range(0,n):
		if(weight[i]>cp):
			break
		else:
			x.append(0)
			x[i]=1.0
			tp+=profit[i]
			cp=cp-weight[i]
	if(i<n):
		x.append(0)
		x[i]=cp/weight[i]
		tp=tp+(profit[i]*x[i])
	print("The Result fraction is : {}".format(x))
	print("Maximum profit is : {}".format(tp))




def main():
	n=int(input("Enter no of Objects"))
	cp=int(input("Capacity of knapsack"))
	profit=[]
	weight=[]
	ratio=[]
	print("Enter profits: ")
	for i in range(0,n):
		profit.append(0)
		profit[i]=float(input())

	print("Enter Weights: ")
	for i in range(0,n):
		weight.append(0)
		weight[i]=float(input())
		

	for i in range(0,n):
		ratio.append(0)
		ratio[i]=profit[i]/weight[i]

	for i in range(0,n):
		for j in range(i+1,n):
			if(ratio[i]<ratio[j]):
				ratio[i],ratio[j]=ratio[j],ratio[i]
				profit[i],profit[j]=profit[j],profit[i]
				weight[i],weight[j]=weight[j],weight[i]	
	knapsack(n,profit,weight,cp)
	

main()
