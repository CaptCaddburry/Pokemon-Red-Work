#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define ENTER 13
#define ESC 27
#define F1 59
#define F2 60

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


using namespace std;

string change(string sent, string f, int y);
void gotoxy(int x, int y);

//Text Art
string asciiLibrary[127][5]={
{"     ","     "," _ _'","  >  "," --- "},
{"     ","L\\ /\\","\\Lv /"," \\L/ ","  vL "},  
{"     ","     ","/\\/\\ ","\\  / "," \\/  "},    
{"     ","     ","/\\ /\\","  >  "," ___ "},
{"     ","     ","__ __","  >  ","  .  "},       
{"XX XX","  >  "," ::: ",":   :"," ::: "},
{"$$ $$","  >  "," ::: ",":   :"," ::: "},
{"     ","     ","() o ","  >  ",":::::"},
{" ___ "," | | ","-----"," o 0 ",": >|:"},
{"     ","     ","/\\ /\\"," 0 0 ","= . ="},
{"     ",":: ::","  > ;"," ::: ",":   :"},
{"-- ::","  >  ",":::::",":   :"," ::: "},
{":: ::","  >  ",":::::",":   :"," ::: "},
{"     ",":: ::","  >  ",":::::","  :: "},
{"     ","     ",":: ::","  >  ",":::::"},
{" \\ / "," 0 0 ","  >  "," ::: ",":   :"},
{"     ",":: ::","  >  "," ::: ",":   :"},
{"     ",":: ::","  >  ",":   :"," ::: "},
{"     "," 000 ","0 | 0","0/|\\0"," 000 "},
{"   ","   ","   ","   ","   "},
{" !!! "," !!! "," !!! ","     "," !!! "},
{"'' ''","'' ''","     ","     ","     "},
{" # # ","#####"," # # ","#####"," # # "},
{" $$$$","$ $  ","$$$$$","  $ $","$$$$ "}, 
{"%  %%","  %% "," %%  ","%%   ","%   %"},
{" &&  ","&  & "," && &","& & &"," &&& "},
{"''   ","''   ","     ","     ","     "},
{" ((  ","((   ","((   ","((   "," ((  "},
{"  )) ","   ))","   ))","   ))","  )) "},
{"* * *"," *** ","*****"," *** ","* * *"}, 
{"     ","  +  "," +++ ","  +  ","     "},
{"     ","     ","     ",",,   "," ,   "},
{"     ","     "," --- ","     ","     "},
{"     ","     ","     ","..   ","..   "},
{"    /","   / ","  /  "," /   ","/    "},
{" 000 ","0  00","0 0 0","00  0"," 000 "},
{" 11  ","111  "," 11  "," 11  ","1111 "},
{" 22  ","2  2 ","  2  "," 2   ","2222 "},
{"333  ","   3 "," 33  ","   3 ","333  "},
{"4  4 ","4  4 ","4444 ","   4 ","   4 "},
{"5555 ","5    ","555  ","   5 ","555  "},
{"  6  "," 6   ","6666 ","6   6"," 666 "},
{"77777","   7 ","  7  ","  7  ","  7  "},
{" 888 ","8   8"," 888 ","8   8"," 888 "},
{" 9999","9   9"," 9999","   9 ","  9  "},
{"     "," ::  ","     "," ::  ","     "},
{"     "," ;;  ","     "," ;;  ","  ;  "},
{"  << "," <<  ","<<   "," <<  ","  << "},
{"     "," === ","     "," === ","     "},
{" >>  ","  >> ","   >>","  >> "," >>  "},
{" ??? ","?   ?","   ? ","  ?  ","  ?  "},
{" @@@ ","@   @","@  @@","@    "," @@@ "},
{" AA  ","A  A ","AAAA ","A  A ","A  A "},
{"BBBB ","B   B","BBBB ","B   B","BBBB "},
{" CCC ","C    ","C    ","C    "," CCC "},
{"DDD  ","D  D ","D  D ","D  D ","DDD  "},
{"EEEE ","E    ","EEE  ","E    ","EEEE "},
{"FFFF ","F    ","FFF  ","F    ","F    "},
{" GGG ","G    ","G  GG","G   G"," GGG "},
{"H  H ","H  H ","HHHH ","H  H ","H  H "},
{"III  "," I   "," I   "," I   ","III  "},
{"    J","    J","    J","J   J"," JJJ "},
{"K  K ","K K  ","KK   ","K K  ","K  K "},
{"L    ","L    ","L    ","L    ","LLLL "},
{"M   M","MM MM","M M M","M   M","M   M"},
{"N   N","NN  N","N N N","N  NN","N   N"},
{" OOO ","O   O","O   O","O   O"," OOO "},
{"PPPP ","P   P","PPPP ","P    ","P    "},
{" QQQ ","Q   Q","Q   Q","Q  QQ"," QQQQ"},
{"RRRR ","R   R","RRRR ","R R  ","R  RR"},
{" SSS ","S    "," SSS ","    S","SSSS "},
{"TTTTT","  T  ","  T  ","  T  ","  T  "},
{"U   U","U   U","U   U","U   U"," UUU "},
{"V   V","V   V"," V V "," V V ","  V  "},
{"W   W","W W W","W W W","W W W"," W W "},
{"X   X"," X X ","  X  "," X X ","X   X"},
{"Y   Y"," Y Y ","  Y  ","  Y  ","  Y  "},
{"ZZZZZ","   Z ","  Z  "," Z   ","ZZZZZ"},
{"[[[[ ","[[   ","[[   ","[[   ","[[[[ "},
{"\\   "," \\  ","  \\ ","   \\","    \\"},
{" ]]]]","   ]]","   ]]","   ]]"," ]]]]"},
{" ^^  ","^  ^ ","     ","     ","     "},
{"     ","     ","     ","_____","_____"},
{"``   ","     ","     ","     ","     "},
{"     ","     ","  aa "," a a "," aaa "},
{"b    ","b    ","bbb  ","b  b ","bbb  "},
{"     ","     "," ccc ","c    "," ccc "},
{"    d","    d","  ddd"," d  d","  ddd"},
{"     ","     "," eee "," e e "," ee  "},
{" ff  "," f   ","fff  "," f   "," f   "},
{"     ","ggg  ","g g  "," gg  ","ggg  "},
{"h    ","h    ","hhh  ","h  h ","h  h "},
{"     "," ii  ","     "," ii  "," ii  "},
{"     ","   j ","   j ","j  j "," jj  "},
{"k    ","k k  ","kk   ","k k  ","k  k "},
{"ll   ","ll   ","ll   ","ll   ","ll   "},
{"     ","     ","mmmm ","m m m","m m m"},
{"     ","     ","nnn  ","n  n ","n  n "},
{"     ","     "," ooo "," o o "," ooo "},
{"     ","ppp  ","p  p ","pp   ","p    "},
{"     "," qq  ","q  q "," qqq ","   qq"},
{"     ","     ","rrr  ","r    ","r    "},
{"     ","     "," ss  "," s   ","ss   "},
{"  t  ","  t  "," ttt ","  t  ","  tt "},
{"     ","     "," u  u"," u  u","  uuu"},
{"     ","     ","v   v"," v v ","  v  "},
{"     ","     ","w   w","w w w"," w w "},
{"     ","     "," x x ","  x  "," x x "},
{"     ","y y  ","yyy  ","  y  "," y   "},
{"     ","     ","zz   "," z   "," zz  "},
{" {{  ","{{   ","{{   ","{{   "," {{  "},
{"||   ","||   ","||   ","||   ","||   "},
{"  }} ","   }}","   }}","   }}","  }} "},
{"     "," ~ ~ ","~ ~  ","     ","     "},
};



