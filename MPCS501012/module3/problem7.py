#Cenetered Average with Iteration
def centered_average_with_iteration(numbers):
    
    count = 0
    sum = 0
    
    #Calculate sum and count using loop
    for i in range(1,len(numbers)-1):
        sum += numbers[i]
        count +=1

    #Calculating average and rounding the number
    average = sum/count
    average = round(average,2)

    return average

#Calculating centered average without iteration
def centered_average(numbers): 
    
    #Using inbuilt list functions to calcuate the average and rounding off
    n = len(numbers)-1
    centeredList = numbers[1:n]
    average = sum(centeredList)/len(centeredList)
    average = round(average,2)

    return average


#Input a list of number
list = [234,123,123,5,125,65,34]

#Removing duplicates using set
numbers = set(list)

#Sorting
numbers = sorted(numbers)

#Calling iteration function
centeredAverageIteration = centered_average_with_iteration(numbers)
print("Centered Average using Iteration:",centeredAverageIteration)

#Calling non iterative function
ceneteredAverage = centered_average(numbers)
print("Centered Average without Iteration:",ceneteredAverage)
