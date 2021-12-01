//
// Created by A_Xiao on 2021/11/25.
//
#include <iostream>
#include <vector>

using namespace std;
class Sorts{
public:
    int num;
    void quickSort(int left, int right, vector<int>& arr)
    {
        int start, end;
        start = left;
        end = right;
        if(left >= right){
            return;
        }
        if(left < 0 || right >= arr.size()){
            cout << "error args! array bound." << endl;
            return;
        }
        int tmp = arr[left];
        while(left < right){
            while(left < right && arr[right] >= tmp){
                right --;
            }
            arr[left] = arr[right];
            while(left < right and arr[left] <= tmp){
                left ++;
            }
            arr[right] = arr[left];
        }
        arr[left] = tmp;
        quickSort(start, left-1, arr);;
        quickSort(left+1, end, arr);
    }
    void merge(int l1, int r1, int l2, int r2, vector<int>& arr){
        vector<int> tmp{};
//        cout << "开始排序" << l1 << " " << r2 << endl;
        tmp = arr;
        int len = tmp.size();
        int n = l1;
        while(l1 <= r1 and l2 <= r2){
            if(arr[l1] <= arr[l2]){
                tmp[n] = arr[l1];
                l1 ++;
            }
            else if(arr[l1] > arr[l2]){
                tmp[n] = arr[l2];
                l2 ++;
            }
            n ++;
        }
        while(l1 <= r1){
            tmp[n] = arr[l1];
            l1 ++;
            n ++;
        }
        while(l2 <= r2){
            tmp[n] = arr[l2];
            l2 ++;
            n ++;
        }
        arr = tmp;
    }
    void mergesort(int left, int right, vector<int>& arr){
        int subres = right-left;
        if(subres < 1){
            return;
        }
        int mid = (left + right) / 2;
        mergesort(left, mid, arr);
        mergesort(mid+1, right, arr);
        merge(left, mid, mid+1, right, arr);
    }
};
int main() {
    cout << "经典排序算法的实现" << endl;
    /// 数组的定义和使用
    vector<int> nums{4,2,1,0,10,9,7,6};
    int len = nums.size();
    cout << len << endl;
    for(int i = 0; i < len; i++){
        cout << nums[i] << ' ';
    }
    Sorts s;
    cout << "\n";
//    s.quickSort(0, len-1, nums);
    s.mergesort(0,len-1,nums);
    for(int i = 0; i < len; i++){
        cout << nums[i] << ' ';
    }
    return 0;
};

