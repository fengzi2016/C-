class EventEmitter {
    constructor() {
        this.events = {};
    }
    on(eventName,func) {
        if(!this.events[eventName]) {
            this.events[eventName] = [];
        }
        this.events[eventName].push(func);
    }

    emit(eventName,...args) {
        if(!this.events[eventName]) {
            return false;
        } else {
            this.events[eventName].forEach(func => {
                func.call(this,...args);
            });
        }
    }
    off(eventName,func) {
        for(let i in this.events) {
            if(this.events[i]) {
                this.events[i] = this.events[i].filter((f)=>{
                    return func!==f;
                })
            }
        }
        // if(!this.events[eventName]) {
        //     return false;
        // } else {
        //     this.events[eventName] = this.events[eventName].filter((f)=>{
        //         return f!==func;
        //     })
          
        // }
    }
}
const emitter = new EventEmitter()
const sayHi = (name) => console.log(`Hello ${name}`)
const sayHi2 = (name) => console.log(`Good night, ${name}`)

emitter.on('hi', sayHi)
emitter.on('hi', sayHi)
emitter.on('hi', sayHi2)
emitter.emit('hi', 'ScriptOJ')
// => Hello ScriptOJ
// => Good night, ScriptOJ

emitter.off('hi', sayHi)
emitter.emit('hi', 'ScriptOJ')
// => Good night, ScriptOJ

const emitter2 = new EventEmitter()
emitter2.on('hi', (name, age) => {
  console.log(`I am ${name}, and I am ${age} years old`)
})
emitter2.emit('hi', 'Jerry', 12)
// => I am Jerry, and I am 12 years old