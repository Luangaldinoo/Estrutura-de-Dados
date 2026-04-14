#include <stdio.h>

typedef struct {
    char especie[50];
    int diasSemAgua;
    char status;
} Planta;

void verificarIrrigacao(Planta *p) {
    if (p->diasSemAgua >= 3) {
        p->status = 'O';
        p->diasSemAgua = 0;
    }
}

int main() {
    Planta planta1 = {"Samambaia", 1, 'N'};
    Planta planta2 = {"Cacto", 5, 'N'};

    printf("ANTES:\n");
    printf("Planta 1 - %s | Dias sem agua: %d | Status: %c\n",
           planta1.especie, planta1.diasSemAgua, planta1.status);

    printf("Planta 2 - %s | Dias sem agua: %d | Status: %c\n\n",
           planta2.especie, planta2.diasSemAgua, planta2.status);

    verificarIrrigacao(&planta1);
    verificarIrrigacao(&planta2);

    printf("DEPOIS:\n");
    printf("Planta 1 - %s | Dias sem agua: %d | Status: %c\n",
           planta1.especie, planta1.diasSemAgua, planta1.status);

    printf("Planta 2 - %s | Dias sem agua: %d | Status: %c\n",
           planta2.especie, planta2.diasSemAgua, planta2.status);

    return 0;
}