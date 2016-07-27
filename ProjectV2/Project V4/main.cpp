/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abel
 *
 * Created on July 26, 2016, 8:50 PM
 */

#include <cstdlib>  //cstandard library//
#include <iostream> //standard output//
#include <ctime>    //random number generator//
#include <iomanip>  //output//
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));//random number generator//
    
    int number,number2, RP, RP2, EvenOdd, color; //variables//
    int a, b, c, d, e, f, g ,h ,i, j , k, l; //variables//
    float bet; //variables//
    char play;
    
    
    cout<<"CA Roulette Table"<<endl;
    cout<<"1  2  3"<<endl;
    cout<<"4  5  6"<<endl;
    cout<<"7  8  9"<<endl;
    cout<<"10 11 12"<<endl;
    cout<<"13 14 15"<<endl;
    cout<<"16 17 18"<<endl;
    cout<<"19 20 21"<<endl;
    cout<<"22 23 24"<<endl;
    cout<<"25 26 27"<<endl;
    cout<<"28 29 30"<<endl;
    cout<<"31 32 33"<<endl;
    cout<<"34 35 36"<<endl;
     
    
    //Menu//
    cout<<"This is a game of California roulette."<<endl;
    cout<<"Choose 1 to bet on one number only."<<endl;
    cout<<"Choose 2 to bet on street."<<endl;
    cout<<"Choose 3 to bet on a double street."<<endl;
    cout<<"Input any other number to make an outside bet."<<endl;
    
    
    cin>>number;
    cout<<"How much do you want to bet?"<<endl;
    cin>>bet;
    
    
    switch(number){
            case 1:                                                                  //case 1//
           cout<<"Please enter a number between 1 and 36."<<endl;
            cin>>number2;
            RP2=rand()%36+1;                                                         //random number generator//
                            if(number2==RP2){
                                cout<<"You win!!!"<<endl;
                                cout<<"You won $ "<<fixed<<setprecision(2)<<bet*35<<endl;
                                break;
                            }else{
                                cout<<"You lose. You lost $"<<bet<<endl;
                                break;
                            }
            
        
        case 2://case 4//
            cout<<"Please enter a street. These are three numbers in a row."<<endl;
            cout<<"Ex: 1-2-3, 4-5-6, 7-8-9,10-11-12, 13-14-15, etc..."<<endl;
            cin>>a>>b>>c;
            
            RP2=rand()%36+1;//random number generator//
                                if(RP2==(a||b||c)){
                                    cout<<"You win!!!"<<endl;
                                    cout<<"You won $"<<fixed<<setprecision(2)<<bet*12<<endl;
                                    break;
                                }else{
                                    cout<<"You lose. You lost $ "<<bet<<endl;
                                    break;
                                }
            
            
        case 3:                    //case 5//
            cout<<"Please enter any double street.These are any six consecutive"<<endl;
            cout<<"numbers that are two streets. Ex: 1-2-3-4-5-6."<<endl;
            cin>>a, b, c, d, e, f;
            
            RP2=rand()%36+1;//random number generator//
                                    if(RP2==(a||b||c||d||e||f)){
                                        cout<<"You win!!!"<<endl;
                                        cout<<"You won $"<<fixed<<setprecision<<bet*6<<endl;
                                        break;
                                    }else{
                                        cout<<"You lose. You lost $ "<<bet<<endl;
                                        break;
                                    }
    default:                //default output if user does not input a choice//
            cout<<"Please enter a choice for your outside bet."<<endl;
            cout<<"Enter a to bet on even or odd."<<endl;
            cout<<"Enter b to bet on red or black."<<endl;
            cout<<"Enter c for a low or high bet."<<endl;
            cout<<"Enter d to make a dozen bet."<<endl;
            cout<<"Enter e to make a column bet."<<endl;
            cout<<"Enter f to make a snake bet."<<endl;
            cin>>play;
            
        switch(play){
            case 'a':
                 cout<<"Please enter 1 for odd or 0 for even."<<endl;
            cin>>EvenOdd;
            RP=rand()%36;//random number generator//
            
                                if(EvenOdd==RP%2){           
                                    cout<<"You win!!!"<<endl;
                                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*18<<endl;
                                    break;
                                }else;{
                                    cout<<"You lose. You lost $"<<bet<<endl;
                                    break;

                        }
                                    
            case 'b':
                 cout<<"Please enter 1 for red or 0 for black."<<endl;
           cin>>color;
           RP=rand()%36;//random number generator//
       
                               if(color==RP%2){      
                                    cout<<"You win!!!"<<endl;
                                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*18<<endl;
                                    break;
                                }else{
                                    cout<<"You lose. You lost $"<<bet<<endl;
                                    break;

                                                               }
           
            case 'c':
                cout<<"Press 0 for low or 1 for high."<<endl;
                cin>>number2;
                RP2=rand()%36+1;
                
                if(number2==0&&rand()%36+1<=18){
                    cout<<"You win!!!"<<endl;
                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*2<<endl;
                                    break;
                }else if(number2==1&&rand()%36+1>=19){
                    cout<<"You win!!!"<<endl;
                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*2<<endl;
                                    break;
                }else{
                    cout<<"You lose. You lost $"<<bet<<endl;
                                    break;
                }
            case 'd':
                cout<<"Enter 1 for the first dozen, 2 for the second dozen,"<<endl;
                cout<<"or 3 for the third dozen numbers on the board."<<endl;
                cin>>number2;
                RP2=rand()%36+1;
                
                if(number2==1&&RP2<=12){
                    cout<<"You win!!!"<<endl;
                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*3<<endl;
                                    break;
                }else if(number2==2&&(RP2>=13&&RP2<=24)){
                    cout<<"You win!!!"<<endl;
                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*3<<endl;
                                    break;
                 }else if(number2==3&&(RP2>=25&&RP2<=36)){
                    cout<<"You win!!!"<<endl;
                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*3<<endl;
                                    break;
                }else{
                    cout<<"You lose. You lost $"<<bet<<endl;
                                    break;
            
            
                }
            case 'e':
                cout<<"Enter 12 digits for your column bet."<<endl;
                cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
                RP2=rand()%36+1;
                
                if(RP2==a||b||c||d||e||f||g||h||i||j||k||l){
                    cout<<"You win!!!"<<endl;
                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*2<<endl;
                                    break;
                }else{
                    cout<<"You lose. You lost $"<<bet<<endl;
                                    break;
                }
                
            case 'f':
                RP2=rand()%36+1;
               if(RP2==1||5||9||12||14||16||19||23||27||30||32||34){
                    cout<<"You win!!!"<<endl;
                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*2<<endl;
                                    break;
                }else{
                    cout<<"You lose. You lost $"<<bet<<endl;
                                    break;
                }
            default:
                cout<<"Thank you for playing. Come again soon."<<endl;
        
    }
    }
    

    return 0;
}

   