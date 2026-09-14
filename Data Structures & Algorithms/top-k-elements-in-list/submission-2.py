class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqMap = Counter(nums)
        maxHeap = [(-cnt, key) for key, cnt in freqMap.items()]
        heapq.heapify(maxHeap)

        res = []
        while k > 0:
            kth = heapq.heappop(maxHeap)
            res.append(kth[1])
            k -= 1
        return res