// const toCamelCaseVar = (variable) => {
//     variable = variable.trim();
//     let arr=variable.split('');
//     let start = 0;
//     let end = arr.length-1;
//     let countEnd = 0;
//     while(arr[start]==='_'){start++};
//     while(arr[end]==='_'){end--;countEnd++}
//     arr = [...arr.slice(start,end+1)];
//     for(let i = 0; i<arr.length; i++) {
//         if(arr[i]==='_') {
//           let k = 0;
//           while(arr[i+k+1]==='_') {k++;}
//           arr = [...arr.slice(0,i),arr[i+1+k].toUpperCase(),...arr.slice(i+2+k,end+1)];
//         }
        
//     }
//     let result =  arr.join('');
//     result=result.padStart(result.length+start,'_');
//     result=result.padEnd(countEnd+result.length,'_');
//     return result;
  
// }
const toCamelCaseVar = (variable) => {
    
        return variable.replace(/_+[a-zA-Z]/g,(m, i) => {
            console.log("m:"+m)
            console.log('i:'+i)
            if(i) return (m.match(/[a-zA-Z]/)[0].toUpperCase());
            else return m;
        })
    
}

console.log(toCamelCaseVar("  __thisIs_myName_ "))
console.log(toCamelCaseVar("this_is_my_name"))
console.log(toCamelCaseVar('_$this_is_my_name'))