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

void titlePage();
void opening();
void setWindow(int Width, int Height);
void textBox(string lineOne,string lineTwo);
void waitForInput();
bool yesNo();
bool rend=true;
int x=18,y=12;
int direction=3;
extern char rightx;
extern int mapNumber;
extern int mapX;
extern int mapY; 
int a=5;
int b=28;
int c=31;
int d=25;
int e=4;
bool ture=true;
void outputOak();
void outputNidorino();
void outputAsh();
void outputRival();
void oak1();
void drawOak(int b,int c);
void drawRival(int d,int e);
string name="Red";
string rivalName="Blue";
extern void render();
extern void loadGame();

void titlePage()
{
//P
for(int i=0;i<5;i++)
{
gotoxy(12,i+10);
cout<< asciiLibrary[67][i];
}
//P
//o
for(int i=0;i<5;i++)
{
gotoxy(17,i+9);
cout<< asciiLibrary[98][i];
}
//o
//K
for(int i=0;i<5;i++)
{
gotoxy(22,i+8);
cout<< asciiLibrary[62][i];
}
//K
//e
for(int i=0;i<5;i++)
{
gotoxy(27,i+7);
cout<< asciiLibrary[88][i];
}
//e
//M
for(int i=0;i<5;i++)
{
gotoxy(32,i+8);
cout<< asciiLibrary[64][i];
}
//M
//o
for(int i=0;i<5;i++)
{
gotoxy(37,i+9);
cout<< asciiLibrary[98][i];
}
//o
//N
for(int i=0;i<5;i++)
{
gotoxy(42,i+10);
cout<< asciiLibrary[65][i];
}
//N
textcolor(252);
cout<< "\n\n                        Red Version                        \n\n" << endl;
cout<<"\n\n\n";
cout<<"                                       jjK#tL\n";
cout<<"                                     ,WfL. f:K\n";
cout<<"                                     K:. . Lj;,\n";
cout<<"                                    # ...   jtG\n";
cout<<"                                    # . :ffjijW\n";
cout<<"                                     Gt;;jtDE;W;\n";
cout<<"                                    :Li#WWWKW#WG\n";
cout<<"                                    #L#K;iG ,;.K\n";
cout<<"                                     ;KG:;,;.i;f\n";
cout<<"           ;KE;     ,                 #,;,,; #;\n";
cout<<"          D  ..Lf   ::   ;             ELijjW .\n";
cout<<"         # .,;,;;,   ;:      E#,      ;fi#EW K:\n";
cout<<"        t:;;;,:iif , :;;    Df:Di    KE,.W,t,fLj\n";
cout<<"        ,D.;;,GGt# ;  ;;,;: DffiL   W  Et,##W:j:#\n";
cout<<"        ,#i;;iW#fW .; ,,f,;,#:WK   i:. D,WGff;,D:j\n";
cout<<"        ,EG;,jiGfjL ,;:;,f,DtDDj#LLiGi.i,WDD#t,G.L\n";
cout<<"        i,..;;,fGjG  ,:;,ffGtEi;Kft.,D;fjtE##ffL.G\n";
cout<<"        t ;;;:WtLfD:. ,;;if;jt##GWt,E#LLjj#WWWfDjE\n";
cout<<"         Dt:,GjDLtfE .,,;;ft;;. DjjL  #jLL###K,W,t:\n";
cout<<"          i#GfLL;iifL. ;;,ff,;,.    . W . #.GW#t;.W\n";
cout<<"             Di:L;,fD .:;,fff,,        WDEjGKff EGGD\n";
cout<<"            f.,G,;;jjW ..;ffj;         DjfffDfW .#KK\n";
cout<<"          jtW  j.;tL;,j  KfL           tffGKjf# E;ftK\n";
cout<<"         ,; K E.:jE;;,L,Etft          ,EfffLLfjffW:W\n";
cout<<"         W,,K fiLjf.;;:Wfffj          :DfjG:EfjG. #,\n";
cout<<"         :Ej,; ii K,;;,WfGt           Kj;E,:EttG\n";
cout<<"             D ...:;;;;KLf           .K;jE .Lf;E\n";
cout<<"              W .. W:,DD,            fjjt:. GjfD\n";
cout<<"               Gt..jDtf,.            ;EfE.. GGDG\n";
cout<<"              :Kff#,f,jG;            .f,.;, :L, D\n";
cout<<"             DL:tGi.j;;tDt.          .jLfE:  LGLK\n";
cout<<"            E.;iijD ttt,fG;          WDLD,  DjGKE\n";
cout<<"           ;tD,GL#:. #:DtG#          E::#    #G:,f\n";
cout<<"             fifjf;   . LtLf          .;fL      tfL\n";
textcolor(240);
waitForInput();
while(ture)
{
system("CLS");
cout<<"---------------------------------------------\n";
cout<<"|                                           |\n";
cout<<"|                                           |\n";
cout<<"|                                           |\n";
cout<<"|   Continue                                |\n";
cout<<"|                                           |\n";
cout<<"|                                           |\n";
cout<<"|                                           |\n";
cout<<"|   New Game                                |\n";
cout<<"|                                           |\n";
cout<<"|                                           |\n";
cout<<"|                                           |\n";
cout<<"---------------------------------------------\n";
gotoxy(4,a);
cout<< rightx;
char choice;
char Down=80;
char Up=72;
char Enter=13;
choice=getch();
if(choice==DOWN)
{
a+=4;
if(a==13)
{
a=5;
}
}
if(choice==UP)
{
a-=4;
if(a==1)
{
a=9;
}
}
if(choice==KEY_Z)
{
if(a==5)
{
system("CLS");
ture=false;
loadGame();
}
if(a==9)
{
system("CLS");
ture=false;
opening();
}
}
}
}


