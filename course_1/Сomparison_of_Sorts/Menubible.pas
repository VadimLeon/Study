unit Menubible;
interface
uses crt;
type  TMenComName = array [1..7] of string;

function FSelectCommand(FMenuCommandName : TMenComName; FN:integer) : integer; 
  
var
  MenuColor : Byte := blue;
  MenuFonColor : Byte := white;
  MenuCommandName : TMenComName :=('Выход','Выбор типа массива','Запуск сортировок','Результаты','','','') ;
  MenuCommandNameSort : TMenComName :=('Пузырёк',' улучшенный Пузырёк','вставками',' Шелл',' слияниями','поиском минимального','назад') ;
  MenuCommandNameMassWork : TMenComName :=('константный массив','случайный массив','массив из файла','назад','','','');
  
  

implementation

function FSelectCommand(FMenuCommandName : TMenComName; FN:integer) : integer; 
  var Fi,Fk:integer;
      Fcod:byte;
  begin
    FK:=1;
    SetWindowSize(60,40);
    TextBackground(MenuFonColor);
    repeat
      writeln();
      CLRSCR;
      TextBackground(MenuFonColor);
      TextColor(MenuColor);
      for Fi:= 1 to FN do
        begin
          if(Fi=FK) then 
            begin
              TextBackground(MenuColor);
              TextColor(MenuFonColor);
              writeln(FMenuCommandName[Fi]);
              TextBackground(MenuFonColor);
              TextColor(MenuColor);
            end
          else 
            writeln(FMenuCommandName[Fi]);
        end;
      Fcod:=Ord(ReadKey());
      if (Fcod=0) then Fcod:= Ord(ReadKey());
      if (Fcod=38) then 
        begin
          FK:=FK-1;
          if (FK=0) then FK:=FN;
        end
      else 
        if (Fcod=40) then
          begin
            FK:=FK+1;
            if (FK>FN) then FK:=1;
          end;
    until (Fcod = 13);
    FSelectCommand:=FK;
  end;

begin
end.