unit Bible_sort;
interface
 
uses Laba_work;

procedure Puzirek(var A:TArrayInt; N:integer);
procedure Puzirekbest(var A:TArrayInt; N:integer);
procedure Vstavki(var A:TArrayInt; N:integer);
procedure shell(var A:TArrayInt;N:integer); 
procedure sliyanie(var A:TArrayInt; N:integer);
implementation
procedure Puzirek(var A:TArrayInt; N:integer);
  var L,B,i:integer;
      f:boolean;
  begin
      L:=N-1;      
      repeat
        f:=false;    
        for i:= 1 to L do 
          begin
          if (A[i]>A[i+1]) then
            begin
              B:=A[i];
              A[i]:=A[i+1];
              A[i+1]:=B;
              f:= true;
            end;
          end;
        L:=L-1;
    until(f=false);      
  end;
procedure Puzirekbest(var A:TArrayInt; N:integer);
  var i,Left,Right,B:integer;
      f: boolean;
  begin
    Left := 1;
    Right := N-1;
    repeat
      f:=false;
    for i:= Left to Right do
        if (A[i]>A[i+1]) then
          begin
            B:=A[i];
            A[i]:=A[i+1];
            A[i+1]:=B;
            f:= true;
          end;
    if (f=true) then
        begin
          f:=false;
          for i:= Right downto Left+1 do 
            if (A[i]<A[i-1]) then
              begin
                B:=A[i];
                A[i]:=A[i-1];
                A[i-1]:=B;
                f:=true;
              end;
          Left:=Left+1;
          Right:=Right-1;
        end;
      until(f=false);
  end;
procedure Vstavki(var A:TArrayInt; N:integer);
  var i,j,L,Min:integer;
  begin
    for i:= 1 to N-1 do
      begin
        Min := A[i]; 
        L := i;
        for j:= i+1 to N do
          begin
            if (Min>A[j]) then
              begin
                Min := A[j];
                L := j;
              end;
           A[L]:=A[i];
           A[i]:=Min;
        end;
    end;
  end;
procedure shell(var A:TArrayInt;N:integer);
  var
    L,K,i:integer;
    f:boolean;
    B:integer;
  begin
    K:=N ;
    L:=N-1;
    repeat
      f:=false;
      K:=(K+1) div 2;
      for i:= 1 to L-K+1 do
        if (A[i]>A[i+K]) then
          begin
            B:=A[i];
            A[i]:=A[i+K];
            A[i+K]:=B;
            f:= true;
          end;    
      if K=1 then L:=L-1;    
    until(K=1)and(f=false);
  end;

//------------------------------------------------------------------------------

procedure MassivMerger(const First:TArrayFirstInt; const Second:TArraySecondInt; const NF,NS:integer; var Rezult:TArrayInt;k:integer);
  var 
    i,j,M:integer;
    flagFirst,flagSecond:boolean;
    begin    
    i:=1;
    j:=1;
    M:=0;
    flagFirst:=false;
    flagSecond:=false;    
    while (M <(NF+NS))do
      begin
        if (i>NF) then flagFirst:=true;
        if (j>NS) then flagSecond:=true;
        if(flagFirst=true) then
          begin
            Rezult[k+M]:=Second[j];
            j:=j+1;
          end
        else
          if (flagSecond=true)then
            begin
              Rezult[k+M]:=First[i];
              i:=i+1;
            end
          else
            if First[i]<=Second[j] then
              begin
                Rezult[k+M]:=First[i];
                i:=i+1;
              end
            else
              begin
                Rezult[M+k]:= Second[j];
                j:=j+1;
              end; 
        M:=M+1;
      end;      
   M:=M-1;     
  end;
//------------------------------------------------------------------------------
procedure sliyanie(var A:TArrayInt; N:integer);
  var 
      First:TArrayFirstInt;
      Second:TArraySecondInt;
      NF,NS,i,d,k:integer;      
  begin
    d:=1;
    while (d<N) do
      begin
        k:=1;
        while (k<N) do 
          begin
            NF:=0;
            i:=k;
            while(i<k+d) and (i<=N) do
              begin
                NF:=NF+1;
                First[NF]:=A[i];
                i:=i+1;
              end;
            NS:=0;
            i:=k+d;
            while(i<k+2*d) and (i<=N) do
              begin
                NS:=NS+1;
                Second[NS]:=A[i];
                i:=i+1;
              end;
            MassivMerger(First,Second,NF,NS,A,k);
            k:=k+2*d;                     
          end;
          d:=d*2;
        end;    
  end;
begin
end.