// printing the patterns
#include <iostream>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '*' << ' ';
        }
        cout << "\n";
    }
}
void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*' << ' ';
        }
        cout << "\n";
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << ' ';
        }
        cout << "\n";
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << ' ';
        }
        cout << "\n";
    }
}
void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << '*' << ' ';
        }
        cout << "\n";
    }
}
void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << ' ';
        }
        cout << "\n";
    }
}
void print7(int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int j = 1; j <= 2 * (n - k - 1); j++)
        {
            cout << ' ';
        }

        for (int j = 1; j <= 2 * k + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (n - k - 1); j++)
        {
            cout << ' ';
        }

        cout << "\n";
    }
}
void print8(int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int j = 1; j <= 2 * (k + 1); j++)
        {
            cout << ' ';
        }

        for (int j = 1; j <= 2 * n - (2 * k + 1); j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (k + 1); j++)
        {
            cout << ' ';
        }

        cout << "\n";
    }
}
void print9(int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int j = 1; j <= 2 * (n - k - 1); j++)
        {
            cout << ' ';
        }

        for (int j = 1; j <= 2 * k + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (n - k - 1); j++)
        {
            cout << ' ';
        }

        cout << "\n";
    }
    for (int k = 0; k < n; k++)
    {
        for (int j = 1; j <= 2 * (k); j++)
        {
            cout << ' ';
        }

        for (int j = 1; j <= 2 * n - (2 * k + 1); j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (k); j++)
        {
            cout << ' ';
        }

        cout << "\n";
    }
}
void print10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*' << ' ';
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << '*' << ' ';
        }
        cout << "\n";
    }
}
void print11(int n)
{
    int start;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
            start = 0;

        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << "\n";
    }
}
void print12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int space = 2 * (n - i);
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= space; k++)
        {
            cout << '.';
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }

        cout << "\n";
    }
}
void print13(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << k << " ";
            k += 1;
        }
        cout << "\n";
    }
}
void print14(int n)
{
    int a = 65; // important concept
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(a + j);
        }
        cout << endl;
    }
}
void print15(int n)
{
    int a = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - (i - 1); j++)
        {
            cout << char(a + j);
        }
        cout << "\n";
    }
}
void print16(int n)
{
    int a = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(a + (i - 1));
        }
        cout << "\n";
    }
}
void print17(int n)
{

    for (int i = 0; i < n; i++)
    {
        int a = 65;
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            int b = (2 * i + 1) / 2;
            cout << char(a);
            if (j < b)
                a++;
            else
                a--;
        }
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print18(int n)
{
    int a = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(a + (n - 1) - i + j) << " ";
        }
        cout << endl;
    }
}
void print19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < 2 * ((n - 1) - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
void print20(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < 2 * ((n - 1) - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << '*';
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
void print_20(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << '*';
        }

        cout << endl;
        if (i < n)
            space -= 2;
        else
            space += 2;
    }
}
void print21(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                cout << '*' << ' ';
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}
void print22(int n)
{
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            if (i == 0 || j == 0 || i == 2*n - 2 || j == 2*n - 2)
            {
                cout << n << " ";
            }
            else if( (i == 1 && j != 0 )|| (i == 2*n - 3 && j != 0) ||(i == 2*n - 3 && j != 2*n - 2)|| j==1||j==2*n-3)
            {
                cout << n-1 << " " ;
            }
            else 
            cout << " ";
        }
        cout << endl;
    }
}

int main(){

    system("cls");
    int a, b;
    cout << "enter the number of rows: ";
    cin >> a;
    // cout << "enter the number of columns: ";
    // cin >> b;
    print12(a);
    return 0;

}