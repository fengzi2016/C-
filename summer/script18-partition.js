const partition = (arr) => {
    const swap = (a,i,j) => {
        return [a[i],a[j]] = [a[j],a[i]];
    }
    const first = arr[0];
    let i = 0, k = 1 ,j = arr.length - 1
    while(k<=j) {
        if(arr[k]<first) {swap(arr,i++,k++);}
        else if(arr[k]>first){swap(arr,j--,k)}
        else k++;
    }
  
  }
  partition([7,93,69,89,43,81,3] )