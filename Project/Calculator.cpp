#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main () {
    int b;
cout<<"                                       Please select the language:\n";
cout<<"                                            1 - Romana\n";
cout<<"                                            2 - English\n";
    cin>>b;
if (b ==1) {
int n;
cout<<"Ce doriti? "<<endl;
cout<<"1 - Adunare"<<endl;
cout<<"2 - Scadere"<<endl;
cout<<"3 - Inmultire"<<endl;
cout<<"4 - Impartire"<<endl;
cout<<"5 - Restul impartirii(Modulo)"<<endl;
cout<<"6 - Produs scalar"<<endl;
cout<<"7 - Cel mai mare si cel mai mic divizor al unui numar"<<endl;
cout<<"8 - Cel mai mare si cel mai mic divizor comun a doua numere"<<endl;
cout<<"9 - Matrici"<<endl;
cin>>n;
switch(n) {
case 1: {
    vector<int> v;
    int numar, suma=0;
    cout<<"Introdu numerele ( Scrii o litera ca sa te opresti):\n;";
    while(cin>> numar) {
        v.push_back(numar);
        suma+=numar;
    }
    cout<<"Suma este egala cu  : "<<suma<<endl;
    break;
}
case 2: {
    vector<int> v;
    int numar, dif = 0;
    bool primul = true;
    cout << "Introdu numerele (Scrii o litera  ca sa te opresti):\n";
    while(cin >> numar) {
        v.push_back(numar);
        if (primul) {
            dif = numar;
            primul = false;
        } else {
            dif -= numar;
        }
    }
    cout << "Diferenta este: " << dif <<endl;
    break;
}
case 3: {
int numar, inmultire=1;
cout<<"Introduceti numerele (Scrii o litera ca sa te opresti:\n";
vector<int> v;
while (cin>>numar) {
    v.push_back(numar);
    inmultire*=numar;
}
cout<<"Inmultirea este egala cu: "<<inmultire<<endl;
break;
}
case 4: {
  int a, rezultat=0, d, i, p;
    cout<<"1 - Impartire a doua numere\n";
    cout<<"2 - Impartire a trei numere\n";
    cin>>a;
    if(a==1) {
        cout<<"Introduceti numerele:\n";
     cin>>d>>i;
    if (i != 0) {
        rezultat = d/i;
        cout<<"Rezultatul este:\n"<<rezultat;
    }
    else {
        cout<<"Numerele trebuie sa fie diferite de 0.\n";
    }
}
if(a==2) {
    cout<<"Introduceti numerele:\n";
    cin>>d>>i>>p;
    if(i!=0 && p!=0) {
            rezultat = (d/i)/p;
    cout<<"Rezultatul este:\n"<<rezultat;
} else {
cout<<"Numerele trebuie sa fie diferite de 0.\n";}
}
 break;
}
case 5: {
  int a, rezultat=0, d, i, p;
    cout<<"1 - Restul a doua numere\n";
    cout<<"2 - Restul a trei numere\n";
    cin>>a;
    if(a==1) {
        cout<<"Introduceti numerele:\n";
     cin>>d>>i;
    if (i != 0) {
        rezultat = d%i;
        cout<<"Rezultatul este:\n"<<rezultat;
    }
    else {
        cout<<"Numerele trebuie sa fie diferite de 0.\n";
    }
}
if(a==2) {
    cout<<"Introduceti numerele:\n";
    cin>>d>>i>>p;
    if(i!=0 && p!=0) {
            rezultat = (d%i)%p;
    cout<<"Rezultatul este:\n"<<rezultat;
} else {
cout<<"Numerele trebuie sa fie diferite de 0.\n";}
}
break;
}
case 6: {
    int n, v[50], a[50], i=1, produs_scalar=1;
 cout<<"Introduceti cate numere sa fie in vectori:\n";
 cin>>n;
 for(i=1;i<=n;i++) {
    cout<<"Vectorul 1, elemetul ["<< i <<"]:\n";
    cin>>v[i];
 }
 for(i=1;i<=n;i++) {
    cout<<"Vectorul 2 elementul: ["<<i<<"]:\n";
    cin>>a[i];
 }
 for(i=1;i<=n;i++) {
    produs_scalar+= v[i] * a[i];
 }
 cout<<"Produsul scalar este egal cu: "<<produs_scalar;
 break;
}
case 7: {
    int n,max=0,min=0, i=2;
cout<<"Introduceti un numar:\n";
cin>>n;
if ( n < 0) {
  n = abs(n); }
for(i=2;i<n;i++) {
    if (n % i==0) {
    min=i;
    break;}
    }
    for(i=2;i<n;i++) {
     if (n % i ==0) {
     max=i;}}
     if(min ==0) {
     cout<<"Numarul nu are divizori proprii(este numar prim)";}
     else {
     cout <<"Cel mai mic este "<<min<<" si cel mai mare este "<<max<<" (fara numarul insusi)"<<endl;}
break;
}
case 8: {
    int n,maxn=0,minn=0, a;
cout<<"Introduceti cele doua numere:\n";
cin>>n>>a;
if ( n < 0) {
  n = abs(n); }
  if( a < 0) {
    a = abs(a);
  }
  int limit = (n < a) ? n : a;
for(int i=2;i<=limit;i++) {
        if(n % i ==0 && a % i ==0) {
            minn=i;
        break; }
}

for(int i =limit;i>=2;i--) {
    if ( n % i==0 && a % i==0) {
        maxn=i;
        break;
    }
}
if(minn !=0 && maxn!=0) {
    cout<<"Cel mai mic si cel mai mare divizor al numerelor: "<<n<<" si "<<a<<" sunt: "<<minn<<" si "<<maxn<<endl;
} else {
cout<<"Numerele nu au cel mai mic divizor comun sau cel mai mare."; }
break;
}
case 9: {
    int a, linii, coloane;
    int A[50][50], B[50][59], C[50][50];
    cout<<" 1- Adunarea a doua matrici (maxim 50x50)"<<endl;
    cout<<" 2- Scaderea a doua matrici (maxim 50x50)"<<endl;
    cout<<" 3- Inmultirea a doua matrici(maxim 50x50)"<<endl;
cin>>a;
switch(a) {
    case 1: {
    cout<<"Introduceti nr de linii: "<<endl;
    cin>>linii;
    cout<<"Introduceti nr de coloane: "<<endl;
    cin>>coloane;
    cout<<"Cele doua matrici: "<<endl;
    for(int i=0;i<linii;i++) {
        for(int j=0;j<coloane;j++) {
            cin>>A[i][j];
        }
    }
    for(int i=0;i<linii;i++) {
        for(int j=0;j<coloane;j++) {
            cin>>B[i][j];
        }
    }
    cout<<"Suma este egala cu: "<<endl;
    for(int i=0;i<linii;i++) {
        for(int j=0;j<coloane;j++) {
            C[i][j]= A[i][j] + B[i][j];
            cout<<C[i][j]<<"  ";
        }
        cout<<endl;
    }
    break;
}
case 2: {
cout<<"Introduceti nr de linii: "<<endl;
    cin>>linii;
    cout<<"Introduceti nr de coloane: "<<endl;
    cin>>coloane;
    cout<<"Cele doua matrici: "<<endl;
    for(int i=0;i<linii;i++) {
        for(int j=0;j<coloane;j++) {
            cin>>A[i][j];
        }
    }
    for(int i=0;i<linii;i++) {
        for(int j=0;j<coloane;j++) {
            cin>>B[i][j];
        }
    }
    cout<<"Diferenta este egala cu: "<<endl;
    for(int i=0;i<linii;i++) {
        for(int j=0;j<coloane;j++) {
            C[i][j]= A[i][j] - B[i][j];
            cout<<C[i][j]<<"  ";
        }
        cout<<endl;
    }
break;
}
case 3: {
    int liniiA, coloaneA, liniiB, coloaneB;
    cout << "Introduceti numarul de linii si coloane pentru matricea A: ";
    cin >> liniiA >> coloaneA;
    cout << "Introduceti numarul de linii si coloane pentru matricea B: ";
    cin >> liniiB >> coloaneB;

    if (coloaneA != liniiB) {
        cout << "Nu se pot inmulti matricile! Coloanele lui A trebuie sa fie egale cu liniile lui B\n";
        break;
    }

    int A[50][50], B[50][50], C[50][50] = {0};

    cout << "Introduceti elementele matricei A:\n";
    for (int i = 0; i < liniiA; i++)
        for (int j = 0; j < coloaneA; j++)
            cin >> A[i][j];

    cout << "Introduceti elementele matricei B:\n";
    for (int i = 0; i < liniiB; i++)
        for (int j = 0; j < coloaneB; j++)
            cin >> B[i][j];

    for (int i = 0; i < liniiA; i++) {
        for (int j = 0; j < coloaneB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < coloaneA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Rezultatul inmultirii matricelor este:\n";
    for (int i = 0; i < liniiA; i++) {
        for (int j = 0; j < coloaneB; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    break;
}
}
}
}
}
    if (b == 2) {
        int option;
        cout << "What do you want to do?\n";
        cout << "1 - Addition\n";
        cout << "2 - Subtraction\n";
        cout << "3 - Multiplication\n";
        cout << "4 - Division\n";
        cout << "5 - Modulo (Remainder)\n";
        cout << "6 - Scalar product\n";
        cout << "7 - Smallest and largest divisor of a number\n";
        cout << "8 - Smallest and largest common divisor of two numbers\n";
        cout << "9 - Matrices\n";
        cin >> option;

        switch(option) {
            case 1: {
                vector<int> v;
                int number, sum = 0;
                cout << "Enter numbers (Type a letter to stop):\n";
                while (cin >> number) {
                    v.push_back(number);
                    sum += number;
                }
                cout << "The sum is: " << sum << endl;
                break;
            }
            case 2: {
                vector<int> v;
                int number, diff = 0;
                bool first = true;
                cout << "Enter numbers (Type a letter to stop):\n";
                while (cin >> number) {
                    v.push_back(number);
                    if (first) {
                        diff = number;
                        first = false;
                    } else {
                        diff -= number;
                    }
                }
                cout << "The difference is: " << diff << endl;
                break;
            }
            case 3: {
                int number, product = 1;
                cout << "Enter numbers (Type a letter to stop):\n";
                vector<int> v;
                while (cin >> number) {
                    v.push_back(number);
                    product *= number;
                }
                cout << "The product is: " << product << endl;
                break;
            }
            case 4: {
                int a, result = 0, d, i, p;
                cout << "1 - Division of two numbers\n";
                cout << "2 - Division of three numbers\n";
                cin >> a;
                if (a == 1) {
                    cout << "Enter the numbers:\n";
                    cin >> d >> i;
                    if (i != 0) {
                        result = d / i;
                        cout << "The result is:\n" << result;
                    } else {
                        cout << "The numbers must be different from 0.\n";
                    }
                }
                if (a == 2) {
                    cout << "Enter the numbers:\n";
                    cin >> d >> i >> p;
                    if (i != 0 && p != 0) {
                        result = (d / i) / p;
                        cout << "The result is:\n" << result;
                    } else {
                        cout << "The numbers must be different from 0.\n";
                    }
                }
                break;
            }
            case 5: {
                int a, result = 0, d, i, p;
                cout << "1 - Remainder of two numbers\n";
                cout << "2 - Remainder of three numbers\n";
                cin >> a;
                if (a == 1) {
                    cout << "Enter the numbers:\n";
                    cin >> d >> i;
                    if (i != 0) {
                        result = d % i;
                        cout << "The result is:\n" << result;
                    } else {
                        cout << "The numbers must be different from 0.\n";
                    }
                }
                if (a == 2) {
                    cout << "Enter the numbers:\n";
                    cin >> d >> i >> p;
                    if (i != 0 && p != 0) {
                        result = (d % i) % p;
                        cout << "The result is:\n" << result;
                    } else {
                        cout << "The numbers must be different from 0.\n";
                    }
                }
                break;
            }
            case 6: {
                int n, v[50], a[50], i = 1, scalar_product = 0;
                cout << "Enter how many numbers should be in the vectors:\n";
                cin >> n;
                for (i = 1; i <= n; i++) {
                    cout << "Vector 1, element [" << i << "]:\n";
                    cin >> v[i];
                }
                for (i = 1; i <= n; i++) {
                    cout << "Vector 2, element [" << i << "]:\n";
                    cin >> a[i];
                }
                for (i = 1; i <= n; i++) {
                    scalar_product += v[i] * a[i];
                }
                cout << "The scalar product is: " << scalar_product;
                break;
            }
            case 7: {
                int n, max = 0, min = 0, i = 2;
                cout << "Enter a number:\n";
                cin >> n;
                if (n < 0) {
                    n = abs(n);
                }
                for (i = 2; i < n; i++) {
                    if (n % i == 0) {
                        min = i;
                        break;
                    }
                }
                for (i = 2; i < n; i++) {
                    if (n % i == 0) {
                        max = i;
                    }
                }
                if (min == 0) {
                    cout << "The number has no proper divisors (it's a prime number)";
                } else {
                    cout << "The smallest is " << min << " and the largest is " << max << " (excluding the number itself)" << endl;
                }
                break;
            }
            case 8: {
                int n, maxn = 0, minn = 0, a;
                cout << "Enter two numbers:\n";
                cin >> n >> a;
                if (n < 0) n = abs(n);
                if (a < 0) a = abs(a);
                int limit = (n < a) ? n : a;
                for (int i = 2; i <= limit; i++) {
                    if (n % i == 0 && a % i == 0) {
                        minn = i;
                        break;
                    }
                }
                for (int i = limit; i >= 2; i--) {
                    if (n % i == 0 && a % i == 0) {
                        maxn = i;
                        break;
                    }
                }
                if (minn != 0 && maxn != 0) {
                    cout << "The smallest and largest common divisors of " << n << " and " << a << " are: " << minn << " and " << maxn << endl;
                } else {
                    cout << "The numbers have no smallest or largest common divisors.";
                }
                break;
            }
            case 9: {
                int a, rows, cols;
                int A[50][50], B[50][50], C[50][50];
                cout << " 1- Addition of two matrices (max 50x50)\n";
                cout << " 2- Subtraction of two matrices (max 50x50)\n";
                cout << " 3- Multiplication of two matrices (max 50x50)\n";
                cin >> a;
                switch(a) {
                    case 1: {
                        cout << "Enter number of rows:\n";
                        cin >> rows;
                        cout << "Enter number of columns:\n";
                        cin >> cols;
                        cout << "Enter the two matrices:\n";
                        for (int i = 0; i < rows; i++)
                            for (int j = 0; j < cols; j++)
                                cin >> A[i][j];
                        for (int i = 0; i < rows; i++)
                            for (int j = 0; j < cols; j++)
                                cin >> B[i][j];
                        cout << "The sum is:\n";
                        for (int i = 0; i < rows; i++) {
                            for (int j = 0; j < cols; j++) {
                                C[i][j] = A[i][j] + B[i][j];
                                cout << C[i][j] << "  ";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case 2: {
                        cout << "Enter number of rows:\n";
                        cin >> rows;
                        cout << "Enter number of columns:\n";
                        cin >> cols;
                        cout << "Enter the two matrices:\n";
                        for (int i = 0; i < rows; i++)
                            for (int j = 0; j < cols; j++)
                                cin >> A[i][j];
                        for (int i = 0; i < rows; i++)
                            for (int j = 0; j < cols; j++)
                                cin >> B[i][j];
                        cout << "The difference is:\n";
                        for (int i = 0; i < rows; i++) {
                            for (int j = 0; j < cols; j++) {
                                C[i][j] = A[i][j] - B[i][j];
                                cout << C[i][j] << "  ";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case 3: {
                        int rowsA, colsA, rowsB, colsB;
                        cout << "Enter rows and columns for matrix A: ";
                        cin >> rowsA >> colsA;
                        cout << "Enter rows and columns for matrix B: ";
                        cin >> rowsB >> colsB;
                        if (colsA != rowsB) {
                            cout << "Cannot multiply matrices! Columns of A must equal rows of B.\n";
                            break;
                        }
                        int A[50][50], B[50][50], C[50][50] = {0};
                        cout << "Enter elements of matrix A:\n";
                        for (int i = 0; i < rowsA; i++)
                            for (int j = 0; j < colsA; j++)
                                cin >> A[i][j];
                        cout << "Enter elements of matrix B:\n";
                        for (int i = 0; i < rowsB; i++)
                            for (int j = 0; j < colsB; j++)
                                cin >> B[i][j];
                        for (int i = 0; i < rowsA; i++) {
                            for (int j = 0; j < colsB; j++) {
                                C[i][j] = 0;
                                for (int k = 0; k < colsA; k++) {
                                    C[i][j] += A[i][k] * B[k][j];
                                }
                            }
                        }
                        cout << "The result of matrix multiplication is:\n";
                        for (int i = 0; i < rowsA; i++) {
                            for (int j = 0; j < colsB; j++)
                                cout << C[i][j] << " ";
                            cout << endl;
                        }
                        break;
                    }
                }
                break;
            }
        }
    }
 return 0;
}

