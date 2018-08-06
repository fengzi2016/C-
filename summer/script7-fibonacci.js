// const fibonacci =((memory = {}) => n => {
//     if(n < 2) return n
//     if(memory[n-2]===undefined)memory[n-2]=fibonacci(n-2);
//     if(memory[n-1]===undefined)memory[n-1]=fibonacci(n-1);
//     return memory[n] = memory[n-2]+memory[n-1];
// })()
// const fibonacci = function (memory = {}) {
//     return function (n) {
//         if(n < 2) return n
//         if(memory[n-2]===undefined)memory[n-2]=fibonacci(n-2);
//         if(memory[n-1]===undefined)memory[n-1]=fibonacci(n-1);
//         return memory[n] = memory[n-2]+memory[n-1];
//     }
// }()
function fibonacci (count) {
    if(count === 0) return 1;
    return function(memory = {} ) {
        if(count<3) return count;
        if(memory[count-1]===undefined) memory[count-1] = fibonacci(count-1);
        if(memory[count-2]===undefined) memory[count-2] = fibonacci(count-2);
        return memory[count] = memory[count-2] + memory[count-1];
    }();
}
console.log(fibonacci(7))