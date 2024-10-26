#ifndef group_a_h
#define group_a_h

#include <stdio.h>

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

void increasing_sequence (int first, int second, int third);
void decreasing_sequence (int first, int second, int third);
void max_number (int first, int second, int third);
void min_number (int first, int second, int third);
void max_number_index (int first, int second, int third);
void min_number_index (int first, int second, int third);
void middle_number (int first, int second, int third);
void middle_number_index (int first, int second, int third);
void operations (int first, int second, int third);
void third_number_in (int first, int second, int third);
void third_number_bigger (int first, int second, int third);
void third_number_smaller (int first, int second, int third);
void even_number (int first, int second, int third);
void multiplicity_of_three (int first, int second, int third);

#endif
