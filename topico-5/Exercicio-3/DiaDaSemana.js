/**
 * Algoritimo de dia da semana
 * O propÃ³sito e retornar o dia da semana a partir de determinada data de entrada
 * <p>Adicionalmente, a presente classe tambï¿½m ilustra o uso de
 * <a href="http://usejsdoc.org/">JSDoc</a>.</p>
 *
 *
 * @type {module.DiaDaSemana}
 */
 export class DiaDaSemana {
    
        /**
         * Retorna a dia da semana de uma data fornecida
         *
         * @param {number} d Dia da data.
         * @param {number} m Mês da data.
         * @param {number} a Ano da data.
         * 
         * @see {@link Matematica#subtracao}
         *
         * @returns {number} Dia da semana.
         */

        let s = 0;

        diaDaSemana(d, m, a) {
            if ( a <= 1 || a <= 31 )
            {
                if( m === 1 || m === 2 )
                {
                    m = m + 12;
                    a = a - 1;
                }

                s = d + 2 * m + 3 * (m+1) / 5 + a + a / 4 - a / 100 + a / 400;

                return s % 7;

            }else 
            {
            return -1;
            }
        }
    
        
    };

    module.exports = DiaDaSemana;