void opening() 
{
bool yes=false;
string temp;
textcolor(240);
system("CLS");
//Professor Oak Picture
outputOak();
textBox("Hello there!","Welcome to the");
waitForInput();
system("CLS");
outputOak();
textBox("Welcome to the","world of POKeMON!");
waitForInput();
system("CLS");
outputOak();
textBox("My name is OAK!","People call me");
waitForInput();
system("CLS");
outputOak();
textBox("People call me","the POKeMON PROF!");
waitForInput();
system("CLS");
//NINARINA PICTURE
outputNidorino();
textBox("This world is ","inhabited by");
waitForInput();
system("CLS");
outputNidorino();
textBox("inhabited by","creatures called");
waitForInput();
system("CLS");
outputNidorino();
textBox("creatures called","POKeMON!");
waitForInput();
system("CLS");
outputNidorino();
textBox("For some people,","POKeMON are");
waitForInput();
system("CLS");
outputNidorino();
textBox("POKeMON are","pets.  Others use");
waitForInput();
system("CLS");
outputNidorino();
textBox("pets. Others use","them for fights.");
waitForInput();
system("CLS");
outputNidorino();
textBox("Myself...","");
waitForInput();
system("CLS");
outputNidorino();
textBox("I study POKeMON","as a profession.");
waitForInput();
system("CLS");
//To Ash
outputAsh();
textBox("First, what is","your name?");
waitForInput();
system("CLS");
cout<<"Enter your name>";
cin>>name;
system("CLS");
temp = "name is ";
outputAsh();
temp.insert(8,name);
temp.insert(name.length()+8,"!");
textBox("Right! So your",temp);
waitForInput();
system("CLS");
outputRival();
textBox("This is my grand-","son. He's been");
waitForInput();
system("CLS");
outputRival();
textBox("son. He's been","your rival since");
waitForInput();
system("CLS");
outputRival();
textBox("your rival since","you were a baby.");
waitForInput();
system("CLS");
outputRival();
textBox("...Erm, what is","his name again?");
waitForInput();
system("CLS");
cout<<"Enter your rival's name>";
cin>>rivalName;
system("CLS");
outputRival();
temp = "name is ";
temp.insert(8,rivalName);
temp.insert(rivalName.length()+8,"!");
textBox("That's right! I","remember now! His");
waitForInput();
system("CLS");
outputRival();
textBox("remember now! His",temp);
waitForInput();
system("CLS");
outputAsh();
temp=name;
temp.insert(name.length(),"!");
textBox(temp,"");
waitForInput();
system("CLS");
outputAsh();
textBox("Your very own","POKeMON legend is");
waitForInput();
system("CLS");
outputAsh();
textBox("POKeMON legend is","about to unfold!");
waitForInput();
system("CLS");
outputAsh();
textBox("A world of dreams","and adventures");
waitForInput();
system("CLS");
outputAsh();
textBox("and adventures","with POKeMON");
waitForInput();
system("CLS");
outputAsh();
textBox("with POKeMON","awaits!  Let's go!");
waitForInput();
system("CLS");


//FADE TO GAME

system("PAUSE");
}
//***********************************END*****************************************************

