#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<string.h>
void beep()
{ int a;
  sound(50);
  delay(5000);
  nosound();
}
 void start()
{ char seatbelt[10],handbrake[10],neutral[10],engeneon[10];
  cout<<"use (stb) to wear the seatbelt"<<endl;
  getch();
  cout<<"use(rhb) to remove handbrake"<<endl;
  getch();
  cout<<"use(nut) to neutral the vehicle"<<endl;
  getch();
  cout<<"use(on) to start the car"<<endl;
  getch();
  cout<<"wear seatbelt";
  gets(seatbelt);
 if(strcmp(seatbelt,"stb") ==0)
  cout<<"wore the seatbelt"<<endl;
 else
    { cout<<"you are not able to drive the car assume that you are not wearing the seatbelt"<<endl;
     getch();
     exit(0);
   }
  cout<<"remove hand brake"<<endl;
  gets(handbrake);
 if(strcmp(handbrake,"rhb")==0)
 cout<<"handbrake removed"<<endl;
 else
{ cout<<"you are not able to drive the car as you have not removed the handbrakes"<<endl;
  getch();
  exit(0);
}
cout<<"use neutral to start the car"<<endl;
gets(neutral);
if(strcmp(neutral,"nut")==0)
cout<<"now you can start the car"<<endl;
else
 { cout<<"you are not start the car the car is not in neutral"<<endl;
   getch();
   exit(0);
 }
 cout<<"start the car"<<endl;
 gets(engeneon);
 if(strcmp(engeneon,"on")==0)
 cout<<"now your car has started";
 else
    { cout<<"you are not able to start a car"<<endl;
      getch();
      exit(0);
    }
 }
void main()
{ clrscr();
  start();
  char arr[3][20],m;
  int i,j;
  cout<<"R= road of 5 metre in which the vehicle is travelling"<<endl;
  getch();
  cout<<"C=car"<<endl;
  getch();
  cout<<"H=holes"<<endl;
  getch();
  cout<<"S=Speed breaker"<<endl;
  getch();
  randomize();
  //char r=random('R','H','C','S');
  char str[20] = "RRRRRRRRRRRRRRRRRHCS";
  { for(i=0;i<3;i++)
    {
     for(j=0;j<20;j++)
     {
	int x = rand() %20;
	char r = str[x];
	arr[i][j]=r;
     }
    }
  }
  for(i=0;i<3;i++)
   { cout<<endl;
     for(j=0;j<20;j++)
     cout<<arr[i][j];
     arr[1][0]='v';
     }getch();
    cout<<endl<<"vehicle is standing in the middle lane as v"<<endl;
    getch();
    for(i=0;i<3;i++)
    { cout<<endl;
      for(j=0;j<20;j++)
       { cout<<arr[i][j];
       }
    }
     getch();
     cout<<endl<<"enter the direction in which the car will go"<<endl;
     getch();
     cout<<"s=straight"<<endl;
     getch();
     cout<<"l=left"<<endl;
     getch();
     cout<<"r=right"<<endl;
     getch();
     for(int k=0;k<=18;)
     { cin>>m;
       if (m=='l')
	{ for(int i=0;i<3;i++)
     { for(int j=0;j<20;j++)
	if(arr[i][j]=='v')
	{ arr[i][j]='R';
	  arr[--i][j]='v';
	  int count=0;
	  for(int p=j;p<(j+3);p++)
	   { if(arr[i][p]!='R')
	      count++;
	    }
	  if(count==2)
	  beep();

      }
    }
   }
   else
	if(m=='s')
	 { for(i=0;i<3;i++)
	   {for(j=0;j<20;j++)
		if(arr[i][j]=='v')
		{ arr[i][j]='R';
		  arr[i][++j]='v';
		  k++;
		  int count=0;
		  for (int p=j;p<(j+3);p++)
		  { if(arr[i][p]!='R')
		    count++;
		  }
		  if(count==2)
		  beep();
		}
	    }
	 }
	 else
	   if(m=='r')
	   {for(i=0;i<3;i++)
	    {for(j=0;j<20;j++)
	      if(arr[i][j]=='v')
	       { arr[i][j]='R';
		 arr[++i][j]='v';
		 int count =0;
		 for(int p=j;p<(j+3);p++)
		 { if (arr[i][p]!='R');
		    count++;
		 }
		 if(count==2)
		 beep();
	       }
	    }
	   }
	   for(i=0;i<3;i++)
	    { cout<<endl;
	      for(j=0;j<20;j++)
	      { cout<<arr[i][j];
	      }
	    }
 }

  getch();
}