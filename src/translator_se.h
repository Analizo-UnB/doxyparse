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

/*
==================================================================================
Svensk �vers�ttning av:
Samuel H�gglund      <sahag96@ite.mh.se>
Xet Erixon           <xet@xeqt.com>
==================================================================================
Uppdateringar.
1999/04/29
*  Omskrivningar av en hel del ordval, t.ex.
   ENG                  INNAN          EFTER
   compound             inh�ngnad      sammansatt
   structs              structs        strukter
   unions               unions         unioner

   osv...

*  Alla �vers�ttnings-str�ngar returnerar i alla fall en n�got s� n�r vettig
   f�rklaring...

1999/05/27
*  Det verkade som vi gl�mt en del mellanslag i vissa str�ngar vilket resulterade
   i att en del ord blev ihopskrivna.

*  Bytt en del ordval igen...
   ENG                       INNAN          EFTER
   reference manual          Uppslagsbok    referensmanual

*  Skrivit ihop en del ord som innan hade bindestreck
*  En del nya �vers�ttningar �r tillagda.
*  Gamla �vers�ttningar borttagna

===================================================================================
Problem!
   Namespace och slot: har de n�n hygglig svensk �vers�ttning???

   Skicka g�rna synpunkter.
===================================================================================
*/

#ifndef TRANSLATOR_SE_H
#define TRANSLATOR_SE_H

#include "translator.h"

class TranslatorSwedish : public Translator
{
  public:
    QCString latexBabelPackage()
    { return "swedish"; }

    QCString trRelatedFunctions()
    { return "Besl�ktade funktioner"; }

    QCString trRelatedSubscript()
    { return "(Observera att dessa inte �r medlemsfunktioner)"; }

    QCString trDetailedDescription()
    { return "Detaljerad beskrivning"; }

    QCString trMemberTypedefDocumentation()
    { return "Dokumentation �ver typdefinierade medlemmar"; }

    QCString trMemberEnumerationDocumentation()
    { return "Dokumentation �ver egenuppr�knande medlemmar"; }

    QCString trMemberFunctionDocumentation()
    { return "Dokumentation �ver medlemsfunktioner"; }

    QCString trMemberDataDocumentation()
    { return "Dokumentation �ver datamedlemmar"; }

    QCString trGeneratedFrom(const char *s,bool single)
    { 

    QCString result=(QCString)"Dokumentationen f�r denna"+s+
                     " �r skapad utifr�n f�ljande fil";
      if (single) result+=":";   else result+="er:";
      return result;
    }
    QCString trMore()
    { return "Mer..."; }

    QCString trListOfAllMembers()
    { return "Lista �ver alla medlemmar."; }

    QCString trMemberList()
    { return "Medlemslista"; }

    QCString trThisIsTheListOfAllMembers()
    { return "Det h�r �r en fullst�ndig lista �ver medlemmar f�r "; }

    QCString trIncludingInheritedMembers()
    { return " med alla �rvda medlemmar."; }

    QCString trGeneratedAutomatically(const char *s)
    { QCString result="Automatiskt skapad av Doxygen";
      if (s) result+=(QCString)" f�r "+s;
      result+=" fr�n k�llkoden."; 
      return result;
    }

    QCString trEnumName()
    { return "enum namn"; }

    QCString trEnumValue()
    { return "enum v�rde"; }

    QCString trDefinedIn()
    { return "definierad i"; }


    QCString trVerbatimText(const char *f)
    { return (QCString)"Detta �r den ordagranna texten fr�n inkluderingsfilen "+f; }

    QCString trModules()
    { return "Moduler"; }

    QCString trClassHierarchy()
    { return "Klasshierarki"; }

    QCString trCompoundList()
    { return "Sammansatt klasslista"; }

    QCString trFileList()
    { return "Fillista"; }

    QCString trHeaderFiles()
    { return "Headerfiler"; }

    QCString trCompoundMembers()
    { return "Sammansatta klassmedlemmar"; }

    QCString trFileMembers()
    { return "Filmedlemmar"; }

    QCString trRelatedPages()
    { return "Besl�ktade sidor"; }

    QCString trExamples()
    { return "Exempel"; }

    QCString trSearch()
    { return "S�k"; }

    QCString trClassHierarchyDescription()
    { return "Denna lista �ver arv �r grovt, men inte helt, "
             "sorterad i alfabetisk ordning:";
    }

    QCString trFileListDescription(bool extractAll)
    {
      QCString result="H�r f�ljer en lista �ver alla ";
      if (!extractAll) result+="dokumenterade ";
      result+="filer, med en kort beskrivning:";
      return result;
    }

