//Caso de teste

const modulo = require("../classes");

QUnit.test('Módulo', function (assert) {

	//Executa a operação que desejamos testar
	var resultado = (0, modulo.Fatorial.fatorial(4));
	//Verifica se o resultado produzido é o esperado
	assert.equal(resultado,24,'Modulo com erro');
});

QUnit.test('Módulo', function (assert) {
	//Executa a operação que desejamos testar
	var resultado = (0,modulo.Fatorial.fatorial(5));
	//Verifica se o resultado produzido é o esperado
	assert.equal(resultado,120,'Modulo com erro')
});