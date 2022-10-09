def pyramid(height):
    for i in range(1,height+1):
        print("*"*i)

height = input("Enter the height of the pyramid: ")
height_int = int(height)

pyramid(height_int)