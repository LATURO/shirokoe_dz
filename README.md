# shirokoe_dz

<br>Срок сдачи Домашнего Задания - не позднее 28 февраля. 
<br>
<br>Отчет о выполнении задания оформляется как текстовый документ. При программной реализации (задачи 1, 2 и 4) в отчет <br>включается: условия задачи, исходный текст программы, скриншоты тестов, подтверждающих правильность реализации алгоритмов <br>решения задачи.
<br>
<br>Для задачи №2. 
<br>В программу из текстового файла вводится последовательность целых чисел до получения символа «конец файла». Числа в файле <br>могут располагаться как в строке, так и в столбце. Важно выдержать формат. Запись %2d предполагает два знака для числа. <br>Если они записаны в строке, между ними - пробел. 
<br>Исходный текст. 
<br>#include <stdio.h>
<br>
<br>void main()
<br>{ // Дескриптор файла
<br>    FILE *fp;
<br>//    fp = fopen("D:\\readfile.txt", "r");          // In line - файл с расположением чисел в строку
<br>	fp = fopen("D:\\readfile1.txt", "r");  // in column - файл с расположением чисел в столбец 
<br>	
	 int  n, i; 
	 int array[10];
	 n = 0;
    while (!feof(fp)) {    // Цикл до конца файла
		fscanf(fp,"%2d", &array[n]);	
		n = n+1;
	} 
	
	close(fp);

// Считано n чисел, выводим их. 
	for(i=0; i<n; i++)
	  	printf(" %4d", array[i]);

	printf("\n End");
}





Вариант 26.Решение всех задач с программной реализацией разместить в одном исходном тексте. При запуске программы высвечивается меню, позволяющее выбрать одну из задач или выход из программы. 
1. Задан двумерный массив из N строк и N столбцов. Найти максимальную по модулю сумму двух соседних элементов, расположенных на побочной диагонали. Вывести номера их столбцов и исходный массив, применяя средства форматирования выводимых значений. Если таких сумм не одна – вывести данные о всех.
2. В программу из текстового файла вводится последовательность целых чисел до получения символа «конец файла». Числа в файле могут располагаться как в строке, так и в столбце. Важно выдержать формат. Запись %4d предполагает четыре знака для числа. Если они записаны в строке, между ними - пробел. Введенные числа являются последовательностью, а1, а2, . . . , аn. Определить сколько из них при делении на 7 не дают остаток 1, 3 или 5. В программе нельзя использовать массивы.  
3. Функция F(n), для натуральных значений n, вычисляется следующим образом. 
F(n) = n + 1 при n ≤ 2;
F(n) = F(n − 1) + 2 · F(n − 2) при n > 2.
Чему равно значение функции F(4)?
4. По каналу связи передается последовательность положительных целых чисел, все числа не превышают 1000. Количество чисел известно, но может быть очень велико. Затем передаётся контрольное значение последовательности – наибольшее число R, удовлетворяющее следующим условиям: 
1) R – произведение двух различных переданных элементов последовательности («различные» означает, что не рассматриваются квадраты переданных чисел; допускаются произведения различных элементов последовательности, равных по величине);
2) R делится на 21.

Если такого числа R нет, то контрольное значение полагается равным 0.
В результате помех при передаче как сами числа, так и контрольное значение могут быть искажены. 
Напишите эффективную, в том числе по используемой памяти, программу (укажите используемую версию языка программирования, например, BorlandPascal 7.0), которая будет проверять правильность контрольного значения.
Программа должна напечатать отчёт по следующей форме:
Вычисленное контрольное значение: …
Контроль пройден (или – Контроль не пройден)
Перед текстом программы кратко опишите используемый Вами алгоритм решения.
На вход программе в первой строке подаётся количество чисел N. В каждой из последующих N строк записано одно натуральное число, не превышающее 1000. В последней строке записано контрольное значение.

Пример входных данных:
6 
70 
21 
997 
7 
9 
300 
21000 
Пример выходных данных для приведённого выше примера входных данных: 
Вычисленное контрольное значение: 21000
Контроль пройден
