# strings
message = "hello world"  # doesnt need any data type or semicolon (fr quotes we need to pass "" or '' accordingly same as JS)
print(message)  # will print message 
print(len(message))  #length of the string
print(message[0])  # can access through index
print(message[0:5]) # ["starting point" : "ending point"]  (remember it excludes the last letter)
print(message[:5]) # same as [0:5]
print(message[6:])  # will take till end
# string funtions
print(message.lower()) # makes all lower
print(message.upper()) # makes all upper
print(message.count('hello')) # will pass number of count of hello in that string
print(message.count('l')) # will pass number of count of l in that string
print(message.find('world')) # will find the string and pass its index (if its not there thn it will print "-1")
message = message.replace('world' , 'universe')  #will replace world with universe
# concatination 
greeting = 'hello'
name = 'sunny'
message = greeting + ' ' + name  # will add up the strings 
# the above way is good but for longer texts it might get a bit confusing so we can use placeholder for that
message = '{}, {}. welcome!'.format(greeting, name) # will be replaced according to the placeholder and the serial (will print the exactly same as above) [also check string formatting]

# f string for 3.6 and above
message = f'{greeting}, {name}. welcome!'  # dont need to use format and all can write within the placeholder
message = f'{greeting}, {name.upper()}. welcome!'   # can use functions also inside the placeholder 

print(dir(name)) # this will show all the attriutes and methods can be used on name

print(help(str)) # will work only on the "str" string class(will print all)

print(help(str.lower)) # will give u idea about lower method
