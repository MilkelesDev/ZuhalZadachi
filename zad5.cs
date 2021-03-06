using System;

namespace ConsoleApp7
{
    class Program
    {
        static void Main()
        {
            //Трицифрените числа са тези в интервала от 100 до 999, тоест ще използваме цикъл с тези данни.
            for (short i = 100; i <= 999; i++)//Използваме цикъл for, въвеждаме i от тип short, защото числото няма да приема много големи стойности. Short e достатъчно голям тип, защото приема стойности до 2^15 - 1. Няма нужда от int.
            {
                //След като сме направили цикъла да се върти в интервала от 100 до 999, трябва да проверим кои от числата в този интервал са симетрични.
                //Числата ще бъдат симетрични тогава, когато първата и последната цифра са равни.
                if (i / 100 == i % 10) //За да получим първата цифра делим числото на 100, а за последната проверяваме на колко е равен остатъка от деленето на числото с 10. След това проверяваме дали двете цифри са равни.
                {
                    Console.Write(i + " ");//След като условието е изпълнено просто задаваме команда да се отпечата числото в конзолата.
                }
            }
        }
    }
}
