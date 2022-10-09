#Problem 8
#Dhairya Karna

import random

# Randomly select an object for the computer's choice
computer_object = random.choice(["paper", "rock", "scissors"])

while True:
    user = input("Choose: ")
    if(user=="rock" or user=="paper" or user=="scissors"):
        if user==computer_object:
            print(f"The computer choose {computer_object}. Let's settle this.")
        elif user == "paper":
            if computer_object == "rock":
                print(f"The computer chose {computer_object}, you win!")
            else:
                print(f"Computer choose {computer_object}, the computer wins :(")
        elif user == "rock":
            if computer_object == "scissors":
                print(f"The computer chose {computer_object}, you win!")
            else:
                print(f"Computer choose {computer_object}, the computer wins :(")
        elif user == "scissors":
            if computer_object == "paper":
                print(f"The computer chose {computer_object}, you win!")
            else:
                print(f"Computer choose {computer_object}, the computer wins :(")

        play_again = input("Would you like to play again? (y/n): ")
        if play_again.lower() == "y":
            computer_object = random.choice(["paper", "rock", "scissors"])
        else:
            break
    else:
        print("You must choose paper, rock or scissors.")
        play_again = input("Would you like to play again? (y/n): ")
        if play_again.lower() == "y":
            computer_object = random.choice(["paper", "rock", "scissors"])
        else:
            break
            