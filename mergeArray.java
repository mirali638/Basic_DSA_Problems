public class mergeArray {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m - 1; // Lasr element in num1
        int j = n - 1; // Last element in nums2
        int k = m + n - 1; // Last position in nums1
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }

    public void printArray(int[] array) {
        for (int num : array) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        mergeArray solution = new mergeArray();

        int[] nums1 = {1, 2, 3, 8, 1, 0}; // nums1 has enough space to hold elements from nums2
        int m = 5; // Number of initialized elements in nums1
        int[] nums2 = {2, 5, 6}; // Elements to be merged into nums1
        int n = 3; // Number of elements in nums2

        System.out.print("Original nums1: ");
        solution.printArray(nums1);
        System.out.print("Original nums2: ");
        solution.printArray(nums2);

        solution.merge(nums1, m, nums2, n);

        System.out.print("Merged array: ");
        solution.printArray(nums1);
    }
    }
    