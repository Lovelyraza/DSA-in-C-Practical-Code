for i in range(7):
    if(i==4):
        break
    print(" 5 X ",i," = ",5*i)
while True:
    num = int(input("Enter a positive number: "))

    if num > 0:
        print("Valid input:", num)
        break  # Jab sahi value mil jaye, loop break ho jaye
    else:
        print("Invalid input! Please enter a positive number.")
# while True:
#     num =int(input("Enter a positive number: "))
#     if num>0:
#         print("The number is poistive ")
#         break
#     else:
#         print("Enter the valid numberr ")

