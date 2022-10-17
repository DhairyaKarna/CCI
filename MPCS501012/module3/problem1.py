#Fahrenheit will be in string as it is input
Fahrenheit = input("Enter a temperature in Fahrenheit: ")

#Start of try block
try:
    #Converting to int, Only Line that could throw errors
    Fahrenheit_int  = int(Fahrenheit)
    
#Start of Except block looking for Value Error (Prevents Float and String)
except ValueError:
    print("Please enter a positive, whole number numeric temperature.")

else:
    Celsius = (5/9)*(Fahrenheit_int-32)
    #Rounding the float 
    Celsius_round = round(Celsius,2)
    print(f"The temperature is  {Celsius_round} in Celsius. ")