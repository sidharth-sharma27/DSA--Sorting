#include <iostream>

using namespace std;
void insertion(int a[], int k)
{
    for (int i = 1; i < k; i++)
    {
        int res = a[i];
        int j = i - 1;
        while ((j >= 0) && (a[j] > res))
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = res;
    }
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
    insertion(c, w);
    for (int i = 0; i < w; i++)
    {
        cout << c[i] << " ";
    }
}