using System;

class Program
{
    static void Main()
    {
        double a, b,res;
        a = Convert.ToDouble(Console.ReadLine());
        b = Convert.ToDouble(Console.ReadLine());
        res = (a * 3.5 + b * 7.5) / 11;
        Console.WriteLine("MEDIA = {0:0.00000}",res);
    }
}
