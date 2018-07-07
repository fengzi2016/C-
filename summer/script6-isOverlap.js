const isOverlap = (rect1,rect2) => {
    let r1center = {
        x:rect1.x+rect1.width/2,
        y:rect1.y+rect1.height/2
    }
    let r2center = {
        x:rect2.x+rect2.width/2,
        y:rect2.y+rect2.height/2
    } 
    let xDistance = Math.abs(r1center.x-r2center.x);
    let yDistance = Math.abs(r1center.y-r2center.y);
    if(xDistance<=(rect1.width+rect2.width)/2&&yDistance<=(rect1.height+rect2.height)/2) {
        return true;
    }else {
        return false;
    }
}
const rect1 =  {x:100,y:100,width:100,height:100}
const rect2 =  {x:201,y:201,width:100,height:100}

console.log(isOverlap(rect1, rect2)) // => true