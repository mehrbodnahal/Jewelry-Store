#include<iostream>

using namespace std;

int main()
{
   


    int select_item; 
    int ring = 30;
    int necklace = 60;
    int b = 15;
    int cash = 100;
    string item;
    int price;

menu:
    cout << "[Welcome to jewelry shop]" << endl;
    cout << "cash available: " << "$" << (cash) << endl;
    cout << "1-rings = $30" << endl;
    cout << "2-necklace = $60" << endl;
    cout << "3-bracelet = $15"<<endl;
    cout << "4-add item:" << item << "=" << "$" << price << endl;
    

    cout << "choose (1-4):";
    

    cin>>select_item;
    switch(select_item)
    {
        case 1 :
        {
            
                cout << "would you like to purchase a ring?"<<endl;
                string rings;
                cin >> rings;
                if(rings == "yes")
                {
                   
                    cout << "ring purchased!" << endl;
                    cash = cash - ring;
                    cout << "total cash available: "<< "$" << cash << endl;

                    
                }
              

                break;
                
        }

        case 2 :
        {
            cout << "would you like to purchase a necklace?"<<endl;
            string necklaces;
            cin >> necklaces;
            if(necklaces == "yes")
            {
                cout << "necklace purchased!"<<endl;
                cash = cash - necklace;
                cout << "total cash available: " << "$" << cash << endl;
            }
            break;
              }

        case 3 :
        {
            cout << "would you like to purchase a bracelet?"<<endl;
            string bracelet;
            cin >> bracelet;
            if(bracelet == "yes")
            {
                cout << "bracelet purchased!" << endl;
                cash -= b;
                cout << "total cash available: "<< "$" << cash << endl;
            }

            break;
        }
        case 4 :
        {
            cout << "item or items:";
            cin >> item;

            cout << "price($) = ";
            
            cin >> price;

            break;
        }
        }

    cout << "-----------------------------" << endl;

    goto menu;
}
