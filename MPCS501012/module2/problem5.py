def is_divisible_by_11(x):
    numberOfDigits = len(x)

    SumAtOddPlaces = 0
    SumAtEvenPlaces = 0

    for i in range(0,numberOfDigits):
        if(i%2==0):
            SumAtOddPlaces += ((int)(x[i]))
        else:
            SumAtEvenPlaces += ((int)(x[i]))

    Difference = SumAtOddPlaces-SumAtEvenPlaces
    return (Difference % 11 == 0)

number = input("Enter the number: ")
if is_divisible_by_11(number):
    print("This is divisible by 11.")
else:
    print("This is not divisible by 11.")