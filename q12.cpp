#include <iostream>
#include <string>
#include <vector>
#include <time.h>

#define ll long long

using namespace std;

int main()
{
    clock_t tStart = clock();
    ll i;
    int num = 1;
    int flag =0;
    for(i =2; flag == 0;i++){
            int divs;
            ll j;
            num = num + i;
            vector<int> ck;
            for(j = 1; j*j<num;j++){
                if(num%j==0)
                    ck.push_back(j);
            }
            if(j*j==num)
                divs = ck.size()*2+1;
            else
                divs = ck.size()*2;

            if(divs>500){
                flag = 1;
                cout<<num;
            }
    }
    printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}
