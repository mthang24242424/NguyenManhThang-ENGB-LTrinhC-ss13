#include<stdio.h>
// them phan tu 
void addItem(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("nhap gia tri arr[%d]=: ",i);
		scanf("%d",&arr[i]); 
	} 
} 
// in ra mang
void showItem(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("phan tu arr[%d]=%d\n",i,arr[i]); 
	}
} 
// them 1 phan tu
int add(int arr[],int size){
	int index,value;
	do{
		printf("chon vi tri can them tu 0-%d: ",size-1);
		scanf("%d",&index);
	}while(index>size||index<0);
	printf("nhap gia tri muon them: ");
	scanf("%d",&value);
	for(int i=size;i>index;i--){
		arr[i]=arr[i-1] ;
	}
	arr[index]=value;
	size++; 
	return size; 
}
// sua 1 phan tu
void change(int arr[],int size){
	int index,value; 
	do{
		printf("nhap vi tri can sua tu 0-%d: ",size-1);
		scanf("%d",&index);
	}while(index<0||index>=size);
	printf("nhap gia tri can sua: ");
	scanf("%d",&value);
	arr[index]=value; 
}
// xoa 1 phan tu 
int delete(int arr[],int size){
	int index;
	do{
		printf("chon vi tri can them tu 0-%d: ",size-1);
		scanf("%d",&index);
	}while(index>size||index<0);
	for(int i=index;i<size;i++){
		arr[i]=arr[i+1] ;
	}
	size--; 
	return size; 
}
// sap xep 
void sort(int arr[], int size) {
	int chose; 
	printf("chon cach sap xep\n");
	printf("1. tang dan\n");
	printf("2. giam dan\n");
	printf("lua chon cua ban: ");
	scanf("%d",&chose);
    if(chose==1){
    	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	}else{
		for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	} 
}
// tim kiem
void search(int arr[],int size){
	int chose,value;
	int flag=-1;
	printf("lua chon cua ban\n");
	printf("1. tim kiem tuyen tinh\n");
	printf("2. tim kiem nhi phan\n");
	printf("lua chon cua ban: ");
	scanf("%d",&chose);
	printf("nhap gia tri can tim: ");
	scanf("%d",&value);
	if(chose==1){
		for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("%d o vi tri %d.\n", value, i);
            flag=1;
            break;
        }
    }
    if (flag!=1) {
        printf("ko co gia tri trong mang.\n", value);
    }
	} else{
		int start=0;
		int end=size-1;
		int mid;
		while (start <= end) {
        mid = (start+ end) / 2; 
        if (arr[mid] == value) {
            printf("gia tri o vi tri %d.\n", value, mid);
            flag = 1;
            break;
        } 
        else if (arr[mid] < value) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    if (flag!=1) {
        printf("ko thay trong mang.\n");
    } 
	} 
}
int main(){
	int arr[100];
	int choose;
	int size;
	do{
		printf("\t MENU\n");
		printf("1. nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2. in ra cac gia tri \n");
		printf("3. them 1 phan tu vao vi tri chi dinh\n");
		printf("4. sua 1 phan o vi tri chi dinh\n");
		printf("5. xoa 1 phan tu o vi tri chi dinh\n");
		printf("6. sap xep phan tu\n");
		printf("7. tim kiem phan tu nhap vao\n");
		printf("8. thoat\n");
		printf("lua chon cua ban: ");
		scanf("%d",&choose);
		switch(choose){
		 case 1: // nhap phan tu
		 	printf("moi ban nhap so luong phan tu: ");
			scanf("%d",&size);
			addItem(arr,size);
			break;
		 case 2: // in ra cac phan tu
		 	showItem(arr,size);
		 	break;
		 case 3: // them 1 phan tu vao vi tri chi dinh
		 	size=add(arr,size); 
		 	break;
		 case 4: // sua phan tu o vi tri chi dinh 
		 	change(arr,size);
			break; 
		 case 5: // xoa phan tu o vi tri chi dinh 
		 	size=delete(arr,size);
			break; 
		 case 6: //sap xep mang 
		 	sort(arr,size); 
		 	break;
		 case 7: // tim kiem 
		 	search(arr,size); 
		 	break;
		 case 8:
		 	printf("thoat chuong trinh"); 
			break;		
		 default:
		 	printf("ko hop le\n");	
		}
	} while(choose!=8);
	return 0; 
} 
