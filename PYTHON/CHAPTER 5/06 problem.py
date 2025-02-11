# Create an empty dictionary. Allow 4 friends to enter their favorite language as
# value and use key as their names. Assume that the names are unique.

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