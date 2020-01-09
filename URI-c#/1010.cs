using System;

class Program
{
    static void Main()
    {
        string[] num;
        double tot = 0;

        for(int i = 0; i < 2; i++)
        {
            num = Console.ReadLine().Split(" ");

            tot += Convert.ToInt32(num[1]) * Convert.ToDouble(num[2]);
        }

        Console.WriteLine("VALOR A PAGAR: R$ {0:0.00}", tot);

    }
}