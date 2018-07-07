// const fibonacci =((memory = {}) => n => {
//     if(n < 2) return n
//     if(memory[n-2]===undefined)memory[n-2]=fibonacci(n-2);
//     if(memory[n-1]===undefined)memory[n-1]=fibonacci(n-1);
//     return memory[n] = memory[n-2]+memory[n-1];
// })()
const fibonacci = function (memory = {}) {
    return function (n) {
        if(n < 2) return n
        if(memory[n-2]===undefined)memory[n-2]=fibonacci(n-2);
        if(memory[n-1]===undefined)memory[n-1]=fibonacci(n-1);
        return memory[n] = memory[n-2]+memory[n-1];
    }
}()
console.log(fibonacci(7))