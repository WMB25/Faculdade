using System;

public class Dados
{
    public int SorteadorDeDados()
    {
        Random dado = new Random();
        int jogada = dado.Next(1,6);
        return jogada;
    }

    static void Main(string[] args)
    {
        Dados dados = new Dados();
        string[] player = new string[2];
        int[] valorDoDado = new int[2];
        for (int i = 0; i <= player.Length - 1; i++)
        {
            Console.WriteLine($"Digite o Nome do Player {i + 1}");
            player[i] = Console.ReadLine();
            Console.WriteLine("Aperte somente 'J' para lançar o Dado");
            Console.ReadKey();
            valorDoDado[i] = dados.SorteadorDeDados();
            Console.WriteLine("\n");
        }
        //if()
        Console.WriteLine($"{player[0]} tirou {valorDoDado[0]}");
        Console.WriteLine($"{player[0]} tirou {valorDoDado[1]}");
    }
}