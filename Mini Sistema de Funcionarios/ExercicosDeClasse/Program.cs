using System;
using System.Numerics;

public class Funcionarios
{
    private String nome;
    private Double salario;
    private BigInteger cpf;

    public Funcionarios(string nome, double salario, BigInteger cpf)
    {
        this.nome = nome;
        this.salario = salario;
        this.cpf = cpf;
    }   

    public string GetNome() { return nome; }
    public double GetSalario() { return salario; }
    public BigInteger GetCpf() { return cpf; }

    public double DescontoSalario()
    {
        if (salario <= 2000)
        {
            return salario;
        }
        else if (salario <= 3000)
        {
            return (salario * 0.075);
        }
        else if (salario <= 4000)
        {
            return (salario * 0.15);
        }
        else if (salario <= 5000)
        {
            return (salario * 0.225);
        }
        else { return (salario * 0.275); }        
    }

    public double CalculoSalario() { return salario - DescontoSalario(); }
}

public class Principal{

    public static List<Funcionarios> CadastrarFuncionarios()
    {
        List<Funcionarios> funcionarios = new List<Funcionarios>()
        {
            new Funcionarios("Walison Moura Braz", 7000.00, 47056722857),
            new Funcionarios("Otavio", 500.00, 400289220773),
            new Funcionarios("Kayke", 50.00, 470229692203),
            new Funcionarios("kauan", 30.00, 470229763212),
            new Funcionarios("Nicolas", 0.00, 2762517281223)
        };

        return funcionarios;
    }

    public static void ImprimirRelatorio(List<Funcionarios> funcionarios)
    {
        double totalSalarioBruto = 0;
        double totalDescontoDoSalario = 0;
        double totalDeGanhos = 0;

        Console.WriteLine("Relatorio de Pagamento: \n");
        foreach (var colaborador in funcionarios)
        {
            double bruto = colaborador.GetSalario();
            double desconto = colaborador.DescontoSalario();
            double liquido = colaborador.CalculoSalario();

            totalSalarioBruto += bruto;
            totalDescontoDoSalario += desconto;
            totalDeGanhos += liquido;

            Console.WriteLine($"Funcionário: {colaborador.GetNome()}");
            Console.WriteLine($"CPF: {colaborador.GetCpf()}");
            Console.WriteLine($"Salário Bruto: R$ {bruto:F2}");
            Console.WriteLine($"Desconto: R$ {desconto:F2}");
            Console.WriteLine($"Salário Líquido: R$ {liquido:F2}\n");
        }
        Console.WriteLine("Resumo Geral: ");
        Console.WriteLine($"Total Salário Bruto: R$ {totalSalarioBruto:F2}");
        Console.WriteLine($"Total Descontos: R$ {totalDescontoDoSalario:F2}");
        Console.WriteLine($"Total Salário Líquido: R$ {totalDeGanhos:F2}");
    }

    public static void Main(String[] args)
    {
        List<Funcionarios> funcionarios = CadastrarFuncionarios();
        ImprimirRelatorio(funcionarios);
    }
}

