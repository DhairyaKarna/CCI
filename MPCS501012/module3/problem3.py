#All alphabets in small order in a string
alphabets_small = "abcdefghijklmnopqrstuvwxyz"

#All alphabets in capital order in a string
alphabets_capital = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

#Function for shifting every char in message by "key"(12) numbers of characters
def caesar_encrypt(key, message):
    
    #list answer to hold the data of encryption, later converted to string
    ans = []
    
    #iterate over the message
    for i in message:
        
        #Check if character is not a space and is in alphabets small
        if i in alphabets_small and i.strip():
            ans.append(alphabets_small[(alphabets_small.index(i)+key)%26])
            
        #Check if character is not a space and is in alphabets capital
        elif i in alphabets_capital and i.strip():
            ans.append(alphabets_capital[(alphabets_capital.index(i)+key)%26])

        #Simply append the space
        else:
            ans.append(i)
    
    #Converting list to string by adding no space between every data on list
    output = "".join(ans)
    return output

#Function to decrypt every ceaser_encrypt output
def caesar_decrypt(key, message):
    
    #list answer to hold the data of decryption, later converted to string
    ans = []
    
    #iterate over the message
    for i in message:
        
        #Check if character is not a space and is in alphabets small
        if i in alphabets_small and i.strip():
            ans.append(alphabets_small[(alphabets_small.index(i)-key)%26])
        
        #Check if character is not a space and is in alphabets capital
        elif i in alphabets_capital and i.strip():
            ans.append(alphabets_capital[(alphabets_capital.index(i)-key)%26])

        #Simply append the space
        else:
            ans.append(i)
    
    #Converting list to string by adding no space between every data on list
    output = "".join(ans)
    return output

def main():
    #Input
    message = "Experience is the teacher of all things."
    key = 12

    print("Original String: ")
    print(message)

    #Encryption
    encryptedString  = caesar_encrypt(key,message)
    print("Encrypted String: ")
    print(encryptedString)

    #Decryption
    decryptedString = caesar_decrypt(key,encryptedString)
    print("Decrypted String: ")
    print(decryptedString)

if __name__ == "__main__":
    main()