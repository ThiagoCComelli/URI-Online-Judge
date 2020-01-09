using System;

class Program
{
    static void Main()
    {
        int n = Convert.ToInt32(Console.ReadLine());
        double pi = 3.14159;
        Console.WriteLine("VOLUME = {0:0.000}",(4.0/3)*pi*Math.Pow(n,3));
        

    }
}