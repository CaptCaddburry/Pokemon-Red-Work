class attacks
{
public:
string name;
int damage;
int curpp;
int pp;
int accuracy;
void tackle()
{
name="Tackle";
damage=35;
curpp=35;
pp=35;
accuracy=95;
}
void scratch()
{
name="Scratch";
damage=40;
curpp=35;
pp=35;
accuracy=100;
}
void growl()
{
name="Growl";
damage=0;
curpp=40;
pp=40;
accuracy=100;
}
void tailWhip()
{
name="Tail Whip";
damage=0;
curpp=30;
pp=30;
accuracy=100;
}
};


class pokemon
{
public:
string name;
int health;
int maxHealth;
int attack;
int exp;
int level;
string ailment;
attacks moves[4];
int permDefense;
int curDefense;
int pokedexNumber;
int baseExp;
void healthBar(int position=1) //2 is up top, 1 is down below
{
    float scale=((health*1.00)/(maxHealth*1.00));
    scale = scale*20;
    scale = ceil(scale);
    //cout<< fixed << showpoint;
    //cout<< setprecision(2);
    cout<< " " << (scale);
    cout<< " " << health << " " << maxHealth;
    if((scale)<=10&&(scale)>2)
    {
        for(int i=1;i<(scale);i++)
        {
            if(position==2)
            {
            gotoxy(i+4,6);
            }else{
                  gotoxy(i+37,52);
                  }
            textcolor(254);
            cout<< "*";
        }
    }
    else if((scale<=2)&&(scale>1))
    {
        for(int i=1;i<(scale);i++)
        {
            if(position==2)
            {
            gotoxy(i+4,6);
            }else{
                  gotoxy(i+37,52);
                  }
        textcolor(252);
        cout<< "*";
            
        }
    }else if (scale==1)
    {
        if(position==2)
        {
        gotoxy(5,6);
        }else{
              gotoxy(37,52);
              }
        textcolor(252);
        cout<<"*";
    }
    else
    {
        for(int i=1;i<(scale);i++)
        {
            if(position==2)
            {
            gotoxy(i+4,6);
            }else{
                  gotoxy(i+37,52);
                  }
        textcolor(250);
        cout<< "*";
        }
    }
}
void healthBarInBag() //2 is up top, 1 is down below
{
    float scale=((health*1.00)/(maxHealth*1.00));
    scale = scale*20;
    scale = ceil(scale);
    //cout<< fixed << showpoint;
    //cout<< setprecision(2);
    cout<< " " << health << " " << maxHealth;
    if((scale)<=10&&(scale)>2)
    {
        for(int i=1;i<(scale);i++)
        {
            textcolor(254);
            cout<< "*";
        }
    }
    else if((scale<=2)&&(scale>1))
    {
        for(int i=1;i<(scale);i++)
        {
            textcolor(252);
            cout<< "*";
            
        }
    }else if (scale==1)
    {
        textcolor(252);
        cout<<"*";
    }
    else
    {
        for(int i=1;i<(scale);i++)
        {
        textcolor(250);
        cout<< "*";
        }
    }
}
void displayInfo(int position) //1 is down below, 2 is up top
{
    if(position==1)
    {
    textcolor(240);
    gotoxy(58,49);
    cout<< "|\n";
    gotoxy(58,50);
    cout<< "|\n";
    gotoxy(58,51);
    cout<< "|\n";
    gotoxy(58,52);
    cout<< "|\n";
    gotoxy(58,53);
    cout<< "|\n";
    gotoxy(37,54);
    cout<< "<--------------------|\n";
    gotoxy(38,50);
    cout<< name;
    gotoxy(38,51);
    cout<< "LVL:" << level;
    healthBar(1);
    }else{
    textcolor(240);
    gotoxy(3,3);
    cout<< "|\n";
    gotoxy(3,4);
    cout<< "|\n";
    gotoxy(3,5);
    cout<< "|\n";
    gotoxy(3,6);
    cout<< "|\n";
    gotoxy(3,7);
    cout<< "|\n";
    gotoxy(3,8);
    cout<< "|-------------------->\n";
    gotoxy(5,4);
    cout<< name;
    gotoxy(5,5);
    cout<< "LVL:" << level;
    healthBar(2);     
    }
}
void pokeDex(int dex)
{
if(dex==1)
{
srand(time(0));
name="Bulbasaur";
maxHealth=rand()%4+21;
health=maxHealth;
attack=rand()%6+9;
exp=135;
level=5;
permDefense=rand()%6+9;
curDefense=permDefense;
pokedexNumber=1;
baseExp=64;
moves[0].tackle();
moves[1].growl();
}
if(dex==4)
{
srand(time(0));
name="Charmander";
maxHealth=rand()%3+20;
health=maxHealth;
attack=rand()%6+9;
exp=135;
level=5;
permDefense=rand()%6+9;
curDefense=permDefense;
pokedexNumber=4;
baseExp=62;
moves[0].scratch();
moves[1].growl();
}
if(dex==7)
{
srand(time(0));
name="Squirtle";
maxHealth=rand()%4+20;
health=maxHealth;
attack=rand()%6+9;
exp=135;
level=5;
permDefense=rand()%6+11;
curDefense=rand()%6+11;
pokedexNumber=7;
baseExp=63;
moves[0].tackle();
moves[1].tailWhip();
}
if(dex==16)
{
srand(time(0));
name="Pidgey";
maxHealth=rand()%4+21;
health=maxHealth;
attack=rand()%6+9;
exp=135;
level=5;
permDefense=rand()%6+9;
curDefense=permDefense;
pokedexNumber=16;
baseExp=50;
moves[0].tackle();
moves[1].growl();
}
if(dex==19)
{
srand(time(0));
name="Rattata";
maxHealth=rand()%4+21;
health=maxHealth;
attack=rand()%6+9;
exp=135;
level=5;
permDefense=rand()%6+9;
curDefense=permDefense;
pokedexNumber=19;
baseExp=57;
moves[0].tackle();
}
}

void draw1(int a)
{
if(a==1)
{
textcolor(249);
int q=30;
textcolor(242);
gotoxy(3,q);
cout<< "          ,';\n";
q++;
gotoxy(1,q);
cout<< "         :; +,\n";
q++;
gotoxy(1,q);
cout<< "         ++  +\n";
q++;
gotoxy(1,q);
cout<< "        +':'  @@@+,\n";
q++;
gotoxy(1,q);
cout<< "        +':#  ;;@;;+:\n";
q++;
gotoxy(1,q);
cout<< "        +';@,...''';,::.\n";
q++;
gotoxy(1,q);
cout<< "        +';@':` .';.`'':.   `..\n";
q++;
gotoxy(1,q);
cout<< "        +';@':.   .@':..@   .@@.\n";
q++;
gotoxy(1,q);
cout<< "       @@';@'',      +'. @.;+  +;\n";
q++;
gotoxy(1,q);
cout<< "     .+@+:.;#',      :''..';.  +;\n";
q++;
gotoxy(1,q);
cout<< "    .;+@'.`,@+,,     `:':.+;  ;;.\n";
q++;
gotoxy(1,q);
cout<< "   .;#+#:.`,@+:,      `,+,#; `#\n";
q++;
gotoxy(1,q);
cout<< "   +++@':.`,@+;,;      .@,#;`,,#;\n";
q++;
gotoxy(1,q);
cout<< "  @+'+@':.  '#;,,,     .@,#',,@.;\n";
q++;
gotoxy(1,q);
cout<< "  @;'#+':.  '#';,,;    .@,#':#.'#+\n";
q++;
gotoxy(1,q);
cout<< "  @;'#'':.  :#'',,,.   .@'#':+;#@+\n";
q++;
gotoxy(1,q);
cout<< "  @:'#'':.  ,+'':,,,```,@@#':'@@@+.\n";
q++;
gotoxy(1,q);
cout<< "  @.;#'':.  ,;#'':,,,,:+@@+'''@@++@\n";
q++;
gotoxy(1,q);
cout<< "  @.;#''':.  :#''':,,;+@@''''''''+@\n";
q++;
gotoxy(1,q);
cout<< "  @::+#'';:. ,+#'';;;+@@@':'####+\n";
q++;
gotoxy(1,q);
cout<< "   ';;++'';:,.;'+''++@@@+';;'+@\n";
q++;
gotoxy(1,q);
cout<< "    ';;#+++++,;;@++@@@@#'';:;++.\n";
q++;
gotoxy(1,q);
cout<< "     #,'#@@@@@@@@@@@@@+'''::+@\n";
textcolor(240);
}
if(a==4)
{
textcolor(252);
int q=32;
gotoxy(3,q);
cout<< "                ,...\n";
q++;
gotoxy(3,q);
cout<< "            ,;;::::::::.\n";
q++;
gotoxy(3,q);
cout<< "           .:':,,,,,,;+;.\n";
q++;
gotoxy(3,q);
cout<< "          .:':.``,,,,,;;:\n";
q++;
gotoxy(3,q);
cout<< "          ;:.` `,,,,,;,,::\n";
q++;
gotoxy(3,q);
cout<< "         `::,.``.,,,,,:'##\n";
q++;
gotoxy(3,q);
cout<< "         .+,,.`.,,,,,,,;++`\n";
q++;
gotoxy(3,q);
cout<< "         .#:,,.,,,,,,,,:;':\n";
q++;
gotoxy(3,q);
cout<< "         .#:,,,,,,,,,,,,:::::.\n";
q++;
gotoxy(3,q);
cout<< "    # # #:.#:,,,,,,,,,,,,:;;+;\n";
q++;
gotoxy(3,q);
cout<< "   #.#+#:.#:,,,,,,,,,,+:;::,,,\n";
q++;
gotoxy(3,q);
cout<< "   :;:;;;'#:,,,,++,,+++;;',.:'\n";
q++;
gotoxy(3,q);
cout<< "   :+`,,'#+:,,,,,++++++#'#\n";
q++;
gotoxy(3,q);
cout<< "   ;+`,,'#;;:,,,,,,:'+###; #\n";
q++;
gotoxy(3,q);
cout<< "   ;.,,;+#;;+',,,,:'#.`,'##\n";
q++;
gotoxy(3,q);
cout<< "    :;;;+#;,+',;;;'#.` .:#'\n";
q++;
gotoxy(3,q);
cout<< "    ;+;;'':,';,:;'+; `.,:#\n";
q++;
gotoxy(3,q);
cout<< "     '';;:,;;:,,:+':..,:#\n";
q++;
gotoxy(3,q);
cout<< "      #':,:#:,,,,;:,,:,:'\n";
q++;
gotoxy(3,q);
cout<< "      #:,,,;:,,,,,,,,;;++\n";
q++;
gotoxy(3,q);
cout<< "    .+:,,:+:,,,,,;;;;;;++\n";
textcolor(240);
}
if(a==7)
{
textcolor(249);
int q=37;
gotoxy(3,q);
cout<<"             :@@@@@t.\n";
q++;
gotoxy(3,q);
cout<<"           ;ME    ::BL,\n";
q++;
gotoxy(3,q);
cout<<"         g@7..   :::: '@p\n";
q++;
gotoxy(3,q);
cout<<"        .:!:::::::::  i :.\n";
q++;
gotoxy(3,q);
cout<<"       :@p::::::::: .Kwg.;L\n";
q++;
gotoxy(3,q);
cout<<"       :@E:::::::;E.:3KK.BL\n";
q++;
gotoxy(3,q);
cout<<"       :ME::::::4MR:::::MF\n";
q++;
gotoxy(3,q);
cout<<"        :;;@@@;:::::73B:;'\n";
q++;
gotoxy(3,q);
cout<<"     ,;3MQ@::@@E::;.:BBRF\n";
q++;
gotoxy(3,q);
cout<<"    @F*g@E:::;5p::J::F*\n";
q++;
gotoxy(3,q);
cout<<"   J@E3BNEB:;E3BBBEB@@BE.\n";
q++;
gotoxy(3,q);
cout<<"  :p@PF :@@@@PF   '@@SF?5g.\n";
q++;
gotoxy(3,q);
cout<<" j3@`   ::7E!    ::73:.. `;j.\n";
q++;
gotoxy(3,q);
cout<<":$3B...::::E::::::::@gz:..3ML\n";
q++;
gotoxy(3,q);
cout<<":$3B:::::::E::::::::@@@@Ez!'\n";
q++;
gotoxy(3,q);
cout<<" $3Bgz:::;gE:::::::g@$.\n";
q++;
gotoxy(3,q);
cout<<" ':@5@@@@55@@c::::@@@'\n";
textcolor(240);
}
}

void draw2(int a)
{
if(a==1)
{
textcolor(242);
int q=5;
gotoxy(28,q);
cout<<"                     ;b.\n";
q++;
gotoxy(28,q);
cout<<"                 ,,;ggy5E\n";
q++;
gotoxy(28,q);
cout<<"             ,;EE5E   @ 3E.\n";
q++;
gotoxy(28,q);
cout<<"       .,, .@E@5     tS :3Bk.\n";
q++;
gotoxy(28,q);
cout<<"      @F*3 @BMM  . Zk9E  :35L.\n";
q++;
gotoxy(28,q);
cout<<"      J3. ';;@k'''Zt 52t  3tE$L\n";
q++;
gotoxy(28,q);
cout<<"      _@   0::'0  '3D5Xgz  E$L\n";
q++;
gotoxy(28,q);
cout<<"     |  ';;:;;...,'jtLE3EEg@'\n";
q++;
gotoxy(28,q);
cout<<"     |  5@====@|   ?55@@35E.\n";
q++;
gotoxy(28,q);
cout<<"      scz25m::J|_ _z3@  =ciL\n";
q++;
gotoxy(28,q);
cout<<"       ``';7   pz-ZE F   ::3L\n";
q++;
gotoxy(28,q);
cout<<"           E.   Z5@5  @z  :5L\n";
q++;
gotoxy(28,q);
cout<<"            ''3EzzE   'Mzz@'\n";
textcolor(240);
}
if(a==4)
{
textcolor(252);
int q=5;
gotoxy(28,q);
cout<<"           ;KE;     ,\n";
q++;
gotoxy(28,q);
cout<<"          D  ..Lf   ::   ;\n";
q++;
gotoxy(28,q);
cout<<"         # .,;,;;,   ;:\n";
q++;
gotoxy(28,q);
cout<<"        t:;;;,:iif , :;;\n";
q++;
gotoxy(28,q);
cout<<"        ,D.;;,GGt# ;  ;;,;:\n";
q++;
gotoxy(28,q);
cout<<"        ,#i;;iW#fW .; ,,f,;,\n";
q++;
gotoxy(28,q);
cout<<"        ,EG;,jiGfjL ,;:;,f,\n";
q++;
gotoxy(28,q);
cout<<"        i,..;;,fGjG  ,:;,ff\n";
q++;
gotoxy(28,q);
cout<<"        t ;;;:WtLfD:. ,;;if;\n";
q++;
gotoxy(28,q);
cout<<"         Dt:,GjDLtfE .,,;;ft;;.\n";
q++;
gotoxy(28,q);
cout<<"          i#GfLL;iifL. ;;,ff,;,.\n";
q++;
gotoxy(28,q);
cout<<"             Di:L;,fD .:;,fff,,\n";
q++;
gotoxy(28,q);
cout<<"            f.,G,;;jjW ..;ffj;\n";
q++;
gotoxy(28,q);
cout<<"          jtW  j.;tL;,j  KfL\n";
q++;
gotoxy(28,q);
cout<<"         ,; K E.:jE;;,L,Etft\n";
q++;
gotoxy(28,q);
cout<<"         W,,K fiLjf.;;:Wfffj\n";
q++;
gotoxy(28,q);
cout<<"         :Ej,; ii K,;;,WfGt\n";
q++;
gotoxy(28,q);
cout<<"             D ...:;;;;KLf\n";
q++;
gotoxy(28,q);
cout<<"              W .. W:,DD,\n";
q++;
gotoxy(28,q);
cout<<"               Gt..jDtf,.\n";
q++;
gotoxy(28,q);
cout<<"              :Kff#,f,jG;\n";
q++;
gotoxy(28,q);
cout<<"             DL:tGi.j;;tDt.\n";
q++;
gotoxy(28,q);
cout<<"            E.;iijD ttt,fG;\n";
q++;
gotoxy(28,q);
cout<<"           ;tD,GL#:. #:DtG#\n";
q++;
gotoxy(28,q);
cout<<"             fifjf;   . LtLf\n";
               
textcolor(240);
}
if(a==7)
{
textcolor(249);
int q=5;
gotoxy(28,q);
cout<< "            .,''',.\n";
q++;
gotoxy(28,q);
cout<< "           :.`...,;:\n";
q++;
gotoxy(28,q);
cout<< "           .,.l.l..,,\n";
q++;
gotoxy(28,q);
cout<< "          ,,.......,`\n";
q++;
gotoxy(28,q);
cout<< "          '::)___(::`\n";
q++;
gotoxy(28,q);
cout<< "           ;,;,,.;,,:\n";
q++;
gotoxy(28,q);
cout<< "           ':,,..,:,:.\n";
q++;
gotoxy(28,q);
cout<< "           ;:::,.,;:::.\n";
q++;
gotoxy(28,q);
cout<< "          .,;++''::.:::.\n";
q++;
gotoxy(28,q);
cout<< "        :::;::':,,;':,::\n";
q++;
gotoxy(28,q);
cout<< "        :,.:::::`.;+.;':.\n";
q++;
gotoxy(28,q);
cout<< "        ` '  ,,,.';:;,.;: .,,.\n";
q++;
gotoxy(28,q);
cout<< "             `:```.:',.' :.,.;:.\n";
q++;
gotoxy(28,q);
cout<< "          .. ';.,;,::':;,,,,.:,.\n";
q++;
gotoxy(28,q);
cout<< "         .:..+.:``,';;;:.,:`:.::\n";
q++;
gotoxy(28,q);
cout<< "         `::,',,`.:'':'+,`..::'`\n";
q++;
gotoxy(28,q);
cout<< "         `.;:':' ,,,;',`` :',`\n";
q++;
gotoxy(28,q);
cout<< "          `````  .,;':`:\n";
q++;
gotoxy(28,q);
cout<< "                 `.:`,:,\n";
textcolor(240);
}
if(a==16)
{
textcolor(240);
int q=5;
gotoxy(28,q);
cout<< "             ......\n";
q++;
gotoxy(28,q);
cout<< "            ;;;:;:::.\n";
q++;
gotoxy(28,q);
cout<< "           .;:;#;;;;'\n";
q++;
gotoxy(28,q);
cout<< "           #@###:::;\n";
q++;
gotoxy(28,q);
cout<< "          <:   ##:'';:`\n";
q++;
gotoxy(28,q);
cout<< "           :    #'.:'''':\n";
q++;
gotoxy(28,q);
cout<< "          .;      :'';';#++++;#\n";
q++;
gotoxy(28,q);
cout<< "         .:       ':'';#;+++++#\n";
q++;
gotoxy(28,q);
cout<< "         ::   l    :''#;;,.,+;#\n";
q++;
gotoxy(28,q);
cout<< "         ':    l_l__'#++++++:#\n";
q++;
gotoxy(28,q);
cout<< "          ;:        '::'####\n";
q++;
gotoxy(28,q);
cout<< "          '::.        :;;;'\n";
q++;
gotoxy(28,q);
cout<< "           '';;,....:':;:'\n";
q++;
gotoxy(28,q);
cout<< "            .;''----;;''\n";
q++;
gotoxy(28,q);
cout<< "            ::';:;`+:::;\n";
q++;
gotoxy(28,q);
cout<< "           #::#    ##:',;\n";
q++;
gotoxy(28,q);
cout<< "         #; #    ##     :.\n";
}
if(a==19)
{
textcolor(240);
int q=5;
gotoxy(28,q);
cout<< "              ,::':;.\n";
q++;
gotoxy(28,q);
cout<< "              ;;';;+;\n";
q++;
gotoxy(28,q);
cout<< "              ':;;;;+\n";
q++;
gotoxy(28,q);
cout<< "               ':::+'+\n";
q++;
gotoxy(28,q);
cout<< "                   +'+\n";
q++;
gotoxy(28,q);
cout<< "  .''       ,'''   +''+\n";
q++;
gotoxy(28,q);
cout<< "  .  '.....,'   '   '';\n";
q++;
gotoxy(28,q);
cout<< "   ;'+''+++;;'::'  ,'':\n";
q++;
gotoxy(28,q);
cout<< "  .; +'+   l;;::, :'',\n";
q++;
gotoxy(28,q);
cout<< "  ;@''''@ l'':'  ..''\n";
q++;
gotoxy(28,q);
cout<< "  .'+'''++:''''++#+\n";
q++;
gotoxy(28,q);
cout<< "==   :';;  '   '+++\n";
q++;
gotoxy(28,q);
cout<< "  :        ,,'''''.\n";
q++;
gotoxy(28,q);
cout<< "  :, #  #  .'+''''+.\n";
q++;
gotoxy(28,q);
cout<< "   : ###  .+''''''''\n";
q++;
gotoxy(28,q);
cout<< "    :'':`:+'''''+'''\n";
q++;
gotoxy(28,q);
cout<< "    ++:####''+';+''',\n";
q++;
gotoxy(28,q);
cout<< "   :''####'''##:.+'':\n";
q++;
gotoxy(28,q);
cout<< "   ;;;'.,'''##'.,:.:.\n";
q++;
gotoxy(28,q);
cout<< "   :.:.`,;:;##  ;:;'\n";
q++;
gotoxy(28,q);
cout<< "   ;:   ;:::   .::'\n";
q++;
gotoxy(28,q);
cout<< "        '::'\n";

}
}
};
