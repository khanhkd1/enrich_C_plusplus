#ifndef MONHOC_H
#define MONHOC_H

#include <string>
#include <vector>
using namespace std;

class MonHoc {
public:
    string tenMonHoc;
    string maGiaoVien;
    vector<string> danhSachHocSinhDangKy;

    void nhap();
    void hienThi();
};

#endif // MONHOC_H