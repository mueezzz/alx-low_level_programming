#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

void print_remaining_days(int month, int day, int year);

/**
 * _positive_or_negative - checks for uppercase character
 * @i: digit to be checked
 * Return: 1 if true, 0 if false
 */

void positive_or_negative(int i);

/**
 * _largest_number - checks for the largest number
 * @a,b,c: digit to be checked
 * Return: 1 if true, 0 if false
 */

int largest_number(int a, int b, int c);

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day);


#endif /* MAIN_H */
