#include <stdio.h>
#include "group_a.h"
#include "group_b.h"
#include "dialog.h"

void dialog_main(void)
{
    int case_number;
    int check;
    printf("Выберите подгруппу.\n(1) подгруппа A\n(2) подгруппа Б\n(0) Завершить работу программы\n");
    check = scanf("%d", &case_number);
    if (check == EOF)
    {
        printf("Работа программы прекращена.\n");
        return;
    }
    while(case_number != 0)
    {
        switch (case_number)
        {
            case 1:
                dialog_a();
                break;
            case 2:
                dialog_b();
                break;
            default:
                printf("Ошибка! Выберите из предложенных вариантов.\n\n");
                break;
        }
        printf("Выберите подгруппу.\n(1) подгруппа A\n(2) подгруппа Б\n(0) Завершить работу программы\n");
        check = scanf("%d", &case_number);
        if (check == EOF)
        {
            printf("Работа программы прекращена.\n");
            return;
        }
    }
}

void dialog_a (void)
{
    int first, second, third;
    int case_number;
    int check;
    printf("(1) Вывести числа в возрастающей последовательности.\n(2) Вывести числа в убывающей последовательности.\n(3) Вывести максимальное значение.\n(4) Вывести минимальное значение.\n(5) Вывести номер максимального числа.\n(6) Вывести номер минимального числа.\n(7) Вывести число, имеющее среднее значение.\n(8) Вывести номер числа, имеющего среднее значение.\n(9) Третье число - код операции между первыми двумя: 1 - ‘+’, 2 - ‘ -’, 3 -‘*’. Вывести результат операции.\n(10) Первые два числа - интервал. Вывести сообщение, попадает ли третье число в заданный двумя первыми числами интервал.\n(11) Первые два числа - интервал. Вывести сообщение, больше ли третье число верхней границы интервала.\n(12) Первые два числа - интервал. Вывести сообщение, меньше ли третье число нижней границы интервала.\n(13) Вывести сообщение является ли произведение чисел четным числом или нет.\n(14) Вывести сообщение является ли сумма чисел кратной 3 или нет.\n\nВведите номер программы: \n(0) Вернуться назад.\n");
    check = scanf("%d", &case_number);
    if (check == EOF)
    {
        printf("Работа программы прекращена.\n");
        return;
    }
    while(case_number != 0)
    {
        switch (case_number)
        {
            case 1:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                increasing_sequence (first, second, third);
                break;
            case 2:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                decreasing_sequence (first, second, third);
                break;
            case 3:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                max_number (first, second, third);
                break;
            case 4:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                min_number (first, second, third);
                break;
            case 5:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                max_number_index (first, second, third);
                break;
            case 6:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                min_number_index (first, second, third);
                break;
            case 7:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                middle_number (first, second, third);
                break;
            case 8:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                middle_number_index (first, second, third);
                break;
            case 9:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                operations (first, second, third);
                break;
            case 10:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                third_number_in (first, second, third);
                break;
            case 11:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                third_number_bigger (first, second, third);
                break;
            case 12:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                third_number_smaller (first, second, third);
                break;
            case 13:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                even_number (first, second, third);
                break;
            case 14:
                printf("Введите 3 числа подряд: \n");
                scanf("%d %d %d", &first, &second, &third);
                multiplicity_of_three (first, second, third);
                break;
            default:
                printf("Ошибка! Выберите из предложенных вариантов.\n\n");
                break;
        }
        printf("(1) Вывести числа в возрастающей последовательности.\n(2) Вывести числа в убывающей последовательности.\n(3) Вывести максимальное значение.\n(4) Вывести минимальное значение.\n(5) Вывести номер максимального числа.\n(6) Вывести номер минимального числа.\n(7) Вывести число, имеющее среднее значение.\n(8) Вывести номер числа, имеющего среднее значение.\n(9) Третье число - код операции между первыми двумя: 1 - ‘+’, 2 - ‘ -’, 3 -‘*’. Вывести результат операции.\n(10) Первые два числа - интервал. Вывести сообщение, попадает ли третье число в заданный двумя первыми числами интервал.\n(11) Первые два числа - интервал. Вывести сообщение, больше ли третье число верхней границы интервала.\n(12) Первые два числа - интервал. Вывести сообщение, меньше ли третье число нижней границы интервала.\n(13) Вывести сообщение является ли произведение чисел четным числом или нет.\n(14) Вывести сообщение является ли сумма чисел кратной 3 или нет.\n\nВведите номер программы: \n(0) Вернуться назад.\n");
        check = scanf("%d", &case_number);
        if (check == EOF)
        {
            printf("Работа программы прекращена.\n");
            return;
        }
    }
}


void dialog_b (void)
{
    int case_number;
    int check;
    printf("(1) Нахождения количества чисел в последовательности.\n(2) Нахождения суммы последовательности чисел.\n(3) Нахождения произведения последовательности чисел.\n(4) Нахождения максимального числа последовательности чисел.\n(5) Нахождения минимального числа последовательности чисел.\n(6) Нахождения среднего арифметического значения последовательности чисел.\n(7) Подсчета количества положительных, отрицательных и нулевых чисел.\n(8) Подсчета количества пар чисел, у которых первое число равно второму. Длина последовательности кратна 2.\n(9) Определения порядковых номеров отрицательных чисел.\n(10) Определения порядковых номеров положительных чисел.\n(11) Определения порядковых номеров нулей.\n(12) Определения порядкового номера минимального числа.\n(13) Определения порядкового номера максимального числа.\n(14) Определения порядкового номера последнего нуля.\n(0) Вернуться назад.\n");
    check = scanf("%d", &case_number);
    if (check == EOF)
    {
        printf("Работа программы прекращена.\n");
        return;
    }
    while(case_number != 0)
    {
        switch (case_number)
        {
            case 1:
                numbers_in_sequence();
                break;
            case 2:
                sum_sequence();
                break;
            case 3:
                multi_sequence();
                break;
            case 4:
                max_in_sequence();
                break;
            case 5:
                min_in_sequence();
                break;
            case 6:
                arithmetic_mean();
                break;
            case 7:
                positive_and_negative();
                break;
            case 8:
                couple_counter();
                break;
            case 9:
                sequence_number_negative();
                break;
            case 10:
                sequence_number_positive();
                break;
            case 11:
                sequence_number_null();
                break;
            case 12:
                sequence_number_min();
                break;
            case 13:
                sequence_number_max();
                
                break;
            case 14:
                sequence_number_last_null();
                break;
            default:
                printf("Ошибка! Выберите из предложенных вариантов.\n\n");
                break;
        }
        printf("(1) Нахождения количества чисел в последовательности.\n(2) Нахождения суммы последовательности чисел.\n(3) Нахождения произведения последовательности чисел.\n(4) Нахождения максимального числа последовательности чисел.\n(5) Нахождения минимального числа последовательности чисел.\n(6) Нахождения среднего арифметического значения последовательности чисел.\n(7) Подсчета количества положительных, отрицательных и нулевых чисел.\n(8) Подсчета количества пар чисел, у которых первое число равно второму. Длина последовательности кратна 2.\n(9) Определения порядковых номеров отрицательных чисел.\n(10) Определения порядковых номеров положительных чисел.\n(11) Определения порядковых номеров нулей.\n(12) Определения порядкового номера минимального числа.\n(13) Определения порядкового номера максимального числа.\n(14) Определения порядкового номера последнего нуля.\n(0) Вернуться назад.\n");
        check = scanf("%d", &case_number);
        if (check == EOF)
        {
            printf("Работа программы прекращена.\n");
            return;
        }
    }
}

