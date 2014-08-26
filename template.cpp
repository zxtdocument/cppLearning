#include <iostream>
#include <cstring>

using namespace std;

template <class T>
const T maxn(const T* p, const int num);

typedef char* pchar;
template <> const pchar maxn<pchar>(const pchar* p, const int num);


int main(){
    int a[4]={1,3,4,5};
    char *b[3]={"hello","world","hahahaha"};
    cout<<maxn(a,3);
    cout<<maxn(b,3);
    
}

template <class T>
T maxn(const T* p, const int num){
    int i; T max=p[0];
    for(i=1;i<num;i++){
        if(max<p[i])max=p[i];
    }
    return p[i];
}

template <> const pchar maxn(const pchar* p, const int num){
    int i,j;int len=strlen(p[0]);
    for(i=1;i<num;i++){
        if(strlen(p[i])>len){
            j=i;len=strlen(p[i]);
        }
    }
    return p[j];
}

