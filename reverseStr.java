public class reverseStr {
    public static void main(String args[]){
        reverseString("abcdef");
        revercestr("mirali");
        reverces("dhruv");
        System.out.println(revercew("mirali is good girl"));
        System.out.println(reverseWords("mirali is good girl"));
    }
    public static void reverseString(String s){
        String ans = "";
        for(int i =0;i<s.length();i++){
            ans = s.charAt(i)+ans;
        }
        System.out.println(ans);
    }
    public static void revercestr (String s){
        StringBuilder ans = new StringBuilder(s);
        int n = ans.length();
        for (int i=0;i<n/2;i++){
            char fCh = ans.charAt(i);
            char lCh = ans.charAt(n-1-i);
            ans.setCharAt(i, lCh);
            ans.setCharAt(n-1-i, fCh);
        }
        System.out.println(ans.toString());
    }
    public static void reverces (String s){
        char ans[]= s.toCharArray();
        int n = ans.length;
        for (int i=0;i<n/2;i++){
            char fCh = ans[i];
            char lCh = ans[n-1-i];
            ans[i]=lCh;
            ans[n-1-i]=fCh;
        }
        for(int i=0;i<n;i++){
            System.out.print(ans[i]);
        }System.out.println(" ");
    }
    public static String revercew(String s){
        String arr[ ] = s.split(" ");
        StringBuilder res = new StringBuilder();
        for(int i = arr.length-1;i>=0;i--){
            if(arr[i].length()==0){
                continue;
            }
            if(res.length()==0){
                res.append(arr[i]);
            }else{
                res.append(" ");
                res.append(arr[i]);
            }
        }
        return res.toString();
    }
    public static String reverseWords(String s) {
        String[] words= s.split(" ");
        StringBuilder result=  new StringBuilder();
        for(String word : words){
            result.append(new StringBuilder(word).reverse().toString()).append(" ");
        }
        return result.toString().trim();
    }
}

