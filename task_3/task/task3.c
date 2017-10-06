/* Construct parallel: divide a number of random points on integration region into N equal numbers and run N pthread routines;
Subtasks:
        1) Use pthreads, grab the results into some thread
        2) Results should be collected into a process from different session - use shared memory to communicate with.
        3) Make a set of experiments:
                a) Check time in single-thread mode and time with N threads, where N - number of your physical cores.
                b) Sequently increasing the number of threads, find the limit of performance increase
*/
