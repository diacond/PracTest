from collections import Counter

def solution(nums):
    stats = len(Counter(nums)) # 일단 포켓몬 종류 수
    answer = 0
    # nums/2 만큼 가져가면서도, 최대한 많은 종류의 포켓몬을 가져가야함. 
    if stats > (len(nums) // 2): answer = (len(nums) // 2)
    else: answer = stats
    return answer