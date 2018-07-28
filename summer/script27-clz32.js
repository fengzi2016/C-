const clz32 = (num) => {
    let countZero = 0;
    if(Number(num)!==NaN) {
        num = Number(num);

        while(num) {
            console.log('num:'+num)
         let  temp = num & 1;
         console.log('temp:'+temp)
           if(temp === 0) {
               
               countZero ++;
           } else {
               countZero = 0;
           }
           num >>= 1;
        }
        return countZero;
    }
    return 32;
}
console.log(clz32('2'));