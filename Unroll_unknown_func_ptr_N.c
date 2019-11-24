
extern int *N;

int main() {
    int *N_1 = N;
    for(int i= 0; i < *N; i++) {
        fn1(N_1);
        N_1 = 0x182;
    }
}
