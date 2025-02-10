using System;
using System.Data;

public class Calendario
{
    public void ConfiguracaoCalendario(string formato)
    {
       /* Console.WriteLine(DateTime.UtcNow);*/
        var data = new DateTime();
        switch (formato)
        {
            case "DMY":
                Console.WriteLine("");
                var formatoDeEscolha = String.Format("{0: dd, MM, yyyy HH:mm:aa ff z}", data);
                Console.WriteLine(formatoDeEscolha);

            break;
        }

    }



    static void Main(string[] args)
    {
        Console.WriteLine("Calendario Da Computaria\n");
        Console.WriteLine("Digite o formato que desenja visualizar:\nMDY: Mês, Dia, Ano\nDMY: Dia, Mês, Ano\nYMD: Ano, Mês, Dia\nISO: Ano - Mês - Dia\nDigite o formato: (EX: DMY)");
        string d = Console.ReadLine();
        Calendario test = new Calendario();
        test.ConfiguracaoCalendario(d);





    }
}