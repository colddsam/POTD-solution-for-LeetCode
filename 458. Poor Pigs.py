class Solution:
    def poorPigs(self, buckets: int, minutesToDie: int, minutesToTest: int) -> int:
        states = minutesToTest // minutesToDie + 1
        result = round(math.log(buckets) / math.log(states), 6)
        return math.ceil(result)
