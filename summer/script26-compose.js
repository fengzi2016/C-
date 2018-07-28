const compose = (...fns) => {
    return function (arg) {
        let result = arg;
        for(let i = fns.length-1 ; i>=0 ;i--) {
            result = fns[i].call(null,result);
        }
        return result;
      }
}


const add1 = (x) => x + 1
const mul3 = (x) => x * 3
const div2 = (x) => x / 2

//div2(mul3(add1(add1(0)))) // => 3

const operate = compose(div2, mul3, add1, add1)

// console.log(operate(0)); //=> 相当于 div2(mul3(add1(add1(0))))
// console.log(operate(2)); //=> 相当于 div2(mul3(add1(add1(2))))