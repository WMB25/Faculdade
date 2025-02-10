using System;

namespace Calculadora 
{
        class Calculadora
        {
            static void Main(string[] args)
            {
                Console.WriteLine("Calculadora\n");

                char[] validadorDeExpressao = { '+', '-', '*', '/' };

                Console.WriteLine("Digite o Operador ( + , - , * , / )da expressão: ");
                char operadorDaExpressao = Console.ReadKey().KeyChar;
                Console.ReadLine();
            for (int i = 0; i < validadorDeExpressao.Length; i++)
                {
                    if (operadorDaExpressao == validadorDeExpressao[i])
                    {
                    break;
                    }
                    else { Console.WriteLine("Operador Invalido!"); return; }
                }

                Console.WriteLine("Digite o PRIMEIRO coeficiente da opração: ");
                int x = Convert.ToInt32(Console.ReadLine());            
                Console.WriteLine("Digite o SEGUNDO coeficiente da opração: ");
                int y = Convert.ToInt32(Console.ReadLine());

                CalculoDeOperador operador = new CalculoDeOperador();
                long resultado = 0;
                switch (operadorDaExpressao)
                {
                    case '+':
                        resultado = operador.Soma(x, y);
                        Console.WriteLine($"O resultado da operação {x} {validadorDeExpressao[0]} {y} = {resultado}");
                    break;

                    case '-':
                        resultado = operador.subtracao(x, y);
                        Console.WriteLine($"O resultado da operação {x} {validadorDeExpressao[1]} {y} = {resultado}");
                    break;
                        
                    case '*':
                        resultado = operador.multiplicacao(x, y);
                        Console.WriteLine($"O resultado da operação {x} {validadorDeExpressao[2]} {y} = {resultado}");
                    break;
                
                    case '/':
                        resultado = operador.divisao(x, y);
                        Console.WriteLine($"O resultado da operação {x} {validadorDeExpressao[3]} {y} = {resultado}");
                    break;
                }
            }
        }
    class CalculoDeOperador
    {
        public int Soma(int x, int y)
        {
            return x + y;
        }

        public int subtracao(int x, int y)
        {
            return x - y;
        }

        public int multiplicacao(int x, int y)
        {
            return x * y;
        }

        public int divisao(int x, int y)
        {
            return x / y;
        }
    }
}