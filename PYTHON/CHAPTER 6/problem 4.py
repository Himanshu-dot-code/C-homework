# Write a program to find whether a given username contains less than 10
# characters or not.

def user_name(username):
    if len(username) < 10:
        return "username contains less than 10 characters"

    elif len(username) == 10:
        return "username contains 10 characters"
    else :
        return "username contains more than 10 characters"
    

    
user = input("Enter your username:")
print(user_name(user))

   
