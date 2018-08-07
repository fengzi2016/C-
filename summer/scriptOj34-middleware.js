const app = {
 
  callback (ctx) {
    console.log(ctx)
  },
  
  use (fn) {
    app.middleware = app.middleware || []
    app.middleware.push(fn)
  },
 
  go (ctx) {
    app.middleware = app.middleware || []
    app.middleware.reduceRight((p, c) =>{
      return function(){
      c(ctx,p)
    }}, () => app.callback(ctx))()
  }
 

}
  // app.use((ctx, next) => {
  
  //   console.log(1)
  //   next()
  // })
  
  // app.use((ctx, next) => {
   
  //   console.log(2)
  //   next()
  // })
  
  // app.use((ctx, next) => {
   
  //   console.log(3)
  //   next()
  // })
  
  // ... 任意调用 use 插入中间件
  
  app.go({}) // => 启动执行，最后会调用 callback 打印 => { name: 'Lucy', age: 12  }