const TRIM_REGX = /(^\s*)|(\s*$)/g
var myarr = TRIM_REGX.exec(' ScriptOJ   ');
console.log(myarr)
let result  = ' ScriptOJ   '.replace(TRIM_REGX, '') 
console.log(result);
