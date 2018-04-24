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
        *puntero=*puntero+sumaRecursiva(puntero+1, len-1);
        return *puntero;
    }
}
int main()
{
    int lista[5]={1,2,3,4,6};
    cout<<sumaRecursiva(lista, 5);
    return 0;
}
