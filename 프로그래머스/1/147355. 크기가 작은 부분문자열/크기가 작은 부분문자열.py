def solution(t, p):
    answer = 0
    num_str = []
    # 일단 t를 p랑 같은 길이로 계속 잘라야 함. 그리고 그걸 배열에 저장해야함.
    for i in range(len(t)-len(p)+1):
        if int(t[i:i+len(p)]) <= int(p):
            answer += 1
    return answer