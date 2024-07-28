#include<iostream>
using namespace std;
class seriessum{
	private:
		int num;
		int sum;
		void calculatesum(){
			sum=0;
			for(int i=1;i<=num;i++){
				sum+=i;
			}
		}
		public:
		seriessum():num(10),sum(0){
			cout<<"seriessum object cretated with default number:"<<num<<endl;
			calculatesum();
			displaysum();
			
		}
		seriessum(int n):num(n),sum(0){
			cout<<"seriessum object created for number;"<<num<<endl;
			calculatesum();
			displaysum();
		}
		void displaysum() const {
		cout<<"the sum of the series up to" << num <<"is:"<< sum<< endl;
		}
};
int main(){
	int n;
	cout<<"enter an integer (or -1 to use default):";
	cin>>n;
	if (n==-1){
		seriessum seriessum;
	}
	else{
		seriessum seriessum(n);
	}
	return 0;
}
