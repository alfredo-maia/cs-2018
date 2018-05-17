import { diaDaSemana } from "DiaDaSemana";

const semana = new DiaDaSemana();

let argument1 = process.argv [ 2 ];
let argument2 = process.argv [ 3 ];
let argument3 = process.argv [ 4 ];

let dia = parseInt(argument1);
let mes = parseInt(argument2);
let ano = parseInt(argument3);

console.log(semana.diaDaSemana(dia, mes, ano));


