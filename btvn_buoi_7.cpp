#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
/*
struct sinh_vien {
    string name;
    int ID;
    float diem_tong_ket_hk1;
    float diem_tong_ket_hk2;
    float diem_tb_ca_nam;
};

int main() {
    sinh_vien lop_hoc[2]; 
    float diem_tb_lon_nhat = 0; 

    float diem_tb_ca_nam;
    
    for (int i = 0; i < 2; ++i) {
        cout << "Nhap thong tin cho sinh vien " << i + 1 << ":" << endl;
        cout << "Ten: ";
        getline(cin, lop_hoc[i].name);
        cout << "ID: ";
        cin >> lop_hoc[i].ID;
        cout << "Diem tong ket hoc ky 1: ";
        cin >> lop_hoc[i].diem_tong_ket_hk1;
        cout << "Diem tong ket hoc ky 2: ";
        cin >> lop_hoc[i].diem_tong_ket_hk2;
        cin.ignore(); 

        float diem_tb_ca_nam = (lop_hoc[i].diem_tong_ket_hk1 + lop_hoc[i].diem_tong_ket_hk2) / 2;
        lop_hoc[i].diem_tb_ca_nam = diem_tb_ca_nam;
        
        if (lop_hoc[i].diem_tb_ca_nam > diem_tb_lon_nhat) {
            diem_tb_lon_nhat = lop_hoc[i].diem_tb_ca_nam;
        }
    
    }
    cout << "Diem tong ket lon nhat trong lop: " << fixed << setprecision(2) << diem_tb_lon_nhat << endl;

    return 0;
}
*/
struct phan_so {
	long tu_so;
	long mau_so;
	};

void nhap(phan_so &he_so) {
	cout << "Nhap tu so va mau so: " << endl;
	cin >> he_so.tu_so >> he_so.mau_so;
	while (he_so.mau_so == 0) {
		cout << "Mau so phai khac 0, hay nhap lai: " << endl;
		cin >> he_so.mau_so;
	}
	}
void hien_thi(const phan_so &he_so) {
	cout << "Phan so cua ban la: ";
	cout << he_so.tu_so << "/" << he_so.mau_so << endl;
	}
void tinh_tong(const phan_so &he_so) {
	cout << "Tong hai phan so cua ban la: " << endl;
	cout << (he_so.tu_so1 * he_so.mau_so2 + he_so.tu_so2 * he_so.mau_so1) << "/" << (he_so.mau_so1 * he_so.mau_so2);
	}
int main() {
	phan_so ps;
	nhap (ps);
	hien_thi (ps);
	
	return 0;
	}
