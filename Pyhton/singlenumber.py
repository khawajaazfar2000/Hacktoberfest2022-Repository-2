#Program for detecting unique number in an array containing duplicates.

def singleNumber(self, nums) -> int:
        res = 0
        for n in nums:
            res = n ^ res
        return res