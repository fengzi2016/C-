
/**
 * 
 * @param {Object.getOwnPropertyNames(obj);Object.defineProperty(obj,p,{});Object.getOwnPropertyDescriptor(obj,p)} obj 
 */
const filkerProps = (obj) => {
    let array = Object.getOwnPropertyNames(obj);
    array.map((p)=>{
        Object.defineProperty(obj,p,{enumerable:!Object.getOwnPropertyDescriptor(obj,p).enumerable});
    })
}

/**
 @param {String.padStart(len,padString);String.padEnd(len,padString)}
 */
const centerPad = (str,len,pad) => {
    let overlen;
    //唯一个特殊情况，结果长度为奇数，原长度为偶数时
    if(len%2!=0&&str.length%2==0) {
        overlen = Math.floor(str.length/2)-1;
    } else {
        overlen =  Math.floor(str.length/2);
    }
    let middle = Math.floor((len+1)/2);
    let needlen = middle + overlen;
    str = str.padStart(needlen,pad);
    str = str.padEnd(len,pad);
    return str;
}
/**
 * @param {new Proxy(obj,{});Function.prototype.bind(obj)}
 */
const autoBind = (ToBindClass) => {
    return new Proxy(ToBindClass,{
        construct(target,args) {
            return new Proxy(new ToBindClass(...args),{
                get(target,property) {
                    return typeof target[property] === 'function' ? target[property].bind(target) : target[property];
                   
                }
            })
        }
    })
    
}