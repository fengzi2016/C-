
/**
 * 
 * @param {Object.getOwnPropertyNames(obj);Object.defineProperty(obj,p,{});Object.getOwnPropertyDescriptor(obj,p)} obj 
 */
const filkerProps = (obj) => {
    let array = Object.getOwnPropertyNames(obj);
    array.map((p)=>{
        Object.defineProperty(obj,p,{enumerable:!Object.getOwnPropertyDescriptor(obj,p).enumerable});
    })
}

/**
 @param {String.padStart(len,padString);String.padEnd(len,padString)}
 */
const centerPad = (str,len,pad) => {
    let overlen;
    //唯一个特殊情况，结果长度为奇数，原长度为偶数时
    if(len%2!=0&&str.length%2==0) {
        overlen = Math.floor(str.length/2)-1;
    } else {
        overlen =  Math.floor(str.length/2);
    }
    let middle = Math.floor((len+1)/2);
    let needlen = middle + overlen;
    str = str.padStart(needlen,pad);
    str = str.padEnd(len,pad);
    return str;
}
/**
 * @param {new Proxy(obj,{});Function.prototype.bind(obj)}
 */
const autoBind = (ToBindClass) => {
    return new Proxy(ToBindClass,{
        construct(target,args) {
            return new Proxy(new ToBindClass(...args),{
                get(target,property) {
                    return typeof target[property] === 'function' ? target[property].bind(target) : target[property];
                   
                }
            })
        }
    })
    
}
/**
 * @param {``} 
 * 
 */
const yourName = 'ScriptOJ';
const myName = 'Jerry';
let str = `Hello, ${yourName}. I am ${myName}`;
const highlight = (arg,...val) => {
    let result = "";
    for(let i=0;i<val.length;i++){
        result += arg[i]+`<span style='color:red'>${val[i]}</span>` ;
    }
    return result;
}
highlight`Hello, ${yourName}. I am ${myName}.`

/**
 * @param {fibonacci}
 */
const fibonacci = (count) => {
    if(count===0)return 1;
    return function(memory = {}) {
        if(count<3)return count;
        if(memory[n-2]===undefined) return fibonacci(n-2);
        if(memory[n-1]===undefined) return fibonacci(n-1);
        return memory[n] = memory[n-2]+memory[n-1];
    }()
}

const safeGet = (data,path) => {
    let pathArr = path.split('.');
    let temp =  data;
    pathArr.foreach((p)=>{
        if(temp[p]!==undefined){
            temp = temp[p];
        } else {
            return undefined
        }
    })
    return temp;
}
/**
 * @param {Set.has();Set.size;Array.every()}
 */

const isSameSet = (s1,s2) =>{
   if(s1.size!==s2.size) {
       return false;
   }
   return [...s1].every(i => s2.has(i))
 }
 
const set1 = new Set([a, b, c])
const set2 = new Set([a, c, b])
console.log(isSameSet(set1, set2)) //=>true

const singletonify1 = (orginClass) => {
    let instance = new orginClass();
    class newClass extends orginClass {
        constructor() {
            super();
            return instance;
        }
    }
    instance.prototype = newClass.prototype;
    return newClass;
}
const singletonify2 = (orginClass) => {
    let instance = new orginClass();
    return new Proxy(orginClass,{
        construct (target,argumentsList,newTarget) {
            return instance;
        }
    })
}

//class A () {}
const SingleA = singletonify(A)

const a1 = new SingleA()
const a2 = new SingleA()
const a3 = new SingleA()

a1 === a2 // => true
a2 === a3 // => true


//倒置字符串
String.prototype.spacify =  function() {
    let string = this.split('').join(' ');
    return string;
}

const wrapAsync = (fn) => (...arg)  => {
    let generator = new fn(...arg);
    return new Promise((resolve,reject)=>{
        function go(result) {
            if(result.done) {
                resolve(result);
                return;
            }
            return result.value.then(val => {
                go(generator.next(val));
            })
        }
        go(generator.next());
    })

}

function ObserverableArray (...p) {
    return new Proxy(new Array(...p),{
        get(target,property) {
            let r = target[property];
            if(typeof r === 'function') {
               return function(...p) {
                   console.log(property);
                   r.apply(this,p);
               }
            }
            return ret;
        }
    })
}

class EventEmitter {
    constructor() {
        this.events = {};
    }
    on(name,fn) {
        if(!this.events[name]) {
            this.events[name] = [];
        }
        this.events[name].push(fn);
    }
    emit(name,...args) {
        if(!this.events[name]){
            return false;
        }
        this.events[name].forEach((e)=>{
            e.call(this,...args);
        })
    }
    off(name,fn) {
        for(let i in this.events) {
            if(this.events[i]) {
                this.events[i] = this.events[i].filter((f)=>{
                    return f!==fn;
                })
            }
        }
    }
}
const addClass = (dom , name) => {
    dom.classList.add(name);
    dom.classList.remove(name);
    dom.classList.contains(name);
}


/**
 * @param {setAttribute(key,value);dom.appendChild(childDom)}
 */
class VNode {
    constructor(target,properties,children) {
        this.tagName = target;
        this.props = properties;
        this.children = children;
    }
    render() {
        let elem = document.createElement(this.tagName);
        let keys = Object.keys(this.props);
        keys.forEach((key)=>{
            elem.setAttribute(key,this.props[key]);
        })
        if(this.children) {
            this.children.map((child)=>{
                elem.appendChild(child instanceof VNode ? child.render() : document.createTextNode(child))
            })
        }
    }
}

const h = (target,properties,children) => {
    return new VNode(target,properties,children);
}
const ul = h('ul', {id: 'list', style: 'color: red'}, [
    h('li', {class: 'item'}, ['Item 1']),
    h('li', {class: 'item'}, ['Item 2']),
    h('li', {class: 'item'}, ['Item 3'])
  ])
  const urlDom = ul.render() // 渲染 DOM 节点和它的子节点
  ulDom.getAttribute('id') === 'list' // true
  ulDom.querySelectorAll('li').length === 3 // true


class VNode {
    constructor(target,properties,children) {
        this.tagName = target;
        this.props = properties;
        this.children = children;
    }
    render() {
        let elem = document.createElement(this.tagName);
        let keys = Object.keys(this.props);
        keys.forEach((key)=>{
            elem.setAttribute(key,this.props[key]);
        })
        
    }
}

const rob = (nums) => { 
    let preMax = 0;
    let curMax = 0;
    nums.forEach(n => {
        let temp = curMax;
        curMax = Math.max(preMax+n,curMax);
        preMax = temp;
    })
    return curMax;
}

//confict
(()=>{
    const f = window.$;
    window.$ = {
        noConflict() {
            window.$ = f;
            return this;
        }
    }
}) 
class PriorityQueue {
    constructor() {
        this.queue = [];
    }
    add(e) {
        this.queue.push(e);
    }
    remove() {
        let maxn = Math.max(...this.queue);
        this.queue.splice(this.queue.indexOf(maxn),1);
        return maxn;
    }
}