    QCString trCompoundListDescription()
     { return "H�r f�ljer klasserna, strukterna och "
             "unionerna med en kort beskrivning:"; 
    }

    QCString trCompoundMembersDescription(bool extractAll)
    {

    QCString result="H�r f�ljer en lista �ver alla ";
      if (!extractAll) result+="dokumenterade ";
      result+="klassmedlemmar med l�nkar till ";
      if (extractAll) result+="klassdokumentationen f�r varje medlem:";
      else result+="klasserna som de tillh�r:";
      return result;
    }

    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="H�r f�ljer en lista �ver alla ";
      if (!extractAll) result+="dokumenterade ";
      result+="filmedlemmar med l�nkar till ";
      if (extractAll) result+="dokumentationsfilen f�r varje medlem:";
      else result+="filerna som de tillh�r:";
      return result;
    }

    QCString trHeaderFilesDescription()
    { return "H�r f�ljer headerfilerna som API:n best�r av:"; }

    QCString trExamplesDescription()
    { return "H�r f�ljer en lista med alla exempel:"; }

    QCString trRelatedPagesDescription()
    { return "H�r f�ljer en lista �ver alla besl�ktade dokumentationssidor:";}

    QCString trModulesDescription()
    { return "H�r f�ljer en lista �ver alla moduler:"; }

    QCString trNoDescriptionAvailable()
    { return "Beskrivning saknas"; }

    QCString trDocumentation()
    { return "Dokumentation"; }

    QCString trModuleIndex()
    { return "Modulindex"; }

    QCString trHierarchicalIndex()
    { return "Hierarkiskt Index"; }

    QCString trCompoundIndex()
    { return "Sammansatt Index"; }

    QCString trFileIndex()
    { return "Filindex"; }

    QCString trModuleDocumentation()
    { return "Dokumentation �ver moduler"; }

    QCString trClassDocumentation()
    { return "Dokumentation �ver klasser"; }

    QCString trFileDocumentation()
    { return "Dokumentation �ver filer"; }

    QCString trExampleDocumentation()
    { return "Dokumentation �ver exempel"; }

    QCString trPageDocumentation()
    { return "Dokumentation av sidor"; }

    QCString trReferenceManual()
    { return "Referensmanual"; }

    QCString trDefines()
    { return "Definitioner"; }
    QCString trFuncProtos()
    { return "Funktionsprototyper"; }
    QCString trTypedefs()
    { return "Typdefinitioner"; }
    QCString trEnumerations()
    { return "Egenuppr�knande typer"; }
    QCString trFunctions()
    { return "Funktioner"; }

    QCString trVariables()
    { return "Variabler"; }

    QCString trEnumerationValues()
    { return "Egenuppr�knade typers v�rden"; }

    QCString trAuthor()
    { return "F�rfattare"; }

    QCString trDefineDocumentation()
    { return "Dokumentation �ver definitioner"; }

    QCString trFunctionPrototypeDocumentation()
    { return "Dokumentation �ver funktionsprototyper"; }

    QCString trTypedefDocumentation()
    { return "Dokumentation �ver typdefinitioner"; }

    QCString trEnumerationTypeDocumentation()
    { return "Dokumentation �ver egenuppr�knande typer"; }

    QCString trEnumerationValueDocumentation()
    { return "Dokumentation �ver egenuppr�knande typers v�rden"; }

    QCString trFunctionDocumentation()
    { return "Dokumentation �ver funktioner"; }

    QCString trVariableDocumentation()
    { return "Dokumentation �ver variabler"; }

    QCString trCompounds()
    { return "Sammans�ttning"; }

    QCString trFiles()
    { return "Filer"; }

    QCString trGeneratedAt(const char *date,const char *projName)
    {
      QCString result=(QCString)"Skapad "+date;
      if (projName) result+=(QCString)" f�r "+projName;
      result+=(QCString)" av";
      return result;
    }

    QCString trWrittenBy()
    {
      return "skriven av";
    }

    QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Klassdiagram f�r "+clName;
    }

    QCString trForInternalUseOnly()
    { return "Endast f�r internt bruk."; }

    QCString trReimplementedForInternalReasons()
    { return "Omskriven av intern anledning ; API:n p�verkas inte.";}

    QCString trWarning()
    { return "Varning"; }

    QCString trBugsAndLimitations()
    { return "Fel och begr�nsningar"; }

    QCString trVersion()
    { return "Version"; }

    QCString trDate()
    { return "Datum"; }

    QCString trAuthors()
    { return "F�rfattare"; }

    QCString trReturns()
    { return "Returnerar"; }

    QCString trSeeAlso()
    { return "Se �ven"; }

    QCString trParameters()
    { return "Parametrar"; }

    QCString trExceptions()
    { return "Undantag"; }

    QCString trGeneratedBy()
    { return "Skapad av"; }

