#include<iostream>
using namespace std;

class Matrix{
    private:
        int r,c;
        int mat[10][10];
    public:
        void getElements(){
            cin>>r>>c;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cin>>mat[i][j];
                }
            }
        }
        Matrix operator + (Matrix m){
            Matrix result;
            result.r = r;
            result.c = c;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    result.mat[i][j] = mat[i][j]+m.mat[i][j];
                }
            }
            return result;
        }
        Matrix operator - (Matrix m){
            Matrix result;
            result.r=r;
            result.c=c;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    result.mat[i][j] = mat[i][j] - m.mat[i][j];
                }
            }
           return result;
        }
        Matrix operator * (Matrix m){
            Matrix result;
            result.r=r;
            result.c=c;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    result.mat[i][j] = 0;
                    for(int k=0;k<c;k++){
                        result.mat[i][j] += mat[i][k]*(m.mat[k][j]);
                    }
                }
            }
            return result;
        }
        void show(){
            for (int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cout<<mat[i][j]<<endl;
                }
            }
        }
        
};

int main(){
    int choice;
    Matrix m1,m2, ans;
    while(true){
        cin>>choice;
        switch(choice){
            case 1:
                m1.getElements();
                m2.getElements();
                ans = m1+m2;
                cout<<endl;
                ans.show();
                break;
            case 2:
                m1.getElements();
                m2.getElements();
                ans = m1-m2;
                cout<<endl;
                ans.show();
                break;
            case 3:
                m1.getElements();
                m2.getElements();
                ans = m1*m2;
                cout<<endl;
                ans.show();
                break;
            default:
                break;
        }
    }
    return 0;
}