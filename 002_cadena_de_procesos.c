#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int cadena_de_procesos(void)
{
    int i = 1, n = 4;
    pid_t childpid;

    for (i = 0; i < n; i++)
    {
        childpid = fork();
        /* Queremos que continue el bucle el proceso hijo  en cada iteración */
        /* childpid es el pid del hijo, si estamos en el padre */
        if (childpid > 0) /* childpid es > 0 si estamos en el proceso padre */
        {
            break;
        }
    }

    // ¿PID == 1?
    printf("Proceso %ld con padre %ld\n", (long)getpid(), (long)getppid());

    pause();

    return 0;
}
