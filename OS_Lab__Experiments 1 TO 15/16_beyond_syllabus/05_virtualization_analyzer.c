#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== SYSTEM VIRTUALIZATION ANALYZER ===\n\n");

    printf("CPU INFORMATION:\n");
    system("lscpu");

    printf("\nMEMORY INFORMATION:\n");
    system("free -h");

    printf("\nKERNEL INFORMATION:\n");
    system("uname -a");

    return 0;
}
