#Import the process File function from problem 4
import string
from problem4 import process_file

#Checking to see if file is present
try:
    #Open the file
    common_words = open('./common_words.txt','r')
    speech = open('./speech.txt','r', encoding="utf8")

# If any Input Output Error
except IOError:
    print("File Doesn't Exist.")

else:
    #Calling process file from problem4
    (proccessedFile, output_sorted_list, lines) = process_file(common_words)

    #Creating a dictionary
    frequency ={}

    #Reading every line in speech
    for line in speech:

        #Creating a clean list
        clean_list = line.split()
        clean_list_lower = []

        #converting to lower case
        for item in clean_list:
            #Removing Punctuations
            item = item.translate(str.maketrans('','',string.punctuation))
            
            #no need to lower case I
            if item!="I":
                clean_list_lower.append(item.lower())
        
        #Adding values in dictionary
        for item in clean_list_lower:
            if item in frequency:
                if(item not in output_sorted_list):
                    frequency[item] += 1
            else:
                if(item not in output_sorted_list):
                    frequency[item] = 1

#sorting dictionary in reverse order
sortedFrequency = dict(sorted(frequency.items(), key=lambda x: x[1],reverse=True))

#Getting top 20 from the dictionary
top20SortedFrequency = list(sortedFrequency.items())[:20]

#Printing the list
for key,value in top20SortedFrequency:
    print(key,"-",value)