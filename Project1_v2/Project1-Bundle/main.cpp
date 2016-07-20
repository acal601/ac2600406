/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Project.cpp
 * Author: Abel Calderilla
 * Roulette App
 * Created on July 16, 2016, 10:31 PM
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
    int a, b, c, d, e, f; //variables//
    float bet; //variables//
    
    //Menu//
    cout<<"This is a game of roulette."<<endl;
    cout<<"Choose 1 to bet on one number only."<<endl;
    cout<<"Choose 2 to bet on an even or odd number."<<endl;
    cout<<"Choose 3 to bet on either red or black."<<endl;
    cout<<"Choose 4 to bet on street."<<endl;
    cout<<"Choose 5 to bet on a double street."<<endl;
    cin>>number;
    cout<<"How much do you want to bet?"<<endl;
    cin>>bet;
    
    
    switch(number){
        case 1://case 1//
           cout<<"Please enter a number between 1 and 36."<<endl;
            cin>>number2;
            RP2=rand()%36+1;//random number generator//
                if(number2==RP2){
                    cout<<"You win!!!"<<endl;
                    cout<<"You won $ "<<fixed<<setprecision(2)<<bet*35<<endl;
                    break;
                }else{
                    cout<<"You lose. You lost $"<<bet<<endl;
                    break;
                }
            
        case 2://case 2//
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
                                                      
            
                            
            
        case 3://case 3//
    
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
        case 4://case 4//
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
        case 5://case 5//
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
        default://default output if user does not input a choice//
            cout<<"Please enter a valid choice."<<endl;
            
        
                                                                            
        
    return 0;
    
    }
    }
