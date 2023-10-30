#include<graphics.h>
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    initwindow(150,250);
  c:cleardevice();
	int i,x,y,smjer=1,x_glava=75,y_glava=175,duljina=5,life=1,point=0;
	int x_rep,y_rep,stari_brojac=0,novi_brojac=5,check=5;
	char broj[3];
	char bodovi[3];
	int del[100];
	setcolor(15);
	settextstyle(0,0,2);
	rectangle(25,125,125,225);//polje igre
	outtextxy(10,10,"SCORE");
	outtextxy(10,40,"W-gore");
	outtextxy(10,60,"A-lijevo");
	outtextxy(10,80,"S-dolje");
	outtextxy(10,100,"D-desno");
    for(i=0;i<=100;i++)
	{
		del[i]=0;
	}
	del[0]=1;
	del[1]=1;
	del[2]=1;
	del[3]=1;
	del[4]=1;
    putpixel(x_glava,y_glava,WHITE);//poèetni izgled zmije
    putpixel(x_glava,y_glava+1,WHITE);
    putpixel(x_glava,y_glava+2,WHITE);
    putpixel(x_glava,y_glava+3,WHITE);
    putpixel(x_glava,y_glava+4,WHITE);
    x_rep=x_glava;
    y_rep=y_glava+4;
  b:x=rand()%97+27; //poèetno postavljanje jabuke
	y=rand()%97+127;
	if(getpixel(x,y)==15)
	{
		goto b;
	}
	putpixel(x,y,WHITE);
	char tipkovnica;
  m:while(life==1)//igra se nastavlja sve dok zmija ne udari u zid ili rep pri èemu vrijednost "life" preijelazi u nulu
	{ 
	  l:if(smjer==1) //smjer kretanja gore (W)
	    {
			if(x_glava==x && y_glava-1==y)
			{
				goto ac;
			}
			else if(getpixel(x_glava,y_glava-1)==15)
	    	{
	    		life=0;
	    		goto m;
			}
		 ac:putpixel(x_glava,y_glava-1,WHITE);
			y_glava--;
			del[novi_brojac]=smjer;
			if(novi_brojac==100)
			{
				novi_brojac=0;
			}
			else
			{
				novi_brojac++;
			}
			if(check!=duljina)
			{
				check=duljina;
			}
			else
			{
				putpixel(x_rep,y_rep,BLACK);
				del[stari_brojac]=0;
				stari_brojac++;
				if(stari_brojac==101)
				{
					stari_brojac=0;
			    }
				if(del[stari_brojac]==1)
				{
					y_rep--;
				}
				else if(del[stari_brojac]==2)
				{
					x_rep--;
				}
				else if(del[stari_brojac]==3)
				{
					y_rep++;
				}
				else if(del[stari_brojac]==4)
				{
					x_rep++;
				}
			}
		}
		else if(smjer==2) //smjer kretanja lijevo (A)
		{
			if(x_glava-1==x && y_glava==y)
			{
				goto ab;
			}
			else if(getpixel(x_glava-1,y_glava)==15)
	    	{
	    		life=0;
	    		goto m;
			}
		 ab:putpixel(x_glava-1,y_glava,WHITE);
			x_glava--;
			del[novi_brojac]=smjer;
			if(novi_brojac==100)
			{
				novi_brojac=0;
			}
			else
			{
				novi_brojac++;
			}
			if(check<duljina)
			{
				check++;
			}
			else
			{
				putpixel(x_rep,y_rep,BLACK);
				stari_brojac++;
				if(stari_brojac==101)
				{
					stari_brojac=0;
			    }
				if(del[stari_brojac]==1)
				{
					y_rep--;
				}
				else if(del[stari_brojac]==2)
				{
					x_rep--;
				}
				else if(del[stari_brojac]==3)
				{
					y_rep++;
				}
				else if(del[stari_brojac]==4)
				{
					x_rep++;
				}
			}
		}
		else if(smjer==3) //smjer kretanja dolje (S)
		{
			if(x_glava==x && y_glava+1==y)
			{
				goto aa;
			}
			else if(getpixel(x_glava,y_glava+1)==15)
	    	{
	    		life=0;
	    		goto m;
			}
		 aa:putpixel(x_glava,y_glava+1,WHITE);
			y_glava++;
			del[novi_brojac]=smjer;
			if(novi_brojac==100)
			{
				novi_brojac=0;
			}
			else
			{
				novi_brojac++;
			}
			if(check!=duljina)
			{
				check=duljina;
			}
			else
			{
				putpixel(x_rep,y_rep,BLACK);
				stari_brojac++;
				if(stari_brojac==101)
				{
					stari_brojac=0;
			    }
				if(del[stari_brojac]==1)
				{
					y_rep--;
				}
				else if(del[stari_brojac]==2)
				{
					x_rep--;
				}
				else if(del[stari_brojac]==3)
				{
					y_rep++;
				}
				else if(del[stari_brojac]==4)
				{
					x_rep++;
				}
			}
		}
		else //smjer kretanja desno (D)
		{
			if(x_glava+1==x && y_glava==y)
			{
				goto g;
			}
			else if(getpixel(x_glava+1,y_glava)==15)
	    	{
	    		life=0;
	    		goto m;
			}
		  g:putpixel(x_glava+1,y_glava,WHITE);
			x_glava++;
			del[novi_brojac]=smjer;
			if(novi_brojac==100)
			{
				novi_brojac=0;
			}
			else
			{
				novi_brojac++;
			}
			if(check!=duljina)
			{
				check=duljina;
			}
			else
			{
				putpixel(x_rep,y_rep,BLACK);
				stari_brojac++;
				if(stari_brojac==101)
				{
					stari_brojac=0;
			    }
				if(del[stari_brojac]==1)
				{
					y_rep--;
				}
				else if(del[stari_brojac]==2)
				{
					x_rep--;
				}
				else if(del[stari_brojac]==3)
				{
					y_rep++;
				}
				else if(del[stari_brojac]==4)
				{
					x_rep++;
				}
			}
		}
		if(x_glava==x && y_glava==y)
		{
			duljina++;
			point++;
			sprintf(bodovi,"%d",point);
			outtextxy(95,10,bodovi);//ispis bodova
		  k:x=rand()%97+27;//postavlja "jabuke" na dostupne praznine
		    y=rand()%97+127;
		    if(getpixel(x,y)==15)
		    {
		        goto k;
			}
	        putpixel(x,y,WHITE);
		}
		delay(200);
		putpixel(x,y,WHITE);
		if(!kbhit())
		{
			goto l;
		}
		tipkovnica=getch();
		if(tipkovnica=='w')
		{
			if(smjer==3)
			{
				goto l;
			}
			else //provjera kako se zmija ne bi kretala direktno suprotnom stranom
			{
				smjer=1;
			}
		}
		if(tipkovnica=='a')
		{
			if(smjer==4)
		    {
		    	goto l;
			}
			else
			{
				smjer=2;
			}
		}
		if(tipkovnica=='s')
		{
			if(smjer==1)
			{
				goto l;
			}
			else
			{
				smjer=3;
			}
		}
		if(tipkovnica=='d')
		{
			if(smjer==2)
			{
				goto l;
			}
			else
		    {
				smjer=4;
			}
		}
    }
    setfillstyle(1,15);
	bar(25,125,125,225);
	settextstyle(0,0,1);
	outtextxy(30,150,"Game over!");
	outtextxy(30,175,"R - Restart");
	tipkovnica=getch();
	if(tipkovnica=='r')
	{
		goto c;
	}
	getch();
	return 0;
}
