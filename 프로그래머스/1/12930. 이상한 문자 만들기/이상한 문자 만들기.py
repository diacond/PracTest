def solution(s):
    answer = ''
    # s를 ' ' 기준으로 split 해서 각 단어를 리스트에 저장. 이후 리스트를 순회하면서 각 단어의 짝수 번째 문자를 대문자, 홀수번째 문자를 소문자로 변경 -> 맞나?
    words = s.split(' ')
    result = []
    for word in words:
        new_word = ''
        for i in range(len(word)):
            c = word[i]
            if i % 2 == 0:
                new_word += c.upper()
            else:
                new_word += c.lower()
        result.append(new_word)
    answer = ' '.join(result)
    return answer