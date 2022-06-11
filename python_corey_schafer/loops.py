nums = [1, 2, 3, 4, 5]

for n in nums:
    print(n)

for i in nums:
    if i == 4:
        print("found it")
        break
    print(i)

for i in nums:
    if i == 4:
        print("found it")
        continue
    print(i)

# now we can nest loops as usual4

# range to loop a number of times
    for i in range(10):
        print(i) # will print 0 to 10
    
    for i in range(1, 11):
        print(i) # will print 1 to 10 (11 excluded)
    
# while loop
    x = 0
while x < 10 :
    print(x)
    x += 1



