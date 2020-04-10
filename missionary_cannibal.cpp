#include<iostream>
#include<iomanip>
#include<graphics.h>

using namespace std;


class game
 {
	public:
		int i;
		int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12;
		int counto;
		char left[6], right[6];
		int m_num, c_num;
		bool side;
		int ml_count, cl_count;
		int mr_count, cr_count;
		game();
		void displaymc();
		void boat_lr();
		void boat_rl();
		void get();
		~game();
};
		game::~game()
		{
		}
			
		game::game()
		{
		
			counto = 1;
			ml_count = cl_count = 3;
			mr_count = cr_count = 0;
			side = false;   //LEFT
			for (i = 0; i<3; i++)
			{
				left[i] = 'M';
				left[i + 3] = 'C';
				right[i] = ' ';
				right[i + 3] = ' ';
			}
		}
			
		void game::displaymc()
		{
			setbkcolor(LIGHTGREEN);
	
			cleardevice();
			if(left[0]=='M'||left[0]=='C')
			{
		 		setcolor(LIGHTRED);
		     		circle(35,200,20); //Devil
		 		ellipse(35, 165,0, 360, 20, 5 ); 
		 		circle(27,192,3);
		 		circle(42,192,3);
		 		setcolor(RED);
		 		arc(35,205,10,180,7);
	 		}

			if(left[1]=='M'||left[1]=='C')
			{
		 		setcolor(LIGHTRED);
		 		circle(100,200,20);
		 		ellipse( 100, 165, 0,360, 20, 5);
		 		circle(92,192,3);
		 		circle(107,192,3);
		 		setcolor(RED);
		 		arc(100,205,10,180,7);
	 		}

			if(left[2]=='M'||left[2]=='C')
			{
		 		setcolor(LIGHTRED);
		 		circle(165,200,20);
		 		ellipse( 165, 165, 0,360, 20, 5);
		 		circle(157,192,3);
		 		circle(172,192,3);
		 		setcolor(RED);
		 		arc(165,205,10,180,7);
	  		}		
			
			
			if(right[0]=='M'||right[0]=='C')
			{
 				setcolor(LIGHTRED);
				circle(595,200,20); //Fairy
				ellipse(595, 165,0, 360, 20, 5 ); 
				circle(587,192,3);
				circle(602,192,3);
				setcolor(RED);
				arc(595,205,10,180,7);
			}

			if(right[1]=='M'||right[1]=='C')
			{
 				setcolor(LIGHTRED);
		 		circle(545,200,20);
		 		ellipse(545, 165, 0,360, 20, 5);
		 		circle(537,192,3);
		 		circle(552,192,3);
		 		setcolor(RED);
		 		arc(545,205,10,180,7);
			}

			if(right[2]=='M'||right[2]=='C')
			{
 				setcolor(LIGHTRED);
		 		circle(495,200,20);
		 		ellipse(495, 165, 0,360, 20, 5);
		 		circle(487,192,3);
		 		circle(502,192,3);
		 		setcolor(RED);
		 		arc(495,205,10,180,7);
			}
			if(left[3]=='C'||left[3]=='M')
			{	setcolor(BLUE);
		 		circle(35,300,20);//Fairy
		 		circle(27,290,3);
		 		circle(42,290,3);
		 		setcolor(RED);
		 		arc(35,307,180,10,7);
				
	 		}
			
			if(left[4]=='C'||left[4]=='M')
			{	setcolor(BLUE);
		 		circle(100,300,20);
		 		circle(92,290,3);
		 		circle(107,290,3);
		 		setcolor(RED);
		 		arc(100,307,180,10,7);
		 		
	 	 	}

			if(left[5]=='C'||left[5]=='M')
			{	setcolor(BLUE);
		 		circle(165,300,20);
		 		circle(157,290,3);
		 		circle(172,290,3);
		 		setcolor(RED);
		 		arc(165,307,180,10,7);
		 	 	
	 		}
			
			if(right[3]=='C'||right[3]=='M')
			{	setcolor(BLUE);
		 		circle(595,300,20);//Devil
		 		circle(587,290,3);
		 		circle(602,290,3);
		 		setcolor(RED);
		 		arc(595,307,180,10,7);
				
			}

			if(right[4]=='C'||right[4]=='M')
			{	setcolor(BLUE);
		 		circle(545,300,20);
		 		circle(537,290,3);
		 		circle(552,290,3);
		 		setcolor(RED);
		 		arc(545,307,180,10,7);
 				
 			}

			if(right[5]=='C'||right[3]=='M')
			{	setcolor(BLUE);
				circle(495,300,20);
		 		circle(487,290,3);
		 		circle(502,290,3);
		 		setcolor(RED);
		 		arc(495,307,180,10,7);	
			}

			if (counto % 2 == 0)
			{
				side = true;
				cout << "\nBoat on right side of river\n";
			}
			else
			{
				side = false;
				cout << "\nBoat on left side of river\n";
			}
						
	   	}

	


	void game::boat_lr()
{

	for (i = 0; i<m_num; i++)
	{
		if (left[0] == 'M')
			{
			left[0] = ' ';
			right[0] = 'M';
			ml_count -= 1;
			mr_count += 1;
			}
		else if (left[1] == 'M')
		{
			left[1] = ' ';
			right[1] = 'M';
			ml_count -= 1;
			mr_count += 1;
		}
		else if (left[2] == 'M')
		{
			left[2] = ' ';
			right[2] = 'M';
			ml_count -= 1;
			mr_count += 1;
		}
	}
	for (i = 0; i<c_num; i++)
	{
		if (left[3] == 'C')
			{
			left[3] = ' ';
			right[3] = 'C';
			cl_count -= 1;
			cr_count += 1;
			}
		else if (left[4] == 'C')
		{
			left[4] = ' ';
			right[4] = 'C';
			cl_count -= 1;
			cr_count += 1;
		}
		else if (left[5] == 'C')
		{
			left[5] = ' ';
			right[5] = 'C';
			cl_count -= 1;
			cr_count += 1;
		}
	}
}
void game::boat_rl()
{
	for (i = 0; i<m_num; i++)
	{
		if (right[0] == 'M')
		{
			right[0] = ' ';
			left[0] = 'M';
			ml_count += 1;
			mr_count -= 1;
		}
		else if (right[1] == 'M')
		{
			right[1] = ' ';
			left[1] = 'M';
			ml_count += 1;
			mr_count -= 1;
		}
		else if (right[2] == 'M')
		{
			right[2] = ' ';
			left[2] = 'M';
			ml_count += 1;
			mr_count -= 1;
		}
	}
	for (i = 0; i<c_num; i++)
	{
		if (right[3] == 'C')
		{
			right[3] = ' ';
			left[3] = 'C';
			cl_count += 1;
			cr_count -= 1;
		}
		else if (right[4] == 'C')
		{
			right[4] = ' ';
			left[4] = 'C';
			cl_count += 1;
			cr_count -= 1;
		}
		else if (right[5] == 'C')
		{
			right[5] = ' ';
			left[5] = 'C';
			cl_count += 1;
			cr_count -= 1;
		}
	}
}
		 void game::get()
		 {	system("clear");
			start:
				cout << "\nSend how many no.of missionaries to send in the boat = ";
				cin >> m_num;
				cout << "\nSend how many no.of cannibals to send in the boat = ";
				cin >> c_num;
				if (m_num>3 && c_num>3 && m_num<0 && c_num<0)
					goto start;	
			
				else if ((m_num + c_num)>2 && (m_num + c_num == 0))
					goto start;
		 }

		

