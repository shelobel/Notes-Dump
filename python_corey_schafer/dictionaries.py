# dictionary 
# it is a data type which contains a key word and its values it can be anything like string, int, double, float.. anything  and key values can be anything like "string" or int

student = {'name' : "john", 'age' : 25, 'course' : ["math", "compsci"]} # here this name key has "john" , age key has int 25 and course key has list..
print(student['name']) # this will print the key words value (if we pass wrong key word that will throw an error)
student['phone'] = '98745' # will add the 'phone' key and its value
student['name'] = 'sunny' # will update the value
print(student.get('name')) # will work the same way
print(student.get('random_key', 'not found')) # this will not throw any error but will print out the value "none" if we dont pass the argument "not found"
print(student) # will print the entire dictionary

student.update({'name' : "sunny", 'age' : 75, 'phone': '54875'}) # will add elements and also will update the dictionary

del student['age']  # will delete the 'age' key and its value

age = student.pop('age') # will popped off the 'age' key and its value and will return that too in the pop variable
print(len(student))  # length ( will print 3 as 3 keys exist)
print(student.keys()) # will print the keys
print(student.values())  # will print the values
print(student.items())  # will print the keys and  values

# loop through
for key in student:
    print(key) # will loop through and will the key values only cz we have set it to student only 
for key, value in student.items():
    print(key, value) # now this will print key and value both as we have set it to student.items()
