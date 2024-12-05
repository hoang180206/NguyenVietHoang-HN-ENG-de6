#include <stdio.h>

int main(){
    int m=0, length=0, index, value, choice, temp, count, del_Index;
    int arr[100], secArr[100];
        printf("\n  MENU\n\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra ca phan tu trong mang\n");
        printf("3. Dem so luong cac so hoan hao co trong mang\n");
        printf("4. Tim gia tri nho thu 2 trong mang\n");
        printf("5. Them phan tu vao mang\n");
        printf("6. Xoa phan tu\n");
        printf("7. Sap xep mang theo thu tu tang dan\n");
        printf("8. Tim kiem phan tu\n");
        printf("9. Sap xep mang, so le dung truoc so chan dung sau\n");
        printf("10. Kiem tra xem mang co phai mang tang dan khong\n");
        printf("11. Thoat\n");
    do{ 
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            printf("\nnhap so phan tu can nhap: ");
            scanf("%d",&m);
            length=m;
            for(int i=0; i<m; i++){
                printf("nhap gia tri phan tu thu %d: ",i+1);
                scanf("%d",&arr[i]);
            }
            break;

        case 2:
            if(m>0){
                printf("\ncac phan tu dang quan ly: ");
                for(int i=0; i<length; i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
            }else{
                printf("\nchua co mang\n");
            }
            break;
        
        case 3:
            break;

        case 4:
            break;

        case 5:
            printf("vi tri muon them: ");
            scanf("%d",&index);
            printf("phan tu muon them: ");
            scanf("%d",&value);
            if(index>=0 && index<100){
                if(index>=length){
                    arr[index]=value;
                    length=index+1;
                }else{
                    for(int i=length; i>index; i--){
                        arr[i]=arr[i-1];
                    }
                    arr[index]=value;
                    length++;
                }
                printf("mang sau khi them phan tu: ");
                for(int i=0; i<length; i++){
                    printf("%d ",arr[i]);
                }
            }else{
            printf("vi tri khong hop le\n");
            }
        printf("\n");
        break;
    
        case 6:
            if(m>0){
            printf("vi tri muon xoa: ");
            scanf("%d",&del_Index);
            if(del_Index>=0 && del_Index<length){
                for (int i=del_Index; i<length; i++){
                    arr[i]=arr[i+1];
                }
                length--;
                printf("mang sau khi xoa phan tu tai vi tri %d: ",del_Index);
                for(int i=0; i<length; i++){
                    printf("%d ",arr[i]);
                }
            }else{
                printf("vi tri khong hop le");
            }
            }else{
                printf("chua co mang");
            }
            break;

        case 7:
                printf("mang sap xep theo thu tu tang dan: ");
        for(int i=0; i<length; i++){
            for(int j=0; j<length-i-1; j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }

        }
        for(int i=0; i<length; i++){
            printf("%d ",arr[i]);
        }
        break;

        case 8:
            count=0;
            printf("\nnhap vao gia tri can tim kiem: ");
            scanf("%d",&value);
            for(int i=0;i<10; i++){
                if(arr[i]==value){
                secArr[count]=i;
                count++;
                }
            }
            if(count>0){
                for(int i=0; i<count; i++){
                    printf("vi tri cua phan tu %d trong mang: ",value);
                    printf("%d \n",secArr[i]);
                }
            }else{
                printf("khong tim thay gia tri\n");
            }
            break;

        case 9:
            printf("mang sau sap xep: ");
            for(int i=0; i<length; i++){
                for(int j=0; j<length-i-1; j++){
                    if(arr[j]%2!=0){
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }

            }
            for(int i=0; i<length; i++){
                printf("%d ",arr[i]);
            }
            break;
        default:
            break;
        }

    }while(choice!=11);

    return 0;
}