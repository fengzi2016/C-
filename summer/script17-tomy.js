const tomy = new Proxy({},{
    set: function(target,key,value,receiver) {
        console.log(`Don't Touch Me.`)
    },
    deleteProperty(target,propKey) {
        console.log(`Don't Touch Me.`)
    }

})