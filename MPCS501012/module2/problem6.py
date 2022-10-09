def is_palindrome(s):
    length = len(s)

    for i in range(0,int(length/2)):
        if(s[i] != s[length-1-i]):
            return False
    return True

word = input("Enter the word: ")

if(is_palindrome(word)):
    print("This is a palindrome.")
else:
    print("This is not a palindrome.")
