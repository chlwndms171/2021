#결국 버블정렬로 풀었다
class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        for i in range(len(nums) - 1, 0, -1):
            for j in range(i):
                if nums[j]==0:
                    nums[j], nums[j + 1] = nums[j + 1], nums[j]
'''
nums = [0, 1, 0, 3, 12]

def insertion(arr):
    for j in range(0, len(arr))[::-1]:
        if(arr[j]==0):
            arr.pop(j)
            arr.append(0)
    return arr

nums = insertion(nums)
for i in nums:
    print(i)
'''

    
'''이거 왜 틀렸을까?(삽입정렬인뎅)
class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        for end in range(1, len(nums)):
            i = end
            while i<len(nums)-1 and nums[i]==0:
                nums[i], nums[i+1] = nums[i+1], nums[i]
                i+=1
        return nums
'''