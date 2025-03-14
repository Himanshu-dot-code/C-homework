# Write a program to find out whether a student has passed or failed if it requires a
# total of 40% and at  least 33% in each subject to pass. Assume 3 subjects and
# take marks as an input from the user.

science = int(input("enter the marks "))
english = int(input("enter the marks "))
maths = int(input("enter the marks "))

percentage = (science + maths + english)/3.0

if (percentage > 40 and science > 33 and maths > 33 and english > 33) :
    print("you passed")

else :
    print("u failed")