void waitForInput()
{
char input;  
while(input!=KEY_Z)
{
input=getch();
} 
}
void setWindow(int Width, int Height) 
    { 
    _COORD coord; 
    coord.X = Width; 
    coord.Y = Height; 
    _SMALL_RECT Rect; 
    Rect.Top = 0; 
    Rect.Left = 0; 
    Rect.Bottom = Height - 1; 
    Rect.Right = Width - 1; 

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle 
    SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size 
    SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size 
    } 
void textBox(string lineOne,string lineTwo)
{
//cout<< setfill(' ');
gotoxy(1,56);
textcolor(62);
cout<< "------------------------------------------------------------";
gotoxy(1,57);
cout<< "|                                                           ";
//for(int i=1;i<31-lineOne.length()/2-1;i++)
//{
//    cout<<" ";
//}
gotoxy(31-lineOne.length()/2-1,57);
cout<<lineOne;
gotoxy(60,57);
cout<<"|";

gotoxy(1,58);
cout<< "|                                                           ";
//for(int i=1;i<31-lineTwo.length()/2-1;i++)
//{
//    cout<<" ";
//}
gotoxy(31-lineTwo.length()/2-1,58);
cout<<lineTwo;
gotoxy(60,58);
cout<<"|";
gotoxy(1,59);
cout<< "------------------------------------------------------------";
textcolor(240);
}


bool yesNo()
{
textcolor(62);
bool yes=true;
char input;
gotoxy(50,51);
cout<< "--------";
gotoxy(50,52);
cout<< "| >YES |";
gotoxy(50,53);
cout<< "|  NO  |";
gotoxy(50,54);
cout<< "--------";
while(true)
{
input=getch();
if((input==UP)||(input==DOWN))
{
if(yes)
{
yes=false;   
gotoxy(52,52);
cout<<" ";
gotoxy(52,53);
cout<<">";
}else{
yes=true;
gotoxy(52,52);
cout<<">";
gotoxy(52,53);
cout<<" ";
}
}
if(input==KEY_Z)
{
return yes;
system("CLS");
}
}
textcolor(240);
}



void outputOak()
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"                       '':'':''''':'..\n";                            
cout<<"                     ...,   :   :    ;.\n";                           
cout<<"                   .     .:'.':::::  .\n";                       
cout<<"                      'ZZZZ:::::::ZZZZ.\n";                           
cout<<"                       .   0:::::0:::::.\n";                          
cout<<"                      .       >:::::::.\n";                    
cout<<"                       ,      .::::::::\n";                         
cout<<"                        .   =====::::;.\n";                       
cout<<"                       .':  .:::::::'.\n";                        
cout<<"                     .:::,,k0XWkKWW0oxd;:'\n";                        
cout<<"                    ,x  :;:0kx00KNWXdlc. :c\n";                   
cout<<"                  ,'  ; ,  :XXXXXXK,  ,.'lll.\n";                     
cout<<"              0dkKK  .O  . 'XXXXXX0.  , 0;':l.\n";         
cout<<"           :xKO   O0olO.  .'XXXXXX0  ;  ;   c'\n";                    
cout<<"           .ol-( )-ocOd.  ,;NMMMMM0;,   .x   k'\n";                   
cout<<"           .;lO   okl;;.   lWMMMMMXc    .x   ,l.\n";           
cout<<"             .kNkc:,cl.    'NMMMMM0.    .k,..;d.\n";            
cout<<"               ,:olllO'    'XMMMMM0.     k:,ck.\n";            
cout<<"                    .k,... 'KMMMMMO  ,..,0o;,\n";                 
cout<<"                    .x.  . 'XMMMMMO  .  .x.\n";                     
cout<<"                    .x.  . 'XK==dxO  .  .x.\n";                     
cout<<"                    .k;..  'KkxxdxK  '..;k.\n";                  
cout<<"                     'cc:,,c0xxxdxO;::ccc'\n";                        
cout<<"                      .d0OkkddxxdddkkkO0.\n";                    
cout<<"                       '0kxddx0OxdO0OxO;\n";                        
cout<<"                      ,dddkKK0XxkkdddO0.\n";                      
cout<<"                     .doccokkxx .xklclox:\n";                    
cout<<"                       ',,,,:     :,,,,'";      
}


