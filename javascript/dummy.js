const API_URL = "https://api.github.com/users/shelobel";

async function handlePromise() {

  const data = await fetch(API_URL);
  // how fetch works
  //1. fetch() function is a promise, which gives a response object
  //2. this response body is a readable stream, to convert it to json u need to do response.json
  //3. this response.json() is again a promise which will give us a jsonValue  
  //fetch() => Response.json() => jsonValue (not code but flow)
  // fetch().then(res => res.json()).then(res => consolelog())  (example code)
  
  const jsonValue = await data.json();

  console.log(jsonValue);

}

handlePromise();