using System;

class Program
{
    static void Main()
    {
        int num, hours;
        double value;
        num = Convert.ToInt32(Console.ReadLine());
        hours = Convert.ToInt32(Console.ReadLine());
        value = Convert.ToDouble(Console.ReadLine());

        Console.WriteLine("NUMBER = {0:D}\nSALARY = U$ {1:0.00}",num,(hours*value));

    }
}
