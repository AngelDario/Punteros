#include <iostream>

using namespace std;

int suma(int *puntero, int len){
    int aux=0;
    for(int i=0; i<len; i++){
        aux+=*puntero++;
    }
    return aux;
}

int sumaRecursiva(int *puntero, int len){
    if(len==1){
        return *puntero;
    }else{
        return *puntero=*puntero+sumaRecursiva(puntero+1, len-1);
    }
}

void invertirLista(int *puntero, int len){
    int *punt2=puntero+len-1;
    int aux;
    for(; puntero<=punt2; *puntero++, *punt2--){
        aux=*puntero;
        *puntero=*punt2;
        *punt2=aux;
    }
}


int main()
{
    int lista[6]={1,2,3,4,5,6};
    invertirLista(lista, 6);
    for(int i=0; i<6; i++){
        cout<<lista[i];
    }
    return 0;
}
