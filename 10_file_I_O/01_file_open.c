# include<stdio.h>

int main(){
  FILE *ptr ;
 ptr = fopen("sample1.txt", "r"); // --> ".txt", "r" open for reading text files . 
  //ptr = fopen("sample2.txt", "w"); // --> ".txt", "w" open for writing text files if files does not exist it will be created itself.
 // ptr = fopen("sample1.jpg", "rb"); // --> ".jpg", "rb" open for reading binary files .
 // ptr = fopen("sample2.jpg", "wb");// --> ".jpg", "wb" open for writing binary files if files does not exist it will be created itself.
  //ptr = fopen("sample1.txt", "a");
  // ptr = fopen("sample1.jpg", "a"); // --> open for append . if the file does not exist it will be created .
  // "a" --> append--> to adding content in the end of a file having already its content is called append.
      return 0;
}