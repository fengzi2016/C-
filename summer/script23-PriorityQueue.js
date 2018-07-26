class PriorityQueue {
    constructor () {
        this.queue = [];
    }
    add(e) {
        this.queue.push(e);
    }
    remove() {  
      let maxn = Math.max(...this.queue);
      this.queue.splice(this.queue.indexOf(maxn),1)
      return maxn;
    }
}
console.time('into')
const pq = new PriorityQueue()
pq.add(1)
pq.add(2)
pq.add(3)

console.log(pq.remove()) // => 3
console.log(pq.remove()) // => 2
console.log(pq.remove()) // => 1
console.timeEnd('into')

// class PriorityQueue {
//     constructor () {
//         this.queue = [];
//     }
//     add(e) {
//         this.queue.push(e);
//     }
//     remove() {  
//       let temp  = this.queue;
//       temp.sort((a , b)=>{
//           return b-a;
//       }) 
//       return temp.shift();
//     }
// }