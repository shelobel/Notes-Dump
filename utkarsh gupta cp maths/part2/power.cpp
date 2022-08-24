#include<iostream>
using namespace std;

// BIN POW( binary exponientaion)

// the process of doing a^b is very easy in O(b) time .. we just have to iterate for b times byt multipling with a.. but that is in O(b) time so we have to do that in less time ..
// so ..
// we can write a^b in   (a^(b/2))^2 for b is even... and do that again and again in recursive way..
// we can write a^b in   ((a^(b/2))^2 * a )for b is odd... and do that again and again in recursive way..

int pow(int a, int b, int m) {
    if(b==0) {
        return 1%m;
    }
    else if(b % 2 == 0){
        int t = pow(a, b/2, m);
        return ((1ll * t * t) %m);
    }
    else {
        int t = pow(a, b/2, m);
        t = ((1ll* t* t) % m);
        return (1ll * a * t % m);
    }
}  // time complexity is O(logb)
int main(){
    int a, b, m;
    cin >> a >> b >> m;

    cout << pow(a, b, m);

return 0;
}





// iterative method
// Iterative C program to implement pow(x, n)
#include <iostream>
using namespace std;

/* Iterative Function to calculate (x^y) in O(logy) */
int power(int x, unsigned int y)
{
	int res = 1; // Initialize result

	while (y > 0) {
		// If y is odd, multiply x with result
		if (y & 1)
			res = res * x;

		// y must be even now
		y = y >> 1; // y = y/2
		x = x * x; // Change x to x^2
	}
	return res;
}

// Driver program to test above functions
int main()
{
	int x = 3;
	unsigned int y = 5;

	cout<<"Power is "<<power(x, y);

	return 0;
}

// this code is contributed by shivanisinghss2110