// new since 0.49-990307

    virtual QCString trNamespaceList()
    { return "Namespacelista"; }

    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="H�r �r en lista �ver alla ";
      if (!extractAll) result+="dokumenterade ";
      result+="namespaces med en kort f�rklaring:";
      return result;
    }

    virtual QCString trFriends()
    { return "V�nner"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////

    virtual QCString trRelatedFunctionDocumentation()
    { return "V�nners och besl�ktade funktioners dokumentation"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    virtual QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType)
    {
      QCString result=(QCString)clName+" ";
      switch(compType)
      {
        case ClassDef::Class:  result+=" Klass"; break;
        case ClassDef::Struct: result+=" Strukt"; break;
        case ClassDef::Union:  result+=" Union"; break;
      }
      result+="referens";
      return result;
    }

    virtual QCString trFileReference(const char *fileName)
    {
      QCString result=fileName;
      result+=" filreferens";
      return result;
    }

    virtual QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result=namespaceName;
      result+=" namespacereferens";
      return result;
    }

    virtual QCString trPublicMembers()
    { return "Publika medlemmar"; }
    virtual QCString trPublicSlots()
    { return "Publika slots"; }
    virtual QCString trSignals()
    { return "Signaler"; }
    virtual QCString trStaticPublicMembers()
    { return "Statiska  publika medlemmar"; }
    virtual QCString trProtectedMembers()
    { return "Skyddade medlemmar"; }
    virtual QCString trProtectedSlots()
    { return "Skyddade slots"; }
    virtual QCString trStaticProtectedMembers()
    { return "Statiska skyddade medlemmar"; }
    virtual QCString trPrivateMembers()
    { return "Privata medlemmar"; }
    virtual QCString trPrivateSlots()
    { return "Privata slots"; }
    virtual QCString trStaticPrivateMembers()
    { return "Statiska privata medlemmar"; }
    // end of member sections

    virtual QCString trWriteList(int numEntries)
    {
      // this function is used to produce a comma-separated list of items.
      // use generateMarker(i) to indicate where item i should be put.
      QCString result;
      int i;
      // the inherits list contain `numEntries' classes
      for (i=0;i<numEntries;i++)
      {
        // use generateMarker to generate placeholders for the class links!
        result+=generateMarker(i); // generate marker for entry i in the list
                                   // (order is left to right)

        if (i!=numEntries-1)  // not the last entry, so we need a separator
        {
          if (i<numEntries-2) // not the fore last entry
            result+=", ";
          else                // the fore last entry
            result+=", och ";
        }
      }
      return result;
    }

    virtual QCString trInheritsList(int numEntries)
      // used in class documentation to produce a list of base classes,
      // if class diagrams are disabled.
    {
      return "�rver "+trWriteList(numEntries)+".";
    }
    virtual QCString trInheritedByList(int numEntries)
      // used in class documentation to produce a list of super classes,
      // if class diagrams are disabled.
    {
      return "�rvd av "+trWriteList(numEntries)+".";
    }
    virtual QCString trReimplementedFromList(int numEntries)
      // used in member documentation blocks to produce a list of
      // members that are hidden by this one.
    {
      return "�terskapad fr�n "+trWriteList(numEntries)+".";
    }
    virtual QCString trReimplementedInList(int numEntries)
    {
      // used in member documentation blocks to produce a list of
      // all member that overwrite the implementation of this member.
      return "�terskapad i "+trWriteList(numEntries)+".";
    }

    virtual QCString trNamespaceMembers()
    { return "Namespacemedlemmar"; }
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    {
      QCString result="H�r �r en lista �ver alla ";
      if (!extractAll) result+="dokumenterade ";
      result+="namespacemedlemmar med l�nkar till ";
      if (extractAll)
        result+=" namespace-dokumentationen f�r varje medlem:";
      else
        result+="de namespaces de tillh�r:";
      return result;
    }

    virtual QCString trNamespaceIndex()
    { return "Namespaceindex"; }

    virtual QCString trNamespaceDocumentation()

{ return "Namespace-dokumentation"; }
};

#endif
