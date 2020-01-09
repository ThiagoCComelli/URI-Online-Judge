using System;

class Program
{
    static void Main()
    {
        double a, b, c,media;
        a = Convert.ToDouble(Console.ReadLine());
        b = Convert.ToDouble(Console.ReadLine());
        c = Convert.ToDouble(Console.ReadLine());
        media = (a * 2 + b * 3 + c * 5) / 10;
        Console.WriteLine("MEDIA = {0:0.0}",media);
        
    }
}