void displayWord(string w)
{
w = change(w,"-_-'",13);     
w = change(w,"</3",14);
w = change(w,"<3",15);
w = change(w,"^_^",16);
w = change(w,"-.-",17);
w = change(w,"XOX",18);
w = change(w,"$O$",19);
w = change(w,"o_0",20);
w = change(w,"|=|:)",21);
w = change(w,"=^. .^=",22);
w = change(w,":'(",23);
w = change(w,";D",24);
w = change(w,":D",25);
w = change(w,":P",26);
w = change(w,":|",27);
w = change(w,">:(",28);
w = change(w,":(",29);
w = change(w,":(",30);
w = change(w,"(PEACE)",31);
for(int x=0;x<5;x++)
{
for(int i=0;i<w.length();i++)
{
cout<<asciiLibrary[(char)w[i]-13][x]<<" "; 
}     
cout<<endl;
}
cout << endl;
}


//MACRO
void macro()
{
string lines[5];
int i=0;
//system( "notepad.exe Work.txt" );
ifstream myfile ("Work.txt");
    while (myfile.good())
    {
      getline(myfile,lines[i]);
      i++;
    }
myfile.close();
  

  ofstream myfilex ("Output.txt");
  for(int i=0;i<5;i++)
  {      
         if(i==0)
         {
            myfilex <<"{\""<<lines[i]<<"\",";             
         }else if(i==4)
         {
          myfilex <<"\""<<lines[i]<<"\"},";          
         }else {myfilex <<"\""<<lines[i]<<"\",";  }
          
  }
    myfilex.close();

  system( "notepad.exe Output.txt" );
     
}
//MACRO


