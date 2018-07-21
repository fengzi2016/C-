class VNode {
    constructor(target,properties,children) {

        this.tagName = target;
        this.props = properties;
        this.children = children;
    }

    render() {
        let elem = document.createElement(this.tagName);
        let keys = Object.keys(this.props);
        keys.forEach((key)=>{
            elem.setAttribute(key,this.props[key]);
        })
        if (this.children) {
            this.children.map(child => {
              elem.appendChild(child instanceof VNode ? child.render() : document.createTextNode(child));
            })
          }
          return elem;
        }

    
}

const h = (target,properties,children) => {
    return new VNode(target,properties,children);
}
const ul = h('ul', {id: 'list', style: 'color: red'}, [
    h('li', {class: 'item'}, ['Item 1']),
    h('li', {class: 'item'}, ['Item 2']),
    h('li', {class: 'item'}, ['Item 3'])
  ])
  const urlDom = ul.render() // 渲染 DOM 节点和它的子节点
  ulDom.getAttribute('id') === 'list' // true
  ulDom.querySelectorAll('li').length === 3 // true