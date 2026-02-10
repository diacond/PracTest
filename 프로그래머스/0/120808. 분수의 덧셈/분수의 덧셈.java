class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int son = numer1*denom2 + numer2*denom1;
        int mom = denom1*denom2;
        int sml = (son > mom)?mom:son;
        int m_divide = 1;
        
        for(int i = 1; i <= sml; i++){
            if(son % i == 0 && mom % i == 0) m_divide = i;
        }
        
        int[] answer = new int[2];
        answer[0] = son / m_divide;
        answer[1] = mom / m_divide;
        return answer;
    }
}