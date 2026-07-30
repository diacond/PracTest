def solution(s):
    answer = True
    cnt_p = 0
    cnt_y = 0
    for x in s:
        if x == "P" or x == "p":
            cnt_p += 1
        elif x == "Y" or x == "y":
            cnt_y += 1
            
    if cnt_p != cnt_y:
        answer = False
        
    return answer