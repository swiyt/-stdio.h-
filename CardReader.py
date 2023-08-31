#10%
def get10(price):
    tip = price * 0.10
    f_price = price + tip
    return (f_price)

#15%
def get15(price):
    tip = price * 0.15
    f_price =  price + tip
    return (f_price)

#20%
def get20(price):
    tip = price * 0.20
    f_price = price + tip
    return (f_price)

#daily sales exclude tips
daily_sales = 0
daily_tip = 0

#main
while True:
    price = float(input("Enter meal price: "))
    while price == 0:
        print("Invalid price. ")
        price = float(input("Enter meal price: "))

    print("Select tip amount: \n 1. 10% (Okay) \n 2. 15% (Good) \n 3. 20% (Excellent) \n 4. Skip (Broke) \n 5. Custom ")
    tip_choice = float(input("Choice: "))

    #improve this on exception
    if tip_choice == 1:
        print("Total price is ", get10(price), "\n")
        daily_sales += price
    elif tip_choice == 2:
        print("Total price is ", get15(price), "\n")
        daily_sales += price
    elif tip_choice == 3:
        print("Total price is ", get20(price), "\n")
        daily_sales += price
    elif tip_choice == 4:
        print("Total price is ", price, "\n")
        daily_sales += price
    elif tip_choice == 5:
        cus_tip = float(input("Enter tip: "))
        price += cus_tip
        print("Total price is ", price, "\n ")
        daily_sales += price
    else:
        continue

    c = input("Continue another payment? (y/n) ")
    if c == "y":
        continue
    else:
        print("Closed. \n Summary of daily sales: ", daily_sales)
        quit()
