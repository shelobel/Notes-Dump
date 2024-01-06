//React: open source library building user interfaces
//not a framework
//focus on UI
//rich ecosys

//component based architecture

//header, main content, foooter, sidenav

//reusable code!: same component can be used for various applications

//react is declarative: react will build the actual UI (u dont specify how to build UI)

//efficient updating and rendering of components
//DOM updates gracefully handled

//prerequisites of react :-P
//html,css,js fundamentals
//es6, 'this' keyword, filter, map , reduce
//es6: let,const, arrow func, template literals, default parameters, obj literals, rest and spread operators, destructuring assignmnet
//flow:
//fundamentals -> http -> routing -> redux -> utilities
 
//components: represents a part of user interface
//page can have 4 comp. header comp, footer camp, navbar comp, main content comp etc
//same component can be reused with different content
//comp can also contain other comp (nested comp)
//eg: app comp contains the root comp.
//comp code is usually placed in a js file eg: app comp placed in app.js

//component types:
// stateless funct component
function Welcome(props) {
    return <h1>Hello, {props.name}</h1>;
}

//stateful class component
//(render method returning html)
class Welcome extends React.Component{
    render(){
        return <h1>Hello, {this.props.name} </h1>;
    }
}

//Functional Components: 
//js functions which can optionally recieve an object of properties which is referred to as props and return jsx which describes the UI

//(create a js file inside components folder in src)
//NOTE: components file always begin with caps letter. otherwise in jsx codes, it will be treated as some jsx cuz jsx tags begin with small 

//export default <comp> meanns:
//u can specify component however u want depending on what u call it in import line, otherwise by default it can be called <comp>

//but if u do 

export const Greet = () => <h1>Hello Vishwas</h1>

//then u have to use the name Greet only, cannot modify. this is called a NAMED export.

//CLASS components:
//es6 classes, similiar to funct Comp, it can also recieve props as args and return jsx/html.
//they can also maintain a private internal state 

class Welcome extends Component {
    render() {
     return <h1>Class Component</h1>
    }
 }

 //func comp vs class comp
//func
//1. use them as much as possible
//2. absence of this keyword
//3. stateless (wait for it)
//4. mainly UI 
//5. stateless/dumb/presentational

//class based comp.
//1. more feature rich
//2. maintain their own pvt. data - state
//3. complex UI logic
//4. provide lifecycle hooks
//5. stateful/smart/container

//BUT!!! in functional components we CAN use stateful components with the help of HOOKS. 
//so func comp not stateless anymore!

//JSX
//extention to js lang syntax
//xml like code for elements n comp
//jsx has tag name, attr, children.. 
//very easy to comprehend 

//instead of using jsx we can also use react library's create element method.
//2nd param is optional properties, 3rd param is children element (can be nested methods or text anything)

//accepts 3 params at min, 1st param is a string specifying the html tag to be rendered. 

//second attribute (we usin as null) is for key value pairs

return React.createElement(
    'div',
    null, 
    React.createElement(
        'h1', 
        {id : 'hello', className: 'dummyClass'},  //in react class is preserved word, so for css class we use 'className'
        'Hello Vishvas'))

//as we can see it is complex for bigger code (but tbh jsx is syntactic sugar which ultimately translates to this only)

// * we import react in every component because, jsx translates into react.element which inturn is used by react library 

//jsx and html differences:
//class -> className
//for ->htmlFor

//camelCase property naming convention
//  onclick -> onClick
//  tabindex -> tabIndex

//PROPS: short for properties used to accept optional input. we specify them as attributes. usually passed in functional comp

//=>a function based component 

const Greet = (props) => {
    return (
      <div>
       <h1>
          Hello {props.name} a.k.a {props.heroName}
       </h1>
       {props.children} 
      </div> // so we use children where we dont know what exactly is being passed or dynamic html content is rendered. 
      // if smth is specified, its rendered in the browser. if nothing is specified then props.children renders nothing
      
    )  //jsx to be wrapped in one div and returned
    
    }
