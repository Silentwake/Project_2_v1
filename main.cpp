/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 14, 2019, 1:20 PM
 * Purpose:  Rolling Dice Loop, File I/O
 */
//SANDBOX

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Set function for Random Number Generator
#include <ctime>     //Time Library
#include <fstream>   //File stream Library
#include <iomanip>
#include <string>
using namespace std;
void shuffle(int cards[], int size, char face);


    


//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    ofstream dealp, dealc;
    
    dealp.open("player_cards.dat");
    dealc.open("computer_cards.dat");
    
    char select;
    int asize=9;
    
    char facec='c';
    char faces='s';
    char faced='d';
    char faceh='h';
    
    int clubs[]={2,3,4,5,6,7,8,9,10};
    int spades[]={2,3,4,5,6,7,8,9,10};
    int diamnds[]={2,3,4,5,6,7,8,9,10};
    int hearts[]={2,3,4,5,6,7,8,9,10};

    char facecds[5][4]={{'s', 'd', 'h', 'c'},
                        {'a', 'a', 'a', 'a'},
                        {'j', 'j', 'j', 'j'},
                        {'q', 'q', 'q', 'q'},
                        {'k', 'k', 'k', 'k'}};
   
    //Deals the spades cards to both players
    for (int c=1; c<5; c++)  
    {    
    dealp<<facecds[0][0]<<facecds[c][0]<<endl;
    cout<<facecds[0][0]<<facecds[c][0]<<endl;
    c++;
    dealc<<facecds[0][0]<<facecds[c][0]<<endl;
    cout<<facecds[0][0]<<facecds[c][0]<<endl;
    }
    cout<<endl;
    for (int a=1; a<5; a++)  
    {    
    dealc<<facecds[0][1]<<facecds[a][0]<<endl;
    cout<<facecds[0][1]<<facecds[a][0]<<endl;
    a++;
    dealp<<facecds[0][1]<<facecds[a][0]<<endl;
    cout<<facecds[0][1]<<facecds[a][0]<<endl;
    }
    cout<<endl;
    for (int b=1; b<5; b++)  
    {    
    dealp<<facecds[0][2]<<facecds[b][0]<<endl;
    cout<<facecds[0][2]<<facecds[b][0]<<endl;
    b++;
    dealc<<facecds[0][2]<<facecds[b][0]<<endl;
    cout<<facecds[0][2]<<facecds[b][0]<<endl;
    }
    cout<<endl;
    for (int d=1; d<5; d++)  
    {    
    dealc<<facecds[0][3]<<facecds[d][0]<<endl;
    cout<<facecds[0][3]<<facecds[d][0]<<endl;
    d++;
    dealp<<facecds[0][3]<<facecds[d][0]<<endl;
    cout<<facecds[0][3]<<facecds[d][0]<<endl;
    }
    cout<<endl;
    
    
shuffle(clubs, asize, facec);
shuffle(spades, asize, faces);
shuffle(diamnds, asize, faced);
shuffle(hearts, asize, faceh);
    


    return 0;
}

   
void shuffle(int cards[], int size, char face)
{  
    int swap;
    ofstream dealp, dealc;
    
    
    for (int i=0; i<9; i++) 
    {
        
        int lgindex;    
       
        srand(time(0));
        int num=rand()%9;
        

        if (cards[num]> cards[i])
            lgindex=num;
        
        swap=cards[lgindex];
        cards[lgindex]=cards[i];
        cards[i]=swap;
      
           
    }
 
    for (int a=0; a<9; a++)
    {
        cout<<face<<cards[a]<<endl;
        dealp<<face<<cards[a]<<endl;
        a++;
        cout<<face<<cards[a]<<endl;
        dealc<<face<<cards[a]<<endl;
    }
    cout<< endl;
    
} 
