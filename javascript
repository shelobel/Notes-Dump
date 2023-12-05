//your go to js notes
//vvv brief
//there is an execution context in js where there are 2 components: memory and code.
//memory aka variable environment stores data in key value pairs
//code component aka thread of execution executes one line at a time (single thread)

//*****js is synchronous single threaded language******

//in js, unlike other languages there are two phases of this execution context
//first (memory creation phase) skimming is done to allocate memory to every element (top to down)
//second (code execution phase) we start main execution (top to down)

// in functions an altogether new ec is created and in phase 1 we allocate mem to parameters as well as variables inside the function
//CODE:
var n = 2;
function square(num) {
  var ans = num*num;
  return ans;
}

var square2 = square(n);
var square4 = square(4);

// first of all global execution context is created
//phase 1:
//line 15 n is allocated undefined
//line 16 square is allocated {.....} whole code inside of it
//line 21 square2 is allocated undefined
//line 22 square4 is allocated undefined
//phase 2:
//line 14 in n value undef replaced with 2
//line 20 (we have function call) 
    //local ec of function created where only code inside func square is dealt with
    //phase 1:
    //line 15 num is allocated undef
    //line 16 ans allocated undef
    //phase 2:
    //line 21 function invoked with arg n and we have n = 2 from gec, hence in lec we replace undef with 2 for num
    //line 17 now ans = num*num = 4 and ans's undef replaced with 4
    //line 18 special keyword ans... now return the control to place where function was invoked now line 21 square2 will get val of ans = 4
    //line 21 in global ec we will now replace square2 with 4 which was returned.
//since function is over, whole lec is deleted now
//line 22 (we have func call)
    //local ec of function created where only code inside func square is dealt with
    //phase 1:
    //line 15 num is allocated undef
    //line 16 ans allocated undef
    //phase 2:
    //line 22 function invoked with arg 4, hence in lec we replace undef with 4 for num
    //line 17 now ans = num*num = 16 and ans's undef replaced with 16
    //line 18 special keyword ans... now return the control to place where function was invoked now line 21 square4 will get val of ans = 16
    //line 22 in global ec we will now replace square4 with 16 which was returned.
//since function is over, whole lec is deleted now
//since whole code complete we will delete gec now

//CALL STACK: it maintains the order of execution of execution contexts.
//in above example, first stack had 
//$
//$->gec
//$->gec->lec(line 21)
//$->gec
//$->gec->lec(line 22)
//$->gec
//$

//HOISTING IN JS:
// 1. Hoisting in JavaScript is a process in which all the Variables, Functions and Class defination are declared BEFORE execution of the code 
// 3. Variables are initialised to UNDEFINED when they are declared and Function defination is stored AS IT IS.
// 4. They are declared in Memory Allocation Phase in the Memory Component of Execution Context, so we can use them even BEFORE they are declared.
// 5. UNDEFINED means Variable has been declared but value is not ASSIGNED but NOT DEFINED means Variables is NOT DECLARED.
// 6. When we assign Variable to a Function definItion(like arrow function), we CAN NOT call this Variable as Function BEFORE declaration as it will behave as Variable with UNDEFINED value.
//take eg:

getName();
console.log(x);

var x = 7;
function getName() {
  console.log("Namaste javascript");
}

//in any other language above code will give error since nothing is defined initially
// but in js op will be:
Namaste javascript
undefined

//why? its because there are two phases of ec! in first phase we allocate memory to all variables and functions
// thus in second phase when code is actually executed.. we do have the elements in our variable environment.
// function executes normally
// however line 71, we dont have x initialsed to anything yet thus it prints its placeholder value i.e. undefined
//wow right?

// just btw 
  console.log(getName)
//this will give output on console:
f getName() {
  console.log("Namaste javascript");
}
//now : 

getName();
console.log(x);
console.log(getName)
  
var x = 7;
function getName() {
  console.log("Namaste javascript");
}

//output will be:
Namaste javascript
undefined
f getName() {
  console.log("Namaste javascript");
}

// it is self explanatory by now (since in first phase line 74, will store getName : {......} code of the entire function in memory)
//EVEN BEFORE CODE STARTS EXECUTING, WE ALREADY ALLOCATE MEMORY TO VARIABLES AND FUNCTIONS, this is called HOISTING

//one more imp thing: arrow function
var getName = () => {
  console.log("Namaste javascript");
}

//js treats arrow functions as variables only. now if we run getName() in the code (before the function definition) where getName is an arrow function, console will give error saying getName is not a funciton
// arrow function is also allocated undefined (cuz treated as var)
//another method shown below also behaves as var
var getName2 = function () {

}

//SHORTEST JS PROGRAM:

// an empty file is still a shortest code as a global execution context is created and sets up memory space

	// • window object is created by the JS engines of the respective browsers when global execution context is created.
	// • whenever an execution context is created a "this" variable is also created.
	// • at the global level "this" points to the global object( window object in case of browsers).
	// • anything that is not inside a function is the "global space".
	// • whenever we create any variables or functions in the "global space", they get attached to the global object( window object in case of browsers).
	
	// so to access the variables/function defined in the global space , 

