/******************************************************************************
 *
 * $Id$
 *
 * Copyright (C) 1997-1999 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * All output generated with Doxygen is not covered by this license.
 *
 */

/*-------------------------------------------------------------------------
Svensk �vers�ttning av:
Samuel H�gglund      <sahag96@ite.mh.se>
Xet Erixon           <xet@xeqt.com>

Skicka g�rna synpunkter. 
--------------------------------------------------------------------------*/

#ifndef TRANSLATOR_SE_H
#define TRANSLATOR_SE_H

#include <qstring.h>

class TranslatorSwedish : public Translator
{
  public:
    QString latexBabelPackage()
    { return "swedish"; }
    QString trInherits()
    { return "�rver"; }
    QString trAnd()
    { return "och"; }
    QString trInheritedBy()
    { return "�rvd av"; }
    QString trRelatedFunctions()
    { return "Besl�ktade funktioner"; }
    QString trRelatedSubscript()
    { return "(Observera att dessa inte �r medlemsfunktioner)"; }
    QString trDetailedDescription()
    { return "Detaljerad beskrivning"; }
    QString trMemberTypedefDocumentation()
    { return "Dokumentation �ver typdefinierade medlemmar"; }
    QString trMemberEnumerationDocumentation()
    { return "Dokumentation �ver egenuppr�knande medlemmar"; }
    QString trMemberFunctionDocumentation()
    { return "Dokumentation �ver medlemsfunktioner"; }
    QString trMemberDataDocumentation()
    { return "Dokumentation �ver datamedlemmar"; }
    QString trGeneratedFrom(const char *s,bool single)
    { 
      QString result=(QString)"Dokumentationen f�r denna"+s+
                     " �r skapad utifr�n f�ljande fil";
      if (single) result+=":";   else result+="er:";
      return result;
    }
    QString trMore()
    { return "Mer..."; }
    QString trReference()
    { return "Referens"; }
    QString trListOfAllMembers()
    { return "Lista �ver alla medlemmar."; }
    QString trMemberList()
    { return "Medlemslista"; }
    QString trThisIsTheListOfAllMembers()
    { return "Det h�r �r en fullst�ndig lista �ver medlemmar f�r"; }
    QString trIncludingInheritedMembers()
    { return "med alla �rvda medlemmar."; }
    QString trGeneratedAutomatically(const char *s)
    { QString result="Automatiskt skapad av Doxygen";
      if (s) result+=(QString)" f�r "+s;
      result+=" fr�n k�llkoden."; 
      return result;
    }
    QString trEnumName()
    { return "enum namn"; }
    QString trEnumValue()
    { return "enum v�rde"; }
    QString trDefinedIn()
    { return "deklarerad i"; }
    QString trIncludeFile()
    { return "Inkluderingsfil"; }
    QString trVerbatimText(const char *f)
    { return (QString)"Detta �r den ordagranna texten fr�n inkluderingsfilen"+f; }
    QString trModules()
    { return "Moduler"; }
    QString trClassHierarchy()
    { return "Klasshierarki"; }
    QString trCompoundList()
    { return "Sammansatt klasslista"; }
    QString trFileList()
    { return "Fillista"; }
    QString trHeaderFiles()
    { return "Headerfiler"; }
    QString trCompoundMembers()
    { return "Sammansatta klassmedlemmar"; }
    QString trFileMembers()
    { return "Filmedlemmar"; }
    QString trRelatedPages()
    { return "Besl�ktade sidor"; }
    QString trExamples()
    { return "Exempel"; }
    QString trSearch()
    { return "S�k"; }
    QString trClassHierarchyDescription()
    { return "Denna lista �ver arv �r grovt, men inte helt, "
             "sorterad i alfabetisk ordning:";
    }
    QString trFileListDescription(bool extractAll)
    {
      QString result="H�r f�ljer en lista �ver alla ";
      if (!extractAll) result+="dokumenterade ";
      result+="filer, med en kort beskrivning:";
      return result;
    }
    QString trCompoundListDescription()
     { return "H�r f�ljer klasserna, structerna och "
             "unionerna med en kort beskrivning:"; 
    }
    QString trCompoundMembersDescription(bool extractAll)
    {
      QString result="H�r f�ljer en lista �ver alla ";
      if (!extractAll) result+="dokumenterade ";
      result+="klassmedlemmar med l�nkar till ";
      if (extractAll) result+="klassdokumentationen f�r varje medlem:";
      else result+="klasserna som de tillh�r:";
      return result;
    }
    QString trFileMembersDescription(bool extractAll)
    {
      QString result="H�r f�ljer en lista �ver alla ";
      if (!extractAll) result+="dokumenterade ";
      result+="filmedlemmar med l�nkar till ";
      if (extractAll) result+="dokumentationsfilen f�r varje medlem:";
      else result+="filerna som de tillh�r:";
      return result;
    }
    QString trHeaderFilesDescription()
    { return "H�r f�ljer headerfilerna som API:n best�r av:"; }
    QString trExamplesDescription()
    { return "H�r f�ljer en lista med alla exempel:"; }
    QString trRelatedPagesDescription()
    { return "H�r f�ljer en lista �ver alla relaterade dokumentationssidor:";
}     QString trModulesDescription()
    { return "H�r f�ljer en lista �ver alla moduler:"; }
    QString trNoDescriptionAvailable()
    { return "Beskrivning saknas"; }

    QString trDocumentation()
    { return "Dokumentation"; }
    QString trModuleIndex()
    { return "Modul Index"; }
    QString trHierarchicalIndex()
    { return "Hierarkiskt Index"; }
    QString trCompoundIndex()
    { return "Sammansatt Index"; }
    QString trFileIndex() 
    { return "Fil Index"; }
    QString trModuleDocumentation()
    { return "Dokumentation �ver moduler"; }
    QString trClassDocumentation()
    { return "Dokumentation �ver klasser"; }
    QString trFileDocumentation()
    { return "Dokumentation �ver filer"; }
    QString trExampleDocumentation()
    { return "Dokumentation �ver exempel"; }
    QString trPageDocumentation()
    { return "Dokumentation av sidor"; }
    QString trReferenceManual()
    { return "Uppslagsbok"; }

    QString trDefines()
    { return "Definitioner"; }
    QString trFuncProtos()
    { return "Funktionsprototyper"; }
    QString trTypedefs()
    { return "Typdefinitioner"; }
    QString trEnumerations()
    { return "Egenuppr�knande typer"; }
    QString trFunctions()
    { return "Funktioner"; }
    QString trVariables()
    { return "Variabler"; }
    QString trEnumerationValues()
    { return "Egenuppr�knade v�rden"; }
    QString trReimplementedFrom()
    { return "�teranv�nd fr�n"; }
    QString trReimplementedIn()
    { return "�teranv�nd i"; }
    QString trAuthor()
    { return "F�rfattare"; }
    QString trDefineDocumentation()
    { return "Dokumentation �ver definitioner"; }
    QString trFunctionPrototypeDocumentation()
    { return "Dokumentation �ver funktionsprototyper"; }
    QString trTypedefDocumentation()
    { return "Dokumentation �ver typdefinitioner"; }
    QString trEnumerationTypeDocumentation()
    { return "Dokumentation �ver egenuppr�knande typer (enum)"; }
    QString trEnumerationValueDocumentation()
    { return "Dokumentation �ver egenuppr�knande typers v�rden"; }
    QString trFunctionDocumentation()
    { return "Dokumentation �ver funktioner"; }
    QString trVariableDocumentation()
    { return "Dokumentation �ver variabler"; }
    QString trCompounds()
    { return "Sammans�ttning"; }
    QString trFiles()
    { return "Filer"; }
    QString trGeneratedAt(const char *date,const char *projName)
    { 
      QString result=(QString)"Skapad "+date;
      if (projName) result+=(QString)" f�r "+projName;
      result+=(QString)" av";
      return result;
    }
    QString trWrittenBy()
    {
      return "skriven av";
    }
    QString trClassDiagram(const char *clName)
    {
      return (QString)"Klass-diagram f�r "+clName;
    }
    QString trForInternalUseOnly()
    { return "Endast f�r internt bruk."; }
    QString trReimplementedForInternalReasons()
    { return "Omskriven av intern anledning ; "
             "API:n p�verkas inte."; 
    }
    QString trWarning()
    { return "Varning"; }
    QString trBugsAndLimitations()
    { return "Fel och begr�nsningar"; }
    QString trVersion()
    { return "Version"; }
    QString trDate()
    { return "Datum"; }
    QString trAuthors()
    { return "F�rfattare"; }
    QString trReturns()
    { return "Returnerar"; }
    QString trSeeAlso()
    { return "Se �ven"; }
    QString trParameters()
    { return "Parametrar"; }
    QString trExceptions()
    { return "Undantag"; }
    QString trGeneratedBy()
    { return "Skapad av"; }
};

#endif
