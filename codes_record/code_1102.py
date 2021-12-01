# 区间合并
nums = [[1, 3], [-1.5, 1.5], [7, 8], [2, 6]]
def merge(nums):
    res = []
    while nums:
        l, r = nums[0][0], nums[0][1]
        print(l, r)
        nums.pop(0)
        i = 0
        ret = []
        for i in range(len(nums)):
            if nums[i][1] < l or r < nums[i][0]:
                ret.append(nums[i])
                continue
            else:
                l, r = min(l,nums[i][0]), max(r,nums[i][1])
        nums = ret
        res.append([l, r])
    return res

print(merge(nums))
