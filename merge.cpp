#include <iostream>
using namespace std;

void merge(int a[], int p, int q, int r)
{
    int nL = q - p + 1, nR = r - q;
    int L[nL], R[nR], x = p;
    for (int i = 0; i < nL; i++)
    {
        L[i] = a[p + i];
    }
    for (int j = 0; j < nR; j++)
    {
        R[j] = a[j + q + 1];
    }
    int s = 0, e = 0;
    while ((s < nL) && (e < nR))
    {
        if (L[s] <= R[e])
        {
            a[x] = L[s];
            s++;
        }
        else
        {
            a[x] = R[e];
            e++;
        }
        x++;
    }
    while (s < nL)
    {
        a[x] = L[s];
        x++;
        s++;
    }
    while (e < nR)
    {
        a[x] = R[e];
        x++;
        e++;
    }
}
void merge_sort(int b[], int p, int r)
{
    if (p >= r)
        return;
    int q = (p + r) / 2;
    merge_sort(b, p, q);
    merge_sort(b, q + 1, r);
    merge(b, p, q, r);
}
int main()
{
    int w;
    cout << "Enter number of elements in array = ";
    cin >> w;
    int c[w];
    for (int i = 0; i < w; i++)
    {
        cout << "Enter element at idx " << i << " = ";
        cin >> c[i];
        cout << endl;
    }
    int p = 0;
    int r = w - 1;
    merge_sort(c, p, r);
    for (int i = 0; i < w; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}