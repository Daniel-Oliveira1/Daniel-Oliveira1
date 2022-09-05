#Daniel Oliveira
#Feb 20th, 2022
#Description: This is a simple code that that takes any amount given, and then converts the amount into the amount of dollar bills that it will take to equal the amount.

def Qty(value):
    global amount
    num=amount//value
    amount=round(amount-value*num,2)
    print("From", amount,"-->",end=" ")
    return(num)

amount=float(input("Enter Amount: "))

for val in (50,20,10,5,2,1,0.25,0.1,0.05,0.01):
    print("$",val, int(Qty(val)))
