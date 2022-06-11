#list
course = ["history", "physics", "math" , "cs"]
print(course) # will print the entire list
print(len(course)) # will print the lenght of the entire list
print(course[0]) # will print the 0th element of the list
print(course[-1]) # will print the last item(as it will behave like a circular array)   remember -1 is always the last item
print(course[0:2]) # will print 0 and 1th element (2 excluded)
print(course[:2])  # starts from the begining
print(course[2:]) # goes till the last

# adding elements
course.append("art") # will add at the last
course.insert(0, "art2")  # will at the index

# adding elements of other lists into a list
course2 = ["art3" , "geo"]

course.insert(0, course2) # this will add the entire list at the beginning(remember this will add the entire list the frist item of the course list would be course2 list itself)
course.append(course2) # same for append but at the last ofc
course.extend(course2) # her it will work properly will only add the lists item not the entire list but at the last ofc
course.remove("maths") # will remove maths
popped = course.pop()  # will pop out the last element and aslo returns the element

course.reverse()  # will reverse the items
course.sort()  # will sort them in alphabatical order
course.sort(reverse=True)  # will sort in reverse order

sorted_course = sorted(course)  # will sort the list and will store it into sorted_course will not diretly change the list course 
nums = [1, 5, 2, 4, 3]
print(max(nums))  # will the max element
print(min(nums))  # will the min element
print(sum(nums)) # will print the sum of all
print(course.index('math')) # will print the index of math (for any element which is not in the list will throw an error)
print("math" in course)  # will print true
print("abc" in course)  # will print false

# for loop
for items in course:
    print(items)
    # this will print the entire list and newline will be added automatically after each item its default behaviour
for index, courses in enumerate(course):   # here what enumerate does is it will get the value of the items and also the value of the index
    print(index, courses)  # so we created 2 variables in which they will be stored and will be printed later

for index, courses in enumerate(course, start=1):
    print(index, course) # this will make index from 1

# converting list to string & vica versa

course_str = ' - '.join(course) # this will join all the elements of the list and will join each element through ' - ' 
print(course_str)
# will form "history - physics - maths - cs"


# now vica-versa
new_list = course_str.split(' - ')
# this will split the string according to the ' - ' in between the string.. will be the same as the previous list
print(new_list)

#tuple 

# tuple and list are the same but tuple is unmutable.. and list is mutable
# what does it mean ??
# it means that in tuple we can't change or modify elements at a given index or can add or remove elements.. in case of list we could
tuple_1 = ("history", "physics", "math", "cs")  # same likelist but "()" bracketts
tuple_2 = tuple_1

print(tuple_1)
print(tuple_2)

tuple_1[0] # we can access through the index but can not change the value
tuple_1 = "absc" # will throw an error


# sets
# unorderd and no duplicates
set_course = {"history", "physics", "math", "cs"}
print(set_course) # will print the entire set but the order will be different,, can be changed with each refresh
# in case of set it doesnt store same elements so if we add another "math" it will still not print it in the time of execution
# set is majorly used to find the elements.. if it is in that set or not
print("math" in set_course) # will print out true..( same thing work in tuple and list too but set is optimised for it)

# set actually behaves like set of real life
set_course = {"history", "physics", "math", "cs"}
set_course2 = {"history", "design", "math", "ec"}

print(set_course.intersection(set_course2))  # this will print the elements which are there in both set_course and set_course2
print(set_course.difference(set_course2)) # prints elements which are in set_course but not ini set_course2
print(set_course.union(set_course2)) # same as union(will add up all the elements of the set)

# empty list
empty_list = []
empty_list = list()

# empty tuple
empty_tuple = ()
empty_tuple = tuple()

# empty set
empty_set = {}  # but this will create an empty dictionary not set 
empty_set = set()  # will create and actual empty set













