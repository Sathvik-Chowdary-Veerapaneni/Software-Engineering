# Write a binary_search for a linear data structre
# Two Pointer
# picking a number if number < or > than mid, number, then, spliting the other half numbers.

# from bisect import bisect_left

def binary_search(arr,target):
    left,right = 0, len(arr)-1 #index values

    while left<=right:
        #cal mid value
        ''' the left and rigt are index values, by calculating these two pointer indexed values then we get mid index value'''
        # mid=(left+right)//2

        ''' left+ (right-left)//2, still the same to calcualte the mid value, but here we are reducing the complexity of integer overflow
            for other programming lagugages, where integer need to defined as 32 and 64 bit.

            so to avoid that in chance, we use this method.
        '''
        mid=left + ((right-left)//2)

        ''' Comparing the mid value of array as target, if it , returns'''
        if arr[mid] == target:
            return mid #index value
        
        ''' If mid value less than target,'''
        if arr[mid]<target:
            left=mid+1
        else: right = mid-1
    return -1


arr=[1,5,6,8,9,32,121,21,34,56,7,889,00,32,553,2121,1213,45,6,7,78888,90]
target=5
result= binary_search(arr,target)
print('Element {} found at index {}'.format(target,result))
    
