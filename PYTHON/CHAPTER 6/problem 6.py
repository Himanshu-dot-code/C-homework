# Write a program to calculate the grade of a student from his marks from the
# following scheme:
# 90 – 100 => Ex
# 80 – 90 => A
# 70 – 80 => B
# 60 – 70 =>C
# 50 – 60 => D
# <50 => F

def grade(marks):
    if marks >= 90 and marks <= 100:
        return "Ex"
    elif marks >= 80 and marks < 90:
        return "A"
    elif marks >= 70 and marks <80:
        return "B"
    elif marks >= 60 and marks < 70:
        return "C"
    elif marks >= 50 and marks < 60:
        return "D"
    elif marks < 50:
        return "F"
    else:
        return "invalid input"
    
marks = int(input("Enter your marks:"))

print(grade(marks))
