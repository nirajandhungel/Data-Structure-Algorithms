function decToBinary(num){
    let binary='';
    while(num){
        binary = num%2 + binary;
        num = Math.floor(num/2)
        
    }
    console.log(binary);

}
decToBinary(8)