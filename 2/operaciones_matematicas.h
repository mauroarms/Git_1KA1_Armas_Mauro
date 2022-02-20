int suma(int a, int b){
    int resultado = a+b;
    return resultado;
};

int resta (int a, int b){
    int resultado = a - b;
    return resultado;
}
int multiplicacion(int a, int b){
    int producto = a*b;
    return producto;
}
float division(int a, int b){

    if (b!=0){
        float cociente = (float)a/b;
        return  cociente;
    }
}