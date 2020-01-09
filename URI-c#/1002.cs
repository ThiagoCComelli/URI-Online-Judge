using System;

class Program
{
    static void Main()
    {
        double a,pi=3.14159,area;
        a = Convert.ToDouble(Console.ReadLine());
        area = pi * Math.Pow(a, 2);
        Console.WriteLine("A="+ area.ToString("0.0000" ));
    }
}
