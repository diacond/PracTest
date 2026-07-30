def solution(absolutes, signs):
    #크기는 똑같겠지. 두 배열 모두
    #두 배열의 인덱스를 동시에 증가시키는 for 문이 필요할거같은데...
    answer = 0
    for x in range(len(absolutes)):
        if signs[x] == 1:
            absolutes[x] *= 1
        else:
            absolutes[x] *= -1
        answer += absolutes[x]
        
    return answer