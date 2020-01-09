using System;

class Program
{
    static void Main()
    {
        int n = Convert.ToInt32(Console.ReadLine()),hours,minutes,seconds;
        hours = n / 3600;
        n %= 3600;
        minutes = n / 60;
        seconds = n % 60;
        Console.WriteLine("{0:D}:{1:D}:{2:D}",hours,minutes,seconds);
        
    }
}