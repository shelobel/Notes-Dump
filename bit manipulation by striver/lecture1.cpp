// questions on bit manipulation 
// here  we have given qsns on xor and other operations so 

// ** MOST IMPORTANT POINT THAT IF WE DO XOR OF TWO NUMBERS THAT WILL BE ALWAYS LESS THAN THE MULTIPLICATION OF THEM EXCEPT IN CASE OF A NUMBER AND 1, IF THE NUMBER IS ODD THEN (NUMBER ^ 1 WILL BE EVEN NUMBER JUST 1 LESS THAN THAT ) IF IT IS EVEN THEN THE ANSWER WOULD BE THE ODD NUMBER JUST GREATER THAN THAT(NUMBER+1)



// q1 // we have an array where all the numbers are repeating for 2 times except one so we need to find it out 
// we will simply xor all the numbers and as the number is only one time so the value of xor will be the number only


// q2 // we need to swap 2 numbers using xor ..
// let assume a =5, b = 7
// so if we do a = a^b then a would be 5^7, // this process should be in order
// then we will do b = a^b.. s b will be 5^7^7 so it'll become 5
// now a = a^b again so 5^7^5 so it'll be 7 again  // value of b changes to 5
// swapped (without using a variable )

// q3 // given a number N then print the XOR of all the number from 1 to N 
//  if normal xor we can do it by O(n) solution but we need to crack a pattern out of it 
//  we can se that if n = 1 then ansswer is 1, if n = 2 then answer is 3 then if n = 3 then answer is 0 then if n = 4 answer is 4 then if n = 5 then answer is again 1 then for 6 answer is 7 and then again for 7 answer is 0 then for 8 it is 8 again... so we can crack a pattern

// my answer would be 
// if(n%4 == 0) return n;
// if(n%4 == 1) return 1;
// if(n%4 == 2) return n+1;
// if(n%4 == 3) return 0;
// pattern in terms of 4...


// q4 // given a range (L-R) then XOR of all 
// here we can still use that 4 pattern property here
// so if we have given the range then what we can do 
// lets assume we have L is 4 and R is 6 then we can calculate XOR till 4 and XOR till 6 right?
// so XOR(6) = 1^2^3^4^5^6
// so XOR(3) here we are calculating of XOR(L-1) = 1^2^3 so if we XOR them then we'll get the XOR from 4 to 6 so..
// XOR from L to R is ((XOR(R)) ^(XOR(L-1))) ; // where XOR() is XOR till that number like prev question


// AND OPERATOR 
// how to check if a number is odd or even ??
// num%2 == 0 ? // no 
// num&1 == 0 // yes
// num&1 == 0(even number)
// num&1 == 1 (odd number)


// q1 // given two numbers (N , i) // check if the ith bit i set or not ??
// basically we will do (1<<i)
// then AND the N and the value of(1<<i) // if the value is greater than 0 then its set bit 
// dont change the given number N thats not a good practice and remember the indexing starts from 0 to N-1

// q2 // we need to set a given index like if (N, i) then set the ith bit so for that create (1<<i) and then do OR

// q3 // now unset a given index.. as we know that negation(~) means flipping the bits from 0 to 1.. from 1 to 0 so 
// if we have given (N, i) then we'll do (1<<i) [ this is called creating a mask ] then we will negate this (~(1<<i)) then we'll AND this with N as that will make the index unset and others will be same

// q4 // remove the last set bit
// its basically (N&(N-1)) // as we know the property of N-1 from GFG so its just (n & n-1);

// q5 //  how to check if a number is power of 2 (for that we should have only one set bit)
// so basically it would be ((N & N-1) == 0) // this means only one set bit so power of 2

// q6 // count the number of set bits
// TC : O(position of MSB)
// int count = 0;
// while(n!=0){
//     if(n&1 == 1){
//         count++;
//     }
//     n = n>>1;
// }
// print(count);

// better solution 
// TC : O(no. of set bits)
// int count = 0;
// while(n!=0){
//     n = n&(n-1);  // only unsetting the set bits
//     count++;
// }
// print(count);




#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}