#include <iostream>
#include <vector>

using namespace std;

typedef struct {
    int * data;
} Matrix ;


Matrix InitMatrix(const int m, const int n)
{
    Matrix mat = *(new Matrix);
//    int data[m * n];
//
//    mat.data = data;

    mat.data = new int(m*n);
    for (int i=0;i<m*n;i++) {
        mat.data[i] = 0;
    }

    // 打印矩阵（在初始化函数内）
    cout<<"matrix in init"<<endl;
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            cout<<mat.data[j+n*i]<<"\t";
        }
        cout<<endl;
    }

    return mat;
}

int main() {
    int m = 10, n = 10;
    Matrix mat = InitMatrix(m, n);

    // 初始化完再打印一次矩阵
    cout<<"matrix out of init"<<endl;
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            cout<<mat.data[j+n*i]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}