#include <iostream>
using namespace std;
int filas;
int columnas;
int filas2;
int columnas2;
int mat;
int opcion;
    void menu(){
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Crear matriz" << endl;
        cout << "2. Sumar Matriz" << endl;
        cout << "3. Triangulacion Reflexiva" << endl;
        cout << "4. Reiniciar matriz" << endl;
        cout << "5. Salir del programa" << endl;
        cout << "Ingrese la opcion deseada: " << endl;
        printf("\n");
        printf("\n");
        cin >> opcion;
        }
void crearMatriz(int matriz[22][22],int filas,int columnas,int matriz2[22][22]) 
{
    int cont =  1;
    int cont2 = 1;
    cout << "Matriz1: "<< endl;
    cout << "Filas" << filas << "Columnas: " << columnas << endl;
    printf("\n");
    for (int i =0; i<filas ;i++)
    {
        printf("[ ");
        for (int j=0;j<columnas;j++)
        {
            matriz[i][j] = cont;
            cont +=1;
            printf("%i",matriz[i][j]);
            if (j+1 < columnas){
                printf(" , ");
            }
            if (j+1 == columnas)
            {
            printf(" ]");
            printf("\n");
            printf("\n");
            }
        }
    }
    cout << "Matriz2: "<< endl;
    cout << "Filas" << filas2 << "Columnas: " << columnas2 << endl;
    printf("\n");
    for (int i =0; i<filas2 ;i++)
    {
        printf("[ ");
        for (int j=0;j<columnas2;j++)
        {
            matriz2[i][j] = cont - cont2;
            cont2 +=1;
            printf("%i",matriz2[i][j]);
            if (j+1 < columnas2){
                printf(" , ");
            }
            if (j+1 == columnas2)
            {
            printf(" ]");
            printf("\n");
            printf("\n");
            }
        }
    }
}
void sumar_matriz(int matriz[22][22],int matriz2[22][22],int matrizres[22][22],int filas,int columnas){
    if (filas == filas2 && columnas == columnas2)
    {
        cout << "Matriz Resultado: " << endl;
        for (int i = 0;i<filas;i++)
        {
            printf("[ ");
            for (int j = 0;j<columnas;j++)
            {
                matrizres[i][j] = matriz[i][j] + matriz2[i][j];

                printf("%i",matrizres[i][j]);
                if (j+1 < columnas)
                {
                    printf(" , ");
                }
                if (j+1 == columnas)
                {
                printf(" ]");
                printf("\n");
                printf("\n");
                }
            }
        }
    }
    else{
        cout << "No se cumplen las condiciones para sumar" << endl;
    }
}
void reflexiva(int matriz[22][22],int matriz2[22][22],int filas,int columnas)
{
    bool reflex = true;
    for (int i=0;i<filas;i++)
    {
        for (int j=0;j<columnas;j++)
        {
            if (matriz[i][j] != matriz2[(filas-i)-1][(columnas-j)-1])
            {
                reflex = false;
            }
        }
    }  
    if (reflex == true)
    {
        cout << "Las matrices creadas si son reflexivas entre si" << endl;
    }
    else
    {
        cout << "Las matrices creadas no son reflexivas entre si" << endl;
    }
}
int main() {
    bool reiniciar = false;
    while (reiniciar != true){
        cout << "Ingrese las dimensiones de la matriz_1 desada: " << endl;
        cout <<"Filas: " << endl;
        cin >> filas;
        cout << "" << endl;
        cout << "Columnas: " << endl;
        cin >> columnas;
        cout << "" << endl;
        int matriz[filas][columnas];

        cout << "Ingrese las dimensiones de la matriz_2 desada: " << endl;
        cout <<"Filas: " << endl;
        cin >> filas2;
        cout << "" << endl;
        cout << "Columnas: " << endl;
        cin >> columnas2;
        cout << "" << endl;
        int matriz2[filas2][columnas2];
        int matrizres[filas][columnas];
    // Menú de opciones
    do{
        menu();
        switch (opcion) 
        {
            case 1:
                crearMatriz(matriz,filas,columnas,matriz2);
                break;
            case 2:
                sumar_matriz(matriz,matriz2,matrizres,filas,columnas);
                break;
            case 3:
                reflexiva(matriz,matriz2,filas,columnas);
                break;
            case 4:
                cout << "Reiniciar Matrices" << endl;
                reiniciar = true;
                main();
                break;
            case 5:
                cout << "Se salio del programa" << endl;
                reiniciar = true;
                break;
            default:
                cout << "Entrada Invalida porfavor ingrese el numero correspondiente a la opcion deseada";
                menu();
                break;
            return 0;
        }
    }while (opcion != 5);
    }
}
