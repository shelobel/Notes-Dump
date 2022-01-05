// initialize the count to 0 listen for the clicks of the btn increment the count on clicking & change the count-el in the html to reflect the new count
// for onclick function we created a onclick tag in html btn and call the increment function 

let countEl = document.getElementById("count-el")
console.log(countEl) // this will represent the html
let count = 0
console.log(count)
function increment() {
    // count = count + 1
    count+=1
    countEl.innerText = count
    // console.log(countEl)
    
//     console.log(count)
} 
let saveEl = document.getElementById("save-el")

function save() {
    let countStr = count + " - "
    saveEl.textContent = saveEl.textContent + countStr
    count=0
    countEl.innerText = count
    // console.log(count)
}
// save() 


