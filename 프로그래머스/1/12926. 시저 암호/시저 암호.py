def solution(s, n):
    answer = ''
    lower = 'abcdefghijklmnopqrstuvwxyz'
    upper = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    for c in s:
        if c == ' ':
            answer += c
        elif c.islower():
            answer += lower[(lower.index(c) + n) % 26]
        elif c.isupper():
            answer += upper[(upper.index(c) + n) % 26]
    return answer