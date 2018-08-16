const cookieJar = {
    

    set (name, value, days) {
        
        console.log(new Date(Date.now() + days * 24 * 3600 * 1000))
        document.cookie = `name=${name};value=${value};days=${new Date(Date.now() + days * 24 * 3600 * 1000) }`
    },
    get (name) {
        let cookie  = document.cookie;
        let Reg =  new RegExp(`${name}=([^;]+)`);
        let result = Reg.exec(cookie);
        return result[1];
        // let result =  
        
        // let value = undefined;
        // document.cookies.map((cookie)=>{
        //     if(new Date() - cookie.createdTime >= cookie.days) {
        //         cookie.expire = true;
        //     }
        //     if(cookie.name === name && !cookie.expire) {
        //         return value = cookie.value;
        //     }  else {
        //         return  undefined;
        //     }
        // })
    },
    remove (name) {
      document.cookie = `${name}=outdate;expires=${new Date()}`
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