#include<bits/stdc++.h>
using namespace std;
int main(){

    // another container
    // bitset (ii is of int data type)
    // int data type takes around 16bits
    // char  takes 8 bits..
    bitset<10> bt;  // it takes only 1 bit.. creates an array kind of structure and only stores 1 or 0.. so nrmally takes 1 bit
    // it cuts out the space complexity very well as an array of int or char will take 8bit or 16 bit for storing an element of an array.. so it takes very very less space compared to that..
    // this bitset generally use in segment tree to store value of node..

    bitset<5> bt;
    cin >> bt;  // can store 10110

    // functions...

    // all
    cout<< bt.all();  // checks wheater all the positions are filled with 1 or not..(all is set or not)
    // true for  11111
    // false for 10111

    //any
    cout << bt.any(); // this will print true if any of the element is 1

    //count
    cout << bt.count();  // prints the number of 1's

    //flip
    cout << bt.flip(); // flips the entire bitset
    cout << bt.flip(2);  // flips the value at index 2
    // none
    cout << bt.none();  //prints true if all the elements are 0
    // set
    bt.set();  // all the elements will be set to 1
    bt.set(2); // 2nd index will be seted to 1
    bt.set(2, 0); // will set index 2 as 0
    // reset
    bt.reset(); // will set all the elements as 0
    bt.reset(2); // wil set index 2 as 0
    // size
    cout << bt.size(); // will print 5 (gives the size)
    //test
    cout << bt.test(2);   // will check if index 2 has value 1 or not..

return 0;
}


void main2() {

    /// ALGORITHMS
    // sorting...
    int n;
    cin >> n;
    int arr[n];
    for(auto it: arr){
        cin >> it;

    }
    sort(arr, arr+n);  // this will sort the whole array
    // this sort takes a time of O(nlogn)
    // this sorting algo uses 3 kind of sorts in backend...if in an interview they ask to write its algo then its preferable to use merge sort

    vector<int> vec(5, 0);
    for(auto v: vec) {
        cin >> v;
    }
    sort(vec.begin(), vec.end());  // will sort the whole vector // -> [)

    /// vec -> {1, 6, 2, 7, 4};
    // sort from index 1 to 3..
    vector<int>vec = {1, 6, 2, 7, 4};
    sort(vec.begin()+1, vec.begin()+4);
    // for array.. 
    // sort(arr+1, arr+4); 

    // reverse...
    reverse(arr, arr+n);  // for array (will reverse that ...)
    reverse(vec.begin(), vec.end());  // for vector

    // algo for finding the max element of an array from i to j
    int i, j;
    int arr[n];
    int maxi = INT_MIN;
    for(int k =i; k<j; k++) {
        if(arr[k] > maxi) {
            maxi =  arr[k];
        }
    }  // this is the implimentation for finding max term..
    // in STL
    int el = *max_element(arr, arr+n);
    int el = *min_element(arr, arr+n);

    int el = *max_element(vec.begin(), vec.end());
    int el = *min_element(vec.begin(), vec.end());
    // remember this max_element giver the iterator of maximum so we have to dereference it to get the value..

    //sum of a particular range like from i to j

    int sum = 0;
    for(int k = i; k<=j; k++) {
        sum+=arr[k];
    }
    // in STL
    int sum =  accumulate(arr, arr+n, 0); // here 0 is the initial sum.. the elements will be added to 0..
    int sum = accumulate(vec.begin(), vec.end(), 0);

    // algo for counting any element in an array..
    // let count the number of 1's in the array -> {1, 6, 7, 1, 2, 1, 3};
    int ct=0, x=1;
    for(int k=0; k<7; k++) {
        if(arr[k]==x) {
            ct++;
        }
    }
    cout << ct;  // TC O(n)
    // in STL...
    int ct = count(arr, arr+n, 1);  // will give u the count of 1 in the array TC is O(n)
    int ct = count(vec.begin(), vec.end(), 1);

    // arr[] = {1, 6, 7, 1, 2, 1, 3};
    // give the index of the first 2
    int ind = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == 2){
            ind = i;
            break;
        }
    }
    cout << ind;
    // in STL...
    auto it = find(arr, arr+n, 2); // returns the iterator of the element so what we get we basically gets the address we have to subtract that from the base or the begin iterator to get the index... subtract (it - the begin iterator) as we can understand that dereferencing of that will give u the element itself not the index
    cout << it - arr; // for array
    // cout << it - vec.begin(); for vector

    // if the element is not there thn that will return the end() or the element after the end..
    auto it = find(vec.begin(), vec.end(), 12); // will give bck vec.end()

    // BINARY SEARCH...
    
    // just givees true or false as a value..works only on SORTED array or vector and TC is O(logn)
    bool res = binary_search(arr, arr+n, 4);
    bool res = binary_search(vec.begin(), vec.end(), 4);
    
    // LOWER BOUND FUNCTION..
    // REMEMBER UPPER BOUND AND LOWER BOUND IMPLIMENTS ON BINARY SEARCH SO ALL THE ARRYS AND VECTORS MUST BE IN SORTED ORDER AND THE TC IS O(logN)
    //   lower bound function gives you the iterator of the 1st element which is not lesser than the element)
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
    // x = 10 // gives iterator of first 10(as 10 is there)
    // x = 6 // gives u iterator of first 7(as 6 is not there so 7 is the only optn)
    // x = 13 // will give u iterator of the end() (there is nothing that is less than 13)

    auto it = lower_bound(arr, arr+n, x);
    int ind = it - arr; // for getting the index as it returs the iterator
    auto it1 = lower_bound(vec.begin(), vec.end(), x);
    int ind = it1 - vec.begin();


    // UPPER BOUND FUNCTION
    //this returns the iterator of the first element which is greater the the element... 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
    // x =7 // will point to 8
    // x =6 // will point to 7
    // x =15 // wil point to the end...
    auto it = upper_bound(arr, arr+n, x);
    int ind = it - arr; // for getting the index as it returs the iterator
    auto it1 = upper_bound(vec.begin(), vec.end(), x);
    int ind = it1 - vec.begin();

    // NEXT PERMUTATION ALGO...(study that from striver channel also for knowing the backend)

    // let assume we have a string s = "abc";
    // now in how many ways we can arrange that abc in dictionary order..
    // abc...1
    // acb ..2
    // bac ..3
    // bca ..4
    // cab ..5
    // cba ..6

    // the algo for getting this is next permutaion...  (in interview use the recursive way not the STL)
    string s = "abc";
    bool res = next_permutation(s.begin(), s.end());  // this will make s the nxt permutation and this will return a boolean value of "true".. next means 2 after 1.. thn 3 after 2.. 5 after 4 etc etc
    
    // if the string is "cba" ... this will not change the string and will return false..
    // Q1. how can we print all the permutations if any of the above combinations is given
    // 1st we will sort the above string (remember this we can sort any data type as strings can also be used like integers as they have ASCII values too) then we will get the 1st element and thn we will use next_permutation in loop..
    sort(s.begin(), s.end()); // this will make the string "abc" now use ..
    do{
        cout << s << endl;

    }while(next_permutation(s.begin(), s.end()));

    // we can also use this next_permutaion in integers.. 
    int arr[5] = {1, 3, 5, 6, 8};
    bool rea = next_permutation(arr,  arr+5); // we can use them in all the data types...
    // the time complexity is very high very this 
    // for next_permutaion it is O(n)
    // and in general number of permuations are N! so .. the loop will continue for N! times.. so TC is very very high...

    // PREV PERMUTAION
    bool rea = prev_permutation(arr,  arr+5); // same thing like next one just oppsite

}

