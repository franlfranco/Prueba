void insertarOrd(int a[],int val, int elem){
  int i = val;
  while(i>=0&&a[i]>elem){
    a[i+1] = a[i];
    i--;
  }
  a[i+1] = elem;
} //incrementar validos en 1

void ordenacionInsercion(int a[],int val){
  int i = 0;
  for(i=0;i<val;i++){
    insertarOrd(a,i,a[i+1]);
  }
}

int main(int argc, char const *argv[]) {
  int arr[10];
  int validos = cargarArreglo(arr,10);
  int elem;

  ordenacionInsercion(arr,validos);
  insertarOrd(arr,validos-1,elem);
  validos++;
  mostrarArreglo(arr,validos);
  return 0;
}
