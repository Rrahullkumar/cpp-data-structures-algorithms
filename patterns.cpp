#include <iostream>
using namespace std;

int main()
{

    /*
     *  *  *  *
     *  *  *  *
     *  *  *  *
     *  *  *  *
     */
    // int n=3;
    // for (int i = 0; i <= n; i++)
    // {

    //     for (int j = 0; j <=n; j++)
    //     {
    //         cout << " * ";
    //     }

    //     cout <<endl;
    // }

    // return 0;

    /*
     *
     *  *
     *  *  *
     *  *  *  *
     *  *  *  *  *
     */

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << " * ";
    //     }

    //     cout << endl;
    // }

    /*
    1
    12
    123
    1234
    */

    // int n = 5;
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }



    /*
    1
    22
    333
    4444
    55555
    */
    // int n=5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }
    

    /*
     *  *  *  *  * 
    *  *  *  * 
    *  *  * 
    *  * 
    * 
    */
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    





    return 0;


}