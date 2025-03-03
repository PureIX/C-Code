#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int N;
int i;
int main()
{
    cout<<"\n________________________________________________________________________________\n\n";
    cout<<"\n______________________________IN THE NAME OF GOD________________________________\n\n";

    cout<<"Pure IX          OSTAD DEHNAVI                        BAHMANE 1401 \n";
    cout<<"\n________________________________________________________________________________\n\n";
    cout << "Tedade Projeha ra vared konid : ";
    cin >> N;
    float proj[N][10];
    float min[1];

    for (int i = 0; i < N; i++)
    {
        cout << "Maghadire projeye " << i + 1 << " :\n\n";

        cout << " P :";
        cin >> proj[i][0];

        cout << " n :";
        cin >> proj[i][1];

        cout << " sv :";
        cin >> proj[i][2];

        cout << " OC[Hazine Saliane(A)] :";
        cin >> proj[i][3];

        cout << " GI[Daramad Saliane(A)] :";
        cin >> proj[i][4];

        cout << " G1[Shibe yeknavakhte Hazine  Saliane] :";
        cin >> proj[i][5];

        cout << " G2[Shibe yeknavakhte Daramad  Saliane] :";
        cin >> proj[i][6];

        cout << " MARR%(0<MARR<10 , MARR% /100 ) :";
        cin >> proj[i][7];

        cout << " n1[Shorou Hazine yeknavakht saliane] :";
        cin >> proj[i][8];

        cout << " n2[Shorou Daramade yeknavakht saliana] :";
        cin >> proj[i][9];
        
        cout<<"\n______________________________________________________________\n";
    }
    int k;
        cout<<"\n------------------------ENTEKHABE RAVESH------------------------\n";
    cout << "Az kodam Ravesh mikhahid Estefade konid ?\n" << endl;
    
    cout << "\n 1-NPW \n 2-NEUA \n 3-ROR \n\n ";
    cout << "(Baraye projehaye ba sen nabarabar az raveshe NEUA estefade konid)\n Raveshe Shomare : ";
    cin >> k;
    cout << "\n\n";
    //-----------------------------------------------------------------------------------------------------------------------
    if (k == 1)
    {
        float npw1[N];
        for (int i = 0; i < N; i++)
        {

            npw1[i] = proj[i][0] + ((1 / (pow((1 + proj[i][7]), proj[i][8] - 1))) * proj[i][3] * ((pow((1 + proj[i][7]), proj[i][1] - proj[i][8] + 1) - 1) / (proj[i][7] * pow((1 + proj[i][7]), proj[i][1] - proj[i][8] + 1)))) - ((1 / (pow((1 + proj[i][7]), proj[i][9] - 1))) * proj[i][4] * ((pow((1 + proj[i][7]), proj[i][1] - proj[i][9] + 1) - 1) / (proj[i][7] * pow((1 + proj[i][7]), proj[i][1] - proj[i][9] + 1)))) - proj[i][2] * (1 / pow((1 + proj[i][7]), proj[i][1])) + ((proj[i][5] / proj[i][7]) * (((pow((1 + proj[i][7]), proj[i][1]) - 1) / (proj[i][7] * pow((1 + proj[i][7]), proj[i][1]))) - ((proj[i][1]) / (pow((1 + proj[i][7]), proj[i][1])))) - ((proj[i][6] / proj[i][7]) * (((pow((1 + proj[i][7]), proj[i][1]) - 1) / (proj[i][7] * pow((1 + proj[i][7]), proj[i][1]))) - ((proj[i][1]) / (pow((1 + proj[i][7]), proj[i][1]))))));

            cout << "npw " << i + 1 << " : " << npw1[i] << endl;
        }
        if (N == 1)
        {
            if (npw1[0] < 0)
            {
                cout << "This is an economic project ";
            }
            else
                cout << "This isn't an economic project ";
        }
        else
        {

            int l; // locate

            min[0] = npw1[0];
            l = 0;
            for (int i = 0; i < N; i++)
            {
                if (npw1[i] < min[0])
                {
                    min[0] = npw1[i];
                    l = i;
                }
            }

            cout << "\n"
                 << min[0] << " = minimum\n\n The best economic Project :  " << l + 1;
        }
    }
//----------------------------------------------------------------------------------------------------------------------
    if (k == 2)
    {
        float eua1[N];
        for (int i = 0; i < N; i++)
        {

            eua1[i] = (proj[i][0] * ((proj[i][7] * (pow((1 + proj[i][7]), proj[i][1]))) / ((pow((1 + proj[i][7]), proj[i][1])) - 1))) - proj[i][2] * (proj[i][7] / (pow(1 + proj[i][7], proj[i][1]) - 1)) + ((1 / (pow((1 + proj[i][7]), proj[i][8] - 1))) * proj[i][3] * ((pow((1 + proj[i][7]), proj[i][1] - proj[i][8] + 1) - 1) / (proj[i][7] * pow((1 + proj[i][7]), proj[i][1] - proj[i][8] + 1)))) * ((proj[i][7] * (pow((1 + proj[i][7]), proj[i][1]))) / ((pow((1 + proj[i][7]), proj[i][1])) - 1)) - ((1 / (pow((1 + proj[i][7]), proj[i][9] - 1))) * proj[i][4] * ((pow((1 + proj[i][7]), proj[i][1] - proj[i][9] + 1) - 1) / (proj[i][7] * pow((1 + proj[i][7]), proj[i][1] - proj[i][9] + 1)))) * ((proj[i][7] * (pow((1 + proj[i][7]), proj[i][1]))) / ((pow((1 + proj[i][7]), proj[i][1])) - 1)) + (proj[i][5] * ((1 / proj[i][7]) - (proj[i][1] / (pow((1 + proj[i][7]), proj[i][1]) - 1)))) - (proj[i][6] * ((1 / proj[i][7]) - (proj[i][1] / (pow((1 + proj[i][7]), proj[i][1]) - 1))));

            cout << "eua " << i + 1 << " : " << eua1[i] << endl;
        }
        if (N == 1)
        {
            if (eua1[0] < 0)
            {
                cout << "This is an economic project ";
            }
            else
                cout << "This isn't an economic project ";
        }
        else
        {
            int l; // locate
            min[0] = eua1[0];
            l = 0;
            for (int i = 0; i < N; i++)
            {
                if (eua1[i] < min[0])
                {
                    min[0] = eua1[i];
                    l = i;
                }
            }

            cout << "\n"
                 << min[0] << " = minimum\n\n The best economic Project :  " << l + 1;
        }
    }
    //------------------------------------------------------------------------------------------------------------------
    if (k == 3)
    {

        int y[100];
        float x[100];
        float ror1[100];

        if (N == 1)
        {
            for (int i = 0; i < N; i++)
            {

                proj[i][0] + ((1 / (pow((1 + x[i]), proj[i][8] - 1))) * proj[i][3] * ((pow((1 + x[i]), proj[i][1] - proj[i][8] + 1) - 1) / (x[i] * pow((1 + x[i]), proj[i][1] - proj[i][8] + 1)))) - ((1 / (pow((1 + x[i]), proj[i][9] - 1))) * proj[i][4] * ((pow((1 + x[i]), proj[i][1] - proj[i][9] + 1) - 1) / (x[i] * pow((1 + x[i]), proj[i][1] - proj[i][9] + 1)))) - proj[i][2] * (1 / pow((1 + x[i]), proj[i][1])) + ((proj[i][5] / x[i]) * (((pow((1 + x[i]), proj[i][1]) - 1) / (x[i] * pow((1 + x[i]), proj[i][1]))) - ((proj[i][1]) / (pow((1 + x[i]), proj[i][1])))) - ((proj[i][6] / x[i]) * (((pow((1 + x[i]), proj[i][1]) - 1) / (x[i] * pow((1 + x[i]), proj[i][1]))) - ((proj[i][1]) / (pow((1 + x[i]), proj[i][1])))))) == 0;

                ror1[0] = x[i];
                cout<< "ROR"<<i+1<<" : "<<ror1[0]<<endl;

                if (ror1[0] <= proj[0][7])
                {
                	  
                    cout << "project is economic";
                }

                else


                    cout << "project isn't economic";
            }
        }
        else if (N > 1)
        {
            for (int i = 0; i < N; i++) // marhale aval hesab kardan nerkh bazgashte tak take projeha
            {

                proj[i][0] + ((1 / (pow((1 + x[i]), proj[i][8] - 1))) * proj[i][3] * ((pow((1 + x[i]), proj[i][1] - proj[i][8] + 1) - 1) / (x[i] * pow((1 + x[i]), proj[i][1] - proj[i][8] + 1)))) - ((1 / (pow((1 + x[i]), proj[i][9] - 1))) * proj[i][4] * ((pow((1 + x[i]), proj[i][1] - proj[i][9] + 1) - 1) / (x[i] * pow((1 + x[i]), proj[i][1] - proj[i][9] + 1)))) - proj[i][2] * (1 / pow((1 + x[i]), proj[i][1])) + ((proj[i][5] / x[i]) * (((pow((1 + x[i]), proj[i][1]) - 1) / (x[i] * pow((1 + x[i]), proj[i][1]))) - ((proj[i][1]) / (pow((1 + x[i]), proj[i][1])))) - ((proj[i][6] / x[i]) * (((pow((1 + x[i]), proj[i][1]) - 1) / (x[i] * pow((1 + x[i]), proj[i][1]))) - ((proj[i][1]) / (pow((1 + x[i]), proj[i][1])))))) == 0;
                ror1[0] = x[i];
                if (ror1[i] >= proj[i][7]) // moghayese nrkhe jadid ba marr va hazfe oonhaii ke in vijegi ra nadarand
                {
                    y[i] = 1;
                }

                else
                {
                    y[i] = 0;
                }
            }
            int barande = N / 2;
            int c = 1;
            int jadid = barande - c;
        loop:
            if (barande >= 0) // baraye hale proje ekhtelafi e projeha be soorat do be do in halghe ra tarif mikonim ke dar an barande
            {
                int n; // har do proje ba proje ghabli moghayese mishavad

                if (y[barande] == 0)
                    n = 1;
                if (y[jadid] == 0)
                    n = 0;

                if (proj[barande][1] == proj[jadid][1]) // projeha ba sen e yeksan
                {
                    for (int i = 0; i < N; i++)
                    {
                        proj[i][0] = proj[barande][0] - proj[jadid][0];
                        proj[i][2] = proj[barande][2] - proj[jadid][2];
                        proj[i][3] = proj[barande][3] - proj[jadid][3];
                        proj[i][4] = proj[barande][4] - proj[jadid][4];
                        proj[i][7] = proj[barande][7] - proj[jadid][7];
                        proj[i][8] = proj[barande][8] - proj[jadid][8];
                    }
                    proj[i][0] + ((1 / (pow((1 + x[i]), proj[i][8] - 1))) * proj[i][3] * ((pow((1 + x[i]), proj[i][1] - proj[i][8] + 1) - 1) / (x[i] * pow((1 + x[i]), proj[i][1] - proj[i][8] + 1)))) - ((1 / (pow((1 + x[i]), proj[i][9] - 1))) * proj[i][4] * ((pow((1 + x[i]), proj[i][1] - proj[i][9] + 1) - 1) / (x[i] * pow((1 + x[i]), proj[i][1] - proj[i][9] + 1)))) - proj[i][2] * (1 / pow((1 + x[i]), proj[i][1])) == 0;

                    if (x[i] >= proj[i][7])
                    {
                        if (proj[barande][0] > proj[jadid][0])
                        {
                            n = 0;
                        }
                        else if (proj[barande][0] < proj[jadid][0])
                        {
                            n = 1;
                        }
                    }
                    else
                    {
                        if (proj[barande][0] > proj[jadid][0])
                            n = 1;
                        else if (proj[barande][0] < proj[jadid][0])
                            n = 0;
                        barande--;

                        if (n == 0)
                        {
                            c++;
                        }
                        if (n == 1)
                        {
                            barande = jadid;
                            c++;
                        }
                        goto loop;
                        cout << "best economics project is: " << barande;
                    }
                }
                else if (proj[barande][0] = !proj[jadid][0])
                {
                    cout << "\n\nif you have projects with unequal age ,use NEUA";
                }
            }
        }
    }

    getch();
}
