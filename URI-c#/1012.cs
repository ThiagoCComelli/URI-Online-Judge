using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        double pi = 3.14159;
        string[] values = Console.ReadLine().Split(" ");
        double a= Convert.ToDouble( values[0]), b = Convert.ToDouble(values[1]), c= Convert.ToDouble(values[2]);
        List<string> lista = new List<string>() { "TRIANGULO", "CIRCULO", "TRAPEZIO", "QUADRADO", "RETANGULO" };
        foreach (string i in lista)
        {
            if (i == "TRIANGULO")
            {
                Console.WriteLine("{0}: {1:0.000}",i,(a*c)/2);
            } else if (i == "CIRCULO")
            {
                Console.WriteLine("{0}: {1:0.000}", i, pi*Math.Pow(c,2));
            } else if (i == "TRAPEZIO")
            {
                Console.WriteLine("{0}: {1:0.000}", i, ((a + b) * c) / 2);

            } else if (i == "QUADRADO")
            {
                Console.WriteLine("{0}: {1:0.000}", i, Math.Pow(b,2));
            } else if (i == "RETANGULO")
            {
                Console.WriteLine("{0}: {1:0.000}", i, a*b);
            }
        }
    }
}