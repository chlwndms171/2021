nums = list(map(int, input().split()))
target = input()
i = 0
length = int(len(nums))
sum = target
var = 0
output = [0,0]

for i in range(0, length):
    var = int(sum) - int(nums[i])
    output[0]=i

    for j in range (0, length):
        if j != int(output[0]) and var == int(nums[j]):
            output[1]=j
            print(output)
            nums[j]=0
            nums[i]=0


'''
class Solution(object):
    def twoSum(self, nums, target):
        
        i = 0
        length = int(len(nums))
        sum = target
        var = 0

        for i in range(0, length):
            var = int(sum) - int(nums[i])

            for j in range (i+1, length):
                if var == int(nums[j]):
                    return [i, j]
'''