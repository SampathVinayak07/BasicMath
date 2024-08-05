#include<stdio.h>
int son(int n){
	if(n==1){
		return 0;
	}
	while(n>1){
		n=n*(n+1)/2;
		return n;
	}
}
int sos(int n){
	int s=0,t=0;
	while(n){
		t=n%10;
		s=s+t*t;
		n=n/10;
	}
	return s;
}
int rev(int n){
	int r=1;
	while(n){
		int d = n%10;
		int p = p*10+d;
		n=n/10;
		return p;
	}
}
int fact(int n){
	int r=1,i=0;
	if(n==0 || n==1){
		return 1;
	}
	for(i=1;i<=n;i++){
		r=r*i;
	}
	return r;
}
int pow(int n , int m){
	int r=1,i;
	for(i=0;i<m;i++){
		r*=n;
	}
	return r;
}
double two(int n){
	unsigned long long r= fact(n);
	return 1.0/r;
}
int three(int x, int n){
	double r;
	r=pow(x,n)/fact(n);
	return r;
}
int count(int n){
	int d=0,c=0;
	while(n){
		d=n%10;
		c++;
		n/=10;
	}
	return c;
}
int sod(int n){
	int s=0,d=0;
	while(n){
		d=n%10;
		s=s+d;
		n=n/10;
	}
	return s;
}
int pods(int n){
	int s=1,d=0;
	while(n){
		d=n%10;
		s=s*d;
		n=n/10;
	}
	return s;
}
int hcf(int n , int m){
	int t;
	while(m){
		t=m;
		m=n%m;
		n=t;
	}
	return n;
}
int lcm(int n, int m){
	return ((n*m)/n)+m;
}
int pf(int n){
	int i=0;
	while(n%2==0){
		printf("%d\n",2);
		n=n/2;
	}
	for(i=3;i*i<=n;i=i+2){
		while(n%i==0){
			printf("%d\n",i);
			n=n/i;
		}
		break;
	}
	if(n>2){
		printf("%d\n",n);
	}
}
int crev(int n){
	if(n==rev(n)){
		printf("True");
	}
	else{
		printf("False");
	}
}
int ps(int n){
	if(n<0){
		return 0;
	}
	int i = 1;
    while (i*i<=n){
        if (i*i==n){
            return 1;
        }
        i++;
    }
    return 0;
}
int an(int n){
	int d=0,t=0,p=0,r=1;
	while(n){
		d=n%10;
		t=pow(d,3);
		p=p*r+t;
		n=n/10;
    }
    return p;
	if(p==n){
		return 1;
	}
	else{
		return 0;
	}
}
int sn(int n){
	int d=0,t=0,p=0;
	while(n){
		d=n%10;
		t=fact(d);
		p=p+t;
		n=n/10;
    }
    return p;
}
int pn(int n){
	int s= 0;
    for (int i=1; i<=n/2;i++){
        if(n%i==0){
            s+= i;
        }
    }
    return (s==n);
}
int hn(int n){
	int t=sod(n);
	return (n%t==0);
}
int abn(int n){
	int s= 0;
    for (int i=1; i<=n/2;i++){
        if(n%i==0){
            s+= i;
        }
    }
    return (s>n);
}
short len(long int n){
    short c=0;
    for(;n;n=n/10,c=c+1);
    return c;
}
unsigned long int zfill(short n) {
    unsigned long int a=1;
    for(;n;a=a*10,n=n-1);
    return a;
}
int aun(int n){
	int t = pow(n,n);
	int x = t%zfill(len(n));
	return (n==x);
}
int mn(int n){
	int t = sod(n);
	printf("%d\n",t);
	int x = sod(t);
	printf("%d\n",x);
	return x;
}
int fsum(int n){
	int s=0;
    for (int i=1; i<=n/2;i++){
        if(n%i==0){
            s+= i;
        }
    }
    return s;
}
int fp(int n, int m){
	int s=0,d=0;
	s=fsum(n)/n;
	d=fsum(m)/m;
	return (s==d);
}
int nn(int n){
	int t = pow(n,2);
	int s=0;
	while(n){
		t=n%10;
		s=s+t;
		n=n/10;
	}
	return s;
}
int spn(int n){
	int p= sod(n);
	int s=1,t=0;
	while(n){
		t=n%10;
		s=s*t;
		n=n/10;
	}
	return (s==p);
}
int hapn(int n){
	int s=0,f=0;
    s=f=n;
    do {
        s= sos(s);           
        f= sos(sos(f)); 
    } 
	while (s!=f);
    return (s==1);
}
int sunn(int n){
	return (ps(n+1));
}
int disn(int n){
	int c=len(n);
	int s=0,d=0;
	while(n){
		d=n%10;
		s=s+pow(d,c);
		n=n/10;
		c--;
	}
	return s-1;
}
int pron(int n){
	int i=0;
	while(i*(i+1)<=n){
		if(i*(i+1)==n){
			return 1;
		}
		i++;
	}
	return 0;
}
int trin(int n){
	int t = pow(n,3);
	int x = t%zfill(len(n));
	return (n==x);
}
int cobin(int n){
	int c=0;
	while(n>0){
		if(n%2==1){
			c++;
		}
	}
	return c;
}
int eviln(int n){
	int t = cobin(n);
	return (t%2==0);
}
int amp(int n , int m){
	int t = fsum(n);
	int u = fsum(m);
	return (t==m && u==n);
}
int ecount(int n){
	int c=0,d=0;
	while(n){
		d=n%10;
		if(d%2==0){
			c++;
		}
		n/=10;
	}
	return c;
	
}
int ocount(int n){
	int c=0,d=0;
	while(n){
		d=n%10;
		if(d%2!=0){
			c++;
		}
		n/=10;
	}
	return c;
}
int grn(int n){
	int t = sod(n);
	int u = sod(t);
	return u;
}
int ozc(int n){
	int d=0,c=0;
	while(n){
		d=n%10;
		if(d==1 || d==0){
			c++;
		}
		n=n/10;
	}
	return c;
}
int larged(int n){
	int l=0,d=0;
	while(n>0){
		d=n%10;
		if(d>l){
			l=d;
		}
		n=n/10;
	}
	return l;
}
int smalld(int n){
	int s=9,d=0;
	while(n>0){
		d=n%10;
		if(d<s){
			s=d;
		}
		n=n/10;
	}
	return s;
}
int slarged(int n){
	int l=-1,sl=-1,d;
	while(n>0){
		d=n%10;
		if(d>l){
			sl=l;
			l=d;
		}
		else if(d>sl && d<l){
			sl=d;
		}
		n=n/10;
	}
	return sl;
}
int ssmalld(int n){
	int s=9,ss=9,d;
	while(n>0){
		d=n%10;
		if(d<=s){
			ss=s;
			s=d;
		}
		else if(d<ss && d>s){
			ss=d;
		}
		n=n/10;
	}
	return ss;
}
int divide(int n, int m){
	while(n%m==0){
		n=n/m;
	}
	return n;
}
int unum(int n){;
	n=divide(n,2);
	n=divide(n,3);
	n=divide(n,5);
	return (n==1);
}
int findNthanNum(int n) {
    int c= 0;
    int num = 1;
    while (1) {
        if (an(num)) {
            c++;
            if (c== n) {
                return num;
            }
        }
        num++;
    }
}
int range(int l,int u) {
	int i;
    for (i=l;i<=u;i++) {
        if (sn(i)) {
            printf("%d",i);
        }
    }
    printf("\n");
}
int defn(int n){
	int s= 0;
    for (int i=1; i<=n/2;i++){
        if(n%i==0){
            s+= i;
        }
    }
    return (s<n);
}
int kaprn(int n){
	int s,d;
	int t = n*n;
	int x= len(n);
	while(n>0){
		d=t%zfill(x);
		s=s+d;
		n=n/zfill(x);
	}
	return s;
}
int lychn(int n){
	int t = rev(n);
	int x = n+t;
	return (x==rev(x));
}
int narcn(int n){
	int d,t,s=0;
	int y = n;
	int x = len(n);
	while(n){
		d=n%10;
		t=pow(d,x);
		s=s+t;
		n=n/10;
	}
	return (s==y);
}
int lucn(int n){
	int l0=2,l1=1,i,l2;
	if(n==0){
		return l0;
	}
	if(n==1){
		return l1;
	}
	for(i=2;i<=n;i++){
		l2=l0+l1;
		l0=l1;
		l1=l2;
	}
	return l2;
}
int catalan(int n){
	int t = fact(2*n)/(fact(n+1)*fact(n));
	return t;
}
int duckn(int n){
	int t = len(n)-1;
	int x = n/zfill(t);
	return (x==0)?0:1;
}
int cube(int n){
	int i=0;
	while(i*i*i<n){
		i++;
	}
	return (i*i*i==n);
}
int mersen(int n){
	int t = pow(2,n)-1;
	return t;
}
int pells(int n){
	int l0=0,l1=1,i,l2;
	if(i==0){
		return l0;
	}
	if(i==1){
		return l1;
	}
	for(i=2;i<=n;i++){
		l2=(2*l1)+l0;
		return l2;
		l0=l1;
		l1=l2;
	}
	return l2;
}
int keith(int n){
	int l0=1,l1=1,i,l2;
	if(n==0){
		return l0;
	}
	if(n==1){
		return l1;
	}
	if(n==2){
		
	}
	for(i=2;i<=n;i++){
		l2=l0+l1;
		l0=l1;
		l1=l2;
	}
	return l2;
}
int swap(int n,int m){
	n=n^m;
	m=n^m;
	n=n^m;
	return n;
}
int power(int n, int m){
	if(m==0){
		return 1;
	}
	return n*power(n,m-1);
}
int sumod(int n){
	if(n==0){
		return 0;
	}
	return (n%10)+sumod(n/10);
}
char voc(char ch){
	if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' ){
		printf("vowel");
	}
	else{
		printf("consonant");
	}
}
char chisal(char ch){
	if((ch>='A'&& ch<='Z') || (ch>='a'&& ch<='z')){
		printf("Alphabet\n");
	}
	else{
		printf("Not Alphabet");
	}
}
int replace0(int n){
	int r=0;
    int p=1;
    while(n>0){
        int d=n%10;
        if(d==0){
            d=1;
        }
        r=r+(d*p);
        n=n/10;
        p=p*10;
    }
    return r;
}
int db(int n){
	if(n==0){
		return 0;
	}
	db(n/2);
	printf("%d\n",n%2);
}
int bd(int n){
	int d,s=1,p=0;
	while(n>0){
		d = n%10;
		p=p+d*s;
		n=n/10;
		s=s*2;
	}
	return p;
}
int btod(int n){
	if(n==0){
		return 0;
	}
	else{
		return (n%10)+(2*btod(n/10));
	}
}
int DtoO(int n){
	if(n==0){
		return 0;
	}
	DtoO(n/8);
	printf("%d",n%8);
}
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int permute(char str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
    } else {
        for (int i = left; i <= right; i++) {
            swap((str + left), (str + i));
            permute(str, left + 1, right);
            swap((str + left), (str + i));
        }
    }
}
int main(){
	int n =101;
	int m =4;
	char ch='A';
	char str='ABC';
	int x = len(str);
	printf("%d",permute(str , 0 ,x-1));
	int ascii = (int)ch;
	printf("\n",btod(n));
}

