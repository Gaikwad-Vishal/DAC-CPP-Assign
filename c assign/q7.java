class que_7 {
    public static void main(String[] args) {
        int num = Integer.parseInt(args[0]);
        System.out.println("The Table for the number " + num + " is:");
        for (int i = 1; i <= 10; i++) {
            System.out.println(num + " x " + i + " = " + i * num);
        }
    }
}