int main()
{
char ans;
do
{
	h:
	game g;


	int choice;
tt:
	system("clear");
cout<<"\n*******************************************************************************																																																														\n";	cout<<"\n*******************************************************************************																																																														\n";
	cout<<"\n\n\t\t\t\tWELCOME  \n";
	cout<<"\n\n\t\t\t    BOAT TO SURVIAL"<<endl;
	cout<<"\n\n\n\t\t\t        1. Rules  \n\t\t\t        2. Play \n\n"<<endl;
	cout<<"\n\n\n\t\t\t   Enter your choice = ";
	cin>>choice;
	
	system("clear");


		switch(choice)
		{
			case 1:	{
				cout<<"\n******************************************************************************\n																																																															******************************************************************************																																																													\n\t\t\t\tRULES  \n";
				cout<<"\n\n\t\t\t      BOAT TO SURVIAL"<<endl;
				cout<<"\n  1. There are 3 Cannibals and 3 Missionaries and we have to help them to cross      the lake."<<endl;
				cout<<"\n  2. There are at the most two people boat one time."<<endl;
				cout<<"\n  3. The Cannibals and Missionaries are of equal par."<<endl; 					cout<<"\n  4. If there is going to be less fairy than the devil,then the fairy will be      eaten by devil."<<endl;
				cout<<"\n\n\n******************************************************************************\n																																																														******************************************************************************																																																													\n";
				cout<<"\nDo you want to go to home page (type q) ? = ";
				cin>>ans;
				if(ans=='q')
					goto tt;
				break;
			}
			case 2:{
					int gd=DETECT, gm; 
	    				initgraph(&gd, &gm,NULL); 
					while (true)
					{ 
						if (g.ml_count<g.cl_count && g.ml_count>0 && g.mr_count<g.cr_count && g.mr_count>0)
						{
							cout << "\n\n~~~~~~~~~~~~~~~~YOU LOST!!~~~~~~~~~~~~~~~~\n";
							break;
						}
						else if (g.cr_count == g.mr_count && g.cr_count == 3 && g.mr_count == 3)
						{
							cout << "\n\n~~~~~~~~~~~~~~~~YOU WON!!~~~~~~~~~~~~~~~~\n";
							break;
						}
						else
						{
							system("clear");
							g.displaymc();
							g.get();
						if (g.side == false)
							g.boat_lr();
						else
							g.boat_rl();
						}
					g.counto++;
					}
					closegraph();
				}	
				break;
			case 3: 
				break;
		
			default:
				goto h;
		}
	cout<<"\nDo you Want to go to home page ? = \nY\nN";
	
	cin>>ans;
	}while(ans=='Y' || ans=='y');
	
return 0;
}


