#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
using namespace std;
 
int main()
{
    // Take any string
    string s1 = "Geeks";
    // here we can use the string s1 as a string
    // s1[1] will give us "e"   (remember)
 
    // Copy three characters of s1 (starting
    // from position 1)
    string r = s1.substr(1, 3); // sub striings
 
    // prints the result
    cout << "String is: " << r;


    // FOR COUNTING ELEMENTS
    // array
    int arr[] = { 3, 2, 1, 3, 3, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of times 3 appears : "
         << count(arr, arr + n, 3);

    // vector
    vector<int> vect{ 3, 2, 1, 3, 3, 5, 3 };
    cout << "Number of times 3 appears : "
         << count(vect.begin(), vect.end(), 3);

    // string
    
        string str = "geeksforgeeks";
  
    cout << "Number of times 'e' appears : " 
         << count(str.begin(), str.end(), 'e'); //count in strings
  

 
    return 0;
}


// how to access a particular element in set
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
 
    set<int> s(arr, arr + n);
    set<int>::iterator itr   // this method is important
        = s.begin(); // s.begin() returns a pointer to first
                     // element in the set
    advance(itr, k - 1); // itr points to kth element in set // its basically using loop in a different method.. 
 
    cout << *itr << "\n";
 
    return 0;
}