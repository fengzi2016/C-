
const yourName = 'ScriptOJ';
const myName = 'Jerry';
var str = `Hello, ${yourName}. I am ${myName}.`;

const highlight = (arg,...val) =>  {
    let result = "";
    for(let i = 0; i < val.length; i++){
        result += arg[i] + `<span style="color:red">${val[i]}</span>`;
    }
    
    return result;
}
highlight`Hello, ${yourName}. I am ${myName}.`
