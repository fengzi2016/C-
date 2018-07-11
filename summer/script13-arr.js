// function observerableArray(...a) {
//     let arr = new Array();
//     let handler =  {
//       get:function(target, prop) {
//         if(typeof target[prop] === 'function') {
//             return function(...a) {console.log(prop);target[prop].apply(this,a)}
//         }
//         return target[prop];
//       }
//     }
//    return new Proxy(arr,handler);
// }
// const arr = new observerableArray();
// arr.push('Good');
// console.log(arr);

function ObserverableArray(...p) {
    return new Proxy(new Array(...p), {
      get(target, property) {
        const ret = target[property]
        if (typeof ret === 'function')
          return function (...p){ console.log(property); return ret.apply(this, p) }
        return ret
      }
    })
  }
  console.log(typeof new ObserverableArray())