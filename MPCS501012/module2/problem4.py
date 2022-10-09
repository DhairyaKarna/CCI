def max_of_three(a,b,c):  
    max=a
    if(a>=b):
        if(a<c):
            max=c
    else:
        if(b>=c):
            max=b
        else:
            max=c
    return max

a, b, c = input("Enter the three numbers: ").split()
max = max_of_three(a, b, c)
print(f"The maximum number is {max}")

