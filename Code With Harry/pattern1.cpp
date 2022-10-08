#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int j = 1;
    cin >> n;
    int count = 1;
    while (i <= n)
    {
        while (j <= n)
        {
            cout << count;
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}