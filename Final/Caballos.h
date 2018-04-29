#ifndef CABALLOS_H
#define CABALLOS_H

#include <signal.h>

#define MEDIO 0
#define PRIMERO 1
#define ULTIMO 2

#define META -1

#define SENAL_CABALLO SIGUSR1

#define FILE_CABALLO_KEY "/bin/ls"
#define CABALLO_KEY 33

typedef struct _mensaje{
	long type;
	char text[100];
}mensajeCaballo;

int caballoAvanza(int modo);

int carreraAcabada(int *pids, int numCaballos);

int posicionCaballo(int num, int *lista, int numCaballos);

void caballo(int numero, int pipe[2], int lonCarrera);

#endif /* CABALLOS_H */