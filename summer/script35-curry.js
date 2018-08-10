const curry = (fn,arg1=[]) => (...arg2) => {
    let args =  [...arg1,...arg2];
    return fn.length ===  args.length ? fn(...args) : curry(fn,args);

}
//函数式编程当中有一个非常重要的概念就是 函数柯里化。一个接受 任意多个参数 的函数，如果执行的时候传入的参数不足，那么它会返回新的函数，新的函数会接受剩余的参数，直到所有参数都传入才执行操作。这种技术就叫柯里化。请你完成 curry 函数，它可以把任意的函数进行柯里化
const curry = (fn,arg1 = []) => (...arg2) => {
    let args = [...arg1,...arg2]
    return fn.length === args.length ? fn(...args) : curry(fn,args)
}
curried(a, b, c, d)
curried(a, b, c)(d)
curried(a)(b, c, d)
curried(a, b)(c, d)
curried(a)(b, c)(d)
curried(a)(b)(c, d)
curried(a, b)(c)(d)
// ...
// 这些函数执行结果都一样

// 经典加法例子
const add = curry((a, b) => a + b)
const add1 = add(1)

add1(1) // => 2
add1(2) // => 3
add1(3) // => 4
// const arg1 =  [1,2]
// const arg2 = [3,4]
// let args = [...arg1,...arg2];
// // console.log(args)
// function c (...t) {
//     console.log(typeof t)
//     console.log(t)
// }
// c(args);
// c(...args);