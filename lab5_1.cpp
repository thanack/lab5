#include<iostream>
using namespace std;

int main()
{
    int num;
    int event = 0;
    int odd = 0;
    
  while(num!=0)
    {  
      cout << "Enter an integer: ";
      cin >> num;

        if (num %2==0 && num>0)
        {
            event++;
        }
        else
        {
            odd++;
        }

    }
        cout << "#Even numbers = " << event;
        cout << "\n";
        cout << "#Odd numbers = " << odd;
    return 0;
}
