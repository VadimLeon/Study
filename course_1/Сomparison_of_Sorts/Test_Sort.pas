program Test_Sort;
uses CRT,Menubible,Bible_sort,Laba_work;

var
  MK,MKMW,i:integer;
  WorkResultArray:TSortsResultArray;
  SortNames:array[1..6]of string:=('Пузырёк','улучшенный пузырёк','вставками','Шелл','слияниями','поиском минимального');
  ResultArray:TSortsResultArray;
  
begin
  repeat
    MK:= FSelectCommand(MenuCommandName,4);
    
    case MK of
      1:begin
          CLRSCR;
          writeln('программа завершена');
          readln;
        end;
    
      2:begin
          CLRSCR;
          MKMW:= FSelectCommand(MenuCommandNameMassWork,4);
          
          case MKMW of
            1:begin
                MasConst;
              end;

            2:begin
                GetRandom(5000);
              end;
            
            3:begin
                GetFromFile('Array.txt'); //название файла вводить тут
              end;
            
            4:begin
              end;
            
          end;
        end;  
        
      3:begin
              CLRSCR;
              
               begin
                ToWork;
                MillisecondsDelta;              
                Puzirek(WorkArray,WN);                              
                WorkResultArray[1].SortTime:= MillisecondsDelta;
                WorkResultArray[1].SortArray:= WorkArray;
                WorkResultArray[1].SortArrayN:= WN;
               end;
                
                 begin             
                  ToWork;
                  MillisecondsDelta;              
                  Puzirekbest(WorkArray,WN);                       
                  WorkResultArray[2].SortTime:= MillisecondsDelta;
                  WorkResultArray[2].SortArray:= WorkArray;
                  WorkResultArray[2].SortArrayN:= WN;
                 end;
                 
                    begin
                      ToWork;
                      MillisecondsDelta;
                      Vstavki(WorkArray,WN);
                      WorkResultArray[3].SortTime:= MillisecondsDelta;
                       WorkResultArray[3].SortArray:= WorkArray;
                       WorkResultArray[3].SortArrayN:= WN;
                  end;
              
                  begin
                   ToWork;
                   MillisecondsDelta;              
                   shell(WorkArray,WN);                        
                   WorkResultArray[4].SortTime:= MillisecondsDelta;
                   WorkResultArray[4].SortArray:= WorkArray;
                   WorkResultArray[4].SortArrayN:= WN;
                  end;
              
                
              
                    begin
                     ToWork;
                     MillisecondsDelta;              
                     sliyanie(WorkArray,WN);                          
                     WorkResultArray[5].SortTime:= MillisecondsDelta;
                     WorkResultArray[5].SortArray:= WorkArray;
                     WorkResultArray[5].SortArrayN:= WN;
                    end;
              
                     begin
                       ToWork;
                       MillisecondsDelta;              
                       Vstavki(WorkArray,WN);                          
                       WorkResultArray[6].SortTime:= MillisecondsDelta;
                       WorkResultArray[6].SortArray:= WorkArray;
                       WorkResultArray[6].SortArrayN:= WN;
                     end;
             
        end;
        
          4:begin
          CLRSCR;
            ResultArray:=WorkResultArray;
             begin
             for i:= 1 to 6 do
                 begin
                   writeln(SortNames[i]);     
                   writeln(ResultArray[i].SortTime);
                 end;
             readln;
             end;
          
        end;        
    end;
  until(MK=1);

end.