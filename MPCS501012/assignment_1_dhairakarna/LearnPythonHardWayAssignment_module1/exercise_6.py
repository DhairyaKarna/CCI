#creating a string using a variable in int format
types_of_people = 10
x = f"There are {types_of_people} types of people."

#creating a string using variables in string format
binary = "binary"
do_not = "don't"
y = f"Those who know {binary} and those who {do_not}."

#printing the two variables
print(x)
print(y)

#using variables inline with print function
print(f"I said: {x}")
print(f"I also said: '{y}'")

#passing the value of variable into another using format function
hilarious = False
joke_evaluation = "Isn't that joke so funny?! {}"

print(joke_evaluation.format(hilarious))

#string concatenation
w = "This is the left side of..."
e = "a string with a right side."

print(w + e)