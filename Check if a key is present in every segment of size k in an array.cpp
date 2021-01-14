Given an array arr[] and size of array is n and one another key x, and give you a segment size k. The task is to find that the key x present in every segment of size k in arr[].

bool findsize(int arr[], int x, int k, int n) 
{ 
    int i; 
    for (i = 0; i < n; i = i + k) { 
  
        
        int j; 
        for (j = 0; j < k; j++)  
            if (arr[i + j] == x)  // if present then break
                break; 
  
        
        if (j == k) 
           return false;  
    }  
  
    
    if (i == n) 
       return true; 
  
    // This is for the last chunk that is not the multiple of k  
    int j; 
    for (j=i-k; j<n; j++) 
      if (arr[j] == x) 
          break; 
    if (j == n) 
       return false;   
       
    return true; 
} 
