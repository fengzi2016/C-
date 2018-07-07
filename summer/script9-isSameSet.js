const isSameSet = (s1,s2) => {
       if (s1.size !== s2.size) {
          return false;
        }
        return [...s1].every(i => s2.has(i))
      
}
const a = {}
const b = 1
const c = 'ScriptOJ'

const set1 = new Set([a, b, c])
const set2 = new Set([a, c, b])
console.log(isSameSet(set1, set2)) // => true