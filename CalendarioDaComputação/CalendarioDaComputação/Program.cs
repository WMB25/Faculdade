using System;
using System.Data;
using static System.Runtime.InteropServices.JavaScript.JSType;
using System.Security.Cryptography;
using System.Reflection.Metadata.Ecma335;

public class Calendario
{
    public void ConfiguracaoCalendario(string formato)
    {
       /* Console.WriteLine(DateTime.UtcNow);*/
        var data =  DateTime.UtcNow;
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

    public void FeriadosDeTecnologia()
    {      
        Console.WriteLine("Feriados da Computação\n");
        Console.WriteLine("Digite Uma opçao para Ver o feriado: ( 1 -> ENIAC, 2 -> RFC, 3 -> Alan Turing");
        int opFeriado = Convert.ToInt32(Console.ReadLine());

        DateTime dataDoEvento = DateTime.MinValue;
        string descricaoDoEvento = "";

        switch (opFeriado)
        {
            case 1:
                descricaoDoEvento = "No dia 15 de agosto de 1946, os nortes-americanos Jonh Eckert e Jonh Mauchly apresentaram o ENIAC, " +
                    "o primeiro equipamento eletronico chamado Computador no Mundo";
                dataDoEvento = new DateTime(DateTime.Now.Year, 8, 15);
            break;

            case 2:
                descricaoDoEvento = "Em 17 de abril de 1969 foi feita a publicação da RFC1, por\r\nesse motivo considera-se esse o dia da internet até hoje.\r\n";
                dataDoEvento = new DateTime(DateTime.Now.Year, 4, 17);
            break;


            case 3:
                descricaoDoEvento = "23 de junho de 1912 Nascimento de Alan Turing, matemático e criptoanalista\r\nbritânico que é considerado o \"pai da informática\" por ter sido essencial na criação de\r\nmáquinas que, mais tarde, dariam origem aos PCs que utilizamos hoje para trabalhar,\r\nestudar e realizar nossas atividades diárias. Sua genialidade e influência fundamental na\r\nhistória da humanidade, entretanto, foram ceifadas pelo preconceito de uma época que,\r\nfelizmente, já ficou para trás";
                dataDoEvento = new DateTime(DateTime.Now.Year, 6, 23);
            break;
        }

        DateTime hoje = DateTime.Today;
        DateTime proximaDataEvento = new DateTime(hoje.Year, dataDoEvento.Month, dataDoEvento.Day);

        if (proximaDataEvento < hoje)
        {
            proximaDataEvento = proximaDataEvento.AddYears(1);
        }

        int diasRestantes = (proximaDataEvento - hoje).Days;

        Console.WriteLine("\n--- Detalhes do Evento ---");
        Console.WriteLine($"Descrição: {descricaoDoEvento}\n");
        Console.WriteLine($"Data do Evento: {dataDoEvento:dd/MM/yyyy}\n");
        Console.WriteLine($"Próxima Comemoração: {proximaDataEvento:dd/MM/yyyy}\n");
        Console.WriteLine($"Dias Restantes: {diasRestantes}");
    }
    static void Main(string[] args)
    {
        Console.WriteLine("Calendario Da Computaria\n");
        string[] formatoDisponivel = new string[] { "RRR", "MDY", "DMY", "YMD", "ISO" };  
        //transformar em Funçao!
        Console.WriteLine("Digite o formato que desenja visualizar:\nMDY: Mês, Dia, Ano\nDMY: Dia, Mês, Ano\nYMD: Ano, Mês, Dia\nISO: Ano - Mês - Dia\nRRR: S, Dia, Mês, Ano\nDigite o formato: (EX: DMY)");
        string formato = Console.ReadLine().ToUpper();

        bool FormatoValido = false;
        foreach(string forma in formatoDisponivel)
        {
            if(formato == forma)
            {
                FormatoValido = true;
                break;
            }
        }
        if (FormatoValido)
        {
            Calendario calendario = new Calendario();
            calendario.ConfiguracaoCalendario(formato);

            Console.WriteLine("\nDeseja ver os feriados da computação? (S/N)");
            string resposta = Console.ReadLine().ToUpper();

            if (resposta == "S")
            {
                calendario.FeriadosDeTecnologia();
            }
        }
        else
        {
            Console.WriteLine("Digite um formato válido.");
        }
        
    }
}