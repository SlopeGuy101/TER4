int segments[] = {2, 3, 4, 5, 6, 7, 8};
int commons[] = {9, 10, 11, 12};

void setup(){
  for(int i = 0; i < 7; i++)
    pinMode(segments[i], OUTPUT);

  for(int i = 0; i < 4; i++)
    pinMode(commons[i], OUTPUT);
}

void loop(){
  int counter = 0;
  int minuteCounter = 0;
  
  for(int th = 0; th < 2; th++){
    switch(th){
      case 0:
          for(int h = 0; h < 10; h++){
            do{
              switch(h){
                case 0:               
                  for(int tm = 0; tm < 6; tm++){
                    switch(tm){
                      case 0:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }
                      case 1:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                one(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                      case 2:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                two(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                      case 3:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                three(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                      case 4:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                four(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                      case 5:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                zero(1);
                                delay(1);
                                five(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                    }
                  }
                  
                  break;

                case 1:
                  zero(0);
                  delay(1);
                  one(1);
                  delay(1);
                  counter++;

                  for(int tm = 0; tm < 6; tm++){
                    switch(tm){
                      case 0:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                zero(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }
                      case 1:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                one(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                      case 2:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                two(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                      case 3:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                three(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                      case 4:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                four(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                      case 5:
                        for(int m = 0; m < 10; m++){
                          do{
                            switch(m){
                              case 0:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                zero(3);
                                delay(1);
                                counter++;
                                break;

                              case 1:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                one(3);
                                delay(1);
                                counter++;
                                break;

                              case 2:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                two(3);
                                delay(1);
                                counter++;
                                break;

                              case 3:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                three(3);
                                delay(1);
                                counter++;
                                break;

                              case 4:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                four(3);
                                delay(1);
                                counter++;
                                break;

                              case 5:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                five(3);
                                delay(1);
                                counter++;
                                break;

                              case 6:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                six(3);
                                delay(1);
                                counter++;
                                break;

                              case 7:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                seven(3);
                                delay(1);
                                counter++;
                                break;

                              case 8:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                eight(3);
                                delay(1);
                                counter++;
                                break;

                              case 9:
                                zero(0);
                                delay(1);
                                one(1);
                                delay(1);
                                five(2);
                                delay(1);
                                nine(3);
                                delay(1);
                                counter++;
                                break;
                            }
                          }
                          while(counter < 15000);
                        }

                    }
                  }
                  
                  break;

                case 2:
                  zero(0);
                  delay(1);
                  two(1);
                  delay(1);
                  counter++;
                  break;

                case 3:
                  zero(0);
                  delay(1);
                  three(1);
                  delay(1);
                  counter++;
                  break;

                case 4:
                  zero(0);
                  delay(1);
                  four(1);
                  delay(1);
                  counter++;
                  break;

                case 5:
                  zero(0);
                  delay(1);
                  five(1);
                  delay(1);
                  counter++;
                  break;

                case 6:
                  zero(0);
                  delay(1);
                  six(1);
                  delay(1);
                  counter++;
                  break;

                case 7:
                  zero(0);
                  delay(1);
                  seven(1);
                  delay(1);
                  counter++;
                  break;

                case 8:
                  zero(0);
                  delay(1);
                  eight(1);
                  delay(1);
                  counter++;
                  break;

                case 9:
                  zero(0);
                  delay(1);
                  nine(1);
                  delay(1);
                  counter++;
                  break;
              }
            }
            while(counter < (3600000 / 2));
          }
                
      case 1:
          for(int h = 0; h < 10; h++){
            do{
              switch(h){
                case 0:
                  one(0);
                  delay(1);
                  zero(1);
                  delay(1);
                  counter++;
                  break;

                case 1:
                  one(0);
                  delay(1);
                  one(1);
                  delay(1);
                  counter++;
                  break;

                case 2:
                  one(0);
                  delay(1);
                  two(1);
                  delay(1);
                  counter++;
                  break;

                case 3:
                  one(0);
                  delay(1);
                  three(1);
                  delay(1);
                  counter++;
                  break;

                case 4:
                  one(0);
                  delay(1);
                  four(1);
                  delay(1);
                  counter++;
                  break;

                case 5:
                  one(0);
                  delay(1);
                  five(1);
                  delay(1);
                  counter++;
                  break;

                case 6:
                  one(0);
                  delay(1);
                  six(1);
                  delay(1);
                  counter++;
                  break;

                case 7:
                  one(0);
                  delay(1);
                  seven(1);
                  delay(1);
                  counter++;
                  break;

                case 8:
                  one(0);
                  delay(1);
                  eight(1);
                  delay(1);
                  counter++;
                  break;

                case 9:
                  one(0);
                  delay(1);
                  nine(1);
                  delay(1);
                  counter++;
                  break;
              }
            }
            while(counter < (3600000 / 2));
          }
        break;
        
      case 2:
          for(int h = 0; h < 5; h++){
            do{
              switch(h){
                case 0:
                  two(0);
                  delay(1);
                  zero(1);
                  delay(1);
                  counter++;
                  break;

                case 1:
                  two(0);
                  delay(1);
                  one(1);
                  delay(1);
                  counter++;
                  break;

                case 2:
                  two(0);
                  delay(1);
                  two(1);
                  delay(1);
                  counter++;
                  break;

                case 3:
                  two(0);
                  delay(1);
                  three(1);
                  delay(1);
                  counter++;
                  break;

                case 4:
                  two(0);
                  delay(1);
                  four(1);
                  delay(1);
                  counter++;
                  break;
              }
            }
            while(counter < (3600000 / 2));
          }
        }
    }
  }

  


void setDigit(int digit){
  for(int i = 0; i < 4; i++)
    digitalWrite(commons[i], HIGH);
  digitalWrite(commons[digit], LOW);
}

void clearDisplay(){
  for(int i = 0; i < 7; i++)
    digitalWrite(segments[i], LOW);
}

void zero(int digit){
  clearDisplay();
  setDigit(digit);
  for(int i = 0; i < 7; i++)
    digitalWrite(segments[i], HIGH);
  digitalWrite(segments[6], LOW);
}

void one(int digit){
  clearDisplay();
  setDigit(digit);
  digitalWrite(segments[1], HIGH);
  digitalWrite(segments[2], HIGH);
}

void two(int digit){
  clearDisplay();
  setDigit(digit);
  digitalWrite(segments[0], HIGH);
  digitalWrite(segments[1], HIGH);
  digitalWrite(segments[6], HIGH);
  digitalWrite(segments[4], HIGH);
  digitalWrite(segments[3], HIGH);
}

void three(int digit){
  clearDisplay();
  setDigit(digit);
  digitalWrite(segments[0], HIGH);
  digitalWrite(segments[1], HIGH);
  digitalWrite(segments[2], HIGH);
  digitalWrite(segments[3], HIGH);
  digitalWrite(segments[6], HIGH);
}

void four(int digit){
  clearDisplay();
  setDigit(digit);
  digitalWrite(segments[1], HIGH);
  digitalWrite(segments[6], HIGH);
  digitalWrite(segments[2], HIGH);
  digitalWrite(segments[5], HIGH);
}

void five(int digit){
  clearDisplay();
  setDigit(digit);
  digitalWrite(segments[0], HIGH);
  digitalWrite(segments[5], HIGH);
  digitalWrite(segments[6], HIGH);
  digitalWrite(segments[2], HIGH);
  digitalWrite(segments[3], HIGH);
}

void six(int digit){
  clearDisplay();
  setDigit(digit);
  digitalWrite(segments[0], HIGH);
  digitalWrite(segments[5], HIGH);
  digitalWrite(segments[6], HIGH);
  digitalWrite(segments[2], HIGH);
  digitalWrite(segments[3], HIGH);
  digitalWrite(segments[4], HIGH);
}

void seven(int digit){
  clearDisplay();
  setDigit(digit);
  digitalWrite(segments[1], HIGH);
  digitalWrite(segments[2], HIGH);
  digitalWrite(segments[0], HIGH);
}

void eight(int digit){
  clearDisplay();
  setDigit(digit);
  for(int i = 0; i < 7; i++)
    digitalWrite(segments[i], HIGH);
}

void nine(int digit){
  clearDisplay();
  setDigit(digit);
  digitalWrite(segments[0], HIGH);
  digitalWrite(segments[1], HIGH);
  digitalWrite(segments[2], HIGH);
  digitalWrite(segments[6], HIGH);
  digitalWrite(segments[5], HIGH);
}
