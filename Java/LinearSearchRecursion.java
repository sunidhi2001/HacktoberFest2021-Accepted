public class LinearSearchRecursion {
    public static void main(String[] args) {
        int[] arr = {12,34,56,782,3};
        System.out.println(find(arr,34,0));

    }
    static boolean find(int[] arr , int target , int index){
        if(index==arr.length){
            return false;
        }return arr[index]== target || find(arr , target , index+1);
    }



}
