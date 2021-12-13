void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i, j, temp;
    for(i = m, j = 0; j < nums2Size; i++, j++)
        nums1[i] = nums2[j];
    for(i = 0; i < nums1Size; i++){  //bubble sort(no reason only because this is the first sort algo cross my head)
        for(j = 0; j < i; j++){
            if(nums1[i] <= nums1[j]){
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }   
}
