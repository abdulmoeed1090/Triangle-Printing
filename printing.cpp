#include <iostream>
using namespace std;

// pattern printing function for asteric
void patternPrintingForAsteric(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// pattern printing function for Digits
void patternPrintingForDigits(int rows)
{
    int n = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n;
        }
        cout << endl;
        n++;
    }
}
// pattern printing function for Digits
void patternPrintingForAlphabets(int rows)
{
    int n = 65;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << static_cast<char>(j + 64);
        }
        cout << endl;
    }
}
// main function
int main()
{
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    cout << "Triangle of " << rows << " using *"
         << "-\n";
    patternPrintingForAsteric(rows);
    cout << "Triangle of " << rows << " using *"
         << "-\n";
    patternPrintingForDigits(rows);
    cout << "Triangle of " << rows << " using *"
         << "-\n";
    patternPrintingForAlphabets(rows);
    return 0;
}
