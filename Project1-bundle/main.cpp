/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abel
 *Roulette 
 * Created on July 16, 2016, 8:26 PM
 */

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    srand(static_cast<unsigned int>(time(0)));
    
    int number,number2, RP, EvenOdd, color;
    
    cout<<"This is a game of roulette."<<endl;
    cout<<"Choose 1 to bet on one number only."<<endl;
    cout<<"Choose 2 to bet on an even or odd number."<<endl;
    cout<<"Choose 3 to bet on either black or white."<<endl;
    
    
    switch(number){
        case '1':
           cout<<"Please enter a number between 0 and 48."<<endl;
            cin>>number2;
            RP=rand()%48;
                if(number2==RP){
                    cout<<"YOU WIN!!!"<<endl;
                }else{
                    cout<<"YOU LOSE. Better luck next time."<<endl;
                    break;
                }
            
        case '2':
            cout<<"Please enter 1 for odd or 2 for even."<<endl;
            cin>>EvenOdd;
            RP=rand()%48;
            
                                    if(EvenOdd==1){
                                                    if(RP%2==0){
                                                        cout<<"You win!!!"<<endl;
                                                    }else(RP%2!=0);{
                                                        cout<<"You lose."<<endl;
                                                    }
                                    }else(EvenOdd==2);{
                                                    if(RP%2==1){
                                                        cout<<"You win!!!"<<endl;
                                                    }else(RP%2!=1);{
                                                        cout<<"You lose."<<endl;
                                                        break;
                            }
                                                      }
            
                            
            
        case '3':
    
           cout<<"Please enter 2 for black or  1 for white."<<endl;
           cin>>color;
           RP=rand()%48;
       
                                                           if(color==2){
                                                                            if(RP%2!=0){
                                                                                cout<<"You win!!!"<<endl;
                                                                            }else(RP%2==0);{
                                                                                cout<<"You lose."<<endl;
                                                                            }
                                                            }else(color==1);{
                                                                            if(RP%2!=1){
                                                                                cout<<"You win!!!"<<endl;
                                                                            }else(RP%2==1);{
                                                                                cout<<"You lose."<<endl;
                                                                                break;
            }
            }
            
            
            
            
    
            
    }
}
return 0;
                                    

    }
