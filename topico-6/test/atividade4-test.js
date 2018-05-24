//Caso de teste

const modulo = require("../atividade4");

QUnit.test('Módulo', function (assert) {

  // Executa a operação que desejamos testar
  var resultado = (0, modulo.mod(5,3));

  // Verifica se o resultado produzido é o esperado.
  assert.equal(resultado, 2, 'Modulo com erro');
});
