// the cards must be in the random function rt ? so that it generates after the starrt of the game 
// creating an array 
let cards = [] // array must be empty as it will fillup after the random card generation
let sum = 0 // the sum must be zero
let message = ""
let hasBlackJack = false
let isAlive = false // as in real life we have to click startgame btn to be alive

console.log(sum)
let messageEL = document.querySelector("#message-el")
console.log(messageEL)
let sumEL = document.querySelector("#save-el")
let cardsEl = document.getElementById("cards-el")

let player = {
    name: "Per",
    chips: 145
}

let playerEl = document.getElementById("player-el")
playerEl.textContent = player.name + 
": $" + player.chips
function getRandomCard() {
    let cardNumber = (Math.floor(Math.random() * 13) + 1) // creating a random no. btw 1 to 13 
    // now as the card has ony value of 11 & 10 max so need to mdify the function
    if(cardNumber >= 11) {
        return 10
    }
    else if(cardNumber === 1) {
        return 11
    }
    else {
        return cardNumber
    }

} 

function renderGame(){
    cardsEl.textContent = "Cards: "
    // creating a loop so that it adds the cards automatically
    for (let i =0; i< cards.length; i++) {
        cardsEl.textContent = cardsEl.textContent+" "+cards[i]
    }
    sumEL.textContent = "Sum: " + sum
    if(sum < 21){
        message = "do u want to draw another card ?"
    } 
    else if (sum === 21){
        message = "you got blackjack"
        hasBlackJack = true
    }
    else if (sum > 21){
        message = "you are out of the game "
        isAlive = false
    }

    messageEL.innerHTML = message
    console.log(message)
}

function startGame(){
    isAlive = true
    let firstCard = getRandomCard()
    let secondCard = getRandomCard()
    cards = [firstCard, secondCard]
    sum = firstCard + secondCard

    renderGame()
}

function newCard(){

    if(isAlive === true && hasBlackJack === false) {
        console.log("Drawing a new card")
        let card = randomNumber()
        cards.push(card)
        console.log(cards)
        sum += card
        cards.push(card)
        renderGame() // calling renderGame again
    }
}


// or use else like any other language 
// else {
//     console.log("you are out of the game ")
// }