//Addition of Matrix
#include<iostream>
using namespace std;
class c2;
class c1{
	int r,c,**p;
	public:
		void read(int,int);
		void display(c1);
	friend void add(c1,c2);
};
class c2{
	int R,C,**P;
	public:
		void read(int,int);
		void display(c2);
	friend void add(c1,c2);
};
void c1::read(int r,int c){
	this->r=r;
	this->c=c;
	cout<<"Entries of matrix1\n";
	p= new int*[r];
	for(int i=0;i<r;i++){
		p[i]=new int[c];
		for(int j=0;j<c;j++)
			cin>>p[i][j];
	}
}
void c1::display(c1 a){
	cout<<"Matrix:\n";
	for(int i=0;i<a.r;i++){
		for(int j=0;j<a.c;j++)
			cout<<p[i][j]<<"  ";
		cout<<endl;
	}
}
void c2::read(int r,int c){
	R=r;
	C=c;
	cout<<"Enteries of matrix2\n";
	P=new int*[r];
	for(int i=0;i<r;i++){
		P[i]=new int[c];
		for(int j=0;j<c;j++)
			cin>>P[i][j];
	}
}
void c2::display(c2 b){
	cout<<"Matrix:\n";
	for(int i=0;i<b.R;i++){
		for(int j=0;j<b.C;j++)
			cout<<P[i][j]<<"  ";
		cout<<endl;
	}
}
void add(c1 a,c2 b){
	int mat[a.r][a.c];
	if(a.r!=b.R && a.c!=b.C){
		cout<<"Can't add\n";
		return;
	}
	else
		for(int i=0;i<a.r;i++)
			for(int j=0;j<a.c;j++)
				mat[i][j]= a.p[i][j]+b.P[i][j];
	cout<<"Matrix after addition:\n";
	for(int i=0;i<a.r;i++){
		for(int j=0;j<a.c;j++)
			cout<<mat[i][j]<<"  ";
		cout<<endl;
	}
}
int main(){
	c1 a;
	c2 b;
	a.read(2,3);
	a.display(a);
	b.read(2,3);
	b.display(b);
	add(a,b);
	return 0;
}
