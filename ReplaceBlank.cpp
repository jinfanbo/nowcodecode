#include<stdio.h>
#include<string.h>
#include<windows.h>
using namespace std;

class Solution {
    public:
    void replaceBlank(char *str, int length) {
        if(str==NULL||length<=0) {
            return ;
        }
        int originalLength = 0;
        int numberOfBlank = 0;
        int i = 0;
        while(str[i]!='\0') {
            originalLength++;
            if(str[i] == ' ') {
                numberOfBlank++;
            }
            i++;
        }
        // printf("%d %d\n", originalLength, numberOfBlank);
        int newLength = originalLength + numberOfBlank * 2;
        if(newLength > length) {
            return ;
        }
        int indexOfOriginal = originalLength;
        int indexOfNew = newLength;
        while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal) {
            if(str[indexOfOriginal] == ' ') {
                str[indexOfNew--] = '0';
                str[indexOfNew--] = '2';
                str[indexOfNew--] = '%';
            }
            else {
                str[indexOfNew--] = str[indexOfOriginal];
            }
            indexOfOriginal--;
        }
    }
};

class Solution1 { 
    public: 
    void replaceBlank(char *str,int length) { 
        //遍历一边字符串找出空格的数量 
        if(str==NULL||length<0) 
            return ; 
        int i=0; 
        int oldnumber=0;//记录以前的长度 
        int replacenumber=0;//记录空格的数量 
        while(str[i]!='\0') {
            oldnumber++; 
            if(str[i]==' ') {
                replacenumber++; 
            }
            i++;  
        } 
        int newlength=oldnumber+replacenumber*2;//插入后的长度 
        if(newlength>length)//如果计算后的长度大于总长度就无法插入 
            return ; 
        int pOldlength=oldnumber; //注意不要减一因为隐藏个‘\0’也要算里 
        int pNewlength=newlength;      
        while(pOldlength>=0&&pNewlength>pOldlength) { //放字符
            if(str[pOldlength]==' ') {   //碰到空格就替换 
                str[pNewlength--]='0'; 
                str[pNewlength--]='2'; 
                str[pNewlength--]='%';            
            } 
            else {//不是空格就把pOldlength指向的字符装入pNewlength指向的位置 
                str[pNewlength--]=str[pOldlength];      
            } 
            pOldlength--; //不管是if还是elsr都要把pOldlength前移 
        }
    }
}; 

int main() {
    Solution A;
    Solution1 B;
    char string1[] = "hello world python.";
    char string2[] = "We are happy.";
    A.replaceBlank(string1, 35);
    printf("%s\n", string1);
    B.replaceBlank(string2, 35);
    printf("%s\n", string2);
    system("pause");
    return 0;
}