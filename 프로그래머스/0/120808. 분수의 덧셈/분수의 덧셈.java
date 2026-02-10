class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int son = numer1*denom2 + numer2*denom1;
        int mom = denom1*denom2;
        int max_divide = 1;
        int min = (son>mom)?mom:son;
        
        for(int i=1; i<= min; i++){
            if(son % i == 0 && mom % i ==0) max_divide = i;
        }
        
        int[] answer = new int[2];
        answer[0] = son/max_divide;
        answer[1] = mom/max_divide;
        
        return answer;
    }
}