using System;

class Program
{
    static void Main()
    {
        string saida;
        string[] values = Console.ReadLine().Split(" ");
        double x = Convert.ToDouble(values[0]), y = Convert.ToDouble(values[1]);
        if (x == 0 && y != 0)
        {
            saida = "Eixo Y";
        }
        else if (x != 0 && y == 0)
        {
            saida = "Eixo X";
        }
        else if (x == 0 && y == 0)
        {
            saida = "Origem";
        }
        else if (x > 0 && y > 0)
        {
            saida = "Q1";
        }
        else if (x > 0 && y < 0)
        {
            saida = "Q4";
        }
        else if (x < 0 && y > 0)
        {
            saida = "Q2";
        }
        else
        {
            saida = "Q3";
        }
        Console.WriteLine(saida);
    }
}