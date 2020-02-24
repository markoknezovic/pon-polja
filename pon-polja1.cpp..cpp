#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Unesi koliko elemenata ce imati polje: "<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Upisi "<<i+1<<". vrijednost u polje: "<<endl;
		cin>>a[i];
	}
	int b[n];
	int br=0;
	for(int i=n;i>0;i--){
		a[i]=b[br];
		br++;
	}
	cout<<b[2]<<endl;
	
	
	
	
	system("pause");
	return 0;
}
