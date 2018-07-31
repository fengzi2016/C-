function ObserverableArray (...p) {
   return new Proxy(new Array(...p),{
       get(target,proper) {
           let arr = ['push', 'pop', 'shift', 'unshift', 'splice', 'sort', 'reverse'];
           arr.indexOf(proper)>-1 && console.log(proper);
           return target[proper];
           
       }
   })
}