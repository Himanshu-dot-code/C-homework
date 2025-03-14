# A spam comment is defined as a text containing following keywords:
# “Make a lot of money”, “buy now”, “subscribe this”, “click this”. Write a program
# to detect these spams.

keywords = ["make a lot of money", "buy now", "subscribe this", "click this"]

def spam(comment):
    for keyword in keywords:
        if keyword in comment.lower():  # Convert comment to lowercase for case-insensitive matching
            return "spam"
    return "no spam"

comment = "make a lot of money "  # Extra space issue
mail = "urgent"

print(spam(comment.strip()))  # Stripping extra spaces
print(spam(mail))



