# 给定一个非空数组，返回此数组中第三大的数。如果不存在，则返回数组中最大的数。要求算法的时间复杂度必须是O(n)。
# 示例 1:
# 输入: [3, 2, 1]
# 输出: 1
# 解释: 第三大的数是 1.
# 示例 2:
# 输入: [1, 2]
# 输出: 2
# 解释: 第三大的数不存在, 所以返回最大的数 2 .
# 示例 3:
# 输入: [2, 2, 3, 1]
# 输出: 1
# 解释: 注意，要求返回第三大的数，是指第三大且唯一出现的数。
# 存在两个值为2的数，它们都排第二。


def topKnum(nums,k):
    if not nums:
        return -1
    if k > len(nums):
        k = 1
    def quicksort(nums,l,r,k):
        if l >= r:
            return
        begin, end = l, r
        tmp = nums[l]
        while l < r:
            while l < r and nums[r] >= tmp:
                r -= 1
            nums[l] = nums[r]
            while l < r and nums[l] <= tmp:
                l += 1
            nums[r] = nums[l]
        nums[l] = tmp
        if l == len(nums)-k:
            return
        elif l > len(nums)-k:
            quicksort(nums,begin,l-1,k)
        else:
            quicksort(nums,l+1,end,k)
    quicksort(nums,0,len(nums)-1,k)
    return nums[len(nums)-k]
nums, k = [3,2,1,0,4], 1
res = topKnum(nums,k)
print(res)

