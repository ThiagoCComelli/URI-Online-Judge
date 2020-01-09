using System;

class Program
{
    static void Main()
    {
        int days = Convert.ToInt32(Console.ReadLine()), years, months;
        years = days / 365;
        months = (days % 365) / 30;
        days = (days % 365) % 30;

        Console.WriteLine("{0:D} ano(s)\n{1:D} mes(es)\n{2:D} dia(s)",years,months,days);
    }
}