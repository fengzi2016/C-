// const merge = (arr) => {
   
   
// }
const move = (arr, i, j) => arr.splice(i, j - i + 1, ...[arr[j], ...arr.slice(i, j)])
console.log(move([10, 21, 32, 11, 16, 40],0,3));
// console.log(merge([10, 21, 32, 11, 16, 40]))
// console.log(merge([1, 5, 10, 11, 3, 4, 8, 12, 30]))