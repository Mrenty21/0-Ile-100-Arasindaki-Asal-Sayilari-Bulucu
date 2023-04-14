#include <iostream>

using namespace std;

int main()
{
    int sayi=0;

    for(sayi = 0;sayi < 100;sayi++){

        if(sayi==0){
        }
        else if(sayi==1){
        }
        else if(sayi == 2){
            cout << sayi << endl;
        }
        else if(sayi == 3){
            cout << sayi << endl;
        }
        else if(sayi == 5){
            cout << sayi << endl;
        }
        else if(sayi == 7){
            cout << sayi << endl;
        }
        else{
            if(sayi%2==0){
            }
            else{
                if(sayi%3==0){
                }
                else{
                    if(sayi%5==0){
                    }
                    else{
                        if(sayi%7==0){
                        }
                        else{
                            cout << sayi << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
