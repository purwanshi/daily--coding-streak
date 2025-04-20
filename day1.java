// ## DAY 1 📌 Problem: Implement a job scheduler which takes in a function f and an integer n, and calls f after n milliseconds.
    
public static void main(String args[]) {
    solution(new Command() {
        @Override
        public void execute() {
            System.out.println("day 1");
        }
    }, 1000);


    solution(() -> System.out.println("day 1"), 1000);
}

public static void solution(Command command, int n) {
    new java.util.Timer().schedule(new java.util.TimerTask() {
        @Override
        public void run() {
            command.execute();
        }
    }, n);
}

interface Command {
    public void execute();
}
