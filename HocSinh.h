#ifndef HOCSINH_H
#define HOCSINH_H

#include <string>
using namespace std;

class HocSinh {
public:
    string ten;
    int tuoi;
    string gioiTinh;
    string maHocSinh;
    string khoa;

    void nhap();
    void hienThi();
};

#endif // HOCSINH_H