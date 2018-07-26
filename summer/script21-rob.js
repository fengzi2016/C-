const rob = (nums) => {
    let preMax = 0;
    let curMax = 0;
    nums.forEach(n => {
        let temp = curMax;
        curMax = Math.max(preMax+n,curMax);
        preMax =  temp;
    });
    
    return curMax;
}
rob([1,2,3,4,5])