void outputNidorino()
{
cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<"                WW              WW\n";
cout<<"                  WWW          W..WW\n";
cout<<"                W....W         W....WW\n";
cout<<"                 W......WW.W    W.......W..W.W\n";
cout<<"               WWW..;;;...W.W    W.........W;W\n";
cout<<"                   ;WWW;;.W.W.WW.W;......WW;W\n";
cout<<"                W.;WfffWW;W..W..W.W;......W;W\n";
cout<<"                 W;WfffffW...WWW.WW;;;.....W\n";
cout<<"                  WfffffffW;...W;.WW;;;;;;;;W.W\n";
cout<<"                   WfffWWWfW;..W;.W.;;;;;;;;;\n";
cout<<"                   WfWWfffWWW;.;W.W.f;;;;;;;fW\n";
cout<<"                   WffffffffW;..W;.WWff;;;;;W\n";
cout<<"                WW..WffffffffW;.W;...WWff;;fW\n";
cout<<"                W;..WfffffffffW..W......WffW\n";
cout<<"                 W;..WffffffffW.........;WWWW\n";
cout<<"             WWW.W;...WfffffffW........;;WWWWWf\n";
cout<<"             W;.W.W;...WWfffffW..W.....;W.....f\n";
cout<<"              W;.WW;..WffWfffW;..W.....;W..;;W\n";
cout<<"               W;;...;;;;;f;...f...W.;;.;WW;W\n";
cout<<"                ff;;f;;;;;;;...f..fW.;;;.;;;W\n";
cout<<"                ffff;..;;f;.....W.W...;;.;;;W\n";
cout<<"                WfW;.....f;......fWWW;;;;;;;fW\n";
cout<<"               f;W;.......f..;.Wf;;.;W;.;....W\n";
cout<<"             fW;W;..f........;...WW;....;;....W\n";
cout<<"            f..;;;.......W..;.;.WWWW;;...f...f\n";
cout<<"            W.;;f;;.....f.ff.;WWWWWWWWW;.....W\n";
cout<<"            W;;f.f;;.f..W...f;;fWWWWWWWWW...W\n";
cout<<"              W....f;f;W....;;ffWWffWWWWWfffW\n";
cout<<"              W....f;;;WWW;;;;;;ffWWffWWff;;;W\n";
cout<<"              Wf....f;;W;ffWW;;f;;WWfW Wf;;..W\n";
cout<<"             Wff.....;Wf..;;ffW;WWff;W  W;....W\n";
cout<<"             Wff...fffW.....;WWWfff;.W   ;;...W\n";
cout<<"             W...;;;;W...;;W   Wff;f;.W   W;WfWf\n";
cout<<"             W.WWWWW;fW;fWW     WWf;;;.W   W.W..W\n";
cout<<"              W.;;;;W;.;W;W       WWWWW     WWWW\n";
cout<<"               WWWWW WWWWW\n";
}

void outputAsh()
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"                            jjK#tL\n";
cout<<"                          ,WfL. f:K\n";
cout<<"                          K:. . Lj;,\n";
cout<<"                         # ...   jtG\n";
cout<<"                         # . :ffjijW\n";
cout<<"                          Gt;;jtDE;W;\n";
cout<<"                         :Li#WWWKW#WG\n";
cout<<"                         #L#K;iG ,;.K\n";
cout<<"                          ;KG:;,;.i;f\n";
cout<<"                           #,;,,; #;\n";
cout<<"                            ELijjW .\n";
cout<<"                  E#,      ;fi#EW K:\n";
cout<<"                 Df:Di    KE,.W,t,fLj\n";
cout<<"                 DffiL   W  Et,##W:j:#\n";
cout<<"                 #:WK   i:. D,WGff;,D:j\n";
cout<<"                DtDDj#LLiGi.i,WDD#t,G.L\n";
cout<<"                GtEi;Kft.,D;fjtE##ffL.G\n";
cout<<"                 jt##GWt,E#LLjj#WWWfDjE\n";
cout<<"                     DjjL  #jLL###K,W,t:\n";
cout<<"                         . W . #.GW#t;.W\n";
cout<<"                            WDEjGKff EGGD\n";
cout<<"                            DjfffDfW .#KK\n";
cout<<"                            tffGKjf# E;ftK\n";
cout<<"                           ,EfffLLfjffW:W\n";
cout<<"                           :DfjG:EfjG. #,\n";
cout<<"                           Kj;E,:EttG\n";
cout<<"                          .K;jE .Lf;E\n";
cout<<"                          fjjt:. GjfD\n";
cout<<"                          ;EfE.. GGDG\n";
cout<<"                          .f,.;, :L, D\n";
cout<<"                          .jLfE:  LGLK\n";
cout<<"                          WDLD,  DjGKE\n";
cout<<"                          E::#    #G:,f\n";
cout<<"                           .;fL      tfL\n";
}     

