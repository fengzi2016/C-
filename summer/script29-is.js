const is = (x , y) => {
    if(x===y) {
        return x!==0 || 1/x === 1/y;
    } else {
        return x!==x&& y!==y;
    }
}
console.log(is('foo', 'foo'));     // true
//console.log(is(window, window));   // true

console.log(is('foo', 'bar'));     // false
console.log(is([], []));           // false

var test = { a: 1 };
console.log(is(test, test));       // true

console.log(is(null, null));       // true

console.log(is(0, -0));            // false
console.log(is(-0, -0));           // true
console.log(is(NaN, 0/0));