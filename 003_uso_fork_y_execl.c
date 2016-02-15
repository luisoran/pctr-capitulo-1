#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int uso_fork_y_execl (void)
{
    pid_t childpid;
    int n = 4, i, result;
    char buffer[20];

    for (i = 1; i <= n; i++)
    {
        switch(childpid = fork())
        {
            case 0: // Código del hijo
                snprintf(buffer, sizeof(buffer), "%d", n);
                result = execl("/home/saihung/git/pctr-capitulo-1-hijo/Debug/pctr-capitulo-1-hijo", "pctr-capitulo-1-hijo", buffer, NULL);
                printf("Resulado de execl: %d\n", result);
                break;
        }
    }

    return 0;
}
