// function saveLead() {
//     console.log("Button clicked")
// }
let myLeads = []
const inputEl = document.getElementById("input-el")
let inputBtn = document.getElementById("input-btn")
const ulEl = document.getElementById("ul-el")






inputBtn.addEventListener("click", function(){
    myLeads.push(inputEl.value)
    inputEl.value = ""
    renderLeads()
})
function renderLeads() {
    let listItems = ""
for(let i =0; i < myLeads.length; i++) {
    // listItems += "<li><a target = '_blank' href='" + myLeads[i] + "'>" + myLeads[i] + "</a></li>"

    listItems += `
    <li>
    <a target = '_blank' href='${myLeads[i]}'>"
    ${myLeads[i]}
    </a>
    </li>`

//     const li = document.createElement("li") // this will create the li html tag
// li.textContent = myLeads[i]
// ulEl.append(li)
}
ulEl.innerHTML = listItems
}

 






