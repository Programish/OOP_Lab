// WAP using static data member to keep track of count of object created and destroyed
#include<iostream>
using namespace std;
class pu_count{	
	static int pu_cons,pu_desc;
	public:
		pu_count(){
			pu_cons++;
		}
		~pu_count(){
			pu_desc++;
		}
		static void pu_show(){
			 cout<<"No. of times constructor called:"<<pu_cons<<endl;
			 cout<<"No. of times destructor called:"<<pu_desc<<endl;
		}
};
int pu_count::pu_cons=0;
int pu_count::pu_desc=0;
int main(){
    {
        pu_count pu_c1;
        pu_count pu_c2;
        pu_count pu_c3;
    }
    pu_count::pu_show();
    return 0;
}
		