void main3() {
    // COMPARATOR
    // LECTURE 3 (1:55:00)
    
    // comparator is basically a function which we pass as a argument in different linear algorithms or different functions which functions on linear data structure (not for stack .. queue .. tree and all..)
    // how to write a comparator ??
    // it works on linear data structure so like suppose we want to pass a comparator which will sort the array or string in descending order.. so for writing the comparater we need to write a bool function which will return true for right case.. and return false for wrong cases simple...
    // so take a bool function and then imagine only two elements in an array of int or string or of any data type then we basically write code for sorting that in our own way ...tht function we will pass as a argument later

    // Q1 sort a array of pairs in such way that if the first term is smaller then it will be at first .. if its equal thn the pair with greater 2nd term will aquire the first place...
    pair<int, int> arr[] = {{1, 5}, {5, 4}, {5, 9}};
    // sort(arr, arr+3, comp);  // this will sort according to that..
    // sort(arr, arr+3, greater<pair<int,int>>); (check the syntax) // another process 
}
bool comp(pair<int, int> el1, pair<int, int> el2) { // we are assuming only 2 elements .. here el1 and el2... if el1's first element is small so the order is right so we returned true...
        if(el1.first < el2.second) { // that case 
            return true;
        }
        else if(el1.first == el2.second) {  // now the first term is equal so we are checking on second element..
            if(el1.second > el2.second) {  // the second element of the first element is bigger so the order is perfect..
                return true;

            }
        }
        return false; // else the order is not right so returned true..
    }


    // C++ has a default comparator for called greater<int> or. greater<pair<int,int>>.. basically "greater<data_type>" 