#include <bits/stdc++.h>

using namespace std;

int main() {
    // SET
    // what is set ?.. its basically based on red_black.. avl.. and BST..

    // if u r given an unsorted array of set of elements and asks you to find the unique number of elements.. we will set
    array<int, 5> arr = {2, 1, 2, 5, 2};
    cout << arr.size();
    cout <<endl;
    cout << arr.size();
    set<int> st;  // declaring that data type set.. int is the data which we are going to use ..it can be anything as usual..
    for(int i=0; i<5; i++){
        st.insert(arr[i]); // insert function is basically like push_back for sets..
    }
    //now what set will do ??
    //  this set will insert only unique elements and that too in ascending order like 1.. 2.. 5..  complexity for this would be logN (n is the number of elements in set)
    // to access the elements we cant use index number or at operator.. we need to use begin().. end().. iterators ..which will provide that pointer through will we can access

    // ERASE func

    st.erase(st.begin()); //st.erase(iterator) // will only delete that 1st element (complexity logN)
     st.erase(st.begin(), st.begin() + 2); // check the syntax //st.erase(start iterator, end iterator)  // will delete 1st 2..   "[)" (complexity logN)
    st.erase(5); //st.erase(key)   (complexity logN)

    // remember everything we learnt in vector is applicable in set
    set<int> st1 ={1, 3 , 5 ,6}; 
    set<int> st2(st1.begin(), st1.end());  // copies the whole st1

    // find func
    auto it = st1.find(5);  // this will point to 5 and will return the pointer in it. (complexity logN)
    auto it = st1.find(10);  // this will make it = st1.end()

    st.emplace(8);  // same as insert but faster..
    //    REMEMBER WE CAN HAVE AN ARRAY ...SET.. VECTOR OR ANYTHING OF ANY DATA TYPE LIKE int ..char..string and all... IF WE MAKE A CUSTOM DATA TYPE USING struct WE CAN ALSO HAVE A SET OF THAT DATA TYPE... WILL  HAVE THE SAME PROPERTIES BUT IT WILL WORK FOR ThAT PARTCULAR CUSTOM DATA TYPE...

    // ITERTAION
    for(auto it = st1.begin(); it!=st1.end(); it++) {
        cout << *it;

    }
    for(auto it: st1) {
        cout << it;
        
    }

    st1.erase(st1.begin(), st1.end());  //deletes the entire set
     
    st1.count(2);   // will give the number of count of 2(will be 1 always for ordered set or 0 if the element is not present)

    // UNORDERED SET...

    unordered_set<int> ust;
    // based on hashing 
    ust.insert(6);
    ust.insert(2);
    ust.insert(5);
    ust.insert(7);
    // this insertions will be random... unlike set..(it also stores all the unique elements)

    // but the best part is time complexity...
    //  the avg time complexity is O(1);
    // but the worst case is O(n);
    // imp point... for CP and all if order is not important then use unordered_set.. for time complexity...but if u get a TLE then use set...

    // MULTI SET...

    // multi set is like a data type which stores all the elements of a set.. not like the unique ones but all the elements in sorted order...
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    // the set will become {1, 1, 2, 2, 3, 3}
    // all the functions are same..
    ms.erase(2);  // will erase all the 2's there..(as its a multi set)
    auto it = ms.find(2); // will give the pointer of the 1st 2..
    ms.clear(); // this will erase all the stuffs in the set..
    ms.erase(ms.begin(), ms.end()); // for erasing from begin to end
    ms.erase(ms.find(2)); // will erase the first 2
    ms.erase(ms.find(2), ms.find(2) + 2);  // will dlt two ..2s 
    //TIME COMPLEXITY IS ALSO logN



    return 0;

}


/// MAP ...

void main1() {
    
    // what is map ??
    // map is basically a data type which stores two different data types like a dictionary in coding language... it stores the data in ascending order of that data type.. like as we are creating a map of like string and then int than it will store the order according to the alphabets (or the ASCII number )... and we can store only one key word as we cant store same string again and again as in this case strings are the key words...
    
    // time complexity is logN
    map<string, int> mpp; //syntax of mapp data type
    mpp["raj"] = 27;
    mpp["hima"] = 53;
    mpp["sandip"] = 85;
    mpp["tank"] = 45;
    mpp["tinku"] = 45; // this can be stored as the key(string) is different... (doesnt matter the int is same or not)
    mpp["raj"] = 69;  // mpp.emplace("raj", 69); this is also same but a bit faster..
    // this raj will overlap that first raj..

    // all the functions works here
    mpp.erase("raj");  // only the key name // mpp.erase("keyname");

    mpp.clear(); // for erasing all the stuffs
    mpp.erase(mpp.begin(), mpp.begin() + 2);  // will erase a range
    mpp.erase(mpp.begin(), mpp.end());  // will erase the entire map
    auto it = mpp.find("raj") ; // will give u the pointer of "raj"  // the one and only pointer ofc
    auto it = mpp.find("simran");  // as this element is not there so that will give mpp.end();

    mpp.empty(); // this checks wheather its empty or not and returns a boolean type..
    if(mpp.empty()) {
        // this works
        cout << "empty";
    }
    mpp.count("raj");  // states the number of "raj" as its 1 in this case..

    // how to print or iterate..

    // a map is basically a pair(DATA TYPE) ..LIKE WE CAN ASSUME THAT.. it behaves like that in case of iteration and stuffs

    // PAIR.. 
    // remember pair is a data type not like its an array or something its like we can store value in it like int, double, float etc
    pair<int,int> pr;  // syntax for pair
    // it basically stores two data types in pair...
    pr.first = 1;  // assigning the first element of pair
    pr.second = 10;  // assigning the second element of pair..
    // we will basically print that in that way..
    for(auto it: mpp) {
        cout << it.first << " " << it.second ;
        // as it gets the element (here its pair) in it so we use that nrmally
    }
    
    for(auto it = mpp.begin(); it!= mpp.end(); it++) {
        cout << it->first << " " << it->second ;  // as it is pointer here..
        // cout << (*it).first << " " << (*it).second ;
    }
     
     // UNORDERED MAP

    unordered_map<string, int> mpp;
    // all the functions works here
    // time complexity is O(1) in avg cases..O(n) for worst cases
    // uses hashing so it'll not be in sorted order
    // PAIR CLASS

    pair<int,int> pr = {1, 2}; // this is the pair so like 1 is pr.first,, and 2 is pr.second
    // nested pair
    pair<pair<int,int>,int> pr = {{1, 2}, 3};
    // here pr.first is also a pair... and pr.second is 3..
    // pr.first.first is 1 & pr.first.second is 2

    pair<pair<int,int>,pair<int,int>> pr = {{1,2}, {3,5}};
    // we can nest as many pairs as we want..
    // remember we can use pair as a define data type like we can use that an int .. double or anything in this complex data types..
    vector<pair<int,int>> vec;
    set<pair<int,int>> st;
    map<pair<int,int>, int>;  // map of a pair (key) and a int;
    // but in unordered_map we cant use pair... for pairs we need map only

    // multimap..
    multimap<string, int> mp;
    // it will take all the keys if its not completely same..will take "raj", 69 & "raj", 45.....not "raj", 45 & "raj", 45 (as they are same)
    
}

