/*Q5) Create a class called House. OneBHK and TwoBHK are two classes inherited from House with data members of data members length height and width of every room. . Area (), Volume() are functions to find area of individual room .Total_area() and Total_Volume() are functions to calculate area of  total area and total volume of the houses .Write the code using pure virtual function.
Note: Class Names should be last 3 digit of roll no_givenName*/

#include<iostream>
using namespace std;

class House_030{	
	public:
		virtual void no_of_room() = 0;
 		virtual void get() = 0;
 		virtual void Area() = 0;
 		virtual void Volume() = 0;
};

class OneBHK_030:public House_030{
 	public:
 		int room;
 		void no_of_room(){
 			cout<<"Enter no. of rooms:";
 			cin>>room;
	 		breadth = new int[room]; 
 			length = new int[room];
 			height = new int[room];
 		}
 		int *breadth,*length,*height;
		//OneBHK_030(){
		//	no_of_room();
	 	//	breadth = new int[room]; 
 		//	length = new int[room];
 		//	height = new int[room];
	 	//	//breadth = (int*)malloc(room*sizeof(int));
 		//	//length = (int*)malloc(room*sizeof(int));
 		//	//height = (int*)malloc(room*sizeof(int));
		//}
 		void get(){
 			for(int i=0 ; i<room ; i++){
	  			cout<<"Enter the breadth of One BHK house room"<<i+1<<": "<<endl;
  				cin>>breadth[i];
  				cout<<"Enter the length of One BHK house room"<<i+1<<": "<<endl;
  				cin>>length[i];
  				cout<<"Enter the height of One BHK house room"<<i+1<<": "<<endl;
  				cin>>height[i];
 			}
 		}
 		void Area(){
 			int sum = 0;
 			for(int i=0 ; i<room ; i++)
 				sum += length[i] * breadth[i];
  			cout<<"The area of the One BHK house is: "<<sum<<endl;
 		}
 		void Volume(){
 			int sum = 0;
 			for(int i=0 ; i<room ; i++)
 				sum += length[i] * breadth[i] * height[i];
  			cout<<"The volume of the One BHK house is: "<<sum<<endl;;
 		}
};

class TwoBHK_030:public House_030{
 	public:
 		int room;
   		void no_of_room(){
 			cout<<"Enter no. of rooms:";
 			cin>>room;
	 		breadth = new int[room]; 
 			length = new int[room];
 			height = new int[room];
 		}
 		
 		int *breadth,*length,*height;
		//TwoBHK_030(){
		//	no_of_room();
	 	//	breadth = new int[room]; 
 		//	length = new int[room];
 		//	height = new int[room];
	 	//	//breadth = (int*)malloc(room*sizeof(int));
 		//	//length = (int*)malloc(room*sizeof(int));
 		//	//height = (int*)malloc(room*sizeof(int));
 		//}		
 		void get(){
 			for(int i=0 ; i<room ; i++){
	 			cout<<"Enter the breadth of Two BHK house room"<<i+1<<": "<<endl;
  				cin>>breadth[i];
  				cout<<"Enter the length of Two BHK house room"<<i+1<<": "<<endl;
  				cin>>length[i];
  				cout<<"Enter the height of Two BHK house room"<<i+1<<": "<<endl;
  				cin>>height[i];
 			}
 		}
		void Area(){
 			int sum = 0;
 			for(int i=0 ; i<room ; i++)
 				sum += length[i] * breadth[i];
  			cout<<"The area of the Two BHK house is: "<<sum<<endl;
 		}
 		void Volume(){
 			int sum = 0;
 			for(int i=0 ; i<room ; i++)
 				sum += length[i] * breadth[i] * height[i];
  			cout<<"The volume of the Two BHK house is: "<<sum<<endl;;
 		}
};

int main(){
 	House_030 *vptr;
 	OneBHK_030 o;
 	TwoBHK_030 t;
 	vptr=&o;
 	vptr->no_of_room();
 	vptr->get();
 	vptr->Area();
 	vptr->Volume();
 	vptr=&t;
 	vptr->no_of_room();
 	vptr->get();
 	vptr->Area();
 	vptr->Volume();
 	return 0;
}




