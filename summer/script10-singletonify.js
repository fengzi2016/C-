//我们构造一个名为 singletonify 方法，可以传入一个用户自定义的类，可以返回一个新的单例模式的类
/*class A () {}
const SingleA = singletonify(A)

const a1 = new SingleA()
const a2 = new SingleA()
const a3 = new SingleA()

a1 === a2 // => true
a2 === a3 // => true*/
//第一种
const singletonify = (orginClass) => {
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
//第二种
const singletonify2 = (orginClass) => {
    const instance = new orginClass();
    return new Proxy(orginClass,{
        construct(target,argumentList,newTarget) {
            return instance;
        }
    }) 

 
}