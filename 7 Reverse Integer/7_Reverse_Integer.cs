using System;

public class Solution
{
    public int Reverse(int x)
    {
        long rev = 0;

        while (x != 0)
        {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }

        if (rev > int.MaxValue || rev < int.MinValue)
        {
            return 0;
        }

        return (int)rev;
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        Console.Write("Enter an integer: ");
        int x = int.Parse(Console.ReadLine());

        Solution sol = new Solution();
        int result = sol.Reverse(x);

        Console.WriteLine("Reversed integer: " + result);
    }
}

// Time Complexity: O(N)
// Space Complexity: O(1)