void main2() {

        // STACK AND QUEUE

        stack<int> st;  // lifo data structure (the internal impliment is on linkedin or array..)
        st.push(2);  // emplace is same 
        st.push(4);
        st.push(3);
        st.push(1);

        cout << st.top();  // will print 1 as lifo manner so 1 is at the top
        st.pop(); // will pop out 1
        cout << st.top(); // will print 3
        st.pop();  // will pop out 3
        cout << st.top(); // will print 4
        st.empty();  // will give a boolean about its empty or not..
        // for deleting the stack ... there is no clear func..
        while(!st.empty()) {
            st.pop();
        }  // will dlt the entire stack by poping each and every element..
        cout << st.size(); // will give u the size;
        // if stack is empty and we use .top() then that will give an error..
        stack<int> st;
        st.empty(); // will give u an error
        // always have a check about the stack is empty or not..
        if(!st.empty()) {
            cout << st.top();  // always check this.. in CP.. else this will give a run time error
        }

        //  QUEUE...fifo data structure
        queue<int> q;
        q.push(2);
        q.push(4);
        q.push(5);
        q.push(6);
        q.push(8);  // same emplace is like pushing only
        cout << q.front();  // this will print 2 as it is fifo..
        q.pop(); // this will pop out 2 the first element as its fifo..
        while(!q.empty()) {
            q.pop();  // always the empty funtion while doing pop
        }
        // the deletion of queue is same like stack.. will pop out the entire queue through a for loop

        // remember all the basic functions are of O(1).. for stack and queue but the deletion takes O(n) as it deletes all the elements..AND NO ITERATOR IN STACK AND QUEUE..

        // PRIORITY_QUEUE..
        // why we need priority queue... basically in set it stores only unique elements and in unordered_set it stores unique element but in random order and the timecomplexity is also O(n) for the worst case..
        // so we use priority_queue ..it stores all the elements in sorted order(in ascending order)..
        priority_queue<int> pr;
        pr.push(6);
        pr.push(1);
        pr.push(5);
        pr.push(3);
        pr.push(2); 
        // the order would be 1 2 3 5 6
        // 6 would be at the top..
        pr.top(); // will me 6
        priority_queue<pair<int,int>> prp;
        prp.push({1, 7});
        prp.push({1, 4});
        prp.push({1, 8});
        prp.push({1, 2}); // here the arrangement would be based on the ascending order of the first element.. if its equal then on the second element... 

        // trick for min priority_queue... just negative digits.. store that and then in case of using it just multiply with -1 so that it becomes +ve..
        priority_queue<int> pr1;
        pr1.push(-6);
        pr1.push(-1);
        pr1.push(-5);
        pr1.push(-3);
        pr1.push(-2); // ofc that will store in ascending order thn after that just use ..
        cout << -1* (pr1.top()) ;  // pop doesnt return the digit .. it just deletes...

        // and we dont have iterators ..ofc

        //  min priority_queue ..
        priority_queue<int, vector<int>, greater<int>> pr;  // syntax for min priority_queue... remember
        pr.push(6);
        pr.push(1);
        pr.push(5);
        pr.push(3);
        pr.push(2); 

    // DEQUEUE..
    deque<int> dq;  // basically doublly ended queue..
    // push_front();
    // push_back();
    // pop_front();
    // pop_back();
    // begin, end, rbegin, rend;
    // size;
    // clear;
    // empty
    // at 
    // all functions are in use and its totally similar to vectors..

    // LIST..
    list<int> ls; // very very similar to dequeue
    // basically impliments doubly linked list at back...

    // push_front();
    // push_back();
    // pop_front();
    // pop_back();
    // begin, end, rbegin, rend;
    // size;
    // clear;
    // empty
    // at 
    // remove  -> TC O(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(5);
    ls.push_back(4);
    ls.remove(2);   // will dlt 2 very fast..O(1)
    














}