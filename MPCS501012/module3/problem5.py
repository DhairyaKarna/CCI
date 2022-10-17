#Approach: Decrypt the first word of message to keys starting from 0
#If any one of the keys give a decryption that matches any item of sorted list
#Then the key is determined and the message can be deciphered


#Importing problem3 to use the function decrypt message
from problem3  import *

#Using sorted list in problem4 to find the decrypted message to find the key
from problem4 import *

#Message to be deciphered
messageToDecrypt = "mpwtpgp jzf nly lyo jzf lcp slwqhlj espcp"

#Checking to see if file is present
try:
    #Open the file
    common_words = open('./common_words.txt','r')

# If any Input Output Error
except IOError:
    print("File Doesn't Exist.")

else:
    #Calling process file from problem4
    (proccessedFile, output_sorted_list, lines) = process_file(common_words)

    firstWordMessage = messageToDecrypt.split()[0]


    for key in range(26):
        decryptedFirstWord = caesar_decrypt(key,firstWordMessage)
        if decryptedFirstWord in output_sorted_list:
            break    

    decryptedMessage = caesar_decrypt(key,messageToDecrypt)

    print("The key is:", key)
    print("The decrypted message is:", decryptedMessage)