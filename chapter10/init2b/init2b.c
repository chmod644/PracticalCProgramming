#define SIZE 20

int  data[SIZE];
int  twice[SIZE];

int main() {
	int index;
	for(index=0; index<SIZE; ++index) {
		data[index] = index;
		twice[index] = index*2;
	}
	return(0);
}
