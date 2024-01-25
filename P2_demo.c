// Tạo 1 menu gồm các chức năng sau. Menu lap lai toi khi chon 0 
// 1.Tính tổng của 2 số nguyên nhập từ bàn phím
// 2.Kiểm tra số nguyên nhập từ bàn phím là số nguyên dương hay không ?
// 3.Tính tổng các số nguyên từ 0 - n với n nhập từ bàn phím
// 0.Thoát
#include<stdio.h>
// TAT CA CAC HAM DAT TRUOC HAM MAIN 
// ham khong co kieu tra ve va co tham so truyen vao
void tinhTong(int soThuNhat, int soThuHai){
    int tong = soThuNhat + soThuHai;
    printf("Tong = %d\n",tong);
}

void kiemTraSo(int soNguyen){
    if(soNguyen < 0){
        printf("So nguyen am\n");
    }else if(soNguyen == 0){
        printf("Khong phai nguyen duong hoac nguyen am\n");
    }else{
        printf("So nguyen duong\n");
    }
}

void tinhTongSoNguyen(int soNguyen){
    int tong = 0;
    for(int i = 0 ;i < soNguyen +1 ;i++){
        tong+=i;
    }
    printf("Tong = %d\n",tong);
}
int main(){
    // B1: In menu 
    printf("1. Chuc nang 1\n");
    printf("2. Chuc nang 2\n");
    printf("3. Chuc nang 3\n");
    printf("0. Thoat\n");
    // B2: Tao menu 
    int chucNang;
    do{
        printf("Moi chon menu:");
        scanf("%d",&chucNang);
        switch(chucNang){
            case 1:{
                printf("Chuc nang 1\n");
                int so1;
                printf("Moi nhap vao so thu nhat:");
                scanf("%d",&so1);
                int so2;
                printf("Moi nhap vao so thu hai:");
                scanf("%d",&so2);
                tinhTong(so1,so2); // Cach goi ham void
                break;
            }
            case 2:{
                printf("Chuc nang 2\n");
                int so;
                printf("Moi nhap vao so:");
                scanf("%d",&so);
                kiemTraSo(so);
                break;
            }
            case 3:{
                printf("Chuc nang 3\n");
                int so;
                printf("Moi nhap vao so:");
                scanf("%d",&so);
                tinhTongSoNguyen(so);
                break;
            }
            case 0:{
                printf("Thoat\n");
                break;
            }
            default:{
                printf("Chuc nang khong ton tai\n");
                break;
            }
        }
    }while(chucNang !=0);
    return 0;
}