var a = 10;

	// we can use any of the below:
	// 	console.log(window.a);
	// 	console.log(a);
	// 	console.log(this.a)             //at the global space level, where this points to the window object
//op will be:
10
10
10

//Undefined is like a placeholder for an allocated memory till a value is assigned to a variable.
//undefined !== not defined
//js is a loosely typed or weakly typed language doesnt attach data type to a var forever..
// if u use var x as a string then later can use it as bool, int etc. anything

//SCOPE CHAIN AND LEXICAL ENVIRONMENT
  
// 0) Lexical environment = EC's Local Memory + Reference to Lexical Environment of its parent.

// 1) Lexical Environment of its parent is the scope where a function is physically present or defined. So, suppose a function x(), is defined and invoked in the GEC, when function x()'s EC is pushed in the call stack, it stores a reference to its parent's lexical environment i.e. the GEC's memory.

// 2) Whenever a new Execution Context is pushed in the Call Stack it holds a reference to the Lexical Environment of its parent, i.e. the EC's memory from where it was invoked.

// 3) Global execution context holds reference to null.

// 4)  Javascript engine first looks for the variable/function being accessed in the local scope of the function, and if not found, it keeps on searching the lexical environment of its parent until it finds the variable/function being accessed.

// 5) The mechanism mentioned in point 4 above is called SCOPE CHAIN.

// 6) If the variable accessed is not found in the Scope Chain, then you will get the variable is not defined error in the  browser's console.

//LET AND CONST, TEMPORAL DEAD ZONE

// 1. let and const are hoisted but its memory is allocated at other place than window which cannot be accessed before initialisation. (eg: Script)
// 2. Temporal Dead Zone is the block of code where a variable is inaccessible until variable is declared and initialised a value.
  console.log(a);
  var b = 9;
  let a = 90;
// for a, the TDZ is lines 180 and 181. this on running gives reference error at 180 because, the let a is not allocated in global memory

// 3. window.variable OR this.variable will not give value of variable defined using let or const. because let and const memory is not allocated in global scope but somewhere else
// 4. const variable declaration and initialisation must be done on the same line.
// 5. strictness var<<let<<const
    var //no temporal dead zone, can redeclare and re-initialize, stored in GES
    let //use TDZ, can't re-declare, can re-initialize, stored in separate memory
    const //use TDZ, can't re-declare, can't re-initialize, stored in separate memory
// 6. There are three types of error: [1] referenceError {given where variable does not have memory allocation} [2] typeError {given when we change type that is not supposed to be changed, eg reinitalize const} [3] syntaxError {when proper syntax(way of writing a statement) is not used}.
// 7. Use const wherever possible followed by let, Use var as little as possible(only if you have to). It helps avoid error.
// 8. Initialising variables at the top is good idea, helps shrinks TDZ to zero.

//BLOCK SCOPE AND SHADOWING
//Q) What is block in JavaScript?
// multiple js statements formed in a group enclosed in brackets and it forms a block

//Q) What is need of a block/Grouping?
//JavaScript sometimes expect to run a single statement to run, but we need to run commands with multiple statements which is only possible by block

//write a simple function:
// even empty script is perfectly valid js script, what about empty brackets!!
{
 var a = 10;
 let b = 20;
 const c =30; 
}

//When a js script get hoisted (a Global Execution Context) gets created 'var' listed towards 'Global environment' and other variables 'let' and 'const' declarations go to the 'Block environment' 

//This become especially important when deciding the scope of a particular variable, since b and c are located in 'Block environment' and for a as we know exists in 'Global environment' any statement out of the "Block" can access 'a' ie.  ' Variable in Global environment' and other are not!

//so when we understand the extent of Global and local environment variables and their 'Scopes' == Environment that forms the lexical hierarchy of 'Scopes' and 'Scopes' have Levels like 'Scope inside scope'


 var a = 100;
{
 var a = 10;
 let b = 20;
 const c =30; 
 console.log(a);
 console.log(b);
 console.log(c);
}
 console.log(a);
 console.log(b);
 console.log(c);

//OP:
10
20
30
10
error
//So in block " var a = 10;" influences the global value itself because var is hoisted in global space, hence  console.log(a); >> 10 and outside of the block 'Variable in Global environment' influences value of a hence console.log(a); >> 10

//SHADOWING: basically when a variable of same name is declared inside a scope, it is now relevant within the scope as the locally declared variable. this is called shadowing as it shadows the original outer scope variable.


let a = 20;
{
  let a = 10;
  console.log(a);
}
console.log(a);
//OP:
10
20

//a shadows global a inside the scope.
//(but if it was var, there would be shadowing however, after coming out of scope, the variable will not regain global value as it has been modified by local var cuz they share same memory space.. thus var is not block scoped

