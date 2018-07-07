const safeGet = (data, path) => {

        let pathArr = path.split('.');
        let temp = data;
        for(let i of pathArr) {
          if(temp[i]) {
            temp = temp[i]
          } else {
            return undefined;
          }
        }
        return temp;
      
  
}

var data = { a: { b: { c: 'ScriptOJ' } } }
console.log(safeGet(data, 'a.b.c')) // => scriptoj
console.log(safeGet(data, 'a.b.c.d')) // => 返回 undefined
console.log(safeGet(data, 'a.b.c.d.e.f.g')) // => 返回 undefined
console.log('ScriptOJ') // => 打印 ScriptOJ