# If the names of 2 friends are same; what will happen to the program in problem 6?
# the update function will keep updating and last update will be recorded

fav = {}
name = input("enter the name : ")
lang = input("enter the language : ")

fav.update({name : lang})

name = input("enter the name : ")
lang = input("enter the language : ")

fav.update({name : lang})
name = input("enter the name : ")
lang = input("enter the language : ")

fav.update({name : lang})
name = input("enter the name : ")
lang = input("enter the language : ")

fav.update({name : lang})

print(fav)