void outputRival()
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"                      :i:\n";
cout<<"                       .jWGLi\n";
cout<<"                   .GEEfEEEDGGDDji::\n";
cout<<"                  GG EEGDDDGGGGGEGjLt:\n";
cout<<"                    GGGGD#WGEEiDG#ffftGD.\n";
cout<<"                  :#GGGDKfWGEEiii#fiifGGGD\n";
cout<<"                 .# #GDK.j#WfiiijD GG #W D\n";
cout<<"                   .#D#E: :Kii: jL  f .K.\n";
cout<<"                    jEi,K  fii  ;fL :  :K\n";
cout<<"                    .i ,KiiiiijL,:fE   :K\n";
cout<<"                      .jDjijEDt.;fiiLGGtL\n";
cout<<"                       .;tDffjjLt   ffj.it\n";
cout<<"                          .;tKDDG  DDjE; :D\n";
cout<<"                      .::,EEKKjijEf;;f#i,.it\n";
cout<<"                       :EDLKjti,jG:  :fE; ,D\n";
cout<<"                      :D;tifGWWDt:    tWi,.;t\n";
cout<<"                      :Wftfi   :tK    ijLi;tD\n";
cout<<"                      ,EE:      iLifWj:,#WWE.\n";
cout<<"                     .f ,E       :Gf\n";
cout<<"                    :K ,Kiif#####f\n";
cout<<"                    .WWtf###D.;j..ff\n";
cout<<"                      K,WGGDKE#####f.\n";
cout<<"                      :#GGGDD:iKGGGKf\n";
cout<<"                      :GtGGGj tGjffEj\n";
cout<<"                     .GGGGGj   ;GGGKj\n";
cout<<"                     :##D##D   j#KK#j\n";
cout<<"                    :K ,E ;D   :jLjf:\n";
cout<<"                    ,K.;E.iG    jLff.L.\n";
cout<<"                  .E:::;KG        tf::E\n";
cout<<"                   .KKKG           tKK\n";
}

