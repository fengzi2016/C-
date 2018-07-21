const addClass = (dom, name) => {
    dom.classList.add(name);
}
const removeClass = (dom, name) => {
    dom.classList.remove(name);
}
const hasClass = (dom, name) => {
    return dom.classList.contains(name)
}