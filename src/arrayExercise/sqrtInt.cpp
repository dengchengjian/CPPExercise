// 暴力破解
// int sqrtInt(int x){

//     int result = 0;
//         if(x == 0){
//             return 0;
//         }
//         for(int i = 1; x / i >= i; i++ ){
//             result = i;
//         }

//         return result;
// }

// 
int sqrtInt(int x){
    int left = 0;
        int right = x;

        if(x == 0 || x == 1){
            return right;
        }

        while(left <= right){
        int mid = (left + right) / 2;
        if(x  / mid > mid){
            left = mid + 1;
        }
        else if(x / mid < mid){
            right = mid - 1;
        }
        else{
            return mid;
        }
        }

        return right;
}