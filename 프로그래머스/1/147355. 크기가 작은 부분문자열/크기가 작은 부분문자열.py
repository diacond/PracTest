def solution(t, p):
    answer = 0
    # 일단 t의 길이에 맞게 p를 전부 잘라야..?
    for x in range(len(t) - len(p) + 1):
        if int(t[x:x + len(p)]) <= int(p):
            answer += 1
        
    return answer