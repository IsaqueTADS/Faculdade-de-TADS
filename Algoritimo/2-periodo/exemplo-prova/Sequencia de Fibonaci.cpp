#include <iostream>

using namespace std;

int finbonaci (int end);

int main(){
	
	int end = 10;
	
	int res = finbonaci(end);
	cout<<res<<endl;
	return 0;
}

int finbonaci (int end){

  if ( end == 1){
      return 1;
  }
  
  if ( end == 2 ){
      return 1;
  }
  
  return finbonaci(end -1) + finbonaci(end -2);
}
