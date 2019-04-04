#include<iostream>
#include<fstream>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int a=0;
int o=0;
class quiz{


       public:
       	
              	string qa,o1,o2,o3,o4;
       		int cor;
       			string name;
       		int age,day,mon,pts;
       		
       		quiz()
       		{
       			cout<<"_______________________________________"<<endl;
       			cout<<"|                                     |"<<endl;
       			cout<<"|         WELCOME                     |"<<endl;
       			cout<<"|               TO                    |"<<endl;
       			cout<<"|                 QUIZ                |"<<endl;
       			cout<<"|                                     |"<<endl;
       			cout<<"|             Hosted By Ashish Kumar  |"<<endl;
       			cout<<"|_____________________________________|"<<endl;
			   }
       	void details()
       	{
       	qsz:
       		ofstream d;
			   d.open("data.txt");
       		cout<<"please enter your details ";
       		cout<<endl<<"enter you name"<<endl;cin>>name;
       		cout<<"age"<<endl;cin>>age;
       		cout<<"date of participation"<<endl;cin>>day;
       		if(day>30||day<1)
       		{
       			cout<<"invalid date ";
       			getch();
       			goto qsz;
			   }
			cout<<"month of participation"<<endl;cin>>mon;
			if(mon>12||mon<1)
			{
				cout<<"invalid month ";
				goto qsz;
			}
       		d<<name<<endl<<age<<endl<<day<<endl<<mon;
       			system("cls");
		   }
	void  getdata()
{
	ofstream q1;
	q1.open("q.txt");
         cout<<endl<<"enter first question";
		 cin>>qa;
		 cout<<endl<<"enter options";
		 cout<<endl<<"1 .";cin>>o1;	
		  cout<<endl<<"2 .";cin>>o2;
		   cout<<endl<<"3 .";cin>>o3;
		    cout<<endl<<"4 .";cin>>o4;
		     cout<<endl<<"correct opt .";cin>>cor;
	q1<<qa<<endl<<o1<<endl<<endl<<o2<<endl<<o3<<endl<<o4<<endl<<cor;
	
		system("cls");
	ofstream q2;
	q2.open("q1.txt");
         cout<<endl<<"enter second question";
		 cin>>qa;
		 cout<<endl<<"enter options";
		 cout<<endl<<"1 .";cin>>o1;	
		  cout<<endl<<"2 .";cin>>o2;
		   cout<<endl<<"3 .";cin>>o3;
		    cout<<endl<<"4 .";cin>>o4;
		     cout<<endl<<"correct opt .";cin>>cor;
	q2<<endl<<qa<<endl<<o1<<endl<<o2<<endl<<o3<<endl<<o4<<endl<<cor;
		system("cls");
		ofstream q3;
	q3.open("q2.txt");
         cout<<endl<<"enter third question";
		 cin>>qa;
		 cout<<endl<<"enter options";
		 cout<<endl<<"1 .";cin>>o1;	
		  cout<<endl<<"2 .";cin>>o2;
		   cout<<endl<<"3 .";cin>>o3;
		    cout<<endl<<"4 .";cin>>o4;
		     cout<<endl<<"correct opt .";cin>>cor;
	q3<<qa<<endl<<o1<<endl<<o2<<endl<<o3<<endl<<o4<<endl<<cor;
		system("cls");
	ofstream q4("q3.txt");
         cout<<endl<<"enter fourth question";
		 cin>>qa;
		 cout<<endl<<"enter options";
		 cout<<endl<<"1 .";cin>>o1;	
		  cout<<endl<<"2 .";cin>>o2;
		   cout<<endl<<"3 .";cin>>o3;
		    cout<<endl<<"4 .";cin>>o4;
		     cout<<endl<<"correct opt .";cin>>cor;
	q4<<qa<<endl<<o1<<endl<<o2<<endl<<o3<<endl<<o4<<endl<<cor;
		system("cls");
	ofstream q5("q4.txt");
         cout<<endl<<"enter fifth question";
		 cin>>qa;
		 cout<<endl<<"enter options";
		 cout<<endl<<"1 .";cin>>o1;	
		  cout<<endl<<"2 .";cin>>o2;
		   cout<<endl<<"3 .";cin>>o3;
		    cout<<endl<<"4 .";cin>>o4;
		     cout<<endl<<"correct opt .";cin>>cor;
	q5<<qa<<endl<<o1<<endl<<o2<<endl<<o3<<endl<<o4<<endl<<cor;
		system("cls");
}
    void putdata()
    {
    	ifstream q1;
		q1.open("q.txt");
    	q1>>o1>>o2>>o3>>o4>>cor>>qa;
    	cout<<endl<<qa<<endl<<"1."<<o1<<endl<<"2."<<o2<<endl<<"3."<<o3<<endl<<"4."<<o4;
    	ifstream q2("q1.txt");
    	q2>>qa>>o1>>o2>>o3>>o4>>cor;
    	cout<<endl<<qa<<endl<<"1."<<o1<<endl<<"2."<<o2<<endl<<"3."<<o3<<endl<<"4."<<o4;
    	ifstream q3("q2.txt");
    	q3>>qa>>o1>>o2>>o3>>o4>>cor;
    	cout<<endl<<qa<<endl<<"1."<<o1<<endl<<"2."<<o2<<endl<<"3."<<o3<<endl<<"4."<<o4;
    	ifstream q4("q3.txt");
    	q4>>qa>>o1>>o2>>o3>>o4>>cor;
    	cout<<endl<<qa<<endl<<"1."<<o1<<endl<<"2."<<o2<<endl<<"3."<<o3<<endl<<"4."<<o4;
    	ifstream q5("q4.txt");
    	q5>>qa>>o1>>o2>>o3>>o4>>cor;
    	cout<<endl<<qa<<endl<<"1."<<o1<<endl<<"2."<<o2<<endl<<"3."<<o3<<endl<<"4."<<o4;
    	getch();
    		system("cls");
	}
	void dec()
	{
		cout<<"_________________________________________________________________________________________________________________"<<endl;
		cout<<"|                                                                                                               |"<<endl;
		cout<<"|                                                                                                               |"<<endl;
        cout<<"|_______________________________________________________________________________________________________________|"<<endl;       
        cout<<"________________________________________________                   ______________________________________________"<<endl;
		cout<<"|                                              |                   |                                            |"<<endl;
		cout<<"|______________________________________________|                   |____________________________________________|"<<endl; 
		cout<<"________________________________________________                   ______________________________________________"<<endl;
		cout<<"|                                              |                   |                                            |"<<endl;
		cout<<"|______________________________________________|                   |____________________________________________|"<<endl;
		cout<<"________________________________________________"<<endl;
		cout<<"|                                              |"<<endl;                  
		cout<<"|______________________________________________|"<<endl;
		cout<<"________________________________________________                   ______________________________________________"<<endl;
		cout<<"|                                              |                   |                                            |"<<endl;
		cout<<"|______________________________________________|                   |____________________________________________|"<<endl;
		cout<<"________________________________________________________________"<<endl;
		cout<<"|                                                              |"<<endl;
		cout<<"|______________________________________________________________|"<<endl;
	}

};
void cal()
{
     string b;
     int s;
	if(a==0)
	{
		cout<<"enter the number of the friend :";cin>>b;
		for( s=0;s<60;s++)
		
		{
			Sleep(500);
			cout<<" "<<s;
			a=1;
			if(s==59)
			{
				cout<<endl<<"your time is up"<<endl;
			}
		}
		
		getch();
	}
	else
	{
		cout<<endl<<"you already used this lifeline "<<endl;
	}
}
void gotoxy (int x, int y)
{

    COORD coord; 

    coord.X = x; coord.Y = y; 

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

main()
{
	system("color 0A");
	quiz w;
	int opt;
	 w.pts=0;
	 w.details();
	int cho;
	waz:
		cout<<endl<<"1.start quiz"<<endl<<"2.edit quiz"<<endl<<"3.view quiz with correct answers"<<endl<<"4.verify your details";
		cout<<endl<<"enter your option :";
			cin>>cho;
	switch(cho)
	
{
	case 1:
		
		{
			 qwe:
                system("cls");
                w.dec();
              
					ifstream q1("q.txt");
			q1>>w.qa>>w.o1>>w.o2>>w.o3>>w.o4>>w.cor;
	    gotoxy(2,2);cout<<w.qa<<endl;
		gotoxy(2,5);cout<<"1."<<w.o1<<endl;
		gotoxy(68,5);cout<<"2."<<w.o2<<endl;
		gotoxy(2,8);cout<<"3."<<w.o3<<endl;
		gotoxy(68,8);cout<<"4."<<w.o4<<endl;
		gotoxy(2,11);cout<<"5 . exit";
		gotoxy(2,14);cout<<"6. call a friend"<<endl;
		gotoxy(68,14);cout<<"7. double chance"<<endl;
		gotoxy(2,17);cout<<"enter your option :"<<endl;
			cin>>opt;
		
			if(opt==7)
			{
				if(o==0)
				{
				cout<<endl<<"enter your option :";cin>>opt;
				if(opt==w.cor)
				{
					o=1;
					goto zxc;
					
				}
				else
				{
					cout<<"wrong ans"<<endl;
					cout<<"life line - double chance ";
					o=1;
					getch();
					goto qwe;
				}
			}
				else if(o==1)
				{
					cout<<endl<<"already used this life line"<<endl;
					cout<<endl<<"enter your option :";cin>>opt;
				}
			}
		
			if(opt==6)
			{
				cal();
				cout<<endl<<"enter your option :";cin>>opt;
			}
			if(opt==5)
			{
				cout<<"thank you for participation ";
				getch();
				break;
				}
				
			if(opt==w.cor)
			{   zxc:
				cout<<"correct answer"<<endl;
			 w.pts=w.pts+10;
				cout<<endl;getch();
							if(w.pts==50)
			{
				cout<<"YOUR PRIZE IS 50,000";
				getch();
			}
			else if(w.pts==40)
			{
				cout<<"YOUR PRIZE IS 40,000";
				getch();
			}
			else if(w.pts==30)
			{
				cout<<"YOUR PRIZE IS 30,000";
			getch();
			}
			else if(w.pts==20)
			{
				cout<<"YOUR PRIZE IS 20,000";
			getch();
			}
			else if(w.pts==10)
			{
				cout<<"YOUR PRIZE IS 10,000";
			getch();
			}

				
			}
			else
			{
				cout<<"wrong answer";
			
	cout<<"you are out of the game";getch();	system("cls");
		break;}
		rty:
		system("cls");
		w.dec();
		
				ifstream q2("q1.txt");
			q2>>w.qa>>w.o1>>w.o2>>w.o3>>w.o4>>w.cor;
		 gotoxy(2,2);cout<<w.qa<<endl;
		gotoxy(2,5);cout<<"1."<<w.o1<<endl;
		gotoxy(68,5);cout<<"2."<<w.o2<<endl;
		gotoxy(2,8);cout<<"3."<<w.o3<<endl;
		gotoxy(68,8);cout<<"4."<<w.o4<<endl;
		gotoxy(2,11);cout<<"5 . exit";
	gotoxy(2,14);cout<<"6. call a friend"<<endl;
		gotoxy(68,14);cout<<"7. double chance"<<endl;
		gotoxy(2,17);cout<<"enter your option :";
			cin>>opt;
						if(opt==7)
			{
				if(o==0)
				{
				cout<<endl<<"enter your option :";cin>>opt;
				if(opt==w.cor)
				{
						o=1;
					goto zxc;
				
				}
				else
				{
					cout<<"wrong ans"<<endl;
					cout<<"life line - double chance ";
					o=1;
					getch();
					goto rty;
				}
			}
				else if(o==1)
				{
					cout<<endl<<"already used this life line"<<endl;
					cout<<endl<<"enter your option :";cin>>opt;
				}
			}
			if(opt==6)
			{
				cal();
				cout<<"enter your option :";cin>>opt;
			}
			if(opt==5)
			{
				cout<<"thank you for participation ";
			getch();
				break;
				}
			if(opt==w.cor)
			{    w.pts=w.pts+10;
				cout<<endl;getch();	
							if(w.pts==50)
			{
				cout<<"YOUR PRIZE IS 50,000";
				getch();
			}
			else if(w.pts==40)
			{
				cout<<"YOUR PRIZE IS 40,000";
				getch();
			}
			else if(w.pts==30)
			{
				cout<<"YOUR PRIZE IS 30,000";
				getch();
			}
			else if(w.pts==20)
			{
				cout<<"YOUR PRIZE IS 20,000";
				getch();
			}
			else if(w.pts==10)
			{
				cout<<"YOUR PRIZE IS 10,000";
				getch();
			}

				
			}
			else
			{
								cout<<"wrong answer";

			rfv:
	cout<<"you are out of the game";getch();	system("cls");
	break;		}
	asd:
		system("cls");
		w.dec();
				ifstream q3("q2.txt");
			q3>>w.qa>>w.o1>>w.o2>>w.o3>>w.o4>>w.cor;
			 gotoxy(2,2);cout<<w.qa<<endl;
		gotoxy(2,5);cout<<"1."<<w.o1<<endl;
		gotoxy(68,5);cout<<"2."<<w.o2<<endl;
		gotoxy(2,8);cout<<"3."<<w.o3<<endl;
		gotoxy(68,8);cout<<"4."<<w.o4<<endl;
		gotoxy(2,11);cout<<"5 . exit";
			gotoxy(2,14);	cout<<"6. call a friend"<<endl;
		gotoxy(68,14);cout<<"7. double chance"<<endl;
		gotoxy(2,17);cout<<"enter your option :";

			cin>>opt;
						if(opt==7)
			{
				if(o==0)
				{
				cout<<endl<<"enter your option :";cin>>opt;
				if(opt==w.cor)
				{   o=1;
					goto zxc;
					
				}
				else
				{
					cout<<"wrong ans"<<endl;
					cout<<"life line - double chance "<<endl;
					o=1;
					getch();
					goto asd;
				}
			}
				else if(o==1)
				{
					cout<<endl<<"already used this life line"<<endl;
					cout<<endl<<"enter your option :";cin>>opt;
				}
			}
			if(opt==6)
			{
				cal();
				cout<<endl<<"enter your option :";cin>>opt;
			}
			if(opt==5)
			{
				cout<<"thank you for participation ";
			getch();	break;}
			if(opt==w.cor)
			{    w.pts=w.pts+10;
				cout<<endl;getch();	
				;
							if(w.pts==50)
			{
				cout<<"YOUR PRIZE IS 50,000";
				getch();
			}
			else if(w.pts==40)
			{
				cout<<"YOUR PRIZE IS 40,000";
			getch();
			}
			else if(w.pts==30)
			{
				cout<<"YOUR PRIZE IS 30,000";
			getch();
			}
			else if(w.pts==20)
			{
				cout<<"YOUR PRIZE IS 20,000";
			getch();
			}
			else if(w.pts==10)
			{
				cout<<"YOUR PRIZE IS 10,000";
			getch();
			}

			}
			else
			{				cout<<"wrong answer";

			cout<<"you are out of the game";getch();	system("cls");
break;

			}
			uio:
				system("cls");
				w.dec();
				ifstream q4("q3.txt");
			q3>>w.qa>>w.o1>>w.o2>>w.o3>>w.o4>>w.cor;
			 gotoxy(2,2);cout<<w.qa<<endl;
		gotoxy(2,5);cout<<"1."<<w.o1<<endl;
		gotoxy(68,5);cout<<"2."<<w.o2<<endl;
		gotoxy(2,8);cout<<"3."<<w.o3<<endl;
		gotoxy(68,8);cout<<"4."<<w.o4<<endl;
		gotoxy(2,11);cout<<"5 . exit";
				gotoxy(2,14);cout<<"6. call a friend"<<endl;
		gotoxy(68,14);cout<<"7. double chance"<<endl;
		gotoxy(2,17);cout<<"enter your option :";

			cin>>opt;
						if(opt==7)
			{
				if(o==0)
				{
				cout<<endl<<"enter your option :";cin>>opt;
				if(opt==w.cor)
				{
						o=1;
					goto zxc;
				
				}
				else
				{
					cout<<"wrong ans"<<endl;
					cout<<"life line - double chance "<<endl;
					o=1;
						getch();
						goto uio;
				
				}
			}
				else if(o==1)
				{
					cout<<endl<<"already used this life line"<<endl;
					cout<<endl<<"enter your option :";cin>>opt;
				}
			}
						if(opt==6)
			{
				cal();
				cout<<endl<<"enter your option :";cin>>opt;
			}
			if(opt==5)
			{
				cout<<"thank you for participation ";
				getch();break;}
			if(opt==w.cor)
			{    w.pts=w.pts+10;
				cout<<endl;getch();
							if(w.pts==50)
			{
				cout<<"YOUR PRIZE IS 50,000";
			getch();
			}
			else if(w.pts==40)
			{
				cout<<"YOUR PRIZE IS 40,000";
			getch();
			}
			else if(w.pts==30)
			{
				cout<<"YOUR PRIZE IS 30,000";
			getch();
			}
			else if(w.pts==20)
			{
				cout<<"YOUR PRIZE IS 20,000";
			getch();
			}
			else if(w.pts==10)
			{
				cout<<"YOUR PRIZE IS 10,000";
			getch();
			}

			}
			else
			{				cout<<"wrong answer";

			
	cout<<"you are out of the game";getch();	system("cls");
	break;		}
	hjk:
		system("cls");
		w.dec();
				ifstream q5("q4.txt");
			q5>>w.qa>>w.o1>>w.o2>>w.o3>>w.o4>>w.cor;
			 gotoxy(2,2);cout<<w.qa<<endl;
		gotoxy(2,5);cout<<"1."<<w.o1<<endl;
		gotoxy(68,5);cout<<"2."<<w.o2<<endl;
		gotoxy(2,8);cout<<"3."<<w.o3<<endl;
		gotoxy(68,8);cout<<"4."<<w.o4<<endl;
		gotoxy(2,11);cout<<"5 . exit";
			gotoxy(2,14);	cout<<"6. call a friend"<<endl;
		gotoxy(68,14);cout<<"7. double chance"<<endl;
		gotoxy(2,17);cout<<"enter your option :";

			cin>>opt;
						if(opt==7)
			{
				if(o==0)
				{
				cout<<endl<<"enter your option :";cin>>opt;
				if(opt==w.cor)
				{
						o=1;
					goto zxc;
				
				}
				else
				{
					cout<<"wrong ans"<<endl;
					cout<<"life line - double chance "<<endl;
					o=1;
						getch();
					goto hjk;
				}
			}
				else if(o==1)
				{
					cout<<endl<<"already used this life line"<<endl;
					cout<<endl<<"enter your option :";cin>>opt;
				}
			}
						if(opt==6)
			{
				cal();
				cout<<endl<<"enter your option :";cin>>opt;
			}
			if(opt==5)
			{
				cout<<"thank you for participation ";
				getch();break;}
			if(opt==w.cor)
			{    w.pts=w.pts+10;
				cout<<endl;getch();
							if(w.pts==50)
			{
				cout<<"YOUR PRIZE IS 50,000";
				getch();
			}
			else if(w.pts==40)
			{
				cout<<"YOUR PRIZE IS 40,000";
			getch();
			}
			else if(w.pts==30)
			{
				cout<<"YOUR PRIZE IS 30,000";
			getch();
			}
			else if(w.pts==20)
			{
				cout<<"YOUR PRIZE IS 20,000";
			getch();
			}
			else if(w.pts==10)
			{
				cout<<"YOUR PRIZE IS 10,000";
			getch();
			}

				
			}
			else
			{				cout<<"wrong answer";

			
	cout<<"you are out of the game";getch();	system("cls");
break;
			}
			cout<<"_____________________________________"<<endl;
			cout<<"|     THANK YOU FOR PARTICIPATION   |"<<endl;
			cout<<"|___________________________________|"<<endl;
			if(w.pts==50)
			{
				cout<<"YOUR PRIZE IS 50,000";
			getch();
			}
			else if(w.pts==40)
			{
				cout<<"YOUR PRIZE IS 40,000";
			getch();
			}
			else if(w.pts==30)
			{
				cout<<"YOUR PRIZE IS 30,000";
			getch();
			}
			else if(w.pts==20)
			{
				cout<<"YOUR PRIZE IS 20,000";
			getch();
			}
			else if(w.pts==10)
			{
				cout<<"YOUR PRIZE IS 10,000";
			getch();
			}

			system("pause");
                break;
		}
		case 2 :
			{
				w.getdata();
				getch();
					system("cls");
				goto waz;
				break;
			}

        case 3:
        	{
        		w.putdata();
        		
        		getch();
        		goto waz;
        			system("cls");
        		break;
			}
		case 4:
			{
				ifstream a;
				a.open("data.txt");
				a>>w.name>>w.age>>w.day>>w.mon>>w.pts;
				cout<<"name :"<<w.name<<endl<<"age :"<<w.age<<endl<<"day of participation :"<<w.day<<endl<<"month of participation :"<<w.mon<<endl;
				getch();
					system("cls");
				goto waz;
				break;
			}
					case 5:
					{
						getch();
						break;
					}
			default:
				{
					cout<<"wrong input enter your option again";
					goto waz;
				}
}
}
