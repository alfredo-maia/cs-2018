// Ilustração de documentação

let idade = 10; // A partir de onde é inserida até o fim da linha

// Outra opção segue abaixo
let maioridade = idade >= 18 /* idade mínima */;

/* A documentação pode se estender
   por várias linhas.
*/

/**
 * Exibe o parâmetro recebido. 
 * OBSERVE QUE ESTA DOCUMENTAÇÃO INICIA-SE COM 2 ASTERISCOS APÓS /
 *
 * @param {string} v - O conteúdo a ser exibido
 */
 function log(v) {
   console.log(v);
 }