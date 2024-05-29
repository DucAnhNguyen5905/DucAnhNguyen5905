#include <iostream>

using namespace std;
/*
// Bai 20
void hoan_doi_vi_tri(int *mang, int so_phan_tu) {
    int *start = mang;     
    int *end = mang + so_phan_tu - 1; 

    
    while (start < end) {
        
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int so_phan_tu;
    cout << "Nhap so phan tu: ";
    cin >> so_phan_tu;

    int *mang = new int[so_phan_tu]; 

    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < so_phan_tu; i++) {
        cin >> mang[i];
    }

    hoan_doi_vi_tri(mang, so_phan_tu); 

    cout << "Mang duoc dao nguoc la:" << endl;
    for (int i = 0; i < so_phan_tu; i++) {
        cout << mang[i] << " ";
        }
        cout << endl;
    return 0;
    }
    */
 /*   
    // Bai 19
int main() {
    int arr[5];
    int i;
    int sum = 0;
    int *ptr;

    std::cout << "Nhap cac phan tu: " << endl;

    for (i = 0; i < 5; i++) {
        std::cout << "Nhap a[" << i + 1 << "] = ";
        std::cin >> arr[i];
    }
    
    ptr = arr;
    for (i = 0; i < 5; i++) {
        sum += *ptr;
        ptr++;
    }

    std::cout << "Tong cac phan tu cua mang la: " << sum;
    return 0;
}
    */
/*    
	// BAi 22
int stringLength(const char* str) {
int length = 0;
    
   
    while (*str != '\0' ) {
        length++;   
        str++;      
    }
    
    return length;  
}

int main() {
    const char* str = "Hello world";
    std::cout << "Do dai cua chuoi la: " << stringLength(str) << std::endl;
    
    return 0;
}
    */
    
// Bai 21
using namespace std;

void tim_so_lon_nhat(double &so_lon_nhat);

int main() {
    double so_lon_nhat;

    tim_so_lon_nhat(so_lon_nhat);
    return 0;
}

void tim_so_lon_nhat(double &so_lon_nhat) {
    int so_phan_tu;
    double mang[100];

    cout << "So phan tu: " << endl;
    cin >> so_phan_tu;

    cout << "Gia tri cua cac phan tu: ";
    for (int i = 0; i < so_phan_tu; i++) {
        cin >> mang[i];
    }

    double *ptr = mang;

    so_lon_nhat = *ptr;

    for (int i = 1; i < so_phan_tu; i++) {
        ptr++;
        if (so_lon_nhat < *ptr) {
            so_lon_nhat = *ptr;
        }
    }

    cout << "So lon nhat la: " << so_lon_nhat << endl;
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
