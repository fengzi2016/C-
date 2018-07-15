const getPages = (total,itemsPerPage) => {
    if(itemsPerPage === 0 || total === 0) return 0;
    if(total<=itemsPerPage) {
        return 1;
    } else if(total%itemsPerPage === 0) {
        return total/itemsPerPage; 
    } else {
        return  Math.floor(total/itemsPerPage) + 1;
    }
}
console.log(getPages(974,21))