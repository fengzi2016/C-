
//完成函数 centerPad 可以让一个字符串居中包裹在指定的可重复填充的字符串中间


const centerPad = (str, len, pad) => {
    var overlen;
    if(len%2!=0&&str.length%2==0) {
        overlen = Math.floor(str.length/2)-1;
    } else {
        overlen = Math.floor(str.length/2);
    }
    var middle = Math.floor((len+1)/2);
    var needlen = middle+overlen;
    str = str.padStart(needlen,pad);
    str = str.padEnd(len,pad);
    return str;
}
centerPad('Hello', 13, 'abc') // => 'abcaHelloabca'
centerPad('Gook Luck!', 30, '*~') // => '*~*~*~*~*~Gook Luck!*~*~*~*~*~'
centerPad('gH', 7, 'mKFVIFj')