//* props are immutable, their value cannot be changed
// we cannot do

props.name = "shaily"

//the appliction will break


// => USING class based component:

//unlike the functional comp where we specify the props parameter, the properties are available thru "this.props" which is reserved in class components
class Welcome extends Component {
    render() {
     return <h1>Welcome {this.props.name} a.k.a {this.props.heroName}</h1>
    }
 }

 //props vs state

 // props are passed to the component (function parameters)

 // state is managed within the component (variables declared within the function body)

 //props are immutable:
    //props - functional components
    //this.props - class components

 // state can be changed:
    //useState Hook - functional components
    //this.state - class components

//suppose u want ur page to display welcome visitor. and upon clicking a button subscribe, u want the text to change to thanks for subscribing, we cannot do it through props cuz they are immutable right
//thus we need component state!
//things to do to execute states:
 //create a state obj and initialise it in the component where u want to have a state (this is done in a class constructor)
 constructor(){
    super() //this is required because we extend react's component class and a call has to be made to the base class constructor
    this.state = { //this.state is reserverd keyword for state obj
        message: 'Welcome Visitor'
    }
}

//add an arrow function to call statechanging handler when desired event takes place
<button onClick = {() => this.changeMessage()}>Subscribe</button>

//define the handler above in the same class

changeMessage(){
    this.setState({ //thus we are changing the value of the state through setState method (how cool is that)
        message: 'Thank you for subscribing'
    },() => {console.log('Callback value',this.state.count)})
    console.log(this.state.count)
};

// * setState is an asynchronous func. if u want something to be executed only after setState is complete? then use CALLBACK Function (i.e. its second parameter)

incrementFive(){
    this.incrementButton();
    this.incrementButton();
    this.incrementButton();
    this.incrementButton();
    this.incrementButton();
}
//we get only one time increment cuz react groups mult setState calls in single go for better performance

//DESTRUCTURING jsx for better code:
//method1
const Greet = ({name, heroName}) => {
    return (
      <div>
      <h1>
          Hello {name} a.k.a {heroName}
      </h1>
      {props.children} 
      </div>
    )
    }
//method 2

const Greet = props => {
    const {name, heroName} = props
    return (
      <div>
         <h1>
            Hello {name} a.k.a {heroName}
         </h1>
      </div> 
    )
  }

  //FOR Class based components:

  class Welcome extends Component {
    render() {
       const {name, heroName} = this.props //only extracting the prop objects that we need
     return <h1>Welcome {name} a.k.a {heroName}</h1>
    }
 }

 //Event handling in functional as well as class comp:
 //function comp:
 
    function clickHandler(){
        console.log('Button clicked')
    }
  return (
    <div>
        <button onClick = {clickHandler}>Click  </button>
    </div>// eventHandler is a function, not a function call. thus we dont use '()'
  )


//class comp: 
clickHandler(){
    console.log('Clicked the button')
}

render() {
return (
  <div>
    <button onClick = {this.clickHandler}>Click me</button>
  </div>
)
}

//this keyword is by default undefined in event handlers thus event binding is necessary-
//in class based components.
clickHandler(){
    this.setState({
        message:'Goodbye!'
    }) 
}

<button onClick = {this.clickHandler.bind(this)}>Click</button>



//PASSING METHODS (between diff components) as props

//1.define method in parent component

greetParent(childName) { 
    alert(`Hello ${this.state.parentName} from ${childName}`)
}

//2. on the child component tag of jsx (still in parent comp), pass the method as a prop
<ChildComponent greetHandler={this.greetParent}/>

//3. in the child component acces the method using props object. if u have to pass a parameter form child comp, use arrow func method
<button onClick = {() => props.greetHandler('child')}>Greet Parent</button>


//CONDITIONAL RENDERING

//approach 1: if else.. not good as repeatitive code

