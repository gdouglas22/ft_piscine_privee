#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main() {
char i = 'a';
while(i <= 'z') {
ft_putchar(i);
i++;
}
return 0;
}
