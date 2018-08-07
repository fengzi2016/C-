/**
 * 
 * @param {请你完成 wrapAsync 的编写，wrapAsync 返回的函数接受的参数和传入的 generator 接受的函数保持一致，并且在调用的时候会传给 generator 函数（正如上面的例子）；另外，wrapAsync 返回的函数执行结果是一个 Promise，我们可以通过这个 Promise 获取到 generator 函数执行的结果（正如上面的例子）。} generatorFn 
 */
const wrapAsync =  (generatorFn) => (...arg) => {
    let generator =  generatorFn(...arg);
    return new Promise((resolve,reject) => {
      function go(result) {
        if(result.done) {
          resolve(result.value);
          return;
        }
        return result.value.then(val=>{
         go(generator.next(val));
        })
      }
      go(generator.next());
    })
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