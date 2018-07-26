(()=>{
    const f = window.$;
    window.$ = {
        noConflict() {
            window.$ = f;
            return this;
        }
    }
})