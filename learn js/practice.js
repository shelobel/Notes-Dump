// nrml qsns

let firstName = "Supratim"
let lastName = "Dey"
let fullName = firstName + " " + lastName

console.log(fullName)

// for clicking at a btn we need to render out error msg 
// let assume we r taking html element by id error 
let errorMsg = document.getElementById("error")
// on clicking a function we r activating the func 
function ErrorMsg() {
    errorMsg.innerText = "error"
}