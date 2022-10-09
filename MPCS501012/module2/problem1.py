Fahrenheit = input("Enter a temperature in Fahrenheit: ")

if Fahrenheit.isdigit():
    Fahrenheit_int  = int(Fahrenheit)
    Celsius = (5/9)*(Fahrenheit_int-32)
    Celsius_round = round(Celsius,2)
    print(f"The temperature is  {Celsius_round} in Celsius. ")
else:
    print("Please enter a positive, whole number numeric temperature.")