score = input("Enter a score: ")

if score.isdigit():
    score_int = int(score)
    if score_int>=90:
        print("You received an A")
    elif score_int>=80:
        print("You received a B")
    elif score_int>=70:
        print("You received a C")
    elif score_int>=60:
        print("You received an D")
    else:
        print("You received an F")
else:
    print("That is not valid input.")