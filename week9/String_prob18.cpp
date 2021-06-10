void KMPSearch(char* pat, char* txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
  
    
    
    int lps[M];
  
    
    computeLPSArray(pat, M, lps);
  
    int i = 0; 
    int j = 0; 
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
  
        if (j == M) {
            printf("Found pattern at index %d ", i - j);
            j = lps[j - 1];
        }
  
        
        else if (i < N && pat[j] != txt[i]) {
            
            
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}
  