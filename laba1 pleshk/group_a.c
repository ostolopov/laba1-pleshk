#include "group_a.h"

//1. Вывести числа в возрастающей последовательности.
//2. Вывести числа в убывающей последовательности.
//3. Вывести максимальное значение.
//4. Вывести минимальное значение.
//5. Вывести номер максимального числа.
//6. Вывести номер минимального числа.
//7. Вывести число, имеющее среднее значение.
//8. Вывести номер числа, имеющего среднее значение.
//9. Третье число - код операции между первыми двумя: 1 - ‘+’, 2 -‘-’, 3 -‘*’. Вывести результат операции.
//10. Первые два числа - интервал. Вывести сообщение, попадает ли третье число в заданный двумя первыми числами интервал.
//11. Первые два числа - интервал. Вывести сообщение, больше ли третье число верхней границы интервала.
//12. Первые два числа - интервал. Вывести сообщение, меньше ли третье число нижней границы интервала.
//13. Вывести сообщение является ли произведение чисел четным числом или нет.
//14. Вывести сообщение является ли сумма чисел кратной 3 или нет.


void increasing_sequence (int first, int second, int third)
{
    if (first > second)
    {
        int temp = first;
        first = second;
        second = temp;
    }
    if (first > third)
    {
        int temp = first;
        first = third;
        third = temp;
    }
    if (second > third)
    {
        int temp = second;
        second = third;
        third = temp;
    }
    printf("Числа в порядке возрастания: %d, %d, %d\n\n", first, second, third);
}

void decreasing_sequence (int first, int second, int third)
{
    if (first < second)
    {
        int temp = first;
        first = second;
        second = temp;
    }
    if (first < third)
    {
        int temp = first;
        first = third;
        third = temp;
    }
    if (second < third)
    {
        int temp = second;
        second = third;
        third = temp;
    }
    printf("Числа в порядке убывания: %d, %d, %d\n\n", first, second, third);
}

void max_number (int first, int second, int third)
{
    int max = first;
    if (second > max)
        max = second;
    if (third > max)
        max = third;
    printf("Максимальное значение равно: %d\n\n", max);
}

void min_number (int first, int second, int third)
{
    int min = first;
    if (second < min)
        min = second;
    if (third < min)
        min = third;
    printf("Минимальное значение равно: %d\n\n", min);
}

void max_number_index (int first, int second, int third)
{
    int index;
    if (first > second && first > third)
    {
        index = 1;
    } else if (second > first && second > third)
    {
        index = 2;
    } else {
        index = 3;
    }
    printf("Номер максимального числа: %d\n\n", index);
}

void min_number_index (int first, int second, int third)
{
    int index;
    if (first < second && first < third)
    {
        index = 1;
    } else if (second < first && second < third)
    {
        index = 2;
    } else {
        index = 3;
    }
    printf("Номер минимального числа: %d\n\n", index);
}

void middle_number (int first, int second, int third)
{
    int middle;
    if ((first > second && first < third) || (first < second && first > third)) {
        middle = first;
    } else if ((second > first && second < third) ||  (second < first && second > third)) {
        middle = second;
    } else {
        middle = third;
    }
    printf("Число, имеющее среднее значение: %d\n\n", middle);
}

void middle_number_index (int first, int second, int third)
{
    int index;
    if ((first > second && first < third) || (first < second && first > third)) {
        index = 1;
    } else if ((second > first && second < third) ||  (second < first && second > third)) {
        index = 2;
    } else {
        index = 3;
    }
    printf("Номер числа, имеющего среднее значение: %d\n\n", index);
}

void operations (int first, int second, int third)
{
    int res;
    if (third == 1)
    {
        res = first + second;
        printf("Результат операции \"+\": %d\n\n", res);
    }else if (third == 2)
    {
        res = first - second;
        printf("Результат операции \"-\": %d\n\n", res);
    }else if (third == 3)
    {
        res = first * second;
        printf("Результат операции \"*\": %d\n\n", res);
    } else
    {
        printf("Ошибка ввода!\n\n");
    }
}

void third_number_in (int first, int second, int third)
{
    if ((third > first && third < second) || (third < first && third > second))
        printf("Число %d лежит в заданном диапазоне\n\n", third);
    else
        printf("Число %d не лежит в заданном диапазоне\n\n", third);
}

void third_number_bigger (int first, int second, int third)
{
    if (third > first && third > second)
        printf("Число %d больше интервала\n\n", third);
    else
        printf("Число %d не больше интервала\n\n", third);
}

void third_number_smaller (int first, int second, int third)
{
    if (third < first && third < second)
        printf("Число %d меньше интервала\n\n", third);
    else
        printf("Число %d не меньше интервала\n\n", third);
}

void even_number (int first, int second, int third)
{
    int res = first * second * third;
    if (res % 2 == 0)
        printf("Произведение чисел: %d четное число\n\n", res);
    else
        printf("Произведение чисел: %d нечетное число\n\n", res);
}

void multiplicity_of_three (int first, int second, int third)
{
    int res = first + second + third;
    if (res % 3 == 0)
        printf("Сумма чисел %d кратна 3\n\n", res);
    else
        printf("Сумма чисел: %d кратна 3\n\n", res);
}
