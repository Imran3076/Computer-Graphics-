#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;

void Menu() {
    cleardevice();

    setbkcolor(BLACK);
    setcolor(WHITE);
    settextstyle(8, HORIZ_DIR, 2);

    outtextxy(250,10,"MY MENU");
    outtextxy(100, 50, "1. My Name.");
    outtextxy(100, 100, "2. Emoji.");
    outtextxy(100, 150, "3. Circle Draw.");
    outtextxy(100, 200, "4. Line Draw.");
    outtextxy(100, 250, "5. Mickey Mouse.");
    outtextxy(100, 300, "6. My House View.");
    outtextxy(100, 350, "7. Exit.");
}

void myname()
{
    cleardevice();
    setbkcolor(BLACK);
    setcolor(WHITE);

    outtext("My nickname draw:");
    setcolor(10);

    line(65, 30, 65, 100);
    line(40, 30, 90, 30);
    line(40, 100, 90, 100);

    line(100, 100, 100, 30);
    line(160, 100, 160, 30);
    line(100, 30, 130, 60);
    line(130, 60, 160, 30);

    line(180, 30, 180, 100);
    line(180, 30, 210, 30);
    line(210, 30, 210, 60);
    line(180, 60, 210, 100);
    line(180, 60, 210, 60);


    line(220, 100, 240, 30);
    line(260, 100, 240, 30);
    line(230, 60, 250, 60);


    line(270, 100, 270, 30);
    line(270, 30, 310, 100);
    line(310, 100, 310, 30);

    getch();
}
void emoji()
{
     cleardevice();
     setbkcolor(BLACK);
     setcolor(WHITE);
     outtextxy(250, 350, "My Emoji");
     setcolor(RED);
     circle(300,210,90);
     setfillstyle(1,YELLOW);
     floodfill(330,215,RED);
     setcolor(WHITE);
     circle(265,180,17);
     setfillstyle(1,WHITE);
     floodfill(266,181,WHITE);

     setcolor(BLACK);
     circle(265,180,7);
     setfillstyle(1,BLACK);
     floodfill(266,181,BLACK);

     setcolor(WHITE);
     circle(335,180,17);
     setfillstyle(1,WHITE);
     floodfill(335,180,WHITE);

     setcolor(BLACK);
     circle(335,180,7);
     setfillstyle(1,BLACK);
     floodfill(336,181,BLACK);

     setcolor(BLACK);
     line(300,210,320,230);
     line(300,210,280,230);
     line(280,230,320,230);
     setfillstyle(1,BLACK);
     floodfill(300,215,BLACK);

     setcolor(WHITE);
     line(260,250,340,250);
     ellipse(300,250,180,360,40,15);
     setfillstyle(3,WHITE);
     floodfill(261,251,WHITE);

     getch();
     closegraph();
}
void draw_circle()
{
    cleardevice();
    setbkcolor(BLACK);
    setcolor(WHITE);
    int centerX, centerY, x, y, radius;
    cout << "Enter the value of x , y and radius :";
    cin >> centerX >> centerY >> radius;

    x = 0;
    y = radius;

    int p = 1 - radius;

    while (x < y)
    {
        if (p >= 0)
        {
            x++;
            y--;
            p = p + 2 * x + 1 - 2 * y;
        }
        else
        {
            x++;
            p = p + 2 * x + 1;
        }

        putpixel(x + centerX, y + centerY, 14);
        putpixel(y + centerY, x + centerX, 14);

        putpixel(centerX - x, centerY - y, 14);
        putpixel(centerY - y, centerX - x, 14);

        putpixel(centerX + x, centerY - y, 14);
        putpixel(centerY + y, centerX - x, 14);

        putpixel(centerX - x, centerY + y, 14);
        putpixel(centerY - y, centerX + x, 14);
    }
    cout << "Your circle is ready" << endl;

    getch();
}

void draw_line()
{
    cleardevice();
    setbkcolor(BLACK);
    setcolor(WHITE);
    int sx, sy, ex, ey;
    cout << "Enter starting x and y : " << endl;
    cin >> sx >> sy ;
    cout << "Enter starting x and y : " << endl;
    cin >> ex >> ey;

    int dx = abs(ex - sx);
    int dy = abs(ey - sy);

    int x = sx;
    int y = sy;
    int numSteps;

    if (dx > dy)
    {
        numSteps = dx;
    }
    else
    {
        numSteps = dy;
    }

    double xIncrement = round(((double)dx / (double)numSteps));
    double yIncrement = round(((double)dy / (double)numSteps));

    while (sx <= ex || sy <= ey)
    {
        putpixel(sx, sy, 14);

        sx += xIncrement;
        sy += yIncrement;
        delay(100);
    }
    cout << "Your Line is ready" << endl;
    getch();
}

