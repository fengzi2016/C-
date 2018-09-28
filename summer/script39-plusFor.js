const plusFor = function (name) { 
    let gene;
    function* generator() {
        let id = 0;
        while(true) {
            id+=1;
           yield `为${name}+${id}s`
        }
        
      }
    return function() {
          if(gene instanceof generator) {
            return gene.next().value;
          }else{
              gene = generator();
              return gene.next().value;
          }
        
    };
  }
  const counter1 = plusFor('小明')

  console.log(counter1()) // => 为小明+1s
  console.log(counter1()) // => 为小明+2s
  console.log(counter1())// => 为小明+3s

  
  const counter2 = plusFor('李梅')
  console.log(counter2()) // => 为李梅+1s
  console.log(counter2()) // => 为李梅+2s
  console.log(counter2()) // => 为李梅+3s  