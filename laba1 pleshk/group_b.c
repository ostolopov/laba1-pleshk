#include "group_b.h"

//1. Нахождения количества чисел в последовательности.
//2. Нахождения суммы последовательности чисел.
//3. Нахождения произведения последовательности чисел.
//4. Нахождения максимального числа последовательности чисел.
//5. Нахождения минимального числа последовательности чисел.
//6. Нахождения среднего арифметического значения последовательности чисел.
//7. Подсчета количества положительных, отрицательных и нулевых чисел.
//8. Подсчета количества пар чисел, у которых первое число равно второму. Длина последовательности кратна 2.
//9. Определения порядковых номеров отрицательных чисел.
//10. Определения порядковых номеров положительных чисел.
//11. Определения порядковых номеров нулей.
//12. Определения порядкового номера минимального числа.
//13. Определения порядкового номера максимального числа.
//14. Определения порядкового номера последнего нуля.

void numbers_in_sequence (void)
{
    int number, check, count = 0;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1)
    {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        count++;
    }
    printf("Количество чисел в последовательности: %d\n\n", count);
}

void sum_sequence (void)
{
    int number, check, sum = 0;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1)
    {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        sum += number;
    }
    printf("Сумма чисел в последовательности: %d\n\n", sum);
}
                      
void multi_sequence (void)
{
    int number, check, res = 1;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1)
    {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        res *= number;
    }
    printf("Произведение чисел в последовательности: %d\n\n", res);
}


void max_in_sequence (void)
{
    int number, check, max;
    printf("Введите числа (777 для завершения ввода):\n");
    check = scanf("%d", &number);
    if (number == 777 || check == EOF)
    {
        return;
    }
    max = number;
    while (1)
    {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        if (number > max)
        {
            max = number;
        }
    }
    printf("Максимальное число в последовательности: %d\n\n", max);
}

void min_in_sequence (void)
{
    int number, check, min;
    printf("Введите числа (777 для завершения ввода):\n");
    check = scanf("%d", &number);
    if (number == 777 || check == EOF)
    {
        return;
    }
    min = number;
    while (1) {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        if (number < min)
        {
            min = number;
        }
    }
    printf("Минимальное число в последовательности: %d\n\n", min);
}

void arithmetic_mean (void)
{
    int number, check, count = 0, sum = 0;
    double res;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1)
    {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        count++;
        sum += number;
    }
    res = (double) sum / count;
    printf("среднее арифметическое значение последовательности: %f\n\n", res);
}

void positive_and_negative (void)
{
    int number, check, count_positive = 0, count_negative = 0, count_null = 0;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1)
    {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        if (number > 0) {
            count_positive++;
        } else if (number < 0)
        {
            count_negative++;
        } else
        {
            count_null++;
        }
    }
    printf("количество положительных: %d\nколичество отрицательных: %d\nколичество нулевых чисел: %d\n\n", count_positive, count_negative, count_null);
}

void couple_counter (void)
{
    int check, first, second, flag = 0, count = 0;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1)
    {
        check = scanf("%d", &first);
        if (first == 777 || check == EOF)
        {
            break;
        }
        flag++;
        check = scanf("%d", &second);
        if (second == 777 || check == EOF)
        {
            break;
        }
        flag++;
        if (first == second)
        {
            count++;
        }
        
    }
    if (flag % 2 != 0)
    {
        printf("Ошибка ввода!/n/n");
    } else
    {
        printf("Количество пар чисел, у которых первое число равно второму: %d\n\n", count);
    }
    
    
}

void sequence_number_negative (void)
{
    int number, check, index = 1;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1)
    {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        if (number < 0)
        {
            printf("Отрицательное число %d имеет порядковый номер: %d\n", number, index);
            index++;
        }
    }
}

void sequence_number_positive (void)
{
    int number, check, index = 1;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1)
    {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        if (number > 0)
        {
            printf("Положительное число %d имеет порядковый номер: %d\n", number, index);
            index++;
        }
    }
}

void sequence_number_null (void)
{
    int number, check, index = 1;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1)
    {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        if (number == 0)
        {
            printf("Нуль имеет порядковый номер: %d\n", index);
            index++;
        }
    }
}

void sequence_number_min (void)
{
    int number, check, min, index = 0, count = 1;
    printf("Введите числа (777 для завершения ввода):\n");
    check = scanf("%d", &number);
    if (number == 777 || check == EOF)
    {
        return;
    }
    min = number;
    while (1) {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        count++;
        if (number < min)
        {
            min = number;
            index = count;
        }
    }
    printf("Порядковый номер минимального числа (%d) в последовательности: %d\n\n", min, index);
}

void sequence_number_max (void)
{
    int number, check, max, index = 0, count = 1;
    printf("Введите числа (777 для завершения ввода):\n");
    check = scanf("%d", &number);
    if (number == 777 || check == EOF)
    {
        return;
    }
    max = number;
    while (1) {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        count++;
        if (number > max)
        {
            max = number;
            index = count;
        }
    }
    printf("Порядковый номер максимального числа (%d) в последовательности: %d\n\n", max, index);
}

void sequence_number_last_null (void)
{
    int number, check, index = 0, count = 0;
    printf("Введите числа (777 для завершения ввода):\n");
    while (1) {
        check = scanf("%d", &number);
        if (number == 777 || check == EOF)
        {
            break;
        }
        count++;
        if (number == 0)
        {
            index = count;
        }
    }
    printf("Порядковый номер последнего нуля в последовательности: %d\n\n", index);
}