void mouse(){

    cleardevice();
    setbkcolor(BLACK);
    setcolor(WHITE);
    setcolor(10);

    circle(150,150,20);
    delay(100);

    circle(210,150,20);
    delay(100);

    setcolor(14);

    circle(180,212,50);
    delay(100);

    setcolor(13);

    ellipse(170,212,60,180,20,40);
    delay(100);

    ellipse(190,212,0,120,20,40);
    delay(100);

    setcolor(6);

    ellipse(140,248,60,120,20,40);
    delay(100);

    ellipse(220,248,60,120,20,40);
    delay(100);

    setcolor(15);

    ellipse(172,100,0,360,6,15);
    delay(100);

    ellipse(188,100,0,360,6,15);
    delay(100);

    ellipse(182,220,10,160,12,6);
    delay(100);

    ellipse(182,225,0,360,12,6);
    delay(100);

    setcolor(3);

    ellipse(182,225,195,345,25,30);
    delay(100);

    ellipse(182,225,195,345,25,20);
    delay(100);

    setcolor(3);

    ellipse(172,208,0,360,2,6);
    delay(100);

    ellipse(188,208,0,360,2,6);
    delay(100);

    outtextxy(100, 280, "I'm mickey Mouse");
    getch();
}

void home()
{
    cleardevice();
    setbkcolor(BLACK);
    setcolor(WHITE);

    int color;

    while(!kbhit())
    {

        setcolor(7);
        setlinestyle(0,0,3);
        line(0,450,750,450);
        setcolor(color);
        rectangle(200,330,430,450);


        setcolor(11);
        rectangle(230,444,295,450);
        rectangle(235,355,290,444);
        circle(244,399,3);

        setcolor(13);
        rectangle(340,348,410,400);
        setcolor(color);
        rectangle(345,353,405,395);
        line(375,353,375,395);


        setcolor(10);
        line(130,249,426,249);
        line(430,330,445,330);
        line(445,330,426,249);
        rectangle(350,235,380,249);
        rectangle(346,230,384,235);

        setcolor(color);
        line(200,310,200,450);
        line(40,310,40,450);
        line(30,316,120,250);
        line(210,316,120,250);

        line(30,307,120,241);
        line(210,307,120,241);
        line(30,307,30,316);
        line(210,307,210,316);
        setcolor(14);
        rectangle(70,350,170,400);
        rectangle(75,355,165,395);
        line(105,355,105,395);
        line(135,355,135,395);

        setcolor(15);
        rectangle(100,290,140,320);
        line(120,290,120,320);
        line(100,305,140,305);


        setcolor(color);
        settextstyle(10,0,3);
        outtextxy(150,10,"Welcome to my home...");

        setcolor(15);
        color=rand()%15+1;
        settextstyle(2,0,6);


    }
    getch();
}
int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int choice;

    Menu();

    while(1)
    {
        choice = getch();

        switch (choice)
        {
        case '1':
            outtextxy(200, 400, "You chose option 1!");
            delay(1000);
            myname();
            break;
        case '2':
            outtextxy(200, 400, "You chose option 2!");
            delay(1000);
            emoji();
            break;
        case '3':
            outtextxy(200, 400, "You chose option 3!");
            delay(1000);
            draw_circle();
            break;
        case '4':
            outtextxy(200, 400, "You chose option 4!");
            delay(1000);
            draw_line();
            break;
        case '5':
            outtextxy(200, 400, "You chose option 5!");
            delay(1000);
            mouse();
            break;
        case '6':
            outtextxy(200, 400, "You chose option 6!");
            delay(1000);
            home();
            break;
        case '7':
            closegraph();
            outtextxy(200, 400, "You want to exit program");
            delay(1000);
            exit(0);
            break;
        default:
            outtextxy(200, 400, "Choice is not valid.");
            delay(1000);
            break;
        }

        delay(1000);
        Menu();
    }

    getch();
    closegraph();

    return 0;
}
