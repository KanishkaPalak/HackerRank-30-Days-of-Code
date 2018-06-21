class Student :  public Person{
	public:
		vector <int> testScores;  
    int n;
	public:
       
        Student(string first, string last, int Id,vector <int> score):Person(first, last, Id),testScores(score)
        {
        }
   
        char calculate()
        {   int sum=0;
            float avg=0.0;
         n=testScores.size();
        
         
            for(int j=0;j<n;j++)
            {
                sum+=testScores[j];
            }
            avg=sum/n;
            if(avg>=90 && avg<=100){return 'O';}
            else if(avg>=80 && avg<90){return 'E';}
            else if(avg>=70 && avg<80){return 'A';}
            else if(avg>=55 && avg <70){return 'P';}
            else if(avg>=40 && avg<55){return 'D';}
            else {return 'T';}
        }
        
};
