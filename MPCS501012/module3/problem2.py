#function to check argument is a number
def is_number(astring):
    #using isdigit to check whether argument is int
    if(astring.isdigit()):
        return True
    else:
        return False

#Taking input
argumentForFunction = input("Enter the argument for function is_number: ")

#using bool value in if-else
if(is_number(argumentForFunction)):
    print("Input is a number.")
else:
    print("Input is not a number.")