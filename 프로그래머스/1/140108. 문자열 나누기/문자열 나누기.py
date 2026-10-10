def solution(s):
    answer = 0
    same = 0
    other = 0
    # aaabbacc / ccab / ba
    for ch in s:
        if same == 0 and other == 0:
            x = ch
        if ch == x:
            same += 1
        else:
            other += 1
        if same == other:
            answer += 1
            same = 0
            other = 0
    if same != 0 or other != 0:
        answer += 1
            
    return answer