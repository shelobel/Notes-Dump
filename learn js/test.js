// this is general and for subway game 

document.getElementById("count-el").innerText = 5 

// creating count variable by let

let count = 0
// we can do nrml math directly in js like (5+7, 6*4 etc) 
// consoling out the input 
console.log(count)

// we can change the variable value of let varibale 
count = 3
console.log(count)

// now incrementing the value 
count = count + 2
count+=2
console.log(count)

let bonusPoints = 50
bonusPoints = bonusPoints + 100
console.log(bonusPoints)
bonusPoints = bonusPoints - 125
console.log(bonusPoints)
bonusPoints = bonusPoints + 45
console.log(bonusPoints)

// what is function ?
// its basically Same like in other programming language  its like other programming language

// declearation (check the syntax)
function countdown(){
    console.log(5)
    console.log(4)
    console.log(3)
    console.log(2)
    console.log(1)
}
// function call 
    countdown()

// another function 
let lapsCompleted = 0

function increment() {
    lapsCompleted = lapsCompleted + 1
    console.log(lapsCompleted)
}
// we are also calling the func by clicking the button on html
// calling 3 times 
increment()
increment()
increment()

// document object model
// its basically changing ur website with js 

// strings 
let username = "SDey" //  we can use ' also (if there is nothing with single quotes)
console.log(username)
// we can add Strings 
let msg = "u have 2 notification"
console.log(msg + username)
console.log(msg + "," + username)
//  string and int together 
console.log(4 + 5) //9
console.log(4 + "5") // this 5 is string here and it will convert the int 4 also in string so it will print 45 not 9
console.log("4" + "5") //45
console.log(400 + "5") //4005
console.log("My points" + 5 + 89) // My points is 589

// adding emoji 
// we can add innerText to the js function also like we can add innerText in variable.innertext also & we can use "+=" operator also for adding something

let saveEl = document.getElementById("save-el")
// the below mentioned save func we are callling it but click on a button in the html part
// the html part ..
 //  <button id="save-btn" onclick="save()" >SAVE</button>
 //  <p id="save-el" >Previous entries: </p>

//  we also did same in the case of increment func in the html part its also adds the count on clicking 

function save() {
    let countStr = count + " - "
    saveEl.innerText = saveEl.innerText + countStr // here the .innertext gives the output on the screen 
    console.log(count)  // here this console out gives the output on the console
} 
// FIND THE DIFFERENCE BTW INNERTEXT AND INNERHTML
// save() 

// use MDN for documentation.. here we can use node.TextContent in case of node.innerText (here node is nothing but represention the HTML element)\


// NOW BLACK JACK GAME 

// here we use if - else if -else statement like C/C++ but here we use '===' for equal to or for '==' 

// we can use '==' also but '===' is more strict (as == doesnt differtiate btw string and number ("100" & 100) )  

if(sum < 21){
    console.log("do u want to draw another card")
} 
else if (sum === 21){
    console.log("you got blackjack")
}
else if (sum > 21){
    console.log("you are out of the game ")
}
// or use else like any other language 
// else {
//     console.log("you are out of the game ")
// }

// using boolean expressions 
let hasBlackJack = false
let isAlive = true
// every condition is boolean expression either true or false 
// assign empty string 
let msg = ""

// another way of selectig elements 
let sumEL = document.querySelector("#sum-el") // here by giving # infront of sum-el to define that as a id (same like css selector)

// now creating an array .. the arrays in js are dynamic in size, they dont need any preclculated size for storing elements and they can store all kind of data types in an single array..

let Array = ["supratim", 20, true] // here we hv string , int and boolean together in an array, we can access it through array index

// for length we can use 
let LengthA = Array.length
console.log(LengthA)

// its also dynamic we can add or remove elements from the last like stack 

Array.push("Element to be pushhed/ integer") // Array.push()

Array.pop() // the last element will be removed

// for loop in js
for ( let count = 1; count < 11; count+=1) {
    console.log(count)   
}
// for array 
for (let i = 0; i<(Array.length); i++) {
    console.log(Array[i])
}

// function return type  creating a function which returns random no. 

// its same as like in other languages like in c and cpp 

let playerAtime = 102
let playerBtime = 107

function fastestTime() {
    if(playerAtime>playerBtime) {
        return playerBtime
    }
    else if(playerBtime>playerAtime){
        return playerAtime
    }
    else {
        return playerAtime
    }
}

// we can store the value of retrun in any variable 
let B = fastestTime()
console.log(B)

// in js the important point is if we write a function way down in out ide we can still access that at line one

// hoe to create a random No. 

let randomNumber = Math.random() * (number) // its range is from 0.000000 to 0.999999 btw (0-1)
console.log(randomNumber)
// to make that in our range we have multiply it to a particular No. like for dice game we have to make it btw (0-6) so we multiplied it with 6  

// now floor function 
let flooredNumber = Math.floor(12.4) // floor gives us integer less than the number itself

console.log(flooredNumber)
// so waht we do ,, we basically use floor and random together 

