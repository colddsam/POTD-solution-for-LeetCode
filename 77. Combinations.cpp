class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        res=[]
        def fan(start,comb):
            if len(comb)==k:
                res.append(comb.copy())
                return
            for i in  range(start,n+1):
                comb.append(i)
                fan(i+1,comb)
                comb.pop()
        fan(1,[])
        return res
