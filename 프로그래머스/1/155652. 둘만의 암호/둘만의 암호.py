def solution(s, skip, index):
    answer = ''
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    real_alpha = ''
    for ch in alphabet: # skip을 제외한 알파벳 만들기
        if ch not in skip:
            real_alpha += ch
            
    for ch in s: # s에서 문자 하나씩 순회
        pos = real_alpha.index(ch) # 새로운 알파벳 배열에서 인덱스 확인
        new_pos = (pos + index) % len(real_alpha) # 그 인덱스에서 +index하고 모듈러 연산
        answer += real_alpha[new_pos]
    return answer