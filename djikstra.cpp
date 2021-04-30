#include <iostream>
#define INF 99999
using namespace std;

main()
{
int n=10,i,j,start;
//cout<<"Masukan Jumlah Vertex : ";
//cin>>n;

int G[n][n],tempGraf[n][n],jarak[n],visit[n],temp[n],count;

G[0][0]=0;     G[0][1]=4; G[0][2]=4;     G[0][3]=3;    G[0][4]=0;    G[0][5]=0;     G[0][6]=0;  G[0][7]=0;     G[0][8]=0;      G[0][9]=0;
G[1][0]=4; G[1][1]=0;     G[1][2]=1;  G[1][3]=0;    G[1][4]=0;    G[1][5]=2;     G[1][6]=5;      G[1][7]=0;     G[1][8]=0;      G[1][9]=0;
G[2][0]=4;  G[2][1]=1;  G[2][2]=0;     G[2][3]=1; G[2][4]=2;    G[2][5]=0;     G[2][6]=0;      G[2][7]=0;  G[2][8]=0;      G[2][9]=0;
G[3][0]=3;     G[3][1]=0;     G[3][2]=1;  G[3][3]=0;    G[3][4]=1; G[3][5]=0;     G[3][6]=0;   G[3][7]=0;     G[3][8]=0;      G[3][9]=0;
G[4][0]=0;     G[4][1]=0;     G[4][2]=2;     G[4][3]=1; G[4][4]=0;    G[4][5]=1;  G[4][6]=0;      G[4][7]=0;  G[4][8]=5;   G[4][9]=0;
G[5][0]=0;     G[5][1]=0;     G[5][2]=2;     G[5][3]=0;    G[5][4]=0; G[5][5]=0;     G[5][6]=2;  G[5][7]=4;     G[5][8]=0;   G[5][9]=0;
G[6][0]=0; G[6][1]=2;     G[6][2]=0;     G[6][3]=0;    G[6][4]=0;    G[6][5]=2; G[6][6]=0;      G[6][7]=1;     G[6][8]=0;      G[6][9]=4;
G[7][0]=0;     G[7][1]=0;     G[7][2]=0;  G[7][3]=0;    G[7][4]=0; G[7][5]=4;     G[7][6]=1;    G[7][7]=0;     G[7][8]=2;   G[7][9]=1;
G[8][0]=0;     G[8][1]=0;     G[8][2]=0;     G[8][3]=5;    G[8][4]=5; G[8][5]=0;  G[8][6]=0;      G[8][7]=2;  G[8][8]=2;      G[8][9]=1;
G[9][0]=0;     G[9][1]=0;     G[9][2]=0;     G[9][3]=0;    G[9][4]=0;    G[9][5]=0;     G[9][6]=4;  G[9][7]=1;     G[9][8]=2;  G[9][9]=0;

for(i = 0;i < n ;i++)
{
for (j=0;j<n;j++)
{
cout<<"Matriks "<<"["<<i<<"]"<<"["<<j<<"]"<<" : ";
cout<<G[i][j]<<endl;
}
}

/*cout<<"Masukan Matrix Graf : \n";
for(i = 0;i < n ;i++)
{
for (j=0;j<n;j++)
{
cout<<"Matriks "<<"["<<i<<"]"<<"["<<j<<"]"<<" : ";
cin>>G[i][j];
}
}*/
cout<<"Masukan Vertex Asal : ";
cin>>start;

for(i=0;i<n;i++)
{
for (j=0;j<n;j++)
{
if (G[i][j] == 0)
{
tempGraf[i][j] = INF;
}
else{
tempGraf[i][j] = G[i][j];
}
}
}

for (i = 0;i<n;i++)
{
jarak[i] = tempGraf[start][i];
temp[i] = start;
visit[i] = 0;
}
jarak[start] = 0;
visit[start] = 1;

count =1; ///dimulai dari 1 karena kita tidak akan menghitung vertex asal lagi

///proses untuk menghitung vertex yang dikunjungi
int jarakmin,nextvertex;
while (count < n-1)
{
jarakmin = INF;
for (i=0;i<n;i++)
{
///jika jarak lebih kecil dari jarak minimum dan vertex belum dikunjungi
/// maka jarak minimum adalah jarak yang sudah dibandingkan sebelumnya dengan jarakmin
if(jarak[i] < jarakmin && visit[i]!=1)
{
jarakmin = jarak[i];
nextvertex = i; //untuk memberikan vertex pada jarak minimum
}
}

/// untuk mengecek vertex selanjutnya yang terhubung dengan vertex lain yang memiliki jarak minimum
visit[nextvertex] = 1;
for(i = 0;i<n;i++)
{
if(visit[i]!=1)
{
if(jarakmin+tempGraf[nextvertex][i]<jarak[i])
{
jarak[i] = jarakmin+tempGraf[nextvertex][i];
temp[i] = nextvertex;
}
}
}
count++;
}
///nenampilkan jalur dan jarak untuk setiap vertex
int a[n+1],k;
for (i = 0; i < n ;i++)
{
if(i!=start)
{
cout<<"\nHasil jarak untuk vertex ke-"<<i<<" adalah\n"<<jarak[i];
j=i;
cout<<"<-"<<i;
while(j!=start)
{
j=temp[j];
cout<<j;
if(j!=start)
{
cout<<"<-";
}

}

}
}
cout<<"\nTotal Jaraknya adalah "<<jarak[n-1];
return 0;
}
