#include <iostream>
//#include <cconio>

using namespace std;

int (*arr(void))[3]{
	static int ar[][3]={
							{1,2,3},
							{4,5,6},
							{7,8,9}
							};

	return ar;
}

char (*func2(void))[10]{
    static char a[][10] = {"xxx", "yyy", "zzz"};
    return a;
}

int main(void){
	int (*abc)[3]=arr();

	cout << *abc[0] << endl;
	cout << *abc[1] << endl;
	cout << *abc[2] << endl;
	
 char (*arr2)[10] = func2();
    cout << arr2[0] << endl; //xxx
    cout << arr2[1] << endl; //yyy
    cout << arr2[2] << endl; //zzz

}
