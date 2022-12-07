#include <bits/stdc++.h>   // one header file to include all the header files ... dont need to add them separately... but in interview and all... dont do this as this bits/stdc++ will take a lot of time to import that files thats not good for the time complexity
using namespace std;
namespace raj {
    int val = 50;
    int getVal(){
        return val * 10;
    }
}  // what is namespace ? its like a collection of standard functions in c++..here we have defined our own namespace called raj.. for accessing that we need to use raj::val or raj::getVal()   .. ("::" scope resolution operator)

int main() {
    double val = 10;
    cout << val << endl; // prints 10
    cout << raj::val << endl;  // prints 50
    cout << raj::getVal() << endl;  // prints 500
    return 0;
}

// as we know that we can create a custom data type using struct.. but not only a data type but we can create a constructor same as C++ class constructor.. (constructor in C type )

struct node {
    string name;
    int age;
    char gender;
    
    // constructor (here we have to mention the data types as well)
    node(string n, char g, int a) {
        name = n;
        gender = g;
        age = a;
    }
};

// int main2(struct node) {
        // wrong way to do that ..
    // node rj;
    // rj.name = "striver";  // and also we cant do this in C
    // rj.age = 21;
    // rj.gender = '1';

    node *rj = new node("striver", '1', 21);  // allocates the space at heap and creates a node through constructor  (need to be a pointer)
    node rj = node("striver", '1', 21);  // allocates normally

//     return 0;
    
// }

// *CONTAINERS*

// ARRAY

// we usually declare like 
// int arr[100]; .. its totally cool.. but
array<int, 100> arr1;  // another way of doing that
// if we declare like this in a function then its values are garbage.. but if we declare it globally that will consist values all 0;
// and for 
array<int, 3> arr2 = {1, 2};  // this means that 1st two elements are 1 and 2 others are 0;
// for 
array<int, 3> arr3 = {1}; // 1st one is 1 ...others are 0... thats why for {0} all becomes 0

// NOW FUNCTIONS
void main3() {
    array<int, 5> Arr;
Arr.fill(10);  //-> this will fill the entire array will 10 {or the number you want to allocate} 
// fill(arr, arr +5, 10); // -> this will fill the entire array will 10 {or the number you want to allocate} (this filling may or may not work for normal array declaration)
Arr.at(0); // will give you element at any index..same as vector...





// FEW BASIC INTERATORS.. (works for all the data types)
    // begin(), end(), rbegin(), rend();
// as we know that array is contigious allocation of memory... so the begin() fn gives us the address of the first one.. it basically returns a pointer value which exactly points to the first element[index 0]... the rbegin() is reverse of begin it exactly points the end of the array (or any data type)... in case of end().. it points to the next element of the last element (remember its very very important.. it doesnt give u the address of the last element but the element after the last one[may be garbage in max cases]) .. and rend(is basically reverse of end() so it basically gives the element before the 1st element.. (like index -1)... )

// implimentaion...(check the syntax)

array<int, 5> arr ={1, 2, 3, 4, 5};

for(auto it = arr.begin(); it!=arr.end(); it++){  // correct syntax (this is a normal loop in which we have used "auto" data type)
    cout << *it << " ";
}
for(auto it = arr.rbegin(); it!=arr.rend(); it++){   // will this work ??? 
    cout << *it << " "; 
    }                            // yes that will work we dont need to do "it--"" cz... there rbegin is in use.. so that has a natural direction towards backward so "it++" will take that to backward not forward so that will print the entire array in reverse order

for(auto it = arr.end() - 1; it>=arr.begin(); it--){
    cout << *it << " ";   // thats the case of a normal direction reverse order..
}
// for each loop... this will take each element of the array we dont need to derefer it... 

//here it is not a pointer
for(auto it: arr){    // this is the C++ 14 type loop
    cout << it << " ";   // check a qsn ... how does it reaches the end condition..
}

// FEW MORE  (only works for stl kind of array declartion)

//size..
cout << arr.size(); // as the array declaration is in stl type so here .size() will work if it was of normal declaration then .length() would have worked
// front element
cout << arr.front();
//back
cout << arr.back();
 // no the official website for documentaion cplusplus.com
}

// *note the max size of 


// VECTOR

// segmentation fault if you push_back 10^7 times 

void main4() {
vector<int> vec;  // -> blank vector of size 0
cout << vec.size();
vec.push_back(1);
vec.push_back(2);
cout << vec.size(); // -> size 2
vec.pop_back(); // will pop out the last element 
cout << vec.size(); // -> size 1

vec.clear(); // -> erase all the element at once then vector becomes empty

vector<int> vec(4, 0);  // will create {0, 0, 0, 0} // remeber this syntax

// after this we can also push_back and all that ..

// now what we need to do if you want to copy the entire 
vector<int> vec1(vec.begin(), vec.end());  //(here we can give the count of copying stuff) this will copy that entire vector till vec.end()-1 [remember that it doesnt include the last element... its basically '['  , ')'..... '[' -> means including ')' -> means excluding  ]
vector<int> vec1(vec);  // this copies the entire vec


//now ..
vector<int> raj;
raj.push_back(4); // raj.emplace_back(1); // emplace_back and push_back ares identical but emplace_back works faster than push_back..

raj.push_back(4);
raj.push_back(2);
raj.push_back(1);
 /// {4 , 4 , 2 , 1}

// we want to include only only 4 4 2..
vector<int> raj1(raj.begin(), raj.begin() + 3); // as that begin()+3 will be excluded)

// 2D VECTOR 

vector<vector<int>> vect;  // normal way of assigning a 2d vector

// let .. 
vector<int> raj1;
raj1.push_back(1);
raj1.push_back(2);

vector<int> raj2;
raj2.push_back(10);
raj2.push_back(20);

vector<int> raj3;
raj3.push_back(19);
raj3.push_back(24);
raj3.push_back(27);

vect.push_back(raj1);
vect.push_back(raj2);
vect.push_back(raj3);  // we can create 2d vectors in this way pushing an entire vector inside a vector.. the most important thing is as its a vector so the columns and rows are dynamic .. as raj1 and raj2 has 2 elements but raj3 has 3 elements so here the columns are not of equal size and we can push_back or pop_back anytime... 
vect[2][2];  // is accessable but 
vect[1][2];  // is not...as nothing is there..


// now for iteration ..
for(auto it: vect) {    // here at this line it takes on vect so it points to vector<int>... and going forward it points raj1. raj2..raj3 ..etc
    for(auto a: it) {  // here "a" points to the elements of the vector as 'it' here is a vector for each previous loop
        cout << a << " "; // prints element
    }

    
}
// REMEMBER WE CAN ACCESS EACH ROW OF THAT 2D VECTOR BY JUST GIVING ONE INDEX ..LIKE VECT[1]  -> WILL GIVE ME THE 2ND ROW (do push_back and all)


// doing a 10x20 2d vector and all 0
vector<vector<int>> vec(10, vector<int> (20,0)); // 1st argument of vec is the number of columns ...2nd one is the element thats gonna be inside it..so we are putting 10 vectors of 20 size all are 0.. 

// array of vectors 
vector<int> arr[10];

// we have 10 vectors basically in an array.. contigious memory..

// 3D VECTOR 
// 10 x 20 x 30
vector<vector<vector<int>>> vec (10, vector<vector<int>> (20, vector<int> (30,0))); // understand it well
// just taking the 2nd argument as a 2d array...simple
}

