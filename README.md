﻿# Checking the multiplicity of a number
Задание:
Написать функцию IsKPeriodic, которая проверяет, является ли строка кратной числу К.
Кратность — повторяемость строки каждые К символов ( должно быть больше 0).

Решение:
Алгоритм, используемый в данном коде, называется алгоритм Кнута-Морриса-Пратта (КМП).

Код использует функцию computeLPS, чтобы вычислить префикс-функцию строки, и функцию isKPeriodic, чтобы проверить,
является ли строка кратной k. При вводе корректной строки и значения k,
программа выводит сообщение "the string is a multiple of k" или "the string is NOT multiple of k!"
в зависимости от того, является ли строка кратной k.

Цикл while в функции main позволяет пользователю вводить несколько строк и значений k для проверки.
Если пользователь вводит "0" в качестве строки, программа завершает свою работу.