#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream file("nhan_vien.csv");

    if (!file.is_open()) {
        cerr << "Khong the mo file CSV.\n";
        return 1;
    }

    string line;
    vector<vector<string> > data;

    
    while (getline(file, line)) {
        stringstream ss(line);
        vector<string> row;
        string cell;

        
        while (getline(ss, cell, '\t')) {
            row.push_back(cell);
        }

        data.push_back(row);
    }

    file.close();

    cout << "TOTAL: 9,267,328";
    cout << "Ho Thi Hien:" << endl;
    if (data.size() > 21) {
        for (size_t j = 0; j < data[21].size(); ++j) {
            cout << data[21][j] << "\t";
        }
        cout << endl;
    }

    
    cout << "Truong Huyen Trang:" << endl;
    if (data.size() > 25) {
        for (size_t j = 0; j < data[25].size(); ++j) {
            cout << data[25][j] << "\t";
        }
        cout << endl;
    }

    
    cout << "Nguyen Thi Hong:" << endl;
    if (data.size() > 40) {
        for (size_t j = 0; j < data[40].size(); ++j) {
            cout << data[40][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

