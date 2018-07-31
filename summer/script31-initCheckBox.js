function initCheckBox () {
    let checkall = document.getElementById('check-all');
    let liArr = document.getElementsByClassName('check-item');
    function checkAll(status) {
        for(item of liArr) {
            item.checked = status
        }
    }
    function checkUp() {
        let symbol = true;
       for(let item of liArr) {
           if(!item.checked) {
               symbol = false;
           }
       }
       return symbol;
    }
    checkall.addEventListener('click',(e)=>{
        checkAll(e.target.checked);
    })
    for(let item of liArr) {
        item.addEventListener('click',()=>{
            checkall.checked = (checkUp())
        })
    }
}