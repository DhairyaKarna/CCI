#Reading the points file
points = open("./points.txt",'r')

#To store a list of cordinates
cordinates = []

#iterating over every line
for line in points:

    #Splitting
    clean_line = line.split(',')
    
    #Saving cordinates from each line
    cordinate = []
    
    #Taking float values into list
    for item in clean_line:
        if "." in item:
            point = float(item)
            cordinate.append(point)
    
    cordinates.append(cordinate)

#Function to determine the distace between two points
def distance(list1, list2):
    squaredSum = pow((list2[0]-list1[0]),2) + pow((list2[1]-list1[1]),2) + pow((list2[2]-list1[2]),2)
    distanceBetweenPoints = pow(squaredSum,0.5)
    return distanceBetweenPoints

#To Store distance of every point from origin
distancesFromOrigin = []

#To calculate distance from origin of every point
for point in cordinates:
    distanceFromOrigin = distance(point,[0,0,0])
    distancesFromOrigin.append(distanceFromOrigin)

#Index of poitn with minimum distacne from origin
minDistanceFromOrigin = distancesFromOrigin.index(min(distancesFromOrigin)) + 1

print("Minimum distance from origin is point ",minDistanceFromOrigin,". At a distance of ",min(distancesFromOrigin))

#Variables to store the minimum distance and points
minimumDistanceBetweenPoints = 1000
minPoint1 = 0
minPoint2 = 0

#Finding distance between every point and saving the minimum
for i in range(len(cordinates)):
    for j in range(i+1,len(cordinates)):
        tentativeDistance = distance(cordinates[i],cordinates[j])
        if minimumDistanceBetweenPoints>=tentativeDistance:
            minimumDistanceBetweenPoints = tentativeDistance
            minPoint1 = i
            minPoint2 = j

print("Minimun distance is between points:",minPoint1+1,"and",minPoint2+1,"and the distance is",minimumDistanceBetweenPoints)