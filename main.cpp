#include <iostream>
#include <iomanip>
using namespace std;
string a{'1'},b{'2'},c{'3'},d{'4'},e{'5'},f{'6'},g{'7'},h{'8'},i{'9'},x{'X'},o{'O'};
string place{};
void layout();
bool changeValueX();
bool changeValueO();
void userToLayout();
bool wrongMove();
bool inGame();
bool endGame();

int main()
{
    layout();
    userToLayout();
}

// USER Input:
void userToLayout()
{
int n{};
while (n <=8)
{
   if (n==0)
   n0:
    {
        cout << "Play the X" << endl;
        getline(cin, place);
        if (changeValueX())
            cout << '\n';
        else
            goto n0;
        system("CLS");
        layout();
    }
    n++;
     if (n==1)
     n1:
    {
        cout << "Play the O" << endl;
        getline(cin, place);
        if (wrongMove())
            goto n1;
        if (changeValueO())
            cout << '\n';
        else
            goto n1;
        system("CLS");
        layout();
    }
    n++;
     if (n==2)
     n2:
    {
        cout << "Play the X" << endl;
        getline(cin, place);
        if (wrongMove())
            goto n2;
        if (changeValueX())
            cout << '\n';
        else
            goto n2;
        system("CLS");
        layout();
    }
    n++;
    if  (n==3)
    n3:
      {
        cout << "Play the O" << endl;
        getline(cin, place);
        if (wrongMove())
            goto n3;
        if (changeValueO())
            cout << '\n';
        else
            goto n3;
        system("CLS");
        layout();
      }
      n++;
    if (n==4)
    n4:
    {
        cout << "Play the X" << endl;
        getline(cin, place);
        if (wrongMove())
            goto n4;
        if (changeValueX())
            cout << '\n';
        else
            goto n4;
        system("CLS");
        layout();
        if (inGame())
            break;
    }
    n++;
    if (n==5)
    n5:
    {
        cout << "Play the O" << endl;
        getline(cin, place);
        if (wrongMove())
            goto n5;
        if (changeValueO())
            cout << '\n';
        else
            goto n5;
        changeValueO();
        system("CLS");
        layout();
        if (inGame())
            break;
    }
    n++;
    if (n==6)
    n6:
    {
        cout << "Play the X" << endl;
        getline(cin, place);
        if (wrongMove())
            goto n6;
        if (changeValueX())
            cout << '\n';
        else
            goto n6;
        system("CLS");
        layout();
        if (inGame())
            break;
    }
    n++;
    if (n==7)
    n7:
    {
        cout << "Play the O" << endl;
        getline(cin, place);
         if (wrongMove())
            goto n7;
        if (changeValueO())
            cout << '\n';
        else
            goto n7;
        system("CLS");
        layout();
        if (inGame())
            break;
    }
    n++;
    if (n==8)
    n8:
    {
        cout << "Play the X" << endl;
        getline(cin, place);
        if (wrongMove())
            goto n8;
        if (changeValueX())
            cout << '\n';
        else
            goto n8;
        system("CLS");
        layout();
        if (inGame())
            break;
        else{
           cout << "Draw" << endl;
           break;
        }
    }

}
}

// The game:
void layout()
{
    cout << a << " | " << b << " | " << c <<endl;
    cout << "__|___|__" << endl;
    cout << d << " | " << e << " | " << f << endl;
    cout << "__|___|__" << endl;
    cout << g << " | " << h << " | " << i << endl;

}

// Getting X and O in layout
bool changeValueX()
{
    if (place=="1")
    {
        a=x;
        return 1;
    }
    else if (place=="2")
    {
        b=x;
        return 1;
    }
    else if (place=="3")
    {
        c=x;
        return 1;
    }
    else if (place=="4")
    {
        d=x;
        return 1;
    }
    else if (place=="5")
    {
        e=x;
        return 1;
    }
    else if (place=="6")
    {
        f=x;
        return 1;
    }
    else if (place=="7")
    {
        g=x;
        return 1;
    }
    else if (place=="8")
    {
        h=x;
        return 1;
    }
    else if (place=="9")
    {
        i=x;
        return 1;
    }
    else
    {
        cout << "Choose from the given place number" << endl;
        return 0;
    }
}
bool changeValueO()
{

    if (place=="1")
    {
        a=o;
        return 1;
    }
    else if (place=="2")
    {
        b=o;
        return 1;
    }
    else if (place=="3")
    {
        c=o;
        return 1;
    }
    else if (place=="4")
    {
        d=o;
        return 1;
    }
    else if (place=="5")
    {
        e=o;
        return 1;
    }
    else if (place=="6")
    {
        f=o;
        return 1;
    }
    else if (place=="7")
    {
        g=o;
        return 1;
    }
    else if (place=="8")
    {
        h=o;
        return 1;
    }
    else if (place=="9")
    {
        i=o;
        return 1;
    }
    else
    {
        cout << "Choose from the given place number" << endl;
        return 0;
    }
}

// Matching 3-X or 3-O
bool inGame()
{
    if (a==b and b==c)
    {
        cout << "Player with " << c << " wins!!" << endl;
        return 1;
    }
    else if (d==e and e==f)
    {
        cout << "Player with " << f << " wins!!" << endl;
        return 1;
    }
    else if (g==h and h==i)
    {
        cout << "Player with " << i << " wins!!" << endl;
        return 1;
    }
    else if (a==d and d==g)
    {
        cout << "Player with " << g << " wins!!" << endl;
        return 1;
    }
    else if (b==e and e==h)
    {
        cout << "Player with " << h << " wins!!" << endl;
        return 1;
    }
    else if (c==f and f==i)
    {
        cout << "Player with " << c << " wins!!" << endl;
        return 1;
    }
    else if (c==e and e==g)
    {
        cout << "Player with " << g << " wins!!" << endl;
        return 1;
    }
    else if (a==e and e==i)
    {
        cout << "Player with " << i << " wins!!" << endl;
        return 1;
    }
    else
        return 0;
}


// WRONG MOVE

bool wrongMove()
{
    if ((a==x and place=="1") or (a==o and place=="1") or
        (b==x and place=="2") or (b==o and place=="2") or
        (c==x and place=="3") or (c==o and place=="3") or
        (d==x and place=="4") or (d==o and place=="4") or
        (e==x and place=="5") or (e==o and place=="5") or
        (f==x and place=="6") or (f==o and place=="6") or
        (g==x and place=="7") or (g==o and place=="7") or
        (h==x and place=="8") or (h==o and place=="8") or
        (i==x and place=="9") or (i==o and place=="2"))
        {
            cout << "INVALID MOVE" << endl;
            layout();
            return 1;
        }
     else
        return 0;

}
