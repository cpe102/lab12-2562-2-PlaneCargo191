#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}

void updateImage(bool I[N][M], int S, int X, int Y)
{
    for(int j=0; j<N; j++)
    {
        for(int i=0; i<M; i++)
        {
            if(sqrt(pow(j-X,2)+pow(i-Y,2))<=S-1) I[j][i] = 1;
        }
    }
}

void showImage(const bool J[N][M])
{
    for(int a=-2; a<M; a++)
    {
        cout << "-";
    }
    cout << "\n";
    for(int b=0; b<N; b++)
    {
        cout << "|";
        for(int c=0; c<M; c++)
        {
            if(J[b][c]==1) cout << "*";
            else cout << " ";
        }
        cout << "|\n";
    }
    for(int a=-2; a<M; a++)
    {
        cout << "-";
    }
    cout << "\n";
}
