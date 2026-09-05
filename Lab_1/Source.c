#include <locale.h>

#include <stdio.h>


void NumberOne() 
{
    printf("1\n\t2\n\t\t3\n");

    printf("%2d\n%3d\n%4d\n%5d\n", 1, 2, 3, 4);

    printf("%10.5f\n", 12.234657);

    // 8-9
    printf("7 / 5 = %f\n", 7.0 / 5);
    printf("2000 * 4 = %d\n", 2000 * 4);

    printf("%g разделить %e равно %f\n", 5., 2000000., 5. / 2000000);

    // Меняем все на %d
    printf("%d разделить %d равно %d\n", 5, 2000000, 5 / 2000000);

    // Меняем все на %f
    printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000);

    // Меняем все на %g и %e для сравнения
    printf("%g разделить %g равно %g\n", 5., 2000000., 5. / 2000000);
    printf("%e разделить %e равно %e\n", 5., 2000000., 5. / 2000000);
}

void NumberTwo() 
{
    int N = 14;
    int K = 35;

    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", N * 60 + K);

    int hours = 23 - N;
    int minutes = 60 - K;

    if (minutes == 60) {
        minutes = 0;
        hours++;
    }
    printf("До полуночи осталось %d часов и %d минут\n", hours, minutes);

    int seconds;
    if (N >= 8) {
        seconds = (N - 8) * 3600 + K * 60;
    }
    else {
        seconds = (24 - 8 + N) * 3600 + K * 60;
    }
    printf("С 8.00 прошло %d секунд\n", seconds);

    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n", (float)N / 24, (float)K / 60);
}

void NumberTree() 
{
    // Вариант 2
    int L = 335;
    int n = 3;
    int k = 4;
    int m = 2;

    double result = (double)n / L;

    printf("Дано:\n");
    printf("\t%d\n", n);
    printf("\t%d\n", L);
    printf("\t______\n");
    printf("Ответ:");

    printf("  %+0*.*f\n", k + m + 1, m, result);
}

void HomeWork() 
{
    float Vg, Vv, S;

    printf("Введите Vg, Vv, S: ");
    scanf_s("%f %f %f", &Vg, &Vv, &S);

    printf("Время до встречи: %.2f часов\n", S / (Vg + Vv));
}

void main() 
{
	setlocale(LC_ALL, "RUS");

	// NumberOne();
	//NumberTwo();
    //NumberTree();
    HomeWork();
	getchar();

}