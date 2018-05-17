// Recupera a classe DiaDaSemana do módulo correspondente.
const DiaDaSemana = require('../DiaDaSemana');

// Cria uma instância utilizada pelos testes
const semana= new DiaDaSemana();

QUnit.test('Teste de data', function (assert) {

  // Executa a operação que desejamos testar
  let resultado = semana.DiaDaSemana(1,1,2000);

  // Verifica se o resultado produzido é o esperado.
  assert.equal(resultado, 3, 'Data Correta');
});


