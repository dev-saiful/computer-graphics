#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void flag();
void emoji();
void house();
void village();

int main()
{
    int choice;
    cout<<"Enter your number:\n1 Flag\n2 Emoji\n3 House\n4 Village\n";
    cin>>choice;
    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    switch(choice)
    {
    case 1:
        flag();
        break;

    case 2:
        emoji();
        break;

    case 3:
        house();
        break;

    case 4:
        village();
        break;
    default:
        cout<<"Invalid";
        break;
    }
    return 0;
}

void flag()
{
    setcolor(GREEN);

    rectangle(200,100,450,250);
    setfillstyle(1,GREEN);
    floodfill(201,110,GREEN);

    setcolor(RED);
    circle(320,175,40);
    setfillstyle(1,RED);
    floodfill(301,176,RED);

    setcolor(WHITE);
    rectangle(194,100,199,400);
    setfillstyle(1,BLUE);
    floodfill(197,253,WHITE);

    getch();
    closegraph();
}
void emoji()
{
    circle(300,150,100);
    circle(245,120,10);
    circle(350,120,10);
    line(295,130,285,150);
    line(295,130,305,150);
    line(285,150,305,150);

    ellipse(300, 160, 180, 0, 70, 60);
    getch();
    closegraph();
}
void house()
{
    /* Draw Hut */
    setcolor(WHITE);
    rectangle(150,180,250,300);
    rectangle(250,180,420,300);
    rectangle(180,250,220,300);

    line(200,100,150,180);
    line(200,100,250,180);
    line(200,100,370,100);
    line(370,100,420,180);

    /* Fill colours */
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    setfillstyle(SLASH_FILL, BLUE);
    floodfill(182, 252, WHITE);
    setfillstyle(HATCH_FILL, BLUE);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);
    getch();
    closegraph();
}

void village()
{
    setcolor(WHITE);
    ellipse(100, 100, 0, 360, 50, 30);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(101, 101, WHITE);

    setcolor(WHITE);
    ellipse(200, 50, 0, 360, 50, 30);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(210, 55, WHITE);

    setcolor(WHITE);
    ellipse(400, 30, 0, 360, 50, 30);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(410, 31, WHITE);

    setcolor(WHITE);
    ellipse(20, 50, 0, 360, 50, 30);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(21, 55, WHITE);

    setcolor(WHITE);
    circle(500,70,30);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(510,75, WHITE);
    /* Draw Hut */
    setcolor(WHITE);
    rectangle(150,180,250,300);
    rectangle(250,180,420,300);
    rectangle(180,250,220,300);

    line(200,100,150,180);
    line(200,100,250,180);
    line(200,100,370,100);
    line(370,100,420,180);

    /* Fill colours */
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    setfillstyle(SLASH_FILL, BLUE);
    floodfill(182, 252, WHITE);
    setfillstyle(HATCH_FILL, GREEN);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);

    line(240,300,220,450);
    line(290,300,290,450);
    getch();
    closegraph();
}







