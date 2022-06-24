class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
        int arr[] = new int[mat.length];
        int index = 0;
        int highest_ans = 0;        
        for(int i = 0; i < mat.length; i++){
            // System.out.println("i :"+i);
            int ans = 0;
            for(int j = 0; j < mat[i].length; j++){
                // System.out.println("inner i : "+mat[i][j]);
                if(mat[i][j] == 1){
                    ans++;
                    // index++;
                    // break;
                }
                // else{
                //     highest_ans = ans;
                //     break;
                // }
            }
            // if(ans == 0){
            //     ans = mat.length;
            // }
            arr[index] = ans * 10000 + i;
            index++;
            
        }
        
        int ans [] = new int[k];
        
        Arrays.sort(arr);
        
        for(int i = 0; i < k; i++){
            ans[i] = arr[i] % 10000;
        }
        return ans;
    }
}