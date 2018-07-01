const autoBind = (ToBindClass) => new Proxy(ToBindClass,{
    construct(target,args) {
        return new Proxy(new fn(...args),{
            get:(target,key) => {
                return typeof target[key] === 'function'?target[key].bind(target):target[key]
            }
        })
    }
})

