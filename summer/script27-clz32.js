const clz32 = (num) => {
    let countZero = 0;
    let countWei = 0;
    if(Number(num)!==NaN) {
        num = Number(num);
        while(num) {
        countWei++;
        let  temp = num & 1;
           if(temp === 0) {
               countZero ++;
           } else {
               countZero = 0;
           }
           num >>>= 1;
        }
        if(countWei !== 32) {
           countZero += 32 - countWei;
        }
        return countZero;
    }
    return 32;
}
console.log(clz32('good'));