void oak1()
{
string temp;
render();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("Oak: Hey! Wait!","Don't go out!");   
waitForInput();
drawOak(b,c);
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("Oak: It's unsafe!","Wild PoKeMON live");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("Wild PoKeMON live", "in tall grass!");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("You need your own", "PoKeMON for your");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("PoKeMON for your","protection.");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("protection.","I know!");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("Here, come with","me!");
waitForInput();
x=0;
y=24;
direction=4;
render();
drawOak(b,c);
Sleep(100);
x=0;
y=21;
render();
drawOak(b,c);
Sleep(100);
x=0;
y=18;
render();
drawOak(b,c);
Sleep(100);
x=0;
y=15;
render();
drawOak(b,c);
Sleep(100);
x=0;
y=12;
b=25;
c=28;
render();
drawOak(b,c);
Sleep(100);
x=3;
y=12;
b=28;
c=31;
direction=1;
render();
drawOak(b,c);
Sleep(100);
x=3;
y=9;
direction=4;
render();
drawOak(b,c);
Sleep(100);
x=3;
y=6;
render();
drawOak(b,c);
Sleep(100);
x=3;
y=3;
render();
drawOak(b,c);
Sleep(100);
x=3;
y=0;
render();
drawOak(b,c);
Sleep(100);
x=3;
y=3-6;
b=31;
c=28;
render();
drawOak(b,c);
Sleep(100);
x=0;
y=3-6;
direction=2;
render();
drawOak(b,c);
Sleep(100);
x=3-6;
y=3-6;
render();
drawOak(b,c);
Sleep(100);
x=0-6;
y=3-6;
direction=3;
render();
Sleep(100);
x=0-6;
y=0;
direction=3;
render();
Sleep(100);
mapNumber=4;
x=12;
y=0;
mapX=32;
mapY=35;
b=28;
c=4;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
y=3;
c=7;
e=10;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
y=6;
c=10;
e=13;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
y=9;
c=13;
e=16;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
y=12;
c=16;
e=19;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
y=15;
c=19;
e=22;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
y=18;
c=21;
e=25;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
y=21;
c=25;
e=28;
render();
drawOak(b,c);
drawRival(d,e);
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
temp = rivalName;
temp.insert(rivalName.length(),": Gramps!");
textBox(temp,"I'm fed up with");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("I'm fed up with","waiting!");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
temp = "Oak:     ";
temp.insert(5,rivalName);
temp.insert(rivalName.length()+5,"?");
textBox(temp,"Let me think...");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("Oh, that's right,","I told you to");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("I told you to","come! Just wait!");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
temp = "Here ";
temp.insert(5,name);
temp.insert(name.length()+5,"!");
textBox(temp,"");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("There are 3","POKEMON here!");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("Haha!","");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("They are inside","the POKE BALLS.");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("When i was young,","I was a serious");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("I was a serious","POKEMON trainer!");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("In my old age, I","have only 3 left,");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("have only 3 left,","but you can have");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("but you can have","one! Choose!");
waitForInput();
render();
drawOak(b,c);
drawRival(d,e);
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
temp = rivalName;
temp.insert(rivalName.length(),": Hey!");
textBox(temp,"Gramps! What");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox("Gramps! What","about me?");
waitForInput();
render();
drawOak(b,c);
drawRival(d,e);
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
temp = rivalName;
temp.insert(rivalName.length()," you can");
textBox("Oak: Be patient!",temp);
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
textBox(temp,"have one too!");
waitForInput();
b=28;
c=22;
d=25;
e=25;
}

void drawOak(int b,int c)
{
textcolor(248);
gotoxy(b,c);
cout<< "OOO";
c+=1;
gotoxy(b,c);
cout<< "OOO";
c+=1;
gotoxy(b,c);
cout<< "OOO";
textcolor(240);
}

void drawRival(int d,int e)
{
textcolor(249);
gotoxy(d,e);
cout<< "OOO";
e+=1;
gotoxy(d,e);
cout<< "OOO";
e+=1;
gotoxy(d,e);
cout<< "OOO";
textcolor(240);
}

void rivalBattle1(int a)
{
if(a==1)
{
e=28;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
e=31;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
d=25;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
d=28;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
d=31;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
e=28;
render();
drawOak(b,c);
drawRival(d,e);
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
string temp;
temp=rivalName;
temp.insert(rivalName.length(),": I'll take");
textBox(temp,"this one, then!");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
temp=rivalName;
temp.insert(rivalName.length()," received");
string temp2;
temp2="a ";
temp2.insert(temp2.length(),"Squirtle");
textBox(temp,temp2);
waitForInput();
render();
drawOak(b,c);
drawRival(d,e);
}
if(a==2)
{
e=28;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
e=31;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
d=22;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
d=25;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
d=28;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
d=31;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
e=28;
render();
drawOak(b,c);
drawRival(d,e);
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
string temp;
temp=rivalName;
temp.insert(rivalName.length(),": I'll take");
textBox(temp,"this one, then!");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
temp=rivalName;
temp.insert(rivalName.length()," received");
string temp2;
temp2="a ";
temp2.insert(temp2.length(),"Bulbasaur");
textBox(temp,temp2);
waitForInput();
render();
drawOak(b,c);
drawRival(d,e);
}
if(a==3)
{
e=28;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
d=19;
render();
drawOak(b,c);
drawRival(d,e);
Sleep(100);
d=22;
render();
drawOak(b,c);
drawRival(d,e);
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
string temp;
temp=rivalName;
temp.insert(rivalName.length(),": I'll take");
textBox(temp,"this one, then!");
waitForInput();
clearLine(56,60);
clearLine(57,60);
clearLine(58,60);
clearLine(59,60);
temp=rivalName;
temp.insert(rivalName.length()," received");
string temp2;
temp2="a ";
temp2.insert(temp2.length(),"Charmander");
textBox(temp,temp2);
waitForInput();
render();
drawOak(b,c);
drawRival(d,e);
}
}
