#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

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

