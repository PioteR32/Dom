// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string login[43];
    string password[30];
    string give_me_login;
    string give_me_password;
    int switchh;
    int login_table = 0;
    int table_password = 0;
    int e = 0;

    int f = 9;
    while (f != e) 
    {
        cout << " 1 Sign in ";
        cout << " 2 Sign up ";
        cin >> switchh;
        switch (switchh)
        {

        case 1:
            
            cout << " Write login ";
            cin >> login[login_table];
          
            cout << " write password ";
            cin >> password[table_password];
            cout << password[login_table];
            table_password++;
            login_table++;


            break;

        case 2:
            int to_login = 0;
            int to_password = 0;
            while (password[to_password] != give_me_password)
            {
                cout << "Give me login ";
                cin >> give_me_login;
                if (give_me_login == login[to_login]) 
                {
                    cout << "Give me password ";
                    cin >> give_me_password;
                    if (give_me_password == password[to_password]) 
                    {
                        cout << "Zalogowales sie ";


                    }
                    


                    if (give_me_password != password[to_password])
                    {
                        cout << " Bad password";
                    }
                }
                if (give_me_login != login[to_login])
                {
                    while (give_me_login != login[to_login] || to_login != 100) 
                    {
                        to_login++;


                    }
                




                    
                



                }


            }


            


            break;

        }
    }
}

