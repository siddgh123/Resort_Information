#include<stdio.h>
int main()
{
   int no,p;
   
   printf("\n******************************************************************");
   printf("\n***************WELCOME TO RESORT INFORMATION SYSTEM***************");
   printf("\n******************************************************************");
 
   printf("\nTo see all caution use 6");
   printf("\nTo see all program shortcut use 7 ");
     right:
   printf("\n1.MAHARASHTRA");                               //selection of states
   printf("\n2.Rajasthan");
   printf("\n3.KARNATAK");
   printf("\n4.GUJRAT");
   printf("\n5.GOA");
   printf("\nEnter Your Choice:");
   scanf("%d",&p);
   
   switch(p)
   {
     case 1: s:                       //sate num 1 
             printf("\nDistricts in Maharashta");
             printf("\n1.Pune");
             printf("\n2.Thane");
             printf("\n3.Nashik");
             printf("\n4.Nagpur");
             printf("\nEnter your Choice:");
             scanf("%d",&no);
             if(no==1)
             {
                printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nA.Fort JadhavGADH-A GADH Heritage Hotel");
                printf("\n@Address: Jadhav Wadi, Hadapsar Saswad road,Pune");
                printf("\n@Contact No:56723412");
                printf("\n@Ratings:8.2");
                printf("\n@Reviews:447");
                printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nB.The Corinthians Resort & Club");
                printf("\n@Address:Nayti County, NIBM Annexe ,South Pune, Mohamadwadi,Pune");
                printf("\n@Contact No:1221342343");
                printf("\n@Ratings:7.9");
                printf("\n@Reviews:410");
                printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nC.Oxford Golf Resort");
                printf("\n@Address:Off Mumbai Banglore ,Bypass,Off crystal Honda Shoeroom ,");
                printf("\n@survey no:2000Bavdhan,Pune");
                printf("\n@Contact No:4512905423");
                printf("\n@Ratings:7.1");
                printf("\n@Reviews:389");
               printf("\n`````````````````````````````````````````````````````````````````");
             }
             else if(no==2)
             {
              printf("\n`````````````````````````````````````````````````````````````````");
               printf("\n\nA.Monteria Resort");
               printf("\n@Address:Adjacent to Nishiland Water Park Vinegaon, Khalapur,");
               printf("\n@Contact No:748598745");
               printf("\n@Ratings:7.0");
               printf("\n@Reviesws:489");
             printf("\n`````````````````````````````````````````````````````````````````");
               printf("\n\nB.Riverview Home Resort");
               printf("\n@Address:Dhamandivi, Parshuram Kshetra, Near Parshuram Temple, ");
               printf("\nTaluka Khed");
               printf("\n@Contact No:1274185278");
               printf("\n@Ratings:6.6");
               printf("\n@Reviews:400");
               printf("\n`````````````````````````````````````````````````````````````````");
               printf("\n\nC.Saffron Stays’ Nithyam");
               printf("\n@Address:Greenway Properties, Harnoli pada, Malawada Jawhar Rd");
               printf("\n@Contact No:174895474");
               printf("\n@Ratings:6.0");
               printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
               }
               else if(no==3)
               {
                printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nA.Viveda Wellness Village ");
                printf("\n@Address:Situated in Nashik, 10 km from Pandavlena Caves,");
                printf("\nViveda Wellness Village");
                printf("\n@Contact No:4578612345");
                printf("\n@Ratings:7.0");
                printf("\n@Reviews:440");
                printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nB.The Source At Sula");
                printf("\n\n@Address:located 10 km from Pandavlena Caves and 11 km from ");
                printf("\nSundarnarayan Temple.");
                printf("\n@Contact No:7423568974");
                printf("\n@Ratings:6.5");
                printf("\n@Reviews:350");
               printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nC.Soma Vineyard Resort");
                printf("\n@Address:Located in Nashik, 1.2 km from Sundarnarayan Temple");
                printf("\n@Contact No:7185723945");
                printf("\n@Ratings:5.5");
                printf("\n@Reviews:200");
                printf("\n`````````````````````````````````````````````````````````````````");
               }
               else if(no==4)
               {
                printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nA.Tuli Veer Bagh");
                printf("\n@Address:Bandra, Deolapar, NH 7, Nagpur");
                printf("\n@Contact No:742564582");
                printf("\n@Ratings:4.9");
                printf("\n@Reviews:330");
               printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nB.Tadoba Tiger Valley Resort");
                printf("\n@Address:Plot no.202, 1st floor, Ring Rd, Chatrapati Nagar, Nagpur");
                printf("\n@Contact No:7485967845");
                printf("\n@Ratings:4.2");
                printf("\n@Reviews:40");
               printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nC.Jungle Retreat Resort");
                printf("\n@Address: Thana Gaon Umred-Bhiwapur Road Tehsil Umred, Nagpur");
                printf("\n@Contact No:7414745689");
                printf("\n@Ratings:4.1");
                printf("\n@Reviews:350");
               printf("\n`````````````````````````````````````````````````````````````````");
                }
                else
                {
                  printf("\n");
                  }
                  printf("\nEnter:");
                  scanf("%d",&no);
                  if(no==8)
                  {
                    goto right;
                  }
                  if(no==9)
                  {
                    printf("\nHappy Journey!!!");
                    printf("\nThanks You !!!");
                  }
                  if(no==10)
                  {
                    goto s;
                  }
                  
                  break;
          
    case 2: e:            //sate num 2
            printf("\nDistricts in Rajasthan");

             printf("\n1.Ajmer");
             printf("\n2.Jodhpur");
             printf("\n3.Bharatpur");
             printf("\n4.Udaipur");
             printf("\nEnter your Choice:");
             scanf("%d",&no);
             if(no==1)
             {

              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.The Country Side Resorts");
              printf("\n@Address:Near Pushkar High Lake Bridge");
              printf("\n@Contact No:1547423656");
              printf("\n@Ratings:4.4");
              printf("\n@Reviews:150");
            printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Pratap Mahal Pushkar IHCL SeleQtion");
              printf("\n@Address:Pushkar 5.9 kms from Ana Sagar Lake");
              printf("\n@Contact No:124882645");
              printf("\n@Ratings:4.1");
              printf("\n@Reviews:350");
             printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Ananta Spa & Resort");
              printf("\n@Address: Pragati Nagar 4.5 kms from Ana Sagar Lake");
              printf("\n@Contact No:4769742612");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:150");
            printf("\n`````````````````````````````````````````````````````````````````");
            }
            else if(no==2)
            {
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.Shikargarh Palace Resort");
              printf("\n@Address:Near Mini Market,Jodhpur");
              printf("\n@Contact No:4567891235");
              printf("\n@Ratings:4.1");
              printf("\n@Reviews:500");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Amargarh Resort");
              printf("\n@Address:Close to Pal Balaji Mandir, Opp Shubham Farms,  ");
              printf("\n@Pal Road, Jodhpur");
              printf("\n@Contact No:4578124578");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Nirali Dhani");
              printf("\n@Address:Chopasni Road, near Chopasni Filter House Siddhanath ");
              printf("\nCircle, Jodhpur");
              printf("\n@Contact No:1234567897");
              printf("\n@Ratings:3.1");
              printf("\n@Reviews:150");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else if(no==3)
            {
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.The Birder's Inn");
              printf("\n@Address:2.4 kms from city centre");
              printf("\n@Contact No:4596871245");
              printf("\n@Ratings:4.0");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Pride Kadamb Kunj Resort Bharatpur");
              printf("\n@Address:5.0 kms from city centre");
              printf("\n@Contact No:1285748745");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:150");
             printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Dharma Resorts");
              printf("\n@Address:02 Kilometer Towards Agra Agra Road");
              printf("\n@Contact No:1245789634");
              printf("\n@Ratings:2.2");
              printf("\n@Reviews:100");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else if(no==4)
            {
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.The Oberoi Udaivilas Udaipur");
              printf("\n@Address:2.8km from city");
              printf("\n@Contact No:4578963156");
              printf("\n@Ratings:4.4");
              printf("\n@Reviews:444");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Abha Farms and Resort");
              printf("\n@Address:Udaipur, 4.1 km from Jagdish temple,");
              printf("\n@Contact No:1478523698");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Ramee Royal Resorts & Spa Udaipur");
              printf("\n@Address: 8 km from Lake Pichola");
              printf("\n@Contact No:4568527418");
              printf("\n@Ratings:3.1");
              printf("\n@Reviews:120");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else
                {
                  printf("\n");
                  }
                  printf("\nEnter:");
                  scanf("%d",&no);
                  if(no==8)
                  {
                    goto right;
                  }
                  if(no==9)
                  {
                    printf("\nHappy Journey!!!");
                    printf("\nThanks You !!!");
                  }
                  if(no==10)
                  {
                    goto e;
                  }
   
                break;
    case 3:  t:                     //state num3
             printf("\nDistricts in Karnataka");
             printf("\n1.Davangere");
             printf("\n2.Shivmogga");
             printf("\n3.Vijayapura");
             printf("\n4.Dharwad");
             printf("\nEnter your Choice:");
             scanf("%d",&no);
             if(no==1)
             {
          printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.Stunning apartment in Hauglandshella ");
              printf("\n@Address:Davangere");
              printf("\n@Contact No:457842681");
              printf("\n@Ratings:3.5");
              printf("\n@REviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Lauvøy Feriesenter ");
              printf("\n@Address:Situated in Askøy, 29 km from Bergen");
              printf("\n@Contact No:1597532584");
              printf("\n@Ratings:3.1");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Seaside apartment");
              printf("\n@Address:27 km from Steinsland");
              printf("\n@Contact No:1234568524");
              printf("\n@Ratings:2.5");
              printf("\n@Reviews:300");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else if(no==2)
            {
             printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.The Thash Resort");
              printf("\n@Address:B H Road Thyagarthi main road, Sagar, Karnataka");
              printf("\n@Contact No:1256897458");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Kalgreen Valley Resort");
              printf("\n@Address:Kalsapur Estate, Koppa Taluk, Chikmagalur, Karnataka");
              printf("\n@Contact No:125478557");
              printf("\n@Ratings:3.3");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Amruthavana Nature Resort");
              printf("\n@Adddress:Kattinahole, Mathikai Post, Hosanagara Taluk, ");
              printf("\nKundapura – Shimoga Road, Karnataka");
              printf("\n@Contact No:4152637485");
              printf("\n@Ratings:2.5");
              printf("\n@Reviews:200");
               printf("\n`````````````````````````````````````````````````````````````````");
             }
             else if(no==3)
             {
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.New Hotel Blue Moon");
              printf("\n@Address:National Highway 3, Margherita, Tinsukia - 786181,");
              printf("\n Near Town Committee Complex");
              printf("\n@Contact No:1245789635");
              printf("\n@Ratings4.0");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Apna Hotel");
              printf("\n@Address:Rajai Nagar 3rd Cross,, Ariyalur, Ariyalur");
              printf("\n@Contact No:45856842");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:333");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Manees Residency");
              printf("\n@Address:No 2905, Srinivasam Pillai Road, Thanjavur Ho, Thanjavur");
              printf("\n@Contact No:41256385748");
              printf("\n@Ratings:3.3");
              printf("\n@Reviews:780");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else if(no==4)
            {
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.The president Hotel");
              printf("\n@Address:Dharwad");
              printf("\n@Contact No:458966345");
              printf("\n@Ratings:4.5");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Hotel Naveen");
              printf("\n@Address:Dharwad");
              printf("\n@Contact No:45128596");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:102");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Denssions");
              printf("\n@Address:Dharwad");
              printf("\n@Contact No:126974322");
              printf("\n@Ratings:3.3");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else
                {
                  printf("\n");
                  }
                  printf("\nEnter:");
                  scanf("%d",&no);
                  if(no==8)
                  {
                    goto right;
                  }
                  if(no==9)
                  {
                    printf("\nHappy Journey!!!");
                    printf("\nThanks You !!!");
                  }
                  if(no==10)
                  {
                    goto s;
                  }
                  
                  break;
      case 4: a:                         //state num4
             printf("\nDistricts in Gujrat");
             printf("\n1.Ahmedabad");
             printf("\n2.Vadodara");
             printf("\n3.Jamnagar");
             printf("\n4.Gandhinagar");
             printf("\nEnter your Choice:");
             scanf("%d",&no);
             if(no==1)
             {
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.The Ummed Ahmedabad");
              printf("\n@Address:7.0 kms from Ahmedabad");
              printf("\n@Contact No:129764315");
              printf("\n@Ratings:4.4");
              printf("\n@Reviews:350");
             printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Cambay Sapphire");
              printf("\n@Address:24.1 kms from Ahmedabad");
              printf("\n@Contact No:45982364");
              printf("\n@Ratings:4.1");
              printf("\n@Reviews:200");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Aarohi Starz Club");
              printf("\n@Address:SG Highway 9.2 kms from Ahmedabad");
              printf("\n@Contact No:4599753112");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:333");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else if(no==2)
            {
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.Kamdhenu Resort");
              printf("\n@Address:Vododara");
              printf("\n@Contact No:123698547");
              printf("\n@Ratings:4.1");
              printf("\n@Reviews:333");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Jambughoda Jungle Resort");
              printf("\n@Address:55 kms from Vadodara");
              printf("\n@Contact No:555889965");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Banyan Paradise Resort");
              printf("\n@Address:Vododara");
              printf("\n@Contact No:6985327456");
              printf("\n@Ratings:3.1");
              printf("\n@Reviews:200");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else if(no==3)
            {
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.Holiday Garden Resort");
              printf("\n@Address:Near Jamnagar");
              printf("\n@Contact No:9638527411");
              printf("\n@Ratings:3.3");
              printf("\n@Reviews:350");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Parkland Club");
              printf("\n@Address:Jamnagar");
              printf("\n@Contact No:963546871");
              printf("\n@Ratings:3.1");
              printf("\n@Reviews:333");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.The Beach Villege");
              printf("\n@Address:Jamnagar");
              printf("\n@Contact No:63524178451");
              printf("\n@Ratings:3.1");
              printf("\n@Reviews:333");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else if (no==4)
            {
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nA.Infocity Club & Resort");
              printf("\n@Address:Gandhinagar");
              printf("\n@Contact No:9638527415");
              printf("\n@Ratings:4.1");
              printf("\n@Reviews:500");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nB.Aloka Club & REsort");
              printf("\n@Address:Gandhinagar");
              printf("\n@Contact No:8529637415");
              printf("\n@Ratings:3.5");
              printf("\n@Reviews:666");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\n\nC.Fortune in Haveli");
              printf("\n@Address: Gandhinagar");
              printf("\n@Contact No:8529639635");
              printf("\n@Ratings:2.5");
              printf("\n@Reviews:333");
              printf("\n`````````````````````````````````````````````````````````````````");
            }
            else
                {
                  printf("\n");
                  }
                  printf("\nEnter:");
                  scanf("%d",&no);
                  if(no==8)
                  {
                    goto right;
                  }
                  if(no==9)
                  {
                    printf("\nHappy Journey!!!");
                    printf("\nThanks You !!!");
                  }
                  if(no==10)
                  {
                    goto a;
                  }
                  
                  break;

      case 5: we:                       //state num5
             printf("\nDistricts in Goa");
             printf("\n1.North Goa");
             printf("\n2.South Goa");
             printf("\nEnter your Choice:");
             scanf("%d",&no);
             if(no==1)
             {
               printf("\n`````````````````````````````````````````````````````````````````");
               printf("\n\nA.W Goa");
               printf("\n@Address:North Goa");
               printf("\n@Contact No:8527419635");
               printf("\n@Ratings:4.4");
               printf("\n@Reviews:555");
                printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nB.Taj Fort Aguada Resort");
                printf("\n@Address:North Goa");
                printf("\n@Contact No:8527564132");
                printf("\n@Ratings:4.1");
                printf("\n@Reviews:250");
                 printf("\n`````````````````````````````````````````````````````````````````");
                 printf("\n\nC.Acron Waterfront Resort ");
                 printf("\n@Address:North Goa");
                 printf("\n@Contact No:568932567");
                 printf("\n@Ratings:3.1");
                 printf("\n@Reviews:200");
                 printf("\n`````````````````````````````````````````````````````````````````");
             }
             else if(no==2)
             {
               printf("\n`````````````````````````````````````````````````````````````````");
               printf("\n\nA.ITC Grand Goa");
               printf("\n@Address:South Goa");
               printf("\n@Contact No:9636532854");
               printf("\n@Ratings:4.1");
               printf("\n@Reviews:333");
                printf("\n`````````````````````````````````````````````````````````````````");
                printf("\n\nB.An IHG Hotel");
                printf("\n@Address");
                printf("\n@Contact No:9685741425365");
                printf("\n@Ratings:4.0");
                printf("\n@Reviews:350");
                 printf("\n`````````````````````````````````````````````````````````````````");
                 printf("\n\nC.Sterling Goa");
                 printf("\n@Address:South Goa");
                 printf("\n@Contact No:8956235689235");
                 printf("\n@Ratings:3.5");
                 printf("\n@Reviews:250");
                 printf("\n`````````````````````````````````````````````````````````````````");
               }
                else
                {
                  printf("\n");
                  }
                  printf("\nEnter:");
                  scanf("%d",&no);
                  if(no==8)
                  {
                    goto right;
                  }
                  if(no==9)
                  {
                    printf("\nHappy Journey!!!");
                    printf("\nThanks You !!!");
                  }
                  if(no==10)
                  {
                    goto we;
                  }
                  
                  break;

  case 6:      printf("\n`````````````````````````````````````````````````````````````````");//information about code
               printf("\nIn this system we have provided best resorts in 5 different sates.");
               printf("\nThis resorts are according to their districts.It may very helpful for finding");
               printf("\nBest resorts. In this we have provided hotel that are very comfortable for you  ");
               printf("\nAnd your family members.This resorts are rated greater than minimum 3 satrs.");
               printf("\nSo this are best resorts.This are all in your range with first class service");
               printf("\nYou can contact hotel for more information.We already have provided contact");
               printf("\nNumber withHotel information.So you can check.");
               printf("\nFor 24 hours=Min 3000Rs   - Max 7000Rs");
               printf("\nFor Day only=Min 1500Rs   - Max 5000Rs");
               printf("\nFor Night only=Min 2000Rs - Max 4000Rs ");
               printf("\nEnjoy Your Holidy WithBest Resorts!!!");
               printf("\n`````````````````````````````````````````````````````````````````");
               printf("\n");
                printf("\nEnter");
                  scanf("%d",&no);
                  if(no==8)
                  {
                    goto right;
                  }
                  if(no==9)
                  {
                    printf("\nHappy Journey!!!");
                    printf("\nThanks You !!!");
                  }
                  
                  break;

  case 7:     printf("\n`````````````````````````````````````````````````````````````````");
               printf("\n#Use only Numbers for selection between 1-9");//shortcuts
                
                printf("\n#To main menue use 8");
              printf("\n#To go in respected state use 10"); 
              printf("\n#To exit use 9");
              printf("\n`````````````````````````````````````````````````````````````````");
              printf("\nEnter");
                  scanf("%d",&no);
                  if(no==8)
                  {
                    goto right;
                  }
                  if(no==9)
                  {
                    printf("\nHappy Journey!!!");
                    printf("\nThanks You !!!");
                  }
                  
                  break;
              
  }
  return 0;
}