//完成一个 flikerProps 方法，接受一个对象作为参数。可以把该对象的不可遍历属性变成可遍历属性；把可遍历属性变成不可遍历属性。
const obj = {}
const config1 = { enumerable: false, configurable: true }
const config2 = { enumerable: true, configurable: true }

Object.defineProperties(obj, {
  green: config1,
  red: config2,
  blue: config1,
  yellow: config2
})
const flikerProps = (obj) => {
    
  var array = Object.getOwnPropertyNames(obj);
  array.map((item) => {
    Object.defineProperty(obj,item,{enumerable:!Object.getOwnPropertyDescriptor(obj,item).enumerable})
   })
   
}
  
console.log(Object.keys(obj)) // => ["red", "yellow"]
flikerProps(obj) // 闪烁
console.log(Object.keys(obj)) // => ["green", "blue"]
flikerProps(obj) // 闪烁
console.log(Object.keys(obj)) // => ["red", "yellow"]
flikerProps(obj) // 闪烁
console.log(Object.keys(obj)) // => ["green", "blue"]
