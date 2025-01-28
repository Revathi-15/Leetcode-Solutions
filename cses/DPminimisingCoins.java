import java.util.Scanner;

public class DPminimisingCoins {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int x = scanner.nextInt();
        int[] a = new int[n];
        int[] prev = new int[x + 1];
        int[] curr = new int[x + 1];

        for (int i = 0; i < n; i++)
            a[i] = scanner.nextInt();

        for (int val = 0; val <= x; val++) {
            if (val % a[0] == 0)
                prev[val] = val / a[0];
            else
                prev[val] = Integer.MAX_VALUE;
        }

        for (int i = 1; i < n; i++) {
            for (int val = 0; val <= x; val++) {
                int not_take = 0 + prev[val];
                int take = Integer.MAX_VALUE;
                if (val >= a[i])
                    take = 1 + curr[val - a[i]];
                curr[val] = Math.min(take, not_take);
            }
            prev = curr.clone();
        }

        int ans = prev[x];
        if (ans >= Integer.MAX_VALUE)
            System.out.println("-1");
        else
            System.out.println(ans);
    }
}