string change(string sent, string f, int y)
{   
int found[1000];
for(int x=0;x<sent.length();x++)
{ 
found[x]=sent.find(f);
if(found[x]!=string::npos)
{
sent.erase(found[x]+1,f.length()-1);
}}
for(int i=0;i<sent.length();i++)
{
for(int x=0;x<sent.length();x++)
{
if(i==found[x])
{
sent[i]=y;
break;
}}}
return sent;
}
//Text Art


//Playing Card Functions
class Card
{
    public:
    int suit,number;      
void outputCard()
{
   if((number>10)||(number<2))
   {
      if(number==11)
      {
       cout<<"Jack";                     
      }else if(number==12)
      {
       cout<<"Queen";                     
      }else if(number==13)
      {
       cout<<"King";                     
      }else if(number==1)
      {
       cout<<"Ace";                     
      }
    }else
    {
     cout<<number;
    }
  if(suit==1)
  {
  cout<< " of Spades\n";
  }else if(suit==2)
  {
  cout<<" of Hearts\n";      
  }else if(suit==3)
  {
  cout<<" of Clubs\n";      
  }else if(suit==4)
  {
  cout<<" of Diamonds\n";      
  }
}
};
class Deck
{
public:
Card cards[52];
void makeDeck()
{
int x=0;     
for(int i=1;i<5;i++)
{
        for(int z=1;z<14;z++)
        {

           cards[x].suit=i;
           cards[x].number=z;
           x++;            
        }
}     
}    
void shuffleDeck()
{
    srand(time(0));
    for (int i=1; i<(52); i++) {
            int r = i + (rand() % (53-i));
            Card temp = cards[i]; 
            cards[i]= cards[r]; 
            cards[r] = temp;
    }
}
};



//PLAYING CARD FUNCTIONS





void gotoXY(int x, int y) 
{
COORD coord; 
coord.X = x; coord.Y = y; 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
}


void flash(string text, int speed, int times) 
{
for (int i=0;i<times;i++)
{
Sleep(speed/2);
cout<<text;
Sleep(speed/2);
system("CLS");      
}
}


void clearLine(int line, int distance)
{
gotoxy(1,line);
for(int i=1;i<=distance;i++)
{
cout<<" ";
}
} 


void fallingText(string words,int x,int y,int distance,int speed)
{
gotoxy(x,y);

for(int z=0;z<words.length();z++)
{
clearLine(y,z+x);
 for(int i=0;i<distance;i++)     
 {
 gotoxy(x+z,y+i);
 cout<<words[z];
 Sleep(speed);
 clearLine(y+i,words.length()+x);
 }
}
gotoxy(0,distance+y+1);
}






