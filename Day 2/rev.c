#include <stdio.h>
#include <limits.h>
int main() {
int x = 123;
printf("Input:  %d\n", x);
if (x == 0) {
printf("Output: 0\n");
return 0;
}
int reversed = 0;
int temp = x;
while (temp != 0) {
int digit = temp % 10;
temp /= 10;
/* ── PRE-OVERFLOW CHECK FOR POSITIVE ──
If reversed > INT_MAX/10, multiplying by 10 overflows.
If reversed == INT_MAX/10, only safe if digit <= 7.
INT_MAX / 10 = 214748364 (integer division)            */
if (reversed > INT_MAX / 10 ||
(reversed == INT_MAX / 10 && digit > 7)) {
printf("Output: 0 (positive overflow)\n");
return 0;
}
/* ── PRE-OVERFLOW CHECK FOR NEGATIVE ──
If reversed < INT_MIN/10, multiplying by 10 overflows.
If reversed == INT_MIN/10, only safe if digit >= -8.
INT_MIN / 10 = -214748364 (integer division in C)       */
if (reversed < INT_MIN / 10 ||
(reversed == INT_MIN / 10 && digit < -8)) {
printf("Output: 0 (negative overflow)\n");
return 0;
}
/* ── SAFE TO UPDATE ── */
reversed = reversed * 10 + digit;
}
printf("Output: %d\n", reversed);
return 0;
}