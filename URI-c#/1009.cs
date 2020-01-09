using System;

class Program
{
    static void Main()
    {
        string nome;
        double sal, sale;
        nome = Console.ReadLine();
        sal = Convert.ToDouble(Console.ReadLine());
        sale = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("TOTAL = R$ {0:0.00}",sal+sale*.15);
    
    
    }
}