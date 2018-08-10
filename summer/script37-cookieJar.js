const cookieJar = {
    
    set (name, value, days) {
        let cookie = {
            name: name,
            value: value,
            days: new Date(days),
            createdTime: new Date(),
            expire:false
        }
        document.cookies.push(cookie);
        document.cookie = `name=${name};value=${value};days=${new Date().getTime() }`
    },
    get (name) {
        let value = undefined;
        document.cookies.map((cookie)=>{
            if(new Date() - cookie.createdTime >= cookie.days) {
                cookie.expire = true;
            }
            if(cookie.name === name && !cookie.expire) {
                return value = cookie.value;
            }  else {
                return  undefined;
            }
        })
    },
    remove (name) {
      return result = document.cookies.filter((cookie)=>{
           cookie.name!==name;
       }) 
    }
  }
  
let cookie = {
    name: 'go',
    value: 'value',
    days: new Date(1),
    createdTime: new Date(),
    expire:false
}
console.log(new Date(2017))