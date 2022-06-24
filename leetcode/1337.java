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
                }
                // else{
                //     highest_ans = ans;
                //     break;
                // }
            }
            arr[index] = ans;
            index++;
        }
        
        int arr_2[] = new int[mat.length];
        
        for(int i = 0; i < arr.length; i++){
            arr_2[i] = arr[i];
        }
        
        Arrays.sort(arr_2);
        
        int final_array[] = new int[k];
        
        for(int i = 0; i < arr_2.length; i++){
            if(k == 0){
                break;
            }
            for(int j = 0; j < arr.length; j++){
                if(arr[j] == arr_2[i]){
                    boolean found = false;
                    for(int y = 0; y < final_array.length - k; y++){
                        if(final_array[y] == j){
                            found = true;
                        }
                    }
                    if(!found){
                        final_array[i] = j;
                        k--;
                        break;
                    }
                }
            }
        }
        
        return final_array;
    }
}