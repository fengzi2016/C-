const pause  =  async (time) => {
    return new Promise((resolve)=>{
        setTimeout(resolve,time)
    })
}