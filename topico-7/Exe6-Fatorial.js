/**
 * Cálculo de Fatorial
 * @author Alfredo Souza Maia
 * @copyright Todos direitos reservados 
 * @version 1.0
 */

/**@type {number}*/
// ESLint (define variáveis globais)
/* global console, process,exports */
let cap_proces = process.argv[2]; 
let fat =  parseInt(cap_proces);
/**@type {number}*/
let i = 2;
/**@type {number}*/
let f = 1;

/** 
 * @function Retorna o fatorial de um número
 * @param {number} fat - número inteiro de entrada
 * @example Entre com o número 5
 * @returns Retorna o valor do fatorial
*/

function fatorial(fat) {

    while (i <= fat) {
        f = f * i;
        i = i + 1;
    }

    /**@returns Retorno da função */
    return f;

}

console.log(fatorial(fat));

/**@export Função exportada para caso de teste */
exports.fatorial = fatorial;
