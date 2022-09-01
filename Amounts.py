def Qty(value):
    global amount
    num=amount//value
    amount=round(amount-value*num,2)
    print("From", amount,"-->",end=" ")
    return(num)

amount=float(input("Enter Amount: "))

for val in (50,20,10,5,2,1,0.25,0.1,0.05,0.01):
    print("$",val, int(Qty(val)))