using System;
using System.Data;
using static System.Runtime.InteropServices.JavaScript.JSType;
using System.Security.Cryptography;

public class Calendario
{
    public void ConfiguracaoCalendario(string formato)
    {
       /* Console.WriteLine(DateTime.UtcNow);*/
        var data = new DateTime();
        var formatoDeEscolha = "";
        switch (formato)
        {
            case "DMY":
                formatoDeEscolha = data.ToString("{0: dd / MM / yyyy HH:mm:aa ff z}");
            break;
            case "MDY":
                formatoDeEscolha = data.ToString("{0: MM / dd / yyyy HH:mm:aa}");                
            break;
            case "YMD":
                formatoDeEscolha = data.ToString("{0: yyyy/ MM / dd HH:mm:aa}");               
            break;
            case "ISO":
                formatoDeEscolha = data.ToString("{0: dd, MM, yyyy HH:mm:aa}");
            break;
            case "RRR":
                formatoDeEscolha = data.ToString("{0:r}");
            break;
        }
        Console.WriteLine(formatoDeEscolha);
    }
    static void Main(string[] args)
    {
        Console.WriteLine("Calendario Da Computaria\n");
        string[] formatoDisponivel = new string[] { "RRR", "MDY", "DMY", "YMD", "ISO" };  
        //transformar em Funçao!
        Console.WriteLine("Digite o formato que desenja visualizar:\nMDY: Mês, Dia, Ano\nDMY: Dia, Mês, Ano\nYMD: Ano, Mês, Dia\nISO: Ano - Mês - Dia\nRRR: S, Dia, Mês, Ano\nDigite o formato: (EX: DMY)");
        string formato = Console.ReadLine().ToUpper();

        bool FormatoVaido = false;
        foreach(string forma in formatoDisponivel)
        {
            if(formato == forma)
            {
                FormatoVaido = true;
                break;
            }
        }
        if (FormatoVaido)
        {
            Calendario calendario = new Calendario();
            calendario.ConfiguracaoCalendario(formato);
        }
        else
        {
            Console.WriteLine("Digite um Formato Válido");
            return;
        }
    }
}