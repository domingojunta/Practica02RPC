struct entrada {
    int operando1;
    int operando2;
    int operacion;
};

struct salida {
    int resultado;
    int resultado2;
    char mensaje[255];
};

program CALCULADORA_PROGRAMA{
    version CALCULADORA_VERSION {
        salida SUMA(entrada)=1;
        salida RESTA(entrada)=2;
        salida MULTIPLICACION(entrada)=3;
        salida DIVISION(entrada)=4;
    }=1;
}=0x20000001;