const proposeToMissHan = (isOK) => {
    return new Promise((resolve,reject) => {
      let randTime = Math.random()*30  + 20;
      setTimeout(()=>{
           if(isOK) {
               resolve('ok')
           } else {
                reject('no')
           }
      },randTime);
    })
  }
  proposeToMissHan('ok')