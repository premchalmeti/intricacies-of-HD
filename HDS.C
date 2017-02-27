		/* 	Author : Premkumar Ashok Chalmeti
			Name of the project : Intricacies of HD
			Date & time :13:24 27-02-2017
		*/
		
#include<graphics.h>
#include<conio.h>
	
void rw_head(int);
void platter(int);
void mechanism(int);
void spindle(int);
void bkline(int);
void All(int);
void info(int,int);

void main()
{
	int a,b,ch;
	detectgraph(&a,&b);
	initgraph(&a,&b,"..\\bgi");
	setlinestyle(SOLID_LINE,2,1);
	All(WHITE);

	info(0,YELLOW);
	do
	{
		setcolor(CYAN);
		settextstyle(3,0,0.1);
		outtextxy(370,360,"Intricacies of ");
		outtextxy(370,390,"Hard Disk (HD)");
		settextstyle(0,0,0);
		setcolor(WHITE);
		outtextxy(400,35,"INFORMATION :>");
		outtextxy(20,330,"***Components :> ");
		outtextxy(30,350,"1]-Read/Write_Head");
		outtextxy(30,360,"2]-Platter");
		outtextxy(30,370,"3]-Head Actuator Mechanism");
		outtextxy(30,380,"4]-Spindle Motor");
		outtextxy(30,390,"5]-Exit");
		outtextxy(20,410,"Enter your choice :> ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				cleardevice();
				setlinestyle(DOTTED_LINE,3,1);	//dotted_Background
				All(BLUE);
				setlinestyle(SOLID_LINE,2,1);
				bkline(GREEN);
				rw_head(WHITE);
				info(1,YELLOW);
				break;
			case 2:
				cleardevice();
				setlinestyle(DOTTED_LINE,3,1);	//dotted_Background
				All(BLUE);
				setlinestyle(SOLID_LINE,2,1);
				bkline(GREEN);
				platter(WHITE);
				info(2,RED);
				break;
			case 3:
				cleardevice();
				setlinestyle(DOTTED_LINE,3,1);	//dotted_Background
				All(BLUE);
				setlinestyle(SOLID_LINE,2,1);
				bkline(GREEN);
				mechanism(WHITE);
				info(3,GREEN);
				break;
			case 4:
				cleardevice();
				setlinestyle(DOTTED_LINE,2,1);	//dotted_Background
				All(BLUE);
				setlinestyle(SOLID_LINE,2,1);
				bkline(GREEN);
				spindle(WHITE);
				info(4,RED+GREEN);
				break;
			case 5:
				break;
			default:
				cleardevice();
				All(WHITE);
				setcolor(RED);
				outtextxy(20,440,"INVALID Choice!!");
				info(0,CYAN);
				break;
		}//switch
	}//while
	while(ch!=5);
}
void rw_head(int color)
{
	setcolor(color);
	line(210,115,197,165);			//first head arm line
	line(210,115,223,166);     	    //second head arm line
	arc(210,160,-160,340,15);		//arc
	ellipse(210,160,0,360,3,1);		//actuator axis
	ellipse(210,160,0,360,7,4);
}
void platter(int color)
{
	setcolor(color);
	ellipse(170,120,-900,900,65,30);	//platter
	ellipse(170,120,-900,900,9,4);		//center
	ellipse(170,120,-900,900,21,13);    //outer center
	circle(185,120,1);					//right screw
	circle(155,120,1);					//left first screw
	circle(163,114,1);					//second screw
	circle(174,112,1);					//third screw
	circle(175,128,1);					//fourth screw
	circle(161,126,1);					//fifth screw
}
void mechanism(int color)
{
	setcolor(color);
	ellipse(210,160,210,330,45,20);		//actuator mechanism 1st
	arc(210,160,195,350,40);            //2nd
}
void spindle(int color)
{
	setcolor(color);
	ellipse(170,120,-900,900,9,4);		//center
	ellipse(170,120,-900,900,21,13);    //outer center
	circle(185,120,1);					//right screw
	circle(155,120,1);					//left first screw
	circle(163,114,1);					//second screw
	circle(174,112,1);					//third screw
	circle(175,128,1);					//fourth screw
	circle(161,126,1);					//fifth screw
}
void bkline(int color)
{
	setcolor(color);
	//Outer_Rectangle
	line(4,20,630,20);		//up
	line(4,20,4,460);		//left
	line(4,460,630,460);	//Bottom
	line(630,20,630,460);	//Right

	//inner_Rectangle
	setcolor(RED+GREEN);
	line(6,23,628,23);		//up
	line(6,23,6,457);	 	//left
	line(6,457,627,457); 	//Bottom
	line(627,17,627,457);	//Right
}
void All(int color)
{
	setcolor(color);
	bkline(GREEN);
	spindle(color);
	mechanism(color);
	platter(color);
	rw_head(color);
	line(40,100,200,80);		//bezel line
	line(40,100,200,210);		//left line
	line(200,210,380,190);	    //connector line
	line(200,80,380,190);       //right line
	line(40,100,40,135);		//left join
	line(200,210,200,245);		//bottom join
	line(380,190,380,225);		//right join
	line(40,135,200,245);		//left dline
	line(200,245,380,225);		//bottom dline
}
void info(int index,int color)
{
	setcolor(color);
	if(index==0)
	{	//HDD
		outtextxy(400,60,"The Hard disk drive commonly");
		outtextxy(400,70,"referred to as hard drive or");
		outtextxy(400,80,"hard disk is a non volatile");
		outtextxy(400,90,"storage device which stores ");
		outtextxy(400,100,"digitally encoded data on ");
		outtextxy(400,110,"rapidly rotating platters ");
		outtextxy(400,120,"with magnetic surfaces.");
	}
	else if(index==1)
	{	//RW Head
		outtextxy(400,60,"Read Write Head is used to ");
		outtextxy(400,70,"write any information on ");
		outtextxy(400,80,"disk surface and to read");
		outtextxy(400,90,"written data back without");
		outtextxy(400,100,"any loss.A hard disk drive  ");
		outtextxy(400,110,"contains one read write head");
		outtextxy(400,120,"for each side as platter.");
	}
	else if(index==2)
	{	//platter
		outtextxy(400,60,"Platter is used to store ");
		outtextxy(400,70,"the data on 1 or more flat ");
		outtextxy(400,80,"circular disks.");
		outtextxy(400,90,"    The Platters are mounted");
		outtextxy(400,100,"on spindle motor.A platter");
		outtextxy(400,110,"can store information on");
		outtextxy(400,120,"both sides,requires two");
		outtextxy(400,130,"heads per platter.");
	}
	else if(index==3)
	{
		//Head actuator mech.
		outtextxy(400,60,"The read write head of hard");
		outtextxy(400,70,"disk is moved on the platter ");
		outtextxy(400,80,"surface using head actuator");
		outtextxy(400,90,"mechanism.");
		outtextxy(400,110,"        The different head");
		outtextxy(400,120,"actuator mechanism:-");
		outtextxy(400,130,"    1.Stepper motor actuator");
		outtextxy(400,140,"    2.Vice-coil actuator");
	}
	else
	{
		//spindle
		outtextxy(400,60,"Spindle motor used to rotate");
		outtextxy(400,70,"the hard disk drive plotter.");
		outtextxy(400,80,"These motor directly connected");
		outtextxy(400,90,"to spindle on which the ");
		outtextxy(400,110,"platter are connected so it");
		outtextxy(400,120,"is vibration tree.The motor");
		outtextxy(400,130,"works on a feedback to a");
		outtextxy(400,140,"automatically adjust the");
		outtextxy(400,150,"rotation speed there");
	}
}