#include<stdio.h>
#include<time.h>

int generarNumero();

struct t_operandos {
    int operando1;
    int operando2;
};

int main(void)
{
    FILE *fichero;
    struct t_operandos operandos;
    fichero =fopen("datos.dat","wb");
    srand(time(NULL));

    if(fichero==NULL)
    {
        printf("Error: No se ha podido abrir el fichero datos.dat");
    }else
    {
        for(int i = 0;i < 100000;i++)
        {
            operandos.operando1=generarNumero();
            operandos.operando2=generarNumero();
            printf("Los operandos generados son %i,%i\n",operandos.operando1,operandos.operando2);
            fwrite(&operandos,sizeof(operandos),1,fichero);
        }
    }

    fclose(fichero);
    return 0;
}

int
generarNumero() {

    int limiteInferior =1;
    int limiteSuperior =100;
    int numero;

    
    numero = limiteInferior + rand() % ((limiteSuperior+1)-limiteInferior);
    return numero;

}


