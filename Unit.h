//---------------------------------------------------------------------------

#ifndef UnitH
#define UnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <vector>
#include "RS232.h"

class Camera;
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TButton *Droite;
	TButton *Gauche;
	TButton *Bas;
	TButton *Haut;
	TButton *ON;
	TButton *OFF;
	TButton *Stop;
	TLabel *Zoom;
	TButton *ZoomPlus;
	TButton *ZoomStop;
	TButton *ZoomMoins;
	TCheckBox *BoutonAutomatique;
	//TLabel *Deplacement;


	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall HautClick(TObject *Sender);
	void __fastcall BasClick(TObject *Sender);
	void __fastcall ONClick(TObject *Sender);
	void __fastcall OFFClick(TObject *Sender);
	void __fastcall GaucheClick(TObject *Sender);
	void __fastcall DroiteClick(TObject *Sender);
	void __fastcall StopClick(TObject *Sender);
	void __fastcall ZoomMoinsClick(TObject *Sender);
	void __fastcall ZoomPlusClick(TObject *Sender);
	void __fastcall ZoomStopClick(TObject *Sender);
	void __fastcall BoutonAutomatiqueClick(TObject *Sender);

private:	// D�clarations utilisateur
	Camera *Trame;
	RS232 port;
	int Position;
public:		// D�clarations utilisateur
	__fastcall TForm1(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif