#include "../includeAll.h"




void setWindow(int Width, int Height);
void textBox(string lineOne,string lineTwo);
void waitForInput();
bool yesNo();

void outputOak();
void outputWhopper();
void outputAsh();
void outputRival();

void saveGame();


int main() 
{
SetConsoleTitle("Pokemon Red");
string name;
string rivalName;
bool yes=false;
string temp;



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
//outputWhopper();
textBox("This world is ","inhabited by");
waitForInput();
system("CLS");
//outputWhopper();
textBox("inhabited by","creatures called");
waitForInput();
system("CLS");
//outputWhopper();
textBox("creatures called","POKeMON!");
waitForInput();
system("CLS");
//outputWhopper();
textBox("For some people,","POKeMON are");
waitForInput();
system("CLS");
//outputWhopper();
textBox("POKeMON are","pets.  Others use");
waitForInput();
system("CLS");
//outputWhopper();
textBox("pets. Others use","them for fights.");
waitForInput();
system("CLS");
//outputWhopper();
textBox("Myself...","");
waitForInput();
system("CLS");
textBox("I study POKeMON","as a profession.");
waitForInput();
system("CLS");
//To Ash
outputAsh();
textBox("First, what is","your name?");
waitForInput();
//PERSON SHIFT TO RIGHT(LAST TEXTBOX STAYS)
//name=getName();
//name="Dan";
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
//outputAsh(); GARY NOW
textBox("This is my grand-","son. He's been");
waitForInput();
system("CLS");
//outputAsh();
textBox("son. He's been","your rival since");
waitForInput();
system("CLS");
//outputAsh();
textBox("your rival since","you were a baby.");
waitForInput();
system("CLS");
//outputAsh();
textBox("...Erm, what is","his name again?");
waitForInput();
system("CLS");
//PERSON SHIFT TO RIGHT(LAST TEXTBOX STAYS)
//name=getName();
//name="Dan";
cout<<"Enter your rival's name>";
cin>>rivalName;
system("CLS");
//Still on rival
temp = "name is ";
temp.insert(8,rivalName);
temp.insert(rivalName.length()+8,"!");
textBox("That's right! I","remember now! His");
waitForInput();
system("CLS");
textBox("remember now! His",temp);
waitForInput();
system("CLS");
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
while(input!=ENTER)
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
gotoxy(0,56);
cout<< "------------------------------------------------------------";
gotoxy(0,57);
cout<< "|";
for(int i=1;i<31-lineOne.length()/2-1;i++)
{
    cout<<" ";    
}
cout<<lineOne;
gotoxy(59,57);
cout<<"|";

gotoxy(0,58);
cout<< "|";
for(int i=1;i<31-lineTwo.length()/2-1;i++)
{
    cout<<" ";    
}
cout<<lineTwo;
gotoxy(59,58);
cout<<"|";
gotoxy(0,59);
cout<< "------------------------------------------------------------";
}


bool yesNo()
{
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
if(input==ENTER)
{
return yes;
system("CLS");
}
}
}



void outputOak()
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

cout<<"                           '':'':''''':'..\n";                            
cout<<"                         ...,   :   :    ;.\n";                           
cout<<"                       .     .:'.':::::  .\n";                       
cout<<"                          'ZZZZ:::::::ZZZZ.\n";                           
cout<<"                           .   0:::::0:::::.\n";                          
cout<<"                          .       >:::::::.\n";                    
cout<<"                           ,      .::::::::\n";                         
cout<<"                            .   =====::::;.\n";                       
cout<<"                           .':  .:::::::'.\n";                        
cout<<"                         .:::,,k0XWkKWW0oxd;:'\n";                        
cout<<"                        ,x  :;:0kx00KNWXdlc. :c\n";                   
cout<<"                      ,'  ; ,  :XXXXXXK,  ,.'lll.\n";                     
cout<<"                  0dkKK  .O  . 'XXXXXX0.  , 0;':l.\n";         
cout<<"               :xKO   O0olO.  .'XXXXXX0  ;  ;   c'\n";                    
cout<<"               .ol-( )-ocOd.  ,;NMMMMM0;,   .x   k'\n";                   
cout<<"               .;lO   okl;;.   lWMMMMMXc    .x   ,l.\n";           
cout<<"                 .kNkc:,cl.    'NMMMMM0.    .k,..;d.\n";            
cout<<"                   ,:olllO'    'XMMMMM0.     k:,ck.\n";            
cout<<"                        .k,... 'KMMMMMO  ,..,0o;,\n";                 
cout<<"                        .x.  . 'XMMMMMO  .  .x.\n";                     
cout<<"                        .x.  . 'XK==dxO  .  .x.\n";                     
cout<<"                        .k;..  'KkxxdxK  '..;k.\n";                  
cout<<"                         'cc:,,c0xxxdxO;::ccc'\n";                        
cout<<"                          .d0OkkddxxdddkkkO0.\n";                    
cout<<"                           '0kxddx0OxdO0OxO;\n";                        
cout<<"                          ,dddkKK0XxkkdddO0.\n";                      
cout<<"                         .doccokkxx .xklclox:\n";                    
cout<<"                           ',,,,:     :,,,,'";      
}


