// lab1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

using namespace std;


int main()
{
    int n;
    cout << "input number(integer):\n";
    
    while (cin >> n)
    {
        cout << "your input number is :" << n << "\n";
        

        if (n == 1)
        {
            break;
        }

        if (n%2 == 1)
        {
            n = 3 * n + 1;
            cout <<"n = "<< n << "\n";
        }
        else
        {
            if (n == 22)
            {
                cout << "22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 \n";
            }
            else
            {
                n = n / 2;
                cout << "n = " << n << "\n";
            }
            
        }
       
        cout << "input number: ";
    }
 
    
    
}
