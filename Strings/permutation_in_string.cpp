#include<iostream>
#include<vector>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]){
        for(int i=0; i<26;i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i=0; i<s1.length(); i++){
            freq[s1[i]-'a']++;
        }

        int windSize=s1.length();
        for(int i=0; i<s2.length(); i++){
            int idx=i, windIdx=0;
            int windFreq[26]={0};
            while(idx<s2.length() && windIdx<windSize){
                windFreq[s2[idx]-'a']++;
                windIdx++; idx++;
            }
            if(isFreqSame(freq, windFreq)){
                return true;
            }
        }
        return false;
}

int main() {
    string str1 = {"ab"};
    string str2 = {"eidabooo"};
    cout << checkInclusion(str1, str2) << endl;
    return 0;
}