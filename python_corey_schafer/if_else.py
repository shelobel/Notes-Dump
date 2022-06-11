# conditional statements

# so we use normal comparisons test same as other languages..the syntax is a bit different 
# for && -> and
# for || -> or
# for ! -> not

# all comparsion operators are same but there is a another operator called "is"

a = [1, 2, 3, 4]
b = [1, 2, 3, 4]
c = a

print(id(a)) # will print the id 
print(id(b))
print(id(c)) # same as a

print(a == b) # will be true (as its "==" so it only checks the values nothing else)
print(a is b) # will be false as the memory location of a and b both are different 
print(a is c) # true as same location and id

language = "admin"
flag = True

if language == "admin" and flag:  # same way we can use or & not
    print("successful")
elif flag:   # in case of python we dont have switch statements so we need to use elif again and again
    print("only flag")
else:
    print("nil")
