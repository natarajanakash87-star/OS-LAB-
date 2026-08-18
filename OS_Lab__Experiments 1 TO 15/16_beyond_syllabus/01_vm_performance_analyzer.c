#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== VIRTUAL MACHINE PERFORMANCE ANALYZER ===\n\n");

    printf("CPU INFORMATION:\n");
    system("top -bn1 | grep 'Cpu'");

    printf("\nMEMORY INFORMATION:\n");
    system("free -h");

    printf("\nDISK INFORMATION:\n");
    system("df -h");

    return 0;
}
