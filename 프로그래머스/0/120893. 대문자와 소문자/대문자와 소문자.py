def solution(my_string):
    big = "QWERTYUIOPASDFGHJKLZXCVBNM"
    answer = ''
    for a in my_string:
        answer += a.lower() if a.isupper() else a.upper()
    return answer