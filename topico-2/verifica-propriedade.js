/*
Verifica se uma sequência de caracteres satisfaz a seguinte propriedade: toda letra é antecedida pelo caractere * e também 
sucedida por tal caractere. Se esta propriedade é satisfeita, então você deve retornar o valor lógico true, caso contrário, 
deve retornar o valor lógico false.  Se a sequência fornecida for vazia, então a propriedade não é satisfeita. A sequência 
contém apenas o caractere * e as letras de a até z. 
*/

function propriedade(sequencia) {
    var i = sequencia.length;
    while (i--) {
        if (letra(sequencia.charAt(i))) {
            if (!asterisco(sequencia, i - 1) || !asterisco(sequencia, i + 1)) {
                return false;
            }
        }
    }
    
    return true;
}

function letra(caractere) {
    let supostaLetra = caractere.toString();
    return supostaLetra.length == 1 && supostaLetra.match(/[a-z]/);
}

function asterisco(sequencia, posicao) {
    if (posicao < 0 || posicao >= sequencia.length) {
        return false;
    }
    
    return sequencia.charAt(posicao) == '*';
}

console.log(propriedade("*a*"));
console.log(propriedade("a*"));
console.log(propriedade("*******b*a*"));
