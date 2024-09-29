#ifndef GIAOVIEN_H
#define GIAOVIEN_H

#include <string>
using namespace std;

class GiaoVien {
public:
    string ten;
    int tuoi;
    string gioiTinh;
    string maGiaoVien;
    string chucDanh;
    string khoa;

    void nhap();
    void hienThi();
};

#endif // GIAOVIEN_H