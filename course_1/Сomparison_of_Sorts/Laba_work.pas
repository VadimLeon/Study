unit Laba_work;
interface

const
  Nmax = 100001;
type
  TArrayInt= array[1..Nmax] of integer;
  TArrayFirstInt = array[1..Nmax] of integer;
  TArraySecondInt = array[1..Nmax div 2] of integer;
  TTimeSort = integer;
  
  
  TResultArray = record
                   SortArray:TArrayInt;
                   SortArrayN:integer;
                   SortTime:TTimeSort;
                 end;
  TSortsResultArray=array[1..6] of TResultArray;          

var
  WorkArray:TArrayInt;
  WN:integer;
  

procedure MasConst;
procedure GetRandom(Count:integer);
procedure GetFromFile(FileName:string);
procedure ToWork;

implementation
var
  CurArray:TArrayInt;
  CN:integer;

procedure MasConst;
  var
    arr:array[1..17] of integer:=(734,4659,6134,4341,7886,8114,9703,3166,2622,5089,4091,1560,1146,5031,1967,3235,4406);
   i:integer;
  begin
    CN:=17;
    for i:= 1 to 17 do CurArray[i]:=arr[i];
  end;

procedure GetRandom(Count:integer);
  var
    i:integer;
  begin
    randomize;
    CN:=Count;
    for i:= 1 to Count do
      CurArray[i]:=random(Count);
  end;

procedure GetFromFile(FileName:string);
  var
    t:text;
  begin
    Assign(t,FileName);
    reset(t);
    while (Not Eof(t))do 
      begin
        CN:=CN+1;
        readln(t,CurArray[CN]);
      end;
    Close(t);
  end;

procedure ToWork;
  var i:integer;
  begin
    WN:=CN;
    for i:=1 to CN do 
      WorkArray[i]:=CurArray[i];
  end;
 
begin
end.