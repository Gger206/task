#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
if (argc != 2)
return 1;

char *input = argv[1];
char *end;

while (*input != '\0') {
double num = strtod(input, &end);
double sqrt_num = sqrt(num);

printf("%.2f ", sqrt_num);

input = end;
}

return 0;
}