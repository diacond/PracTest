import java.util.HashMap;
import java.util.Map;

class Solution {
    public int solution(int[] array) {
        int maxCount = 0;
        int answer = 0;
        
        Map<Integer, Integer> counts = new HashMap<>();
        
        int n = array.length;
        
        for(int i = 0; i<n; i++){
            int count = counts.getOrDefault(array[i], 0) + 1;
            counts.put(array[i], count);
            
            if(count > maxCount){
                maxCount = count;
                answer = array[i];
            }
        }
        
        int isDuplicate = 0;
        for(int count : counts.values()){
            if(count == maxCount){
                isDuplicate++;
            }
        }
        return isDuplicate > 1 ? -1 : answer;
    }
}