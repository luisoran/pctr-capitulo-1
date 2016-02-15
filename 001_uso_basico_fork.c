#include <sys/types.h> /* Para el tipo pid_t devuelto por getpid */
#include <unistd.h> /* fork y getpid */
#include <stdlib.h> /* malloc y free */
#include <stdio.h> /* printf */

int uso_basico_fork(void)
{
	int *valor = malloc(sizeof(int));
	long pid = 0;

	*valor = 0;
	fork();
	*valor = 13;
	pid = (long)getpid();
	printf("%ld: %d\n", pid, *valor);
	free(valor);

	return 0;
}
