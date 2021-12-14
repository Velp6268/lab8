#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;
int comp2 (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}
int main()
{
    setlocale(LC_ALL, "rus");

    int n, m, i;
    int* x;
    int* y;
    int* z;
    cout << "\n N=";
    cin >> n;
    x = new int[n];
    cout << "\n Ввидите массив Х:";
    cout << "\n";
    for (i = 0; i < n; i++)
        cin >> x[i];
    cout << "\n Массив X: \n";
    for (i = 0; i < n; i++)
        cout << x[i] << " ";

    cout << "\n M=";
    cin >> m;
    y = new int[m];
    cout << "\n Ввидите массив У: \n";
    //    cout<<"\n";
    for (i = 0; i < m; i++)
        cin >> y[i];

    cout << "\n Массив Y: \n";
    for (i = 0; i < m; i++)
        cout << y[i] << " ";

    z = new int[n + m];
    for (i = 0; i < n; i++) z[i] = x[i];
    for (i = n; i < n + m; i++) z[i] = y[i - n];
    cout << "\n Ма ссив Z: \n";
    qsort(z, 8, sizeof(int), comp2);
    for (i = 0; i < n + m; i++)
        cout << z[i] << " ";




    delete[] x;
    delete[] y;
    return 0;
}