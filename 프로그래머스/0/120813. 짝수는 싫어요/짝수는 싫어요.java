class Solution {
    public int[] solution(int n) {
        int size = (n+1)/2;
        int[] answer = new int[size];
        // 자바는 미리 배열 크기를 정해줘야 한다.
        
        int index = 0;
        for(int i=1; i<=n; i+=2){ // 2씩 더하면 알아서 홀수만 들어옴
            answer[index] = i;
            index++;
        }
        return answer;
    }
}