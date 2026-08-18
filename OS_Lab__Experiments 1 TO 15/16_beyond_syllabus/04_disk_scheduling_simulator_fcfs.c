#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int req[20];
    int head;
    int totalSeek = 0;

    printf("Enter Number of Disk Requests: ");
    scanf("%d", &n);

    printf("Enter Disk Requests:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &req[i]);

    printf("Enter Initial Head Position: ");
    scanf("%d", &head);

    printf("\nHead Movement Sequence:\n");
    printf("%d", head);

    for (i = 0; i < n; i++)
    {
        totalSeek += abs(req[i] - head);
        head = req[i];
        printf(" -> %d", head);
    }

    printf("\n\nTotal Head Movement = %d Cylinders\n", totalSeek);
    return 0;
}
