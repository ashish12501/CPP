#include<iostream>

using namespace std;

int main(){
	int t;		
	cin>>t;
	while (t--)
	{
		int India=0,draw=0,England=0;
		int R1,R2,R3,R4,R5;
		cin>>R1>>R2>>R3>>R4>>R5;
		int arr[]={R1,R2,R3,R4,R5};
		for (int i = 0; i < 5; i++)
		{
			if (arr[i]==0)
				draw++;
			else if (arr[i]==1)
			    India++;
			else if (arr[i]==2)
				England++;
		}
		if (India==England)
				cout<<"DRAW"<<endl;
			else if (India>England)
				cout<<"INDIA"<<endl;
			else if (England>India)
			    cout<<"ENGLAND"<<endl;
	}
	return 0;
}


