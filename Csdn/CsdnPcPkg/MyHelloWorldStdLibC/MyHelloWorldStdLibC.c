#include <stdio.h>

int main(int args , char ** argv){

	int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
	int i, j, temp, isSorted;
	
	printf("Before Sorting, ... \n");
	//排序前
	for(i=0; i<10; i++){
		printf("%d ", nums[i]);
	}
	printf("\n");
	
	//优化算法：最多进行 n-1 轮比较
	for(i=0; i<10-1; i++){
		isSorted = 1; //假设剩下的元素已经排序好了
		for(j=0; j<10-1-i; j++){
			if(nums[j] > nums[j+1]){
				temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;
				isSorted = 0;
			}
	    }
		if(isSorted) break; //如果没有发生交换，说明剩下的元素已经排序好了
	}
	
	//排序后
	printf("After Sorting, ... \n");
	for(i=0; i<10; i++){
		printf("%d ", nums[i]);
	}

	printf("\n");
	return 0;
}