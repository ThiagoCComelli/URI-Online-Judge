using System;

class Program
{
    static void Main()
    {
        int a, b, c, d;
        a = Convert.ToInt32(Console.ReadLine());
        b = Convert.ToInt32(Console.ReadLine());
        c = Convert.ToInt32(Console.ReadLine());
        d = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("DIFERENCA = {0:D}",(a*b-(c*d)));
    }
}