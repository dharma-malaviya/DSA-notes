#include<iostream>
using namespace std;

//Brute Force
int maxArea1(int *height, int n) {
        int maxWater = 0;
        int w=0, ht=0;
        int area=0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                w = j-i; 
                ht = min(height[i], height[j]);
                area = w*ht;
                maxWater = max(maxWater, area);
            }
        }
        return maxWater;
}

//Optimal
int maxArea2(int *height, int n) {
       int maxWater = 0;
        int w=0, ht=0;
        int lp=0, rp=n-1;

        while(lp<rp){
            w = rp-lp;
            ht = min(height[lp], height[rp]);
            int area = w*ht;
            maxWater = max(maxWater, area);

            height[lp]<height[rp] ? lp++ : rp--;
        } 
        return maxWater;
}


int main() {
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height)/sizeof(int);
    cout << "Brute Force:" << maxArea1(height, n);
    cout << endl;
    cout << "Optimal:" << maxArea2(height, n);
    return 0;
}