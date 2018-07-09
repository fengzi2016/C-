String.prototype.spacify = function () {
    let string = this.split('').join(' ');
    return string;
}
console.log("Script".spacify())