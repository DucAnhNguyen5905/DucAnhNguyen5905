 #include <iostream>

using namespace std; 

/*
// Bai 11
int main() {
    int so_cac_chu_so;
    cout << "Co bao nhieu so trong day so can tinh ?: " << endl;
    cin >> so_cac_chu_so;

    int sum = 0;
    for (int i = 0; i < so_cac_chu_so; ++i) {
        int cac_so_trong_day;
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> cac_so_trong_day;
        sum += cac_so_trong_day; 
    }

    cout << "Tong cua day so: " << sum << endl;

    return 0;
}
*/

/*
// Bai 10
int main() {
	int day_so[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	string chu_so[10] = {"mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin", "muoi"};
	
	for (int i = 0; i < 10; i++) {
		cout << " So " << day_so[i] << " duoc viet la " << chu_so[i] << endl;}
	return 0;
	}
*/	

/*
//Bai 8
int main() {
    int so_phan_tu;
    cout << "Nhap so phan tu cua mang: " << endl;
    cin >> so_phan_tu;

    int mang[so_phan_tu];
    cout << "Nhap " << so_phan_tu << " phan tu cua mang: " << endl;
    for (int i = 0; i < so_phan_tu; i++) {
        cout << "Nhap gia tri thu " << i + 1 << ": ";
        cin >> mang[i];
    }
    for (int i = 0; i < so_phan_tu; i++) {
        if (mang[i] % 2 == 0) {
            cout << "so chan" << endl;
        } else {
            cout << "so le" << endl;
        }
    }
    return 0;
}
*/


// Bai 9
int main() {
    int mang[5] = {4,2,5,1,3};

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (mang[i] > mang[j]) {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }

 
   cout << "Mang sau khi sap xep theo thu tu tang dan: ";
    for (int i = 0; i < 5; i++) {
    cout << mang[i] << " ";
    }
    cout << std::endl;
    
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (mang[i] < mang[j]) {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
        cout << "Mang sau khi sap xep theo thu tu giam dan: ";
    for (int i = 0; i < 5; i++) {
        std::cout << mang[i] << " ";
    }
    

    return 0;
}

/*	
// Bai 12
int main() {
    int so_phan_tu;
    cout << "Nhap so phan tu cua mang: " << endl;
    cin >> so_phan_tu;

    int mang[so_phan_tu];
    cout << "Nhap " << so_phan_tu << " phan tu cua mang: " << endl;
    for (int i = 0; i < so_phan_tu; i++) {
        cout << "Nhap gia tri thu " << i + 1 << ": ";
        cin >> mang[i];
    }
    int sum_so_le = 0;
    for (int i = 0; i < so_phan_tu; i++) {
        if (mang[i] % 2 != 0) {
			sum_so_le += mang[i];
        }
        }
        cout << " Tong cac so le bang: " << sum_so_le << endl;
        
    
    return 0;
}		
*/


    

    
					
			
        









