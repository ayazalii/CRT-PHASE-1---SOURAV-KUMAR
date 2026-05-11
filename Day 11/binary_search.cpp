#include<iostream>
using namespace std;
int binarySearch(int nums[],int n,int target){
int left=0;
int right=n-1;
while(left<=right){
    int mid=left + (right-left)/2;
    if(nums[mid]==target){
        return mid;
     } else if(nums[mid]<target){
        left=mid + 1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    int nums[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(nums)/sizeof(nums[0]);
    int target = 7;

    int result=binarySearch(nums,n,target);

    if(result!=0){
        cout<<"Element found at index: "<<result;
    }
    else{
        cout<<"Elemnt not found.";
    }
    return 0;
}