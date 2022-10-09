password = input("Enter a password: ")
numberOfLower = 0
numberOfUpper = 0
numberOfDigits= 0
numberOfSpecials = 0
totalValidCharacters = 0

if len(password)>=12:
    for character in password:
        if(character.isdigit()):
            numberOfDigits+=1
        if(character.islower()):
            numberOfLower+=1
        if(character.isupper()):
            numberOfUpper+=1
        if(character=='!' or character=='@' or character=='#' or character=='$' or character=='%'):
            numberOfSpecials+=1

if(numberOfDigits>=1 and numberOfLower>=1 and numberOfSpecials>=1 and numberOfUpper>=1):
    totalValidCharacters = numberOfDigits + numberOfLower + numberOfSpecials + numberOfUpper
if(totalValidCharacters==len(password)):
    print("This is a strong password :)")
else:
    print("This is not a strong password :(")
