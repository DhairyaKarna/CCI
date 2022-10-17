#Function to return filename, sorted list and number of lines
def process_file(filename):

    #Variable to send number of lines
    noOfLines = 0
    
    #List containing only cleaned lines
    clean_list = []

    for line in filename:
        
        #Removing white space
        clean_line = line.strip()

        #Appending into a list
        clean_list.append(clean_line)

        #Counting number of lines
        noOfLines+=1

    #Sorted List
    sortedList = sorted(clean_list)

    return filename, sortedList, noOfLines
    
def main():
    #Checking to see if file is present
    try:
        #Open the file
        common_words = open('C:/Users/dhair/Desktop/Data/DK/MPCS501012/module3/common_words.txt','r')

    # If any Input Output Error
    except IOError:
        print("File Doesn't Exist.")

    else:

        #Creating an output files 
        output = open("C:/Users/dhair/Desktop/Data/DK/MPCS501012/module3/output_common_words.txt",'w')

        #Calling the function process_file
        (proccessedFile, output_sorted_list, lines) = process_file(common_words)
        
        #Writing all Sorted Elements into Output file
        output.write("<<<<<<<<<<<<<<<<<<<<Sorted List Begin>>>>>>>>\n")
        for item in output_sorted_list:
            output.write(item)
            output.write("\n")
        output.write("<<<<<<<<<<<<<<<<<<<<Sorted List End>>>>>>>>>>\n")

        #Writing number of lines in orginal String to output file    
        output.write("Number of lines in original file: \n")

        string_lines = str(lines)
        output.write(string_lines)

if __name__ == "__main__":
    main()