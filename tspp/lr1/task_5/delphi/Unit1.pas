unit Unit1;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls;

type
  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    ListBox1: TListBox;
    procedure Button2Click(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure FormActivate(Sender: TObject);
    procedure FormDeactivate(Sender: TObject);
    procedure FormCloseQuery(Sender: TObject; var CanClose: Boolean);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormPaint(Sender: TObject);
    procedure FormResize(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

uses Unit2;

procedure TForm1.Button1Click(Sender: TObject);
begin
  Form2.Show ();
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
Application.Terminate ();
end;

procedure TForm1.FormActivate(Sender: TObject);
begin
  ListBox1.Items.Add ( 'FormActivate');
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  Application.MessageBox ( 'The form was closed', 'Form closing...', MB_OK);
end;

procedure TForm1.FormCloseQuery(Sender: TObject; var CanClose: Boolean);
begin
  if (Application.MessageBox ( 'Do you really want to exit?',
 'CloseQueryWindow', MB_OKCANCEL) = mrOk) then
 CanClose:= true
 else
 CanClose:= false;
end;

procedure TForm1.FormDeactivate(Sender: TObject);
begin
  ListBox1.Items.Add ( 'FormDeactivate');
end;

procedure TForm1.FormPaint(Sender: TObject);
begin
  ListBox1.Items.Add ( 'FormPaint');
end;

procedure TForm1.FormResize(Sender: TObject);
begin
 ListBox1.Items.Add ( 'FormResize');
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  Application.MessageBox ( 'Message text in the window', 'Test Message Window', MB_OK);
end;

end.
