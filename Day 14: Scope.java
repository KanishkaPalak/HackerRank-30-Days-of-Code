	Difference (int [] a)
    {
        this.elements=a;
    }
    void computeDifference()
    {
        int d;
        maximumDifference=Math.abs(elements[0]-elements[1]);
        for(int i=0;i<(elements.length-1);i++)
        {
            for(int j=i+1;j<elements.length;j++)
            {
                d=Math.abs(elements[i]-elements[j]);
                if(d>=maximumDifference)
                    maximumDifference=d;
            }
        }
    }

