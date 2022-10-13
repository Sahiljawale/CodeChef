    import java.util.*;
    import java.io.*;
    import java.io.DataInputStream;
    import java.io.FileInputStream;
    import java.io.IOException;
    import java.io.InputStreamReader;
    import java.util.Scanner;
    import java.util.StringTokenizer;
    import java.math.BigInteger;



    public final class Main{
        static class Reader {
            final private int BUFFER_SIZE = 1 << 16;
            private DataInputStream din;
            private byte[] buffer;
            private int bufferPointer, bytesRead;
     
            public Reader() {
                din = new DataInputStream(System.in);
                buffer = new byte[BUFFER_SIZE];
                bufferPointer = bytesRead = 0;
            }
     
            public Reader(String file_name) throws IOException {
                din = new DataInputStream(
                    new FileInputStream(file_name));
                buffer = new byte[BUFFER_SIZE];
                bufferPointer = bytesRead = 0;
            }
     
            public String readLine() throws IOException {
                byte[] buf = new byte[64]; // line length
                int cnt = 0, c;
                while ((c = read()) != -1) {
                    if (c == '\n') {
                        if (cnt != 0) {
                            break;
                        }
                        else {
                            continue;
                        }
                    }
                    buf[cnt++] = (byte)c;
                }
                return new String(buf, 0, cnt);
            }
     
            public int nextInt() throws IOException {
                int ret = 0;
                byte c = read();
                while (c <= ' ') {
                    c = read();
                }
                boolean neg = (c == '-');
                if (neg)
                    c = read();
                do {
                    ret = ret * 10 + c - '0';
                } while ((c = read()) >= '0' && c <= '9');
     
                if (neg)
                    return -ret;
                return ret;
            }
     
            public long nextLong() throws IOException {
                long ret = 0;
                byte c = read();
                while (c <= ' ')
                    c = read();
                boolean neg = (c == '-');
                if (neg)
                    c = read();
                do {
                    ret = ret * 10 + c - '0';
                } while ((c = read()) >= '0' && c <= '9');
                if (neg)
                    return -ret;
                return ret;
            }
     
            public double nextDouble() throws IOException {
                double ret = 0, div = 1;
                byte c = read();
                while (c <= ' ') c = read();
                boolean neg = (c == '-');
                if (neg) c = read();
     
                do {
                    ret = ret * 10 + c - '0';
                } while ((c = read()) >= '0' && c <= '9');
                if (c == '.') {
                    while ((c = read()) >= '0' && c <= '9') {
                        ret += (c - '0') / (div *= 10);
                    }
                }
                if (neg) return -ret;
                return ret;
            }
     
            private void fillBuffer() throws IOException {
                bytesRead = din.read(buffer, bufferPointer = 0,
                                     BUFFER_SIZE);
                if (bytesRead == -1)
                    buffer[0] = -1;
            }
            private byte read() throws IOException {
                if (bufferPointer == bytesRead)
                    fillBuffer();
                return buffer[bufferPointer++];
            }
     
            public void close() throws IOException {
                if (din == null)
                    return;
                din.close();
            }
        }
        static class Kattio extends PrintWriter {
            private BufferedReader r;
            private StringTokenizer st;
        
            // standard input
            public Kattio() { this(System.in, System.out); }
            public Kattio(InputStream i, OutputStream o) {
                super(o);
                r = new BufferedReader(new InputStreamReader(i));
            }
            // USACO-style file input
            public Kattio(String problemName) throws IOException {
                super(new FileWriter(problemName + ".out"));
                r = new BufferedReader(new FileReader(problemName + ".in"));
            }
        
            // returns null if no more input
            public String next() {
                try {
                    while (st == null || !st.hasMoreTokens())
                        st = new StringTokenizer(r.readLine());
                    return st.nextToken();
                } catch (Exception e) { }
                return null;
            }
        
            public int nextInt() { return Integer.parseInt(next()); }
            public double nextDouble() { return Double.parseDouble(next()); }
            public long nextLong() { return Long.parseLong(next()); }
        }   
        
        static Kattio sc = new Kattio();
        static long  mod  = 998244353l;
        static PrintWriter out =new PrintWriter(System.out);
     
        //Heapify function to maintain heap property.
        public static void swap(int i,int j,int arr[]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        public static void swap(int i,int j,long arr[]) {
            long temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        public static void swap(int i,int j,char arr[]) {
            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        static String endl = "\n" , gap = " ";
        public static void main(String[] args)throws IOException {
            int t  = ri();
            // List<Integer> list  = new ArrayList<>();
            // int MAX = (int)4e4;
            // for(int i =1;i<=MAX;i++) {
            //     if(isPalindrome(i + "")) list.add(i);
            // }
            // // System.out.println(list);
            // long dp[] = new long[MAX +1];
            // dp[0] = 1;
            // long mod = (long)(1e9+7);
            // for(int x : list) {
            //     for(int i =1;i<=MAX;i++) {
            //         if(i >= x) {
            //             dp[i] += dp[i-x];
            //             dp[i] %= mod;
            //         }
            //     }
            // }
            int MAK = (int)1e6;
            boolean seive[] = new boolean[MAK];
            // Arrays.fill(seive , true);
            // seive[1] = false;
            // seive[0] = false;
            // for (int i = 1; i < MAK; i++) {
            //     if(seive[i]) {
            //         for (int j = i+i; j < MAK; j+=i) {
            //             seive[j] = false;
            //         }    
            //     }
                
            // }
            // for (int i = 1; i <= MAK; i++) {
            //     seive[i] += seive[i - 1];
            // }
            int test_case = 1;
            while(t-->0) {
                // out.write("Case #"+(test_case++)+": ");
                solve(seive);
            }
            out.close();
        }
        public static char getNew(char ch ,HashMap<Character , Character> map) {
            if(map.containsKey(ch) == false) return ch;
            return  getNew(map.get(ch),map);
        }
        public static void solve(boolean seive[])throws IOException {       
            int n = ri();
            int arr[][] = new int[n][2];
            for(int i = 0;i<n;i++) {
                arr[i] = rai(2);
            }
            int a[] = new int[n] , b[] = new int[n];
            for(int i =0;i<n;i++) {
                a[i] = arr[i][0];
                b[i] = arr[i][1];
            }
            int x = getMedian(a);
            long ans1 = 0 , ans2 =0;
            int y = getMedian(b);
            System.out.println((long)y*(long)x);
        }
        public static int getMedian(int a[]) {
            Arrays.sort(a);
            // System.out.println(Arrays.toString(a));
            int n = a.length;
            if(n%2 ==  0) {
                // System.out.println("in");
                return a[n/2] - a[n/2 -1] + 1;
            }
            return 1;
        }
        public static void dfs(int r , int c,char a[][] , boolean vis[][]) {
            int n = a.length;
            vis[r][c] = true;
            for(int i =0;i<4;i++) {
                int nr = r + colx[i] , nc = coly[i] +c;
                if(nr < 0 || nc < 0 || nr >= n || nc >= n || vis[nr][nc] || a[nr][nc] == '1')  continue;
                dfs(nr , nc , a , vis);
            }
        }
        public static char unequals(char  ch ) {
            if(ch == 'R') return 'G';
            if(ch == 'B') return 'R';
            if(ch == 'G') return 'B';
            return 'A';
        }
        public static char unequal(char  a,char b ) {
            char s[] = {'R','G','B'};
            for(char ans : s) {
                if(ans  != a && ans != b)  {
                    return ans;
                }
            }
            return unequals(a);
        }
        public static int callfun(int index ,char s[] , char last) {
            if(index >= s.length)  return 0;
            char t = s[0];
            int ans = Integer.MAX_VALUE;
            if(s[index] == 'R') {
                if(t == s[index]) {
                    ans = Math.min(callfun(index  + 1 ,s , 'G')+ 1,ans);
                    ans = Math.min(callfun(index  + 1 ,s , 'B')+ 1,ans);
                }
                else {
                    ans = Math.min(ans , callfun(index + 1 ,s , s[index]));
                }
            }
            if(s[index] == 'G') {
                if(t == s[index]) {
                    ans = Math.min(callfun(index  + 1 ,s , 'R')+ 1,ans);
                    ans = Math.min(callfun(index  + 1 ,s , 'B')+ 1,ans);
                }
                else {
                    ans = Math.min(ans , callfun(index + 1 ,s , s[index]));
                }
            }
            if(s[index] == 'B') {
                if(t == s[index]) {
                    ans = Math.min(callfun(index  + 1 ,s , 'G')+ 1,ans);
                    ans = Math.min(callfun(index  + 1 ,s , 'R')+ 1,ans);
                }
                else {
                    ans = Math.min(ans , callfun(index + 1 ,s , s[index]));
                }
            }
            return ans;
        }
        public static int getMinMove(HashMap<Integer , Integer> left , int id,int l , int r) {
            return Math.min(Math.abs(left.get(id) -l ),Math.abs(left.get(id)-r))-1;
            // if(left.containsKey(id)) {
            //     int at = left.size() - left.get(id);
            //     return Math.min(at ,right.size() + at - 1);
            // }
            // else  {
            //     int at = right.size() - right.get(id);
            //     return Math.min(at , left.size() + at - 1);
            // }
        }
        public static void print(int node ,HashMap<Integer , List<Integer>> child, boolean vis[],List<List<Integer>> ans,HashMap<Integer , List<Integer>> map) {
            if(vis[node]) return;
            vis[node] = true;
            List<Integer> curans = new ArrayList<>();
            curans.add(child.get(node).size());
            curans.add(node);
            for(int x : child.get(node)) {
                if(vis[x]) continue;
                vis[x] = true;
                curans.add(x);
            }
            ans.add(curans);
            for(int x : map.get(node)) {
                if(vis[x]) continue;
                print(x , child , vis,ans,map);
            }
        }
        public  static void callfun(int node  ,HashMap<Integer , List<Integer>> child,HashMap<Integer , List<Integer>>map ) {
            if(map.get(node).size() == 0) {
                child.get(node).add(node);
                return;
            }
            List<Integer> list = new ArrayList<>();
            int  cur = 0;
            for(int next : map.get(node)) {
                callfun(next, child  , map);
            }
            for(int next : map.get(node)) {
                if(cur < child.get(next).size()) {
                    cur = child.get(next).size();
                    list =  child.get(next);
                }
            }
            child.get(node).add(node);
            child.get(node).addAll(list);
        }
        public static int dfs(int node ,HashMap<Integer , Integer> height, HashMap<Integer , List<Integer>>map) {
            if(map.get(node).size() == 0) {
                height.put(node ,1);
                return 0;   
            }
            int cur = Integer.MAX_VALUE;
            for(int next : map.get(node)) {
                int cheigth = dfs(next , height , map);
                cur = Math.min(cur , cheigth + 1);
            }
            height.put(node , cur);
            return cur;
        }
        public static boolean check(String s) {
            int cnt1 = 0 , cnt2 = 0;
            for(char ch : s.toCharArray()) {
                if(ch == '(') cnt1 = 1;
                else cnt2 = 1;
            }
            return (cnt1 + cnt2 ) == 2;
        }
        public static String makeOps(String s) {
            StringBuilder res = new StringBuilder();
            for(char ch : s.toCharArray()) {
                if(ch == ')') res.append('(');
                else res.append(')');
            }
            return res.reverse().toString();
        }
        public static String cmprs(String s) {
            Stack<Character> stack = new Stack<>();
            for(char ch : s.toCharArray()) {
                if(stack.size() == 0) stack.push(ch);
                else {
                    if(ch == '(') stack.push(ch);
                    else {
                        if(stack.peek() == '(') stack.pop();
                        else stack.push(ch);
                    }
                }
            }
            StringBuilder res = new StringBuilder();
            while(stack.size() > 0) {
                res.append(stack.pop());
            }
            return res.reverse().toString();

        }
        public static boolean callfun(int n , Stack<Integer> stack ,int i) {
            if(n == 0) return true;
            if(n == 1) {
                stack.add(1);
                return true;
            }
            if(i < 0) return false;
            if((1<<i) > n) return callfun(n , stack , i-1);
            stack.push(1<<i);
            boolean flag = callfun(n-(1<<i) , stack , i);
            if(flag) return flag;
            stack.pop();
            return callfun(n , stack , i-1);
        }
        public static double getSlope(int a , int b,int x,int y) {
            if(a-x == 0) return Double.MAX_VALUE;
            if(b-y == 0) return 0.0;
            return ((double)b-(double)y)/((double)a-(double)x);
        }
        
        public static boolean collinearr(long a[] , long b[] , long c[]) {
            return (b[1]-a[1])*(b[0]-c[0]) == (b[0]-a[0])*(b[1]-c[1]);
        }
        public static boolean isSquare(int sum) {
            int root = (int)Math.sqrt(sum);
            return root*root == sum;
        }
        public static boolean isPalindrome(String s) {
            int i =0 , j = s.length() -1;
            while(i <= j && s.charAt(i) == s.charAt(j)) {
                i++;
                j--;
            }
            return i>j;
        }
        // digit dp hint;
        public static long callfun(String num , int N, int last ,int secondLast ,int bound ,long dp[][][][]) {
            if(N == 1) {
                if(last == -1 || secondLast == -1) return 0;
                long answer = 0;
                int max = (bound==1)?(num.charAt(num.length()-N)-'0') : 9;
                for(int i = 0;i<=max;i++) {
                    if(last > secondLast && last > i) {
                        answer++;
                    }
                    if(last < secondLast && last < i) {
                        answer++;
                    }
                }
                return answer;
            }
            if(secondLast == -1 || last == -1 ){
                long answer = 0l;
                int max = (bound==1)?(num.charAt(num.length()-N)-'0') : 9;
                for(int i =0;i<=max;i++)  {
                    int nl , nsl , newbound = bound==0?0:i==max?1:0;
                    if(last == - 1&& secondLast == -1 && i == 0) {
                        nl = -1 ; nsl = -1;
                    }
                    else {
                        nl = i;nsl = last;
                    }

                    long temp = callfun(num , N-1 , nl , nsl ,newbound, dp);
                    answer += temp;
                    if(last != -1 && secondLast != -1 &&((last > secondLast && last > i)||(last < secondLast && last < i))) answer++;
                }
                return answer;    
            }
            if(dp[N][last][secondLast][bound] != -1)  return dp[N][last][secondLast][bound];
            long answer = 0l;
            int max = (bound==1)?(num.charAt(num.length()-N)-'0') : 9;
            for(int i =0;i<=max;i++)  {
                int nl , nsl , newbound = bound==0?0:i==max?1:0;
                if(last == - 1&& secondLast == -1 && i == 0) {
                    nl = -1 ; nsl = -1;
                }
                else {
                    nl = i;nsl = last;
                }

                long temp = callfun(num , N-1 , nl , nsl ,newbound,dp);
                answer += temp;
                if(last != -1 && secondLast != -1 &&((last > secondLast && last > i)||(last < secondLast && last < i))) answer++;
            }
            return dp[N][last][secondLast][bound]  = answer;
        }
        public static Long callfun(int index ,int pair,int arr[],Long dp[][]) {
            long mod = (long)998244353l;
            if(index >= arr.length) return 1l;
            if(dp[index][pair] != null) return dp[index][pair]; 
            Long sum = 0l , ans = 0l;
            if(arr[index]%2 == pair) {
                return dp[index][pair] = callfun(index + 1,pair^1 , arr,dp)%mod + callfun(index + 1 ,pair , arr , dp)%mod;
            }
            else {
                return dp[index][pair] = callfun(index + 1,pair ,  arr,dp)%mod;
            }
            // for(int i =index;i<arr.length;i++) {
            //     sum += arr[i];
            //     if(sum%2 == pair) {
            //         ans = ans  +  callfun(i + 1,pair^1,arr , dp)%mod;
            //         ans%=mod;
            //     }
            // }
            // return dp[index][pair]  = ans;
        }
        public static boolean callfun(int index , int n,int neg , int pos , String s) {
            if(neg < 0 || pos < 0) return false;
            if(index >= n) return true;
            
            if(s.charAt(0) == 'P') {
                if(neg <= 0) return false;
                return callfun(index + 1,n , neg-1 , pos , s.charAt(1)  + "N");
            }
            else  {
                if(pos <= 0) return false;
                return callfun(index + 1 , n , neg , pos-1 , s.charAt(1) + "P");
            }
        }
        
        public static void getPerm(int n , char arr[] , String s ,List<String>list) {
            if(n == 0) {
                list.add(s);
                return;
            }
            for(char ch : arr) {
                getPerm(n-1 , arr , s+ ch,list);
            }
        }
        public static int getLen(int i  ,int j , char s[]) {
            while(i >= 0 && j < s.length && s[i] == s[j]) {
                i--;
                j++;
            }
            i++;
            j--;
            if(i>j) return 0;
            return j-i + 1;
        }
        public static int getMaxCount(String x) {
            char s[] = x.toCharArray();
            int max = 0;
            int n = s.length;
            for(int i =0;i<n;i++) {
                max = Math.max(max,Math.max(getLen(i , i,s) , getLen(i ,i+1,s)));
            }
            return max;
        }
        public static double getDis(int arr[][] , int  x, int y) {
            double ans = 0.0;
            for(int a[] : arr) {
                int x1 = a[0] , y1 = a[1];
                ans += Math.sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
            }
            return ans;
        }
        public static boolean valid(String x ) {
            if(x.length() == 0) return true;
            if(x.length() == 1) return false;
            char s[] = x.toCharArray();
            if(x.length()  == 2) {
                if(s[0] == s[1]) {
                    return false;
                }
                return true;
            }
            int r = 0 , b = 0;
            for(char ch : x.toCharArray()) {
                if(ch == 'R') r++;
                else b++;
            }
            return (r >0 && b >0);


        }
        public static long callfun(int day , int k,  int limit,int n) {
            if(k > limit) return 0;
            if(day > n) return 1;
            long ans = callfun(day + 1 , k , limit, n)*k + callfun(day + 1,k+1,limit,n)*(k+1);
            return  ans;
        }

        public static void primeDivisor(HashMap<Long , Long >cnt , long num) {
            for(long i = 2;i*i<=num;i++) {
                while(num%i == 0) {
                    cnt.put(i ,(cnt.getOrDefault(i,0l) + 1));
                    num /= i;
                }
            }
            if(num > 2) {
                cnt.put(num ,(cnt.getOrDefault(num,0l) + 1));
            }
        }
        
        
        public static boolean isSubsequene(char a[],  char b[] ) {
            int i =0 , j = 0;
            while(i < a.length && j  <b.length) {
                if(a[i] == b[j]) {
                    j++;
                }
                i++;
            }
            return  j >= b.length;
        }
        public static long fib(int n ,long M) {
            if (n == 0) {
                return 0;
            } else if (n == 1) {
                return 1;
            } else {
                long[][] mat = {{1, 1}, {1, 0}};
                mat = pow(mat, n-1 , M);
                return mat[0][0];
            }
        }
        public static long[][] pow(long[][] mat, int n ,long M) {
            if (n == 1) return mat;
            else if (n % 2 == 0) return pow(mul(mat, mat , M), n/2 , M);
            else return mul(pow(mul(mat, mat,M), n/2,M), mat , M);
        }
        static long[][] mul(long[][] p, long[][] q,long M) {
            long a = (p[0][0]*q[0][0] + p[0][1]*q[1][0])%M;
            long b = (p[0][0]*q[0][1] + p[0][1]*q[1][1])%M;
            long c = (p[1][0]*q[0][0] + p[1][1]*q[1][0])%M;
            long d = (p[1][0]*q[0][1] + p[1][1]*q[1][1])%M;
            return new long[][] {{a, b}, {c, d}};
        }
        public static long[] kdane(long arr[]) {
            int n = arr.length;
            long dp[] = new long[n];
            dp[0] = arr[0];
            long ans = dp[0];
            for(int i = 1;i<n;i++) {
                dp[i] = Math.max(dp[i-1] + arr[i] , arr[i]);
                ans = Math.max(ans , dp[i]);
            }
            return dp;
        }
        
       
        public static void update(int low , int high , int l , int r, int val , int treeIndex ,int tree[]) {

            if(low > r || high < l || high < low) return;
            if(l <= low && high <= r) {
                System.out.println("At " +low + " and " + high + " ans ttreeIndex  " + treeIndex);
                tree[treeIndex] += val;
                return;
            }
            int mid = low + (high - low)/2;
            update(low , mid , l , r , val , treeIndex*2  + 1, tree);
            update(mid + 1 , high , l , r , val , treeIndex*2 + 2 , tree);
        }
        static int colx[] = {1 ,-1, 0,0 , 1,1,-1,-1};
        static int coly[] = {0 ,0, 1,-1,1,-1,1,-1};
        public static void reverse(char arr[])  {
            int i =0 , j = arr.length-1;
            while(i < j) {
                swap(i , j , arr);
                i++;
                j--;
            }
        }
        public static long[] reverse(long arr[])  {
            long newans[] = arr.clone();
            int i =0 , j = arr.length-1;
            while(i < j) {
                swap(i , j , newans);
                i++;
                j--;
            }
            return newans;
        }
        public static void reverse(int arr[])  {
            int i =0 , j = arr.length-1;
            while(i < j) {
                swap(i , j , arr);
                i++;
                j--;
            }
        }
        
        public static long inverse(long x  , long mod) {
            return pow(x , mod -2 , mod);
        }
        public static int maxArray(int arr[]) {
            int ans = arr[0] ,  n = arr.length;
            for(int i =1;i<n;i++) {
                ans = Math.max(ans , arr[i]);
            }
            return ans;
        }
        public static long maxArray(long arr[]) {
            long ans = arr[0];
            int  n = arr.length;
            for(int i =1;i<n;i++) {
                ans = Math.max(ans , arr[i]);
            }
            return ans;
        }
        public static int minArray(int arr[]) {
            int ans = arr[0] , n = arr.length;
            for(int i =0;i<n;i++ ) {
                ans = Math.min(ans ,arr[i]);
            }
            return ans;
        }
        public static long minArray(long arr[]) {
            long ans = arr[0];
            int n = arr.length;
            for(int i =0;i<n;i++ ) {
                ans = Math.min(ans ,arr[i]);
            }
            return ans;
        }
        public static int sumArray(int arr[]) {
            int ans = 0;
            for(int x : arr) {
                ans  += x;
            }
            return ans;
        }
        public static long sumArray(long arr[]) {
            long ans = 0;
            for(long x : arr) {
                ans  += x;
            }
            return ans;
        }
        public static long rl() {
            return sc.nextLong();
        }
        public static char[] rac() {
            return sc.next().toCharArray();
        }
        public static String rs() {
            return sc.next();
        }
        public static char rc() {
            return sc.next().charAt(0);
        }
        public static  int [] rai(int n) {
            int ans[] = new int[n];
            for(int i =0;i<n;i++) {
                ans[i] = sc.nextInt();
            }
            return ans;
        }
        public static  long [] ral(int n) {
            long ans[] = new long[n];
            for(int i =0;i<n;i++) {
                ans[i] = sc.nextLong();
            }
            return ans;
        }
        public static int ri() {
            return sc.nextInt();
        }

        public static int getValue(int num ) {
            int ans = 0;
            while(num > 0) {
                ans++;
                num = num&(num-1);
            }
            return ans;
        }
        public static boolean isValid(int x ,int y , int n,char arr[][],boolean visited[][][][])  {
            return x>=0 && x<n && y>=0 && y <n && !(arr[x][y] == '#');
        }
        // public static Pair join(Pair a , Pair b) {
        //     Pair res = new Pair(Math.min(a.min , b.min) , Math.max(a.max , b.max) , a.count + b.count);
        //     return res;
        // }
        
        // segment tree query over range
        // public static int query(int node,int l , int r,int a,int b ,Pair tree[] ) {
        //     if(tree[node].max < a || tree[node].min > b) return 0;
        //     if(l  > r) return 0;
        //     if(tree[node].min >= a && tree[node].max <= b) {
        //         return tree[node].count;   
        //     }
        //     int mid = l + (r-l)/2;
        //     int ans = query(node*2 ,l , mid ,a , b , tree) + query(node*2 +1,mid + 1, r , a , b, tree);
        //     return ans;
        // }
        // // segment tree update over range
        // public static void update(int node, int i , int j ,int l , int r,long value, long arr[] ) {
        //     if(l >= i && j >= r) {
        //         arr[node]   += value;
        //         return;
        //     }
        //     if(j < l|| r < i) return;
        //     int mid = l + (r-l)/2;
        //     update(node*2 ,i ,j ,l,mid,value, arr);
        //     update(node*2 +1,i ,j ,mid + 1,r, value  , arr);
        // }

        public static long pow(long a , long b  , long mod) {
            if(b == 1) return a;
            if(b == 0) return 1;
            long ans = pow(a , b/2 , mod)%mod;
            if(b%2 == 0) {
                return (ans*ans)%mod;
            }
            else {
                return ((ans*ans)%mod*a)%mod;
            }
        }
        public static long pow(long a , long b ) {
            if(b == 1) return a;
            if(b == 0) return 1;
            long ans = pow(a , b/2);
            if(b%2 == 0) {
                return (ans*ans);
            }
            else {
                return ((ans*ans)*a);
            }
        }
        
        
        public static boolean isVowel(char ch) {
            if(ch == 'a' || ch == 'e'||ch == 'i' || ch == 'o' || ch == 'u') return true;
            if((ch == 'A' || ch == 'E'||ch == 'I' || ch == 'O' || ch == 'U'))  return true;
            return false;
        }

        
        
        public static int getFactor(int num) {
            if(num==1) return 1;
            int ans = 2;
            int k = num/2;
            for(int i = 2;i<=k;i++) {
                if(num%i==0) ans++;
            }
            return Math.abs(ans);
        }

        public static int[] readarr()throws IOException {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i =0;i<n;i++) {
                arr[i] =  sc.nextInt();
            }
            return arr;
        }
     
        public static boolean isPowerOfTwo (long x) {
            return x!=0 && ((x&(x-1)) == 0);
        }
        public static boolean isPrime(long num) {
            if(num==1) return false;
            if(num<=3) return true;
            if(num%2==0||num%3==0) return false;
            for(long i =5;i*i<=num;i+=6) {
                if(num%i==0 || num%(i+2) == 0) return false;
            }
            return true;
        }
        public static boolean isPrime(int num) {
            // System.out.println("At pr " + num);
            if(num==1) return false;
            if(num<=3) return true;
            if(num%2==0||num%3==0) return false;
            for(int i =5;i*i<=num;i+=6) {
                if(num%i==0 || num%(i+2) == 0) return false;
            }
            return true;
        }
        // public static boolean isPrime(long num) {
        //     if(num==1) return false;
        //     if(num<=3) return true;
        //     if(num%2==0||num%3==0) return false;
        //     for(int i =5;i*i<=num;i+=6) {
        //         if(num%i==0) return false;
        //     }
        //     return true;
        // }
        public static long gcd(long a , long b) {
            if (b == 0) return a;
            return gcd(b, a % b);
        }
        public static int gcd(int a , int b) {
            if (b == 0) return a;
            return gcd(b, a % b);
        }
        public static int get_gcd(int a , int b) {
            if (b == 0) return a;
            return gcd(b, a % b);
        }
        public static long get_gcd(long a , long b) {
            if (b == 0) return a;
            return gcd(b, a % b);
        }
        // public static long fac(long num)  {
        //     long ans = 1;
        //     int mod = (int)1e9+7;
        //     for(long i = 2;i<=num;i++) {
        //         ans  =  (ans*i)%mod;
        //     }
        //     return ans;
        // }
    }
