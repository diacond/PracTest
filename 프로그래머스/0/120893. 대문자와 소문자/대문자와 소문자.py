def solution(my_string):
    big = "QWERTYUIOPASDFGHJKLZXCVBNM"
    answer = ''
    for a in my_string:
        if a in big:
            answer += a.lower()
        else:
            answer += a.upper()
    return answer