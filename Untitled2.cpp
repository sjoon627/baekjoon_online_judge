#include <iostream>
#include <algorithm>

using namespace std;


class Stu{
public:
	int num;
	int sco;

	void stu1(int num, int sco){
		this->num = num;
		this->sco = sco;
	}
	
	bool operator <(Stu &stu){
		return this->sco <stu.sco;
	}
			
};

bool compare(int a,int b){
	return a > b;
}

Stu stua[500000];
Stu stub[500000];

int main(){ 
	int n,i1=0,i2=0,i3,i4,s,kn,k;

	cin>> n;
	cin>> s >> kn;
	
	for(;i1+i2<n;){
		cin >> k;

	if(s>=k){
		stua[i1].stu1(i1+i2+1, abs(s-k));
		++i1;
	}
	else if(s<k){
		stub[i2].stu1(i1+i2+1, abs(s-k));
		++i2;
	}
	}

	sort(stua,stua+i1);
	sort(stub,stub+i2);
	
	if(i1!=0 && i2!=0){
	i3=i1;
	i4=i2;
	i1=0;
	i2=0;
	
	for(;i1+i2<kn;){
		if(stua[i1].sco<=stub[i2].sco){
		if(i1<i3)i1++;
		else{i2++;}	
		}
		
		else{
		if(i2<i4)i2++;
		else{i1++;}		
		}
	}	
	}
	else if(i1==0)
	i2=kn;
	else if(i2==0)
	i1=kn;
	
	
	for(int i=0;i<i1;i++){
		cout << stua[i].num <<" ";
	}
	
	for(int i=0;i<i2;i++){
		cout << stub[i].num <<" ";
	}
}
