const convertSymbolToNormalStr = (obj) => {
    
   Object.getOwnPropertySymbols(obj).forEach((p)=>{

        typeof p == 'object' && convertSymbolToNormalStr(p);
        if(typeof p === 'symbol') {
          
            obj[p.toString().slice(7,-1)] = obj[p]
            delete obj[p]
        }
    })
    return obj
}
console.log(convertSymbolToNormalStr({ [Symbol('name')]: 'Jerry' }))