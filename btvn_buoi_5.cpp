#include <iostream>
using namespace std;

/*
//Bai 16
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
     
     
	 // Bai 17
	 
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
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	   
        
        
        
        

