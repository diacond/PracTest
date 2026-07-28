def solution(s1, s2):
    answer = []
    for x in s1:
        if x in s2:
            answer.append(x)
    return len(answer)