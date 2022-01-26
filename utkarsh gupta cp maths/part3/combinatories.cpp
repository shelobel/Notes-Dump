// so basically revise 10+2 concepts and also probability.. generally this nCr and nPr qsns has mod arithmatic in it cz we just cant store 100000! in any type of data ofc.. and for getting results we can just cant use that factorial function each and every time its damn time consuming so we are gonna store all the values of factorials in an array so that we can access that in O(1) time and also the inverse of the factorials also
// arr[n+1];
// arr[0] = 1; arr[1] = 1; arr[2] = 2*arr[1]; arr[3] = 3*arr[2] .. etc etc..
// for inverse 
// arr[n-1] = n*arr[n]; arr[n-2] = n-1 * arr[n-1];  // its  very very useful for managing TLE 
