#include <stdio.h>
// nhap gia tri 
void nhapArr(int arr[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
// in ma tran 
void inArr(int arr[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
// in cac phan tu o goc 
void inGoc(int arr[100][100], int n, int m) {
    printf("arr[0][0] = %d\n", arr[0][0]);
    printf("arr[0][%d] = %d\n", m-1, arr[0][m-1]);
    printf("arr[%d][0] = %d\n", n-1, arr[n-1][0]);
    printf("arr[%d][%d] = %d\n", n-1, m-1, arr[n-1][m-1]);
}
// in cac phan tu tren bien 
void inBien(int arr[100][100], int n, int m) {
	// in hang 
    for (int i = 0; i < m; i++) { 
        printf("%d ", arr[0][i]);
        printf("%d ", arr[n-1][i]);
    }
    // in cot 
    for (int i = 1; i < n-1; i++) { 
        printf("%d ", arr[i][0]);
        printf("%d ", arr[i][m-1]);
    }
    printf("\n");
}
// in cheo chinh,phu 
void inCheo(int arr[100][100], int n, int m) {
    // cheo chinh 
    for (int i = 0; i < n && i < m; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
    // cheo phu 
    for (int i = 0; i < n && i < m; i++) {
        printf("%d ", arr[i][m-1-i]);
    }
    printf("\n");
}
// in so nguyen to 
/*void inPrime(int arr[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num = arr[i][j];
            int flag =-1; 
            if (num <= 1) {
                //isPrime = 0; 
            } else {
                int count=0;
				for(int i=1;i<=a;i++){
					if(a%i==0){
						count++; 
				} 
				}
				if(count==2){
					printf("day la so nguyen to"); 
				} else{
					printf("day ko phai so nguyen to"); 
				}
        }
    }
}
    printf("\n");
}*/
int main() {
    int arr[100][100];
    int n, m;
    int choose;
    printf("nhap so dong: ");
    scanf("%d", &n);
    printf("nhap so cot: ");
    scanf("%d", &m);
    do {
        printf("\nMENU\n");
        printf("1. nhap gia tri cac phan tu\n");
        printf("2. in cac phan tu theo ma tran\n");
        printf("3. in cac phan tu o goc theo ma tran\n");
        printf("4. in cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. in cac phan tu nam tren cheo chinh phu theo ma tran\n");
        printf("6. in ra cac phan tu la so nguyen to\n");
        printf("7. thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d",&choose);      
        switch(choose){
            case 1: // nhap gia tri 
                nhapArr(arr, n, m);
                break;
            case 2: // in ma tran 
                inArr(arr, n, m);
                break;
            case 3: // in ptu o goc  
                inGoc(arr, n, m);
                break;
            case 4: // in ptu tren bien 
                inBien(arr, n, m);
                break;
            case 5: // in cheo chinh phu 
                inCheo(arr, n, m);
                break;
            case 6: // in so nguyen to 
                //inPrime(arr, n, m);
                break;
            case 7:
                printf("thoat chuong trinh.\n");
                break;
            default:
                printf("ko hop le\n");
        }
    } while (choose != 7);
    return 0;
}