let RandomNumber = Math.floor(Math.random() * 6) // this will give no. frm 0-5


// logical operators are same as pther languages && || etc
// remember nested if's are also applicable 

// objects in js (its like a different data type)

let player = {
    name: "Per",
    chips: 145,
    experience: ["Django", "js", 20]
} // its syntx is a bt like array and structure .. the ':' is must and dont forget to use "," 
// how to use this ?
player.name,  player.chips // like structure
// we can store all kind of data type in that object like we can store boolean and arrays too
console.log(player.experience) // dot operator
console.log(player["experience"]) // this also runs

// now some xtra things 
// basically for array in js we have functions like pop(), push(), unshift(), shift() 
let document = ["india", "canada", "usa", "russia"]
// now 
document.pop()  // deletes the last element
document.push("china") // adds element at the last
document.shift() // deletes the first element
document.unshift("india") // adds the element at the first

// chrome extension 

// here when we call a fumction by clicnking or something like that we add "onclick=function()" like this inside html 
{/* <button id="input-btn" onclick="saveLead()">SAVE</button> */}
// but here we will use event listener 
 
// in js 
let saveBtn = document.getElementById("input-btn")
saveBtn.addEventListener("click", function(){
    console.log("Button clicked")
 
}) // here this function will run by clicking the "SAVE" btn

// if possible use const, if not , use let
const name = "supratim" // the basic logic of const is you cant assign that after declaring
let credit = 45
// how to take elements from input section
document.getElementById("save-el").value // this will give you the exact value {tht .value operator}

// the difference btw innerHTML and textcontent 
ulEl.textcontent += "<li>" + myLeads[i] + "</li>"
// this will print <li>www.example.org</li>

ulEl.innerHTML += "<li>" + myLeads[i] + "</li>" // THIS will print the right thing with html tags

// remember when we use .innerHTML it will clear the html and will add another one so use += for this

// use of append and create Element function
const li = document.createElement("li") // this will create the li html tag
li.textContent = myLeads[i]
ulEl.append(li) //here append will add the li tag

//template strings
listItems += `
<li>
<a target = '_blank' href='${myLeads[i]}'>"
${myLeads[i]}
</a>
</li>` // these templates strings are easier to have line breaks and it will exactly match the html indentation

// deployment and local storage and json file

// .json file is javascript object notation this will configure our app and will provide the meta data to chrome 

// manifest.json folder
// {
//     "manifet_version" : 3,
//     "version" : "1.0",
//     "name": "leads tracker",
//     "action": {
//         "default_popup": "chrome_extension.html",
//         "deafult_icon": "icon.png"
//     }
// }

// local storage 
// go to any page ..open inspect and go to application ..there you will find local storage one is key and one is value
// you will find that website generally stores some sort of data about you.. you can erase that by writing localStorage.clear() in the console
// localStorage.setItem("myLeads", "http.example.org") ... this will add myLeads to key and that url to value

// in .js file we can write 
localStorage.setItem("getLeads", "www.example.org") // run this it will store these values to local Storage 
//now dlt this code and write
console.log(localStorage.getItem("myLeads"))  // this will print that URL
localStorage.clear() // clears the storage

// now the important factor is that only a string can be added to localstorage not an arrays element.. so wt should we do ??
// here's the answer
let myLeads = ["www.awesomelead.com", "www.example.org"]  //an array
myLeads = JSON.stringify(myLeads)  // this will convert that to string
console.log(typeof myLeads) // this will print typeof that element

let myLeads = `["www.awesomelead.com", "www.example.org"]` // now this is a string 
myLeads = JSON.parse(myLeads)  // this will convert that into an array{USE MDN references} now you can push value like array

// truthy and falsy values
// falshy value :
false
null // -> how developers signifies emptiness
""
// remember [] empty array is truthy value
undefined  // -> how js signifies emptiness
0 
NaN  // not a number

// passing parameter to function]
// the function paramter will behave like same like other languages like C or C++, that will take the local variable or the local data as the argument 
// in the case of passing the value we an pass anyname like we dont need to define the datat type as the language is smart enough to understand the variable type like in the renderLeads function if we pass renderLeads(yolo) {and do code accordingly thn it will work same(we dont need to mention that as array or other)}

// now the important thing about passing arguments that js only takes name as a parameter so if it takes 2 parameters and u pass only one then it will take the parameter as the first one and the other one will be as undefined like renderLeads(greetings, name)  2 arguments if we pass renderLeads("welcome") this we take as greetings and the name will be undefined 
// and we can use template parameter here also like ${greetings}, ${name}

// the special kind of object (its basically object in an array) (writing for now )
let test =[
    {url:"www.example.org"}
]

// now how to acces this ??
console.log(test)  // this will give [{url:"www.example.org"}]
console.log(test[0])  // this will give {url:"www.example.org"}
console.log(test[0].url)  // this will give www.example.org

// check the API part at 7:08:00  freecodecamp.org
// do practice at 7:20:00  freecodecamp.org