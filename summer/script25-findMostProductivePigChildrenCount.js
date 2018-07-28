const findMostProductivePigChildrenCount = (dom) => {
    let result = [];
    function findMost (pigs,result) {
        let children = [];
        let most = 0;
        for(let pig of pigs) {
            //ParentNode.childElementCount 只读属性返回一个无符号长整型数字，表示给定元素的子元素数。
            if(pig.childElementCount) {
                children.push(...pig.children);
                if(pig.childElementCount>most) {
                    most = pig.childElementCount;
                }
            }
        }
        result.push(most);
        if(children.length){find(children,result)};
    }
     find([dom],result);
     return result; 
  }