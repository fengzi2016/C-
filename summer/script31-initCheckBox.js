function initCheckBox (elementId,allId,itemCLassName) {
    let flag = 1;
    let count = 0;
    let container = elementId ? document.getElementById(elementId) : document,
      checked = allId ? document.getElementById(allId) : document.getElementById("check-all"),
      others = itemCLassNmae ? document.getElementsByClassName(itemCLassNmae) : document.getElementsByClassName("check-item")
    others.forEach((e)=>{
        e.addEventListener('click',(li)=>{
            if(li.target.checked===true) {
                count ++;
            } else {
                count --;
            }
            if(count === others.length) {
                checkAll.checked=true;
                flag = 1;
            }
        })
        if(e.target.checked===false) {
            flag = 0;
        }
    })

    checkAll.addEventListener('click',(e)=>{
      if(e.target.checked === true ) {
        others.forEach(element => {
            element.checked = true;
        });
        flag = 1;
      }else if(flag===1&&e.target.checked === false) {
        others.forEach(element => {
            element.checked = false;
        });
      }
    })
}