//   render() {
//     if(this.state.isLoggedIn){
//         return(
//         <div>
//             Welcome Vishvas
//         </div>
//         )
//     }
//     else {
//         return (
//             <div>
//                 Welcome Guest
//             </div>
//         )
//     }
    
//   }

//approach 2:
    // render(){
    //     let message
    //     if(this.state.isLoggedIn){
    //         message = <div>Welcome Vishvas</div>
    //     }
    //     else {
    //         message = <div>Welcome Guest</div>
    //     }

    //     return <div>{message}</div>
    // }

    //approach 3: ternary conditional operator
    // render(){
    //     return(
    //         this.state.isLoggedIn ? (
    //             <div>Welcome Vishvas</div>
    //         ) : (
    //             <div>Welcome Guest</div>
    //         )
    //     )
    // }

  //approach 4: only to be used when false condition results in no output
    // render(){
    //     return this.state.isLoggedIn && <div>Welcome Vishvas</div>

    // }

    //approach 3 and 4 best suited

//Lists and all (check react proj u made)
//indexes (use only when list will not be restructured or if the values dont have any primary key)

//Styling react comp:-
//1. css stylesheets
//2. inline styling
//3. css modules
//4. css in js libraries (styled components)

//method 1:
//this is how u apply mult classes being variables, etc for one jsx statement
function Stylesheet(props) {
    let className = props.primary ? 'primary' : ''
  return (
    <div>
        <h1 className = {`${className} font-xl` }>Stylesheets</h1> 
    </div>
  )
}

//LIFECYCLE METHODS 

  // 1. mounting: when instance of a comp is created n inserted in DOM
  constructor, static getDerivedStateFromProps, render, componentDidMount
  // 2. updating: when component is being re-rendered after changes in props or state
  static getDerivedStateFromProps, shouldComponentUpdate, render, getSnapshotBeforeUpdate, componentDidUpdate
  // 3. unmounting: component is removed from DOM
  componentWillUnmount
  // 4. error handling: error in rendering, lifecycle method, constructor of a child comp etc
  static getDerivedStateFromError, componentDidCatch

//Mounting life cycle methods:
// 1. constuctor:- * gets called whenever a new component is created
                // * initializes state, binds event handlers
                // * u should not cause side effects. eg: http requests
                // * super(props), directly overwrites this.state (other scenarios need to use this.setState)
// 2. static getDerivedStateFromProps( props, state) :- // * when the state of comp depemds on changes in props over time.
                                                        // * sets the state
                                                        // * u should not cause side effects. eg: http requests
// 3. render() :- // * only required method
                  // * read props & state and return jsx
                  // * render func is a pure func it always renders the same UI 
                  // * u should not change state or interact with DOM or make ajax calls
                  // * children components lifecycle methods are also executed
// 4. componentDidMount() :- // * invoked immedeatedly after a comp and all its children comp have been rendered to the DOM
                             // * you can cause side effects. eg: interact with the DOM or perform any ajax calls to load data

//order of execution:

//  LifecycleA constructor
//  LifecycleA getDerivedStateFromProps
//  LifecycleA render
//  LifecycleA componentDidMount

//componentDidMount always takes place last (i.e after all functions as well as all child components of the exisitng component hav been rendered)

//suppose render method of lifecycleA has :-
render() {

  console.log('LifecycleA render');

  return (
    <div>
      LifecycleA
      <LifecycleB/>
    </div>
  )
}

//means lifecycleB is a child then order of execution will be

//  LifecycleA constructor
//  LifecycleA getDerivedStateFromProps
//  LifecycleA render
//  LifecycleB constructor
//  LifecycleB getDerivedStateFromProps
//  LifecycleB render
//  LifecycleB componentDidMount
//  LifecycleA componentDidMount

//Updating LifeCycle Methods:
// 1. static getDerivedStateFromProps( props, state) :- // * method is called every time a component is re-rendered
                                                        // * sets the state
                                                        // * u should not cause side effects, eg: HTTP requests
// 2. shouldComponentUpdate( nextProps, nextState) :-   // * dictates if component should re-render or not

   

