//请写出一个函数 initArray ，接受两个参数 m 和 n，返回一个数组，它的长度是 m，每个值都是 n。
//不能用循环
const initArray = (m,n) => {
    return new Array(m).fill(n);
}