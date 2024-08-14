#include <iostream>
#include <cstdlib>
using namespace std;

int filas;
int columnas;
int filas2;
int columnas2;
int mat;
int opcion;
int opcion2;
void menu(){
    printf("\n");
    printf("\n");
    std::cout << "Seleccione una opcion:" << endl;
    std::cout << "1. Crear matriz" << endl;
    std::cout << "2. Reiniciar matriz" << endl;
    std::cout << "3. Salir del programa" << endl;
    std::cout << "Ingrese la opcion deseada: " << endl;
    printf("\n");
    printf("\n");
    std::cin >> opcion;
}
void menu2()
{
    printf("\n");
    printf("\n");
    std::cout << "Seleccione una opcion:" << endl; 
    std::cout << "1. Sumar Matriz" << endl;
    std::cout << "2. Triangulacion Reflexiva" << endl;
    std::cout << "3. Reiniciar matriz" << endl;
    std::cout << "4. Salir" << endl;
    std::cout << "Ingrese la opcion deseada: " << endl;
    printf("\n");
    printf("\n");
    std::cin >> opcion;
}
void menu3()
{
    printf("\n");
    printf("\n");
    std::cout << "¿Como deseas crear la matriz?" << endl;
    std::cout << "Seleccione una opcion:" << endl; 
    std::cout << "1. Manual" << endl;
    std::cout << "2. Aleatorio" << endl;
    std::cout << "3.Salir" << endl ;
    std::cout << "Ingrese la opcion deseada: " << endl;
    printf("\n");
    printf("\n");
    cin >> opcion;
}
void crearMatrizManual(int matriz[20][20], int filas, int columnas, int matriz2[20][20])
{
    int posicion;
    cout << "Matriz1: " << endl;
    cout << "Filas: " << filas << " Columnas: " << columnas << endl;
    for (int i = 0; i < filas; i++)
    {
        printf("[ ");
        for (int j = 0; j < columnas; j++)
        {
            cout << "Ingrese valor para la posicion [" << i << "][" << j <<"]" << endl;
            cin >> posicion;
            matriz[i][j] = posicion;
            printf("%i", matriz[i][j]);
            if (j + 1 < columnas) 
            {
                printf(" , ");
            }
            if (j + 1 == columnas) 
            {
                printf(" ]");
                printf("\n");
                printf("\n");
            }
        }
    }
cout << "Matriz2: " << endl;
    cout << "Filas: " << filas2 << " Columnas: " << columnas2 << endl;
    for (int i = 0; i < filas2; i++)
    {
        printf("[ ");
        for (int j = 0; j < columnas2; j++)
        {
            cout << "Ingrese valor para la posicion [" << i << "][" << j <<"]" << endl;
            cin >> posicion;
            matriz2[i][j] = posicion;
            printf("%i", matriz2[i][j]);
            if (j + 1 < columnas2) 
            {
                printf(" , ");
            }
            if (j + 1 == columnas2) 
            {
                printf(" ]");
                printf("\n");
                printf("\n");
            }
        }
    }

}
void crearMatriz(int matriz[20][20], int filas, int columnas, int matriz2[20][20]) 
{
    int cont =  1;
    int cont2 = 1;
    cout << "Matriz1: "<< endl;
    cout << "Filas: " << filas << " Columnas: " << columnas << endl;
    printf("\n");
    for (int i = 0; i < filas; i++)
    {
        printf("[ ");
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = std::rand ()%1023;
            cont += 1;
            printf("%i", matriz[i][j]);
            if (j + 1 < columnas) {
                printf(" , ");
            }
            if (j + 1 == columnas) {
                printf(" ]");
                printf("\n");
                printf("\n");
            }
        }
    }
    cout << "Matriz2: "<< endl;
    cout << "Filas: " << filas2 << " Columnas: " << columnas2 << endl;
    printf("\n");
    for (int i = 0; i < filas2; i++)
    {
        printf("[ ");
        for (int j = 0; j < columnas2; j++)
        {
            matriz2[i][j] = std::rand ()%1023;
            cont2 += 1;
            printf("%i", matriz2[i][j]);
            if (j + 1 < columnas2) {
                printf(" , ");
            }
            if (j + 1 == columnas2) {
                printf(" ]");
                printf("\n");
                printf("\n");
            }
        }
    }
}
void sumar_matriz(int matriz[20][20], int matriz2[20][20],  int matrizres[20][20], int filas, int columnas){
    if (filas == filas2 && columnas == columnas2)
    {
        cout << "Matriz Resultado: " << endl;
        for (int i = 0; i < filas; i++)
        {
            printf("[ ");
            for (int j = 0; j < columnas; j++)
            {
                matrizres[i][j] = matriz[i][j] + matriz2[i][j];
                printf("%i", matrizres[i][j]);
                if (j + 1 < columnas)
                {
                    printf(" , ");
                }
                if (j + 1 == columnas)
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
void reflexiva(int matriz[20][20], int matriz2[20][20], int filas, int columnas)
{
    bool reflex = true;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (matriz[i][j] != matriz2[(filas - i) - 1][(columnas - j) - 1])
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
    bool bandera2 = false;
    bool reiniciar = false;
    bool bandera = false;
    //while (reiniciar != true){
        do {
            cout << "Ingrese las dimensiones de la matriz_1 deseada: " << endl;
            cout << "Filas (2-20): " << endl;
            cin >> filas;
            if (filas < 2 || filas > 20) {
                cout << "Valor invalido. Las filas deben estar entre 2 y 20." << endl;
            }
        } while (filas < 2 || filas > 20);
        do {
            cout << "Columnas (2-20): " << endl;
            cin >> columnas;
            if (columnas < 2 || columnas > 20) {
                cout << "Valor invalido. Las columnas deben estar entre 2 y 20." << endl;
            }
        } while (columnas < 2 || columnas > 20);
        int matriz[20][20];
        do {
            cout << "Ingrese las dimensiones de la matriz_2 deseada: " << endl;
            cout << "Filas (2-20): " << endl;
            cin >> filas2;
            if (filas2 < 2 || filas2 > 20) {
                cout << "Valor invalido. Las filas deben estar entre 2 y 20." << endl;
            }
        } 
        while (filas2 < 2 || filas2 > 20);
        do {
            cout << "Columnas (2-20): " << endl;
            cin >> columnas2;
            if (columnas2 < 2 || columnas2 > 20) {
                cout << "Valor invalido. Las columnas deben estar entre 2 y 20." << endl;
            }
            } 
        while (columnas2 < 2 || columnas2 > 20);


        int matriz2[20][20];
        int matrizres[20][20];

        do {
            menu();
            switch (opcion) 
                {
                case 1:
                    // Crear dos matrices
                    do
                    {   
                        menu3();
                        switch(opcion)
                        {
                            case 1:
                                crearMatrizManual(matriz, filas, columnas, matriz2);
                                bandera2 = true;
                                //return 0;
                                break;
                            case 2:
                                crearMatriz(matriz, filas, columnas, matriz2);
                                bandera2  = true;
                                //return 0;
                                break;
                            case 3:
                                cout << "Se salio del programa" << endl;
                                return 0;
                                break;

                        }

                    }while(bandera2 == false);
                    bandera = true;
                    break;

                case 2:
                    cout << "Reiniciar Matrices" << endl;
                    reiniciar = true;
                    main();
                    return 0;
                    break;
                case 3:
                    cout << "Se salio del programa" << endl;
                    return 0;
                    break;
                default:
                    cout << "Entrada Invalida, por favor ingrese el numero correspondiente a la opcion deseada." << endl;
                    menu();
                    return 0;
                    break;
                }
            } while (bandera == false);
        do
            {
                menu2();
                switch (opcion)
                {
                    case 1:
                        sumar_matriz(matriz, matriz2, matrizres, filas, columnas);
                        break;
                        case 2:
                            reflexiva(matriz, matriz2, filas, columnas);
                            break;
                        case 3:
                            cout << "Reiniciar Matrices" << endl;
                            main();
                            break;
                        case 4:
                            cout << "Se salio" << endl;
                            return 0;
                            break;
                        default: 
                            cout << "Entrada Invalida, por favor ingrese el numero correspondiente a la opcion deseada." << endl;
                            menu2();
                            break;
                }
            }while (bandera);
    //}
    return 0;
}
