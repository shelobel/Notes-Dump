# function
# Number of days per month. First value placeholder for indexing purposes.
month_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


def is_leap(year):
    """Return True for leap years, False for non-leap years."""

    return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)


def days_in_month(year, month):
    """Return number of days in that month in that year."""

    # year 2017
    # month 2
    if not 1 <= month <= 12:
        return 'Invalid Month'

    if month == 2 and is_leap(year):
        return 29

    return month_days[month]

print(days_in_month(2017, 2))

# passsing arguments
def function(dist , name , abc):  # just pass the variable names nth else is required for arguments
    pass # if we want to keep a function wihtout it defination thn just right pass it will not throw any error and we can add the defintion later

# default arguments
def function1(dist , name = "john" , abc = 25): 
    print("hey" + name + "you are " + abc + "years old")
    return abc # will return the value same as other languages

# we can pass the value of arguments and also can use deafult arguments same as c++ of any other languages
# 

# ALSO CHECK SYNTAX AND FUNCTIONIALITY OF (*arg1, **arg2) KIND OF ARGUMENTS IN ANY FUNCTION ( FOR LIST AND TUPLE SPECIFICLY)

