# 1 "8-24_hours.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "8-24_hours.c"
# 1 "main.h" 1
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
# 2 "8-24_hours.c" 2







void jack_bauer(void)
{
 int h;
 int h1;
 int m;
 int s;

 for (h = 0; h <= 2; h++)
 {
  for (h1 = 0; h1 < 4; h1++)
  {
   for (m = 0; m <= 5; m++)
   {
    for (s = 0; s <= 9; s++)
    {
     if (h <= 2 && h1 != 4)
     {
     _putchar(h + '0');
     _putchar(h1 + '0');
     _putchar(58);
     _putchar(m + '0');
     _putchar(s + '0');
     _putchar('\n');
     }
    }
   }
  }
 }
}
