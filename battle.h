#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define ENTER 13
#define ESC 27
#define F1 59
#define F2 60
#define KEY_Z 122
#define KEY_X 120

#include <windows.h> 
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <conio2.h>
#include "pokemon.h"

using namespace std;

    void battleScreen(pokemon enemy)
    {
    enemy.pokeDex(enemy.pokedexNumber);
    int A=0;
    int B=0;
    int C=0;
    int D=0;
    int E=0;
    int F=1;
    int G=0;
    int damage=0;
    int screenNumber=0;
    extern pokemon myPokemon[6];
    string battle[100][100]={
    {
    "                                                            ",
    "                                                            ",
    "                                                            ",
    "                                                            ",
    "                                                            ",
    "                                                            ",
    "------------------------------------------------------------",
    "|                            |     >FIGHT     POKE         |",
    "|                            |                             |",
    "|                            |      PACK      RUN          |",
    "|                            |                             |",
    "------------------------------------------------------------"
    },
    {
    "                                                            ",
    "                                                            ",
    "------------------------------                              ",
    "|                            |                              ",
    "|                            |                              ",
    "|                            |                              ",
    "------------------------------------------------------------",
    "|                                                          |",
    "|                                                          |",
    "|                                                          |",
    "|                                                          |",
    "------------------------------------------------------------"
    }
    };
    mainMenu:
    textcolor(240);
    for(int i=0;i<12;i++)
    {
        if(i==11)
        {
            for(int h=0;h<59;h++)
            {
                gotoxy(h+1,i+49);
                cout<<battle[screenNumber][i][h];      
            }
        }
        else
        {
            for(int h=0;h<60;h++)
            {
                gotoxy(h+1,i+49);
                cout<<battle[screenNumber][i][h];      
            }
        }
    }
    myPokemon[0].draw1(myPokemon[0].pokedexNumber);
    enemy.draw2(enemy.pokedexNumber);
    myPokemon[0].displayInfo(1);
    enemy.displayInfo(2);
    bool choice=true;
    int a=35;
    int b=55;
    char input;
    while(choice)
    {
    textcolor(240);
    input=getch();
    if(input==RIGHT)
    {
    gotoXY(a,b);
    cout<< " ";
    a=a+10;
    if(a>45)
    {
    a=35;
    }
    gotoXY(a,b);
    cout<< ">";
    }
    if(input==LEFT)
    {
    gotoXY(a,b);
    cout<< " ";
    a=a-10;
    if(a<35)
    {
    a=45;
    }
    gotoXY(a,b);
    cout<< ">";
    }
    if(input==DOWN)
    {
    gotoXY(a,b);
    cout<< " ";
    b=b+2;
    if(b>57)
    {
    b=55;
    }
    gotoXY(a,b);
    cout<< ">";
    }
    if(input==UP)
    {
    gotoXY(a,b);
    cout<< " ";
    b=b-2;
    if(b<55)
    {
    b=57;
    }
    gotoXY(a,b);
    cout<< ">";
    }
    if(input==KEY_Z)
    {
    if((a==35)&&(b==55))
    {
    choice=false;
    screenNumber=1;
    textcolor(240);
    for(int i=0;i<12;i++)
    {
        if(i==11)
        {
            for(int h=0;h<59;h++)
            {
                gotoxy(h+1,i+49);
                cout<<battle[screenNumber][i][h];      
            }
        }
        else
        {
            for(int h=0;h<60;h++)
            {
                gotoxy(h+1,i+49);
                cout<<battle[screenNumber][i][h];      
            }
        }
    }
    }
    myPokemon[0].draw1(myPokemon[0].pokedexNumber);
    enemy.draw2(enemy.pokedexNumber);
    myPokemon[0].displayInfo(1);
    enemy.displayInfo(2);
    textcolor(240);
    if((a==45)&&(b==57))
    {
    textBox("Ran away","successfully!");
    waitForInput();
    //system("CLS");
    render();
    break;
    }
    }
    }
    a=15;
    b=55;
    while(!choice)
    {
        gotoxy(16,56);
        cout<< ">";
        for(int z=0;z<4;z++)
        {
        gotoxy(18,56+z);
        cout<< myPokemon[0].moves[z].name;
        }
        textcolor(240);
        input=getch();
        if(input==DOWN)
        {
        gotoXY(a,b);
        cout<< " ";
        b+=1;
        if(b>58)
        {
        b=55;
        }
        gotoXY(a,b);
        cout<< ">";
        }
        if(input==UP)
        {
        gotoXY(a,b);
        cout<< " ";
        b-=1;
        if(b<55)
        {
        b=58;
        }
        gotoXY(a,b);
        cout<< ">";
        }
        if(input==KEY_Z)
        {
        if((a==15)&&(b==55))
        {
        
        A=myPokemon[0].level;
        B=myPokemon[0].attack;
        C=myPokemon[0].moves[0].damage;
        D=enemy.curDefense;
        E=1;
        F=1;
        G=rand()%15+85;
        damage=((((2*A/5+2)*B*C/D)/50)+2)*E*F*G/100;
        system("CLS");
        myPokemon[0].draw1(myPokemon[0].pokedexNumber);
        enemy.draw2(enemy.pokedexNumber);
        enemy.health-=damage;
        enemy.displayInfo(2);
        myPokemon[0].displayInfo(1);
        textBox("Squirtle used",myPokemon[0].moves[0].name);
        waitForInput();
        A=enemy.level;
        B=enemy.attack;
        C=enemy.moves[0].damage;
        D=myPokemon[0].curDefense;
        E=1;
        F=1;
        G=rand()%15+85;
        damage=((((2*A/5+2)*B*C/D)/50)+2)*E*F*G/100;
        myPokemon[0].health-=damage;
        
        system("CLS");
        myPokemon[0].draw1(myPokemon[0].pokedexNumber);
        enemy.draw2(enemy.pokedexNumber);
        enemy.displayInfo(2);
        myPokemon[0].displayInfo(1);
        
        textBox("Bulbasaur used", enemy.moves[0].name);
        waitForInput();
        
        
        
        system("CLS");
        myPokemon[0].draw1(myPokemon[0].pokedexNumber);
        enemy.draw2(enemy.pokedexNumber);
        enemy.displayInfo(2);
        myPokemon[0].displayInfo(1);
        screenNumber=0;
        for(int i=0;i<12;i++)
            {
                if(i==11)
                {
                    for(int h=0;h<59;h++)
                    {
                        gotoxy(h+1,i+49);
                        cout<<battle[screenNumber][i][h];      
                    }
                }
                else
                {
                    for(int h=0;h<60;h++)
                    {
                        gotoxy(h+1,i+49);
                        cout<<battle[screenNumber][i][h];      
                    }
                }
            }
        if((enemy.health>0)&&(myPokemon[0].health>0))
        {
        goto mainMenu;
        }
        else
        {
        render();
        break;
        }
        //*************************************************************************************************************************
        //int winExp(int a,int t,int b,int e,int L,int s)
//        {
//        a=1 if fainted pokemon is wild, a=1.5 if fainted pokemon is trainer's
//        t=1 if pokemon is own, t=1.5 if locally traded, t=1.7 if globally traded
//        b=base experience yeild of fainted pokemon's species
//        e=1.5 if holding Lucky Egg, e=1 if not
//        L=level of fainted pokemon
//        Lp=level of victorius pokemon
//        p=1 if no exp point power is active, otherwise, look online at ("http://bulbapedia.bulbagarden.net/wiki/Experience")
//        s=number of pokemon used in the battle that have not fainted
//        exp=((a*t*b*e*L)/(7*s))
//        exp for gen 5=(((a*b*L)/(5*s))*((((2L+10)^2.5)/(L+Lp+10)^2.5))+1)*t*e*p
//        EXP for fast group=(4n^3)/5
//        EXP for medium fast group=n^3
//        EXP for medium slow group=((6/5)n^3-15n^2+100n-140)
//        EXP for slow group=(5n^3)/4

          //}

        //*************************************************************************************************************************        
        
        
        //string temp;
        //temp=Bulbasaur.name;
        //temp.insert(Bulbasaur.name.length()," used");
        //string temp2;
        //temp2="TACKLE";
        //textbox(temp,temp2);
        }
        }
    }
    //while(choice)
//    {
//    Sleep(100);
//    system("CLS");
//    Bulbasaur.health-=1;
//
//     for(int i=0;i<12;i++)
//    {
//        if(i==11)
//        {
//            for(int h=0;h<59;h++)
//            {
//                gotoxy(h+1,i+49);
//                cout<<battle[screenNumber][i][h];      
//            }
//        }
//        else
//        {
//            for(int h=0;h<60;h++)
//            {
//                gotoxy(h+1,i+49);
//                cout<<battle[screenNumber][i][h];      
//            }
//        }
//    }
//    Squirtle.drawSquirtle1();
//    Bulbasaur.drawBulbasaur1();
//    Bulbasaur.displayInfo();
//    }
    

    /*
    bool choice=true;
    char input;
    int a=35;
    int b=54;
    cout<< setfill(' ');
    gotoXY(0,54);
    cout<< "------------------------------------------------------------";
    gotoXY(0,55);
    cout<< "|" << setw(29) << "|" << setw(11) << ">FIGHT" << setw(9) << " POKE" << setw(10) << "|";
    gotoXY(0,56);
    cout<< "|" << setw(29) << "|" << setw(30) << "|";
    gotoXY(0,57);
    cout<< "|" << setw(29) << "|" << setw(10) << " PACK" << setw(9) << " RUN" << setw(11) << "|";
    gotoXY(0,58);
    cout<< "|" << setw(29) << "|" << setw(30) << "|";
    gotoXY(0,59);
    cout<< "------------------------------------------------------------";
    while(true)
    {
    input=getch();
    if(input==RIGHT)
    {
    gotoXY(a,b);
    cout<< " ";
    a=a+10;
    if(a>45)
    {
    a=35;
    }
    gotoXY(a,b);
    cout<< ">";
    }
    if(input==LEFT)
    {
    gotoXY(a,b);
    cout<< " ";
    a=a-10;
    if(a<35)
    {
    a=45;
    }
    gotoXY(a,b);
    cout<< ">";
    }
    if(input==DOWN)
    {
    gotoXY(a,b);
    cout<< " ";
    b=b+2;
    if(b>56)
    {
    b=54;
    }
    gotoXY(a,b);
    cout<< ">";
    }
    if(input==UP)
    {
    gotoXY(a,b);
    cout<< " ";
    b=b-2;
    if(b<54)
    {
    b=56;
    }
    gotoXY(a,b);
    cout<< ">";
    }
    if(input==ENTER)
    {
    if(a==35&&b==54)
    {
    system("CLS");
    cout<< setfill('-');
    gotoXY(0,54);
    cout<< setw(60) << "-";
    gotoXY(0,55);
    cout<< setfill(' ');
    cout<< "|" << setw(59) << "|";
    gotoXY(0,56);
    cout<< "|" << setw(59) << "|";
    gotoXY(0,57);
    cout<< "|" << setw(59) << "|";
    gotoXY(0,58);
    cout<< "|" << setw(59) << "|";
    cout<< setfill('-');
    gotoXY(0,59);
    cout<< setw(60) << "-";
    gotoXY(0,48);
    cout<< setw(30) << "-";
    cout<< setfill(' ');
    gotoXY(0,49);
    cout<< "|" << setw(29) << "|";
    gotoXY(0,50);
    cout<< "|" << setw(29) << "|";
    gotoXY(0,51);
    cout<< "|" << setw(29) << "|";
    cout<< setfill('-');
    gotoXY(0,52);
    cout<< setw(30) << "-";
    }
    if(a==45&&b==54)
    {
    system("CLS");
    cout<< "P" << endl;
    }
    if(a==35&&b==56)
    {
    system("CLS");
    cout<< "B" << endl;
    }
    if(a==45&&b==56)
    {
    system("CLS");
    cout<< "R" << endl;
    }
    }
    }
    
    srand(time(0));
    bulbasaur newBulbasaur;
    charmander newCharmander;
    squirtle newSquirtle;
    newBulbasaur.setPokemon();
    newCharmander.setPokemon();
    newSquirtle.setPokemon();
    int A=newBulbasaur.level;
    int B=newBulbasaur.attack;
    int C=35;
    int D=newCharmander.defense;
    int E=newBulbasaur.STAB;
    int F=1;
    int G=rand()%15+85;
    int damage = ((((2*A/5+2)*B*C/D)/50)+2)*E*F*G/100;
    cout<< "Bulbasaur" << endl;
    cout<< "Level: " << newBulbasaur.level << endl;
    cout<< "HP: " << newBulbasaur.hp << endl;
    cout<< "Attack: " << newBulbasaur.attack << endl;
    cout<< "Defense: " << newBulbasaur.defense << endl;
    cout<< "Special: " << newBulbasaur.special << endl;
    cout<< "Speed: " << newBulbasaur.speed << endl;
    cout<< "Pokedex Number: " << newBulbasaur.pokedexNumber << endl;
    cout<< "EXP: " << newBulbasaur.exp << endl;
    cout<< "Gender: " << newBulbasaur.gender << endl;
    cout<< endl << endl;
    cout<< "Charmander" << endl;
    cout<< "Level: " << newCharmander.level << endl;
    cout<< "HP: " << newCharmander.hp << endl;
    cout<< "Attack: " << newCharmander.attack << endl;
    cout<< "Defense: " << newCharmander.defense << endl;
    cout<< "Special: " << newCharmander.special << endl;
    cout<< "Speed: " << newCharmander.speed << endl;
    cout<< "Pokedex Number: " << newCharmander.pokedexNumber << endl;
    cout<< "EXP: " << newCharmander.exp << endl;
    cout<< "Gender: " << newCharmander.gender << endl;
    cout<< endl << endl;
    cout<< "Squirtle" << endl;
    cout<< "Level: " << newSquirtle.level << endl;
    cout<< "HP: " << newSquirtle.hp << endl;
    cout<< "Attack: " << newSquirtle.attack << endl;
    cout<< "Defense: " << newSquirtle.defense << endl;
    cout<< "Special: " << newSquirtle.special << endl;
    cout<< "Speed: " << newSquirtle.speed << endl;
    cout<< "Pokedex Number: " << newSquirtle.pokedexNumber << endl;
    cout<< "EXP: " << newSquirtle.exp << endl;
    cout<< "Gender: " << newSquirtle.gender << endl;
    cout<< endl << endl << endl;
    cout<< abs(damage) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
    */
}
