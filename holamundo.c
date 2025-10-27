#include <stdio.h>
#include <unistd.h>  // para usleep()

int main() {
    char *msg = "Hola, Nacho Amiguito!\n";
    printf("\033[1;36m"); // color cian

    for (int i = 0; msg[i] != '\0'; i++) {
        printf("%c", msg[i]);
        fflush(stdout);
        usleep(100000); // 0.1 segundos entre letras
    }

    printf("\033[0m"); // reset color
    return 0;
}