void outputWhopper()
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"                         .:::::..\n";
cout<<"              ..    .,:::::::   '';..\n";
cout<<"          .c  0d  .':::::::::;    :::';\n";   
cout<<"        :cdOcXO' od:::::::::::; .;::::::  d  x,\n";
cout<<"          0OOKxcoxl::::::O::::::O::::::dx xcl0O.\n";  
cout<<"         l   KKkK::::::::::::::::::::::lkXXkcxd.\n";  
cout<<"           .O0o'Od:::(::::::::::::::::):koKl\n";       
cout<<"            .'  ;kl:::\______________/:cx;  l.\n";   
cout<<"                 ,ol:::::::::::::::::ol'\n";      
cout<<"                   ;ooo::::::::::::::;\n";     
cout<<"         .:':'.      .dO::lllll:::'\n";       
cout<<"       .;     :c.   .oo:::::::::::.\n";       
cout<<"       .      .,llc:xo:::llllllll::.\n";    
cout<<"        ':..  ',;:::xKl:::::::::::::\n";     
cout<<"           :::::::::::::::llllllll:'\n";       
cout<<"             ',,,'.;:::::::::::::::.\n";    
cout<<"                  .::::::.    '::::'\n";    
cout<<"                   .,,,'";      
}

void outputAsh()
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"                    .;;::cc:,.\n";
cout<<"                  .;'        XNx.\n";     
cout<<"                 .:           :NWO.\n"; 
cout<<"                .:  KkXNNx.    MNxol.\n";
cout<<"                kk WMWMWKl    WMMMWNO.\n";
cout<<"               kkKWNOxkXKxxok0WWNo;.\n"; 
cout<<"              kkkk::::O::::O::::::'\n";                
cout<<"               k ':::::::::::::::'\n";           
cout<<"                   ':::::=:::::'\n";                
cout<<"                .::::.  :::  ::l..\n";              
cout<<"               ,0::::::. : .:::xkKO\n";     
cout<<"             'lkO0:::::::.:::::Kkxko'\n";        
cout<<"            ;Kkddk::::::::::::: 0kkxko.\n";     
cout<<"          'okxddkK:::::::::cco  oOOxxOd.\n";   
cout<<"        .ocldddkO::      :Cx00kxxddxkk.\n";    
cout<<"       .oc. :dxO::::::    .oNKWWOxxx:.\n";              
cout<<"       ;xkoodxO;:::           :::\n";              
cout<<"      .xlcdkkx; .::::;;;;:::;;;;:\n";         
cout<<"        ;oo,    .:::     .:;  .::.\n";         
cout<<"                :::.    .:;    .;:\n";       
cout<<"               .::,     : :.    .::\n";          
cout<<"               .:;,    .:  :    :::.\n";     
cout<<"               ,:.,:....'  .;kl::::.\n";     
cout<<"              .k,,coc        'ollO,\n";    
cout<<"             .l xOx::       .doldclo,\n";  
cout<<"              , NXKx,       .0OkNW0xdo.\n";       
cout<<"            .::::::.        ''.::::::.\n";                 
cout<<"              .,,,;'            '':;..'\n";            
}     

void saveGame()
{
//Line one is the name
//Boy or girl
//money
//three is the playTime
//Pokedex
//Badges
//Player position 
   
ofstream saveFile;
saveFile.open ("Save.txt");
//saveFile << name <<endl;
//saveFile << gender<<endl;

//saveFile.close();     
}
