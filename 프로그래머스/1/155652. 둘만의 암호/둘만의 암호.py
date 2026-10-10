def solution(s, skip, index):
    answer = ''
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    real_alpha = ''
    for x in alphabet:
        if x not in skip:
            real_alpha += x
    
    for a in s:
        pos = real_alpha.index(a)
        new_pos = (pos + index) % len(real_alpha)
        answer += real_alpha[new_pos]
    return answer