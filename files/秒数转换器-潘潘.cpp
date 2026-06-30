 #include <bits/stdc++.h>

using namespace std;
struct stu{
	/*
	int id;
	string name;
	double score;
	
	double c;
	double k;
	*/
	int id;
	string name;
	double score;
	
	
}a[3];


/*void a(){
	cout<<"="<<;
	
} 
*/

int main() {
/*
	int a = 1;
	int b = 2;
	cout<<min(a,b);
	
	
	
	int a = 1;
	int b = 2;
	cout<<max(a,b);
	
	
	
	
	/*
	int a,b,c;
	cin>>a>>b>>c;
	sum(a);
	sum(b);
	sum(c);
	
	
	
	
	
	
	/*
	for(int i=0;i<=100;i+=1)
		cout<<i<<" ";
	for(int i=0;i<=100;i+=2)
		cout<<i<<" ";	
	for(int i=1;i<=100;i+=2)
		cout<<i<<" ";
	
	
	long long f(int n){
	if(n==1)return 0;
	if(n==2)return 1;
	return f(n-1)+f(n-2);

	
	
	
	
	
	
	/*
	int n;
	cin>>n;
	if(n%4==0&&n%100!=0 || n%400==0) cout<<"YES";
	else cout<<"NO";
	
	int a,b,c;
	cout<<"3";
	cin>>a;
	b=a%100;
	c=b%10;
	b=b/10;
	a=a/100;
	cout<<"ff" <<c<<b<<a;
	
	float n;
	cin>>n;
	if(n==0.5) cout<<3;
	else cout<<((n-0.5)/0.2+3);
		
	
	int,x,y;
	cin>>x>>y;
	int a=x/100;
	int b=x/10%10;
	int c=x%10;
	int m=y/10;
	int n=y%10;
	
	int x,a,y;
	cin>>x>>a>>y;
	cout << x << "+" << "=" << a+y; 
	
	int x,c,t;
	cin>>X>>C>>t;
	int a=c*t;
	if(x>=a)cout>>n-a;
	else cout>>"NO"
	
	for(int i=1;i<=5;i+=1)
		cout<< "*"<<i<<endl;
	
	for(int i=0;i<100;i+=2)
		cout<<i<<"";
	
	for(int i=1;i<100;i+=2)
		cout<<i<<"";
	 
	for(int i=1;i<100;i+=1)
		if(i%2!=0) cout<<i<<" ";
			
	for(int i=0;i<100;i+=1)
		if(i%2==0) cout<<i<<" ";
	
	int sum=0;
	int m;
	for(int i=1;i<=5;i+=1){
	cin>>m;
	sum+=m;}
	cout<<sum<<endl;
	
	int n;
	cin>>n;
	int sum=0;
	int m;
	for(int i=1;i<=n;i+=1){
	cin>>m;
	sum+=m;}
	cout<<sum<<endl;
	
	int i=1;
	i++;//变量i之前的值。   
	int i=1;
	++i;//变量i之后的值。 
	int i=1;
	cout<<i++<<endl;//表达式的值。  
	cout<<i<<endl; //变量的值。 电量i加 1之前的值  
	int i=1;
	cout<<++i<<endl;//表达式的值。  
	cout<<i<<endl; //变量的值。 电量i加 1之后的值 
	int i=1;
	i--;//变量i之前的值。
	int i=1;
	- -i;//变量i之后的值。
	int i=2;
	cout<<i--<<endl;//表达式的值。  
	cout<<i<<endl; //变量的值。 电量减 1之前的值
	int i=2;
	cout<<--i<<endl;//表达式的值。  
	cout<<i<<endl; //变量的值。 电量减 1后前的值
	
	cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"<<endl;
	cout<<"Z Y X W V U T S R Q P O N M L K J I H G F E D C B A"<<endl;
	for(int i=65;i<=90;i++) {
		char c=i;
		cout<<C<<" ";
		
	int n;
	cin>>n;//定义变量，输入人数  
	int p,q;
	cin>>p>>q;//定义变量q,p输入分数  
	in t s;//定义计数变量。  
	int a=0,b=0;
	for(int i=1;i<=n;i++){
		cin>>s;
		if(s>p)a++;//统计低于p的人数  
		if(s>q)b++;//统计低于q的人数 
	} 
		cout<<a<<" "<<b<<endl;//输出结果  
	
	int n;
	cin>>n;//定义变量，输入人数  
	int a;
	int cnt=0; 
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a%2==0) cnt++;	
	}	
	cout<<cnt<<endl;	
	
	if(cnt==n)
	cout<<"YES";
	else cout<<"NO";
	
	
	int a[5];
	a[1]=98;
	a[2]=88;	
	a[3]=85;	
	a[4]=78;	 
	a[5]=92;
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4];
	int a[5];
	cin>>a[0]>>a[1]>>a[3]>>a[4];
	cout<<a[0]+a[1]+a[2]+a[3]+a[4];
	
	int a[5];
	cin>>a[0]>>a[1]>>a[3]>>a[4];
	cout<<a[0]+a[1]+a[2]+a[3]+a[4]/5;
	
	int a[4];
	a[0]=5;
	a[1]=4;	
	a[2]=3;	
	a[3]=7;	 
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int s=m[0]*b+m[2]*c+m[3]*d;
	cout<<s;  
	
	int a[5];
	a[1]=98;
	a[2]=88;	
	a[3]=85;	
	a[4]=78;	 
	a[5]=92;
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4];
	int a[5];
	cin>>a[0]>>a[1]>>a[3]>>a[4];+++++++ 
	cout<<a[0]+a[1]+a[2]+a[3]+a[4];							
	
	float money[4]={100000.11,110000.11,111000.11,111100.11};
	float total =0;
	for(int i=0;i<4;i++){
		total += money[i];
	}
	printf("total:%f\n",total);
	
	char id;
	scanf("%c",&id);
	double x;
	scanf("%lf",&x);
	if(id=='V'){
		if(x<=500)d=0.85;
		else if(x<=1000)d=0.8;
		else{
			d=0.75
			flag=true;
	
	long long n;
	scanf("%lld",&n);
	int cnt=0;
	while(n>1){
		if(n%2==1) n=n*3+1;
		else n/=2;
		cnt++;
		
		
	}
	cout<<cnt;
	
	char s[]="hello";
	for(int i=0;i<strlen(s);i++)
		cout<<s[i]<<endl; 
	for(int i=0;1<strlen(s);i++)
		cout<<s[i]<<endl;
	
	char s1[]="hello";
	s1[0]='H';
	cout<<s1<<endl;
	
	char s1[]="hello";
	strcpy(s1,"good");
	cout<<s1<<endl;
	
	int main(){
		char a[201]={0};
		
		char b[201]={0};
		cin>>a>>b;
		char t[201]={0};
		strcpy(t,a);
		strcpy(a,b);
		strcpy(b,t);
		cout<<a<<endl;
		cout<<b<endl;
	
	int main(){
	char s[1001]={0};
	cin.getline(s,1001);
	for(int i=strlen(s)-1;i>=0;1--)
	cout<<s[i];
	
	
		char a[201]={0};
		char b[201]={0};
		cin>>a>>b;
		if(strcmp(a,b)>0){
			strcat(b,a);
			cout<<b<<endl;
			
		}else{
			strcat(a,b);
			cout<<a<<endl;
		}
		
		int sum = 0;
		for(int i=0;i<10;i++){
			cin>>a[i];
			sum = sum + a[i];
			
		}
		cout<<" "<<sum;
		
		stu a={1,"yaya",98};
		cout<<a.id<<endl;
		cout<<a.name<<endl;
		cout<<a.score<<endl;
			
		rect a;
		cin >> a.c>>a.k;
		cout << (a.c+a.k)*2 << " " << a.c*a.k;
		
		for(int i=0;i<3;i++)
		cin>>a[i].id>>a[i].name>>a[i].score;
		for(int i=0;i<3;i++)
			cout<<a[i].id<<" "<<a[i].name<<" "<<a[i].score<<endl;
		
		for(int i=1;i<10;i++){
			for(int i=1;i<10;i++){
			cout << '*';
		}
		cout << endl;
		
		
		}
		
		int n,a;
		cin>>n>>a;
		for(int i=1;i<=n;i++){
			for(int i=1;i<=a;i++){
			cout << '*';
		}
		cout << endl;
		
	}
	
		cout<<"*****"<<endl;
		cout<<"*   *"<<endl;
		cout<<"*   *"<<endl;	
		cout<<"*   *"<<endl;
		cout<<"*****"<<endl;
		*/
	
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
			if(j==1 or j==n or i==n)
				cout << "*";
			else
			cout << " ";
					}
			
		}
		cout << endl;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	
	
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	
	
	
	
	    return 0;  
}

	
	
	
	
