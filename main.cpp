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
    int aux;
    for(int i=0; i<(len-1)/2; i++){
        aux=*puntero;
        *puntero=*(puntero+(len-1));
        *(puntero+(len-1))=aux;
        *puntero++;
        len--;
    }
}
int main()
{
    int lista[5]={1,2,3,4,6};
    invertirLista(lista, 5);
    for(int i=0; i<5; i++){
        cout<<lista[i];
    }
    return 0;
}
