//请你完成一个方法 autoBind，它可以接受一个类作为参数，并且返回一个类。返回的类的实例和原来的类的实例功能上并无差别，只是新的类的实例所有方法都会自动 bind 到实例上
const autoBind = (ToBindClass) => new Proxy(ToBindClass,{
    construct(target,args) {
        return new Proxy(new ToBindClass(...args),{
            get: (target,property) => {
                return typeof target[property] === 'function' ? target[property].bind(target) : target[property]
            }
        })
    }
})
    

class Person {
    constructor (name) {
      this.name = name
    }
    sayHi () {
      console.log(`I am ${this.name}.`)
    }
  }
  const BoundPerson = autoBind(Person)

  const jerry = new BoundPerson('Jerry')
  const sayHi = jerry.sayHi
  sayHi() // => I am Jerry.
  
 