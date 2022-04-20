// Fig.4.16: fig04_16.cpp
// Este programa classifica valores de
// um array em ordem ascedente
// EQUIPE TARIS
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void initArray(int [], int);
void printArray(int [], int );
void sortArray(int [], int);

int main()
{
    const int tamanhodoarray = 10;
    int a[tamanhodoarray];

    initArray(a, tamanhodoarray);

    printArray(a, tamanhodoarray);

    sortArray(a, tamanhodoarray);

    printArray(a, tamanhodoarray);

    cout << endl;

    return 0;
}

void initArray(int a[], int b) {

    srand(time(0));
    int i;
    for (i = 0; i < b; i++)
        a[i] = 1 + rand() % 100;

}

void printArray(int x[], int y){

    cout << "Itens de dados do array\n";
    int i;
    for (i = 0; i < y; i++)
        cout << setw(4) << x[i];

    cout << endl;
}

void sortArray(int m[], int n){

    int pass, i, guarda;
    for (int pass = 0; pass < n - 1; pass++) // passagens

        for (i = 0; i < n - 1; i++) // passagem

            if (m[i] > m[i + 1]) {
                guarda = m[i];
                m[i] = m[i + 1];
                m[i + 1] = guarda;
            }
}
