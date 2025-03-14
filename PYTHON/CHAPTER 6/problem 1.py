# Write a program to find the greatest of four numbers entered by the user.

a = int(input("enter 1st number : "))
b = int(input("enter 2nd   number : "))
c = int(input("enter 3rd number : "))
d = int(input("enter 4th number : "))

if (a >b and a > c and a > d ) :

    print("1st is greatest number ")

elif (b > a and b > c and b > d) :

    print("second is greatest number ")

elif (c > b and c> a and c > d) :

    print("third is greatest number ")

elif (d >  b and d > c and d > a) :

    print("fourth is greatest number ")

else :
    print("error")







