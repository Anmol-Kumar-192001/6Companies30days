   int doOverlap(int l1[], int r1[], int l2[], int r2[]) {

        int ld[2],ru[2],l2d[2],r2u[2];
        ld[0]=l1[0];
        ld[1]=r1[1];
        ru[0]=r1[0];
        ru[1]=l1[1];

        l2d[0]=l2[0];
        l2d[1]=r2[1];
        r2u[0]=r2[0];
        r2u[1]=l2[1];

        if(r2[0]<ld[0]||l2[1]<r1[1]||l2[0]>r1[0]||r2[1]>l1[1]){
            return 0;
        }
        else{
            return 1;
        }

    }
