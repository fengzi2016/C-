const wrapAsync =  (generatorFn) => (...arg) => {
    let generator =  generatorFn(...arg);
    function reciver() {
        
    }
    return new Promise((resolve,reject) => {
        try {
            let _res = generator.next().value;
            while(_res !== undefined) {
                
                _res = generator.next().value;
            }
            
        } catch(e) {
            reject(e);
        }  
    });
}
const getData = (name) => {
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        resolve('My name is ' + name)
      }, 100) // 模拟异步获取数据
    })
  }
  
  const run = wrapAsync(function * (lastName) {
    const data1 = yield getData('Jerry ' + lastName)
    const data2 = yield getData('Lucy ' + lastName)
    return [data1, data2]
  })

  
  run('Green').then((val) => {
    console.log(val) // => [ 'My name is Jerry Green', 'My name is Lucy Green' ]
  })