#include<stdio.h>
int maxUoc(int a,int b){
	int max=1;
	int min; 
	if(a<b){
		min=a; 
	}else{
		min=b; 
	} 
	for(int i=1;i<=min;i++){
		if(a%i==0&&b%i==0){
			max=i; 
		} 
	}
	return max; 
}
int main(){
	int a,b;
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	int max= maxUoc(a,b);
	printf("uoc chung lon nhat cua 2 so la: %d",max); 
	return 0;
}
