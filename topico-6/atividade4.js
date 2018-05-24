

let varX = parseInt(process.argv[2]);
let varY = parseInt(process.argv[3]);

let mod = function (x, y){
    
    console.log('Na função');

    if (y <= 0 || x < 0 ){
        return -1;
        console.log('Entrou');
    }

    let s = x

    for (; y <= s; s++){
        s = s - y;
    }

 return s;
}

console.log(mod(varX,varY));