//ILLEGAL shadowing:

let a = 200;
{
 var a =20;
}

//as 'var' declaration goes to 'Global environment' and sets in Memory context, it cannot be set using 'Block environment' value Hence:    Uncaught SyntaxError: Identifier 'a' has already been declared
var a = 20;
{
 let a = 25;
}

// this is acceptable as let is block scoped and a is an independent variable allocated in a different space (block space) unlike var which is allocated in global space.

//CLOSURE:
//closure :Function bundled with its lexical environment is known as a closure. 
// a function remembers its outer environment as it stores a reference of its outer env even if it is executed elsewhere. outer env includes variables declared outside the function be it let, var ,const anyting, or a parameter passed in an outer nested function..
// Whenever function is returned, even if its vanished in execution context but still it remembers the reference it was pointing to. 
// Its not just that function alone it returns but the entire closure and that's where it becomes interesting !! 

// in js functions can be assigned to variables, fn can be passed as parameters, fn can be returned from other fn as well.

function x(){
 var a = 7;
 function y(){
    console.log(a);
  }
 return y;
}
var z = x(); // after this line executes, x will be gone (x's lec will be deleted) and variable z will be assigned return val of x() (basically z stores closure of return val of x i.e function "y" and it still remembers the reference it was pointing to ) in a way z is also a function 
console.log(z); // here the content of z is printed. what is z? simply the returned value of x() i.e. function y. so output will be the code of function y
z(); //(interesting) we call z and it holds function y which has a reference to 'a' thus z stores the closure of y 

//OP:
f y(){
  console.log(a);
}
7 //because z contains closure of y which means memory and the lexical env of y hence a is preserved
//also
function x(){
 var a = 7;
 function y(){
    console.log(a);
  }
 return y;
}

//same as

function x(){
 var a = 7;
 return function y(){
    console.log(a);
  }
}

//Q: what will be op?

function x(){
 var a = 7;
 function y(){
    console.log(a);
  }
 a = 100;
 return y;
}
var z = x();
z();

//OP:
100
// calling z means calling y (as z = ret val of x = y). now y does not store the "value" of a but the "reference" of a. 
// hence when we modify a as 100, we have affected the reference in the lexical env. thus we get op as 100

//Q: what will be op?

function z() {
 var b = 900;
 function x(){
    var a = 7;
    function y(){
       console.log(a,b); // when we are here during execution, fn y stores closure of x which inturn stores closure of z. thus we have both references a and b in hand.
     }
    y();
   }
 x();
}
z();

//OP: 7 900

//SET-TIMEOUT
//1. setTimeout stores the function in a different place and attached a timer to it, when the timer is finished it rejoins the call stack and executed. (while executing in diff place, it obv has the closure of all variables which share scope with it)
//2. Without closure the var reference gives the latest value as it does not retain the original value but rather has the reference so any update in value after timeout will be shown.
//3. If we use let/const because they have block scope, every time a new copy of variable is attached, thus this can be done without closure.

function x(){
 var i = 1;
    setTimeout(function() {
      console.log(i);
     }, 3000); // means timeout of 3 seconds or 3000 mili sec
    console.log("hello");
}
x();

//OP:
hello
1 //after 3 sec
//note: see that hello didnt print after 3 sec as it might appear from code. this is cuz settimeout executes somewhere else, storing the closure in this case the reference to i,. the rest of code executes normally, and when settimeout is done executing, it joins back in the call stack. 
// thus hello prints as usual but 1 is printed after a timeout of 3 seconds.

// explanation of pt 2 with situation: say u have to print numbers 1 2 3 4 5 one after other in 1 sec gap

function x(){
 for(var i = 1;i<=5;i++) {
     setTimeout(function() {
       console.log(i);
      }, i*1000); 
   }
 console.log("hello");
}
x();

//OP:
hello
6
6
6
6
6
//after 1 sec gap each

//.....wHATTTTTT 
//hehe this is cuz setTimeout has the closure of its lexical env as in it still references  to 'i'. now loop will run in usual pace and i will quickly increment to 6. but in these seperate timeouts of 1000,2000,3000,4000,5000 ms we have i referencing to same memory location. thus they all will now have 6.
//upon printing also they all print 6 as and when their timer exhausts.

//fixing the problem by "let" as let as block scope. thus with each loop iteration, each function has a new copy of i which has independent space in their scope.

function x(){
 for(let i = 1;i<=5;i++) {
     setTimeout(function() {
       console.log(i);
      }, i*1000); 
   }
 console.log("hello");
}
x();

//OP:
hello
1
2
3
4
5

//what if u cant use let?

//u can use a function embedded inside our loop and pass i as a parameter. this will always create new copy of i 

function x(){
 for(var i = 1;i<=5;i++) {
   function close(x) {
      setTimeout(function() {
        console.log(x);
       }, x*1000); 
    }
   close(i);
  }

 console.log("hello");
}
x();

//OP:
hello
1
2
3
4
5












