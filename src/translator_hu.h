/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2002 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

#ifndef TRANSLATOR_HU_H
#define TRANSLATOR_HU_H

#include "translator.h"

class TranslatorHungarian : public TranslatorAdapter_1_2_1
{
  public:

    // --- Language control methods -------------------
    QCString idLanguage()
    { return "hungarian"; }
    /*! Used to get the command(s) for the language support. This method
     *  was designed for languages which do not prefer babel package.
     *  If this methods returns empty string, then the latexBabelPackage()
     *  method is used to generate the command for using the babel package.
     */
    QCString latexLanguageSupportCommand()
    {
      return "";
    }
    /*! returns the name of the package that is included by LaTeX */
    QCString latexBabelPackage() 
    { return ""; }

    /*! return the language charset. This will be used for the HTML output */
    QCString idLanguageCharset()
    {
      return "iso-8859-2";
    }

    // --- Language translation methods -------------------

    /*! used in the compound documentation before a list of related functions. */
    QCString trRelatedFunctions()
    { return "Kapcsol�d� f�ggv�nyek"; }

    /*! subscript for the related functions. */
    QCString trRelatedSubscript()
    { return "(Figyelem! Ezek a f�ggv�nyek nem tagjai az oszt�lynak!)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    QCString trDetailedDescription()
    { return "R�szletes le�r�s"; }

    /*! header that is put before the list of typedefs. */
    QCString trMemberTypedefDocumentation()
    { return "Oszt�lytag t�pusdefin�ci�k dokument�ci�ja"; }
    
    /*! header that is put before the list of enumerations. */
    QCString trMemberEnumerationDocumentation()
    { return "Oszt�lytag enumer�ci�k dokument�ci�ja"; }
    
    /*! header that is put before the list of member functions. */
    QCString trMemberFunctionDocumentation()
    { return "Oszt�lytag f�ggv�nyek (met�dusok) dokument�ci�ja"; }
    
    /*! header that is put before the list of member attributes. */
    QCString trMemberDataDocumentation()
    { return "Oszt�lytag adatok dokument�ci�ja"; }

    /*! this is the text of a link put after brief descriptions. */
    QCString trMore() 
    { return "R�szletek..."; }

    /*! put in the class documentation */
    QCString trListOfAllMembers()
    { return "Oszt�lytagok list�ja."; }

    /*! used as the title of the "list of all members" page of a class */
    QCString trMemberList()
    { return "Oszt�lytagok list�ja"; }

    /*! this is the first part of a sentence that is followed by a class name */
    QCString trThisIsTheListOfAllMembers()
    { return "A(z) "; }

    /*! this is the remainder of the sentence after the class name */
    QCString trIncludingInheritedMembers()
    { return " oszt�ly tagjainak teljes list�ja, az �r�k�lt tagokkal egy�tt."; }
    
    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="Ezt a dokument�ci�t a Doxygen k�sz�tette";
      if (s) result+=(QCString)" a(z) "+s+(QCString)" projekthez";
      result+=" a forr�sk�db�l."; 
      return result;
    }

    /*! put after an enum name in the list of all members */
    QCString trEnumName()
    { return "enumer�ci� neve"; }
    
    /*! put after an enum value in the list of all members */
    QCString trEnumValue()
    { return "enumer�ci� �rt�ke"; }
    
    /*! put after an undocumented member in the list of all members */
    QCString trDefinedIn()
    { return "defini�lva itt:"; }

    /*! put as in introduction in the verbatim header file of a class.
     *  parameter f is the name of the include file.
     */
    QCString trVerbatimText(const char *f)
    { return (QCString)"Ez a(z) "+f+" defin�ci�s f�jl pontos tartalma."; }
    
    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of 
     *  compounds or files (see the \\group command).
     */
    QCString trModules()
    { return "Modulok"; }
    
    /*! This is put above each page as a link to the class hierarchy */
    QCString trClassHierarchy()
    { return "Oszt�lyhierarchia"; }
    
    /*! This is put above each page as a link to the list of annotated classes */
    QCString trCompoundList()
    { return "�sszetev�k list�ja"; }
    
    /*! This is put above each page as a link to the list of documented files */
    QCString trFileList()
    { return "F�jlok list�ja"; }

    /*! This is put above each page as a link to the list of all verbatim headers */
    QCString trHeaderFiles()
    { return "Defin�ci�s f�jlok"; }

    /*! This is put above each page as a link to all members of compounds. */
    QCString trCompoundMembers()
    { return "Oszt�lyok �sszetev�i"; }

    /*! This is put above each page as a link to all members of files. */
    QCString trFileMembers()
    { return "F�jlok elemei"; }

    /*! This is put above each page as a link to all related pages. */
    QCString trRelatedPages()
    { return "Kapcsol�d� lapok"; }

    /*! This is put above each page as a link to all examples. */
    QCString trExamples()
    { return "P�ld�k"; }

    /*! This is put above each page as a link to the search engine. */
    QCString trSearch()
    { return "Keres�s"; }

    /*! This is an introduction to the class hierarchy. */
    QCString trClassHierarchyDescription()
    { return "Ez a lesz�rmaztat�si lista hozz�vet�leg, "
             "de nem szigor�an v�ve, �b�c� sorrendbe rendezett:";
    }

    /*! This is an introduction to the list with all files. */
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="Ez az �sszes ";
      if (!extractAll) result+="doument�lt ";
      result+="f�jl list�ja r�vid le�r�sokkal:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    QCString trCompoundListDescription()
    { return "Ez az oszt�lyok, strukt�r�k, uni�k �s interf�szek "
             "list�ja r�vid le�r�sokkal:"; 
    }

    /*! This is an introduction to the page with all class members. */
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Ez az �sszes ";
      if (!extractAll) result+="dokument�lt ";
      result+="oszt�ly �sszetev� list�ja ";
      if (!extractAll) 
        result+="hivatkoz�ssal a hozz�juk tart�z� oszt�ly dokument�ci�ra:";
      else 
        result+="az �ket tartalmaz� oszt�ly megjel�l�s�vel:";
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Ez az �sszes ";
      if (!extractAll) result+="dokument�lt ";
      result+="f�jl elem list�ja ";
      if (extractAll) 
        result+="hivatkoz�ssal a hozz�juk tart�z� f�jl dokument�ci�ra:";
      else 
        result+="az �ket tartalmaz� f�jl megjel�l�s�vel:";
      return result;
    }

    /*! This is an introduction to the page with the list of all header files. */
    QCString trHeaderFilesDescription()
    { return "Ezek a Programoz�i Interf�szt (API) alkot� defin�ci�s f�jlok:"; }

    /*! This is an introduction to the page with the list of all examples */
    QCString trExamplesDescription()
    { return "Ez a p�ld�k list�ja:"; }

    /*! This is an introduction to the page with the list of related pages */
    QCString trRelatedPagesDescription()
    { return "Ez a kapcsol�d� dokument�ci�k list�ja:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    QCString trModulesDescription()
    { return "Ez a modulok list�ja:"; }

    /*! This sentences is used in the annotated class/file lists if no brief
     * description is given. 
     */
    QCString trNoDescriptionAvailable()
    { return "Nincs hozz� le�r�s"; }
    
    // index titles (the project name is prepended for these) 


    /*! This is used in HTML as the title of index.html. */
    QCString trDocumentation()
    { return "Dokument�ci�"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * index of all groups.
     */
    QCString trModuleIndex()
    { return "Modul index"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * class hierarchy.
     */
    QCString trHierarchicalIndex()
    { return "Hierarchikus index"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * annotated compound index.
     */
    QCString trCompoundIndex()
    { return "�sszetev�k indexe"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    QCString trFileIndex() 
    { return "F�jl index"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    QCString trModuleDocumentation()
    { return "Modul document�ci�"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    QCString trClassDocumentation()
    { return "Oszt�ly documentat�ci�"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    QCString trFileDocumentation()
    { return "F�jl documentat�ci�"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    QCString trExampleDocumentation()
    { return "P�ld�k documentat�ci�ja"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all related pages.
     */
    QCString trPageDocumentation()
    { return "Kapcsol�d� lapok document�ci�ja"; }

    /*! This is used in LaTeX as the title of the document */
    QCString trReferenceManual()
    { return "Referencia k�zik�nyv"; }
    
    /*! This is used in the documentation of a file as a header before the 
     *  list of defines
     */
    QCString trDefines()
    { return "Defin�ci�k"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of function prototypes
     */
    QCString trFuncProtos()
    { return "F�ggv�ny protot�pusok"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of typedefs
     */
    QCString trTypedefs()
    { return "T�pusdefin�ci�k"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of enumerations
     */
    QCString trEnumerations()
    { return "Enumer�ci�k"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) functions
     */
    QCString trFunctions()
    { return "F�ggv�nyek"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trVariables()
    { return "V�ltoz�k"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trEnumerationValues()
    { return "Enumer�ci� �rt�kek"; }
    
    /*! This is used in man pages as the author section. */
    QCString trAuthor()
    { return "Szerz�"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    QCString trDefineDocumentation()
    { return "Defin�ci�k dokument�ci�ja"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for function prototypes
     */
    QCString trFunctionPrototypeDocumentation()
    { return "F�ggv�ny protot�pusok document�ci�ja"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for typedefs
     */
    QCString trTypedefDocumentation()
    { return "T�pusdefin�ci�k document�ci�ja"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration types
     */
    QCString trEnumerationTypeDocumentation()
    { return "Enumer�ci�k document�ci�ja"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration values
     */
    QCString trEnumerationValueDocumentation()
    { return "Enumer�ci� �rt�kek document�ci�ja"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for functions
     */
    QCString trFunctionDocumentation()
    { return "F�ggv�nyek dokument�ci�ja"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for variables
     */
    QCString trVariableDocumentation()
    { return "V�ltoz�k document�ci�ja"; }

    /*! This is used in the documentation of a file/namespace/group before 
     *  the list of links to documented compounds
     */
    QCString trCompounds()
    { return "�sszetev�k"; }

    /*! This is used in the documentation of a group before the list of 
     *  links to documented files
     */
    QCString trFiles()
    { return "F�jlok"; }

    /*! This is used in the standard footer of each page and indicates when 
     *  the page was generated 
     */
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result=(QCString)"";
      if (projName) result+=(QCString)"Projekt: "+projName;
      result+=(QCString)" K�sz�lt: "+date+" K�sz�tette: ";
      return result;
    }
    /*! This is part of the sentence used in the standard footer of each page.
     */
    QCString trWrittenBy()
    {
      return " melyet �rt ";
    }

    /*! this text is put before a class diagram */
    QCString trClassDiagram(const char *clName)
    {
      return clName+(QCString)" oszt�ly sz�rmaztat�si diagramja";
    }
    
    /*! this text is generated when the \\internal command is used. */
    QCString trForInternalUseOnly()
    { return "CSAK BELS� HASZN�LATRA!"; }

    /*! this text is generated when the \\reimp command is used. */
    QCString trReimplementedForInternalReasons()
    { return "Bels� okok miatt �jraimplement�lva, az API-t nem �rinti."; }

    /*! this text is generated when the \\warning command is used. */
    QCString trWarning()
    { return "Figyelmeztet�s"; }

    /*! this text is generated when the \\bug command is used. */
    QCString trBugsAndLimitations()
    { return "Hib�k �s korl�toz�sok"; }

    /*! this text is generated when the \\version command is used. */
    QCString trVersion()
    { return "Verzi�"; }

    /*! this text is generated when the \\date command is used. */
    QCString trDate()
    { return "D�tum"; }

    /*! this text is generated when the \\author command is used. */
    QCString trAuthors()
    { return "Szerz�(k)"; }

    /*! this text is generated when the \\return command is used. */
    QCString trReturns()
    { return "Visszaadott �rt�k"; }

    /*! this text is generated when the \\sa command is used. */
    QCString trSeeAlso()
    { return "L�sd m�g"; }

    /*! this text is generated when the \\param command is used. */
    QCString trParameters()
    { return "Param�terek"; }

    /*! this text is generated when the \\exception command is used. */
    QCString trExceptions()
    { return "Kiv�telek"; }
    
    /*! this text is used in the title page of a LaTeX document. */
    QCString trGeneratedBy()
    { return "K�sz�tette"; }

    // new since 0.49-990307
    
    /*! used as the title of page containing all the index of all namespaces. */
    QCString trNamespaceList()
    { return "N�vt�r lista"; }

    /*! used as an introduction to the namespace list */
    QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Ez az �sszes ";
      if (!extractAll) result+="dokument�lt ";
      result+="n�vt�r list�ja r�vid le�r�sokkal:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    QCString trFriends()
    { return "Bar�tok"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    /*! used in the class documentation as a header before the list of all
     * related classes 
     */
    QCString trRelatedFunctionDocumentation()
    { return "Bar�t �s kapcsol�d� f�ggv�nyek dokument�ci�ja"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result=(QCString)clName;
      switch(compType)
      {
        case ClassDef::Class:      result+=" oszt�ly"; break;
        case ClassDef::Struct:     result+=" strukt�ra"; break;
        case ClassDef::Union:      result+=" uni�"; break;
        case ClassDef::Interface:  result+=" interf�sz"; break;
        case ClassDef::Exception:  result+=" kiv�tel"; break;
      }
      if (isTemplate) result+=" sablon";
      result+=" referencia";
      return result;
    }

    /*! used as the title of the HTML page of a file */
    QCString trFileReference(const char *fileName)
    {
      QCString result=fileName;
      result+=" f�jl referencia"; 
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result=namespaceName;
      result+=" n�vt�r reference";
      return result;
    }
    
    /* these are for the member sections of a class, struct or union */
    QCString trPublicMembers()
    { return "Publikus met�dusok"; }
    QCString trPublicSlots()
    { return "Publikus adatok"; }
    QCString trSignals()
    { return "Szign�lok"; }
    QCString trStaticPublicMembers()
    { return "Statikus publikus met�dusok"; }
    QCString trProtectedMembers()
    { return "V�dett met�dusok"; }
    QCString trProtectedSlots()
    { return "V�dett adatok"; }
    QCString trStaticProtectedMembers()
    { return "Statikus v�dett met�dusok"; }
    QCString trPrivateMembers()
    { return "Priv�t met�dusok"; }
    QCString trPrivateSlots()
    { return "Priv�t adatok"; }
    QCString trStaticPrivateMembers()
    { return "Statikus priv�t met�dusok"; }
    
    /*! this function is used to produce a comma-separated list of items.
     *  use generateMarker(i) to indicate where item i should be put.
     */
    QCString trWriteList(int numEntries)
    {
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
            result+=" �s ";
        }
      }
      return result; 
    }
    
    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritsList(int numEntries)
    {
      return "Sz�l�k oszt�lyok: "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritedByList(int numEntries)
    {
      return "Sz�rmaztatott oszt�lyok: "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of 
     *  members that are hidden by this one.
     */
    QCString trReimplementedFromList(int numEntries)
    {
      return "�jra implement�lva ebb�l az oszt�lyb�l: "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    QCString trReimplementedInList(int numEntries)
    {
      return "�jra implement�lva ebben az oszt�lyban: "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    QCString trNamespaceMembers()
    { return "N�vt�r tagjai"; }

    /*! This is an introduction to the page with all namespace members */
    QCString trNamespaceMemberDescription(bool extractAll)
    { 
      QCString result="Ez az �sszes ";
      if (!extractAll) result+="dokument�lt ";
      result+="n�vt�r tagjainak list�ja ";
      if (extractAll) 
        result+="a hozz�juk tartoz� dokument�ci�ra val� hivatkoz�ssal:";
      else 
        result+="az �ket tartalmaz� n�vt�rrel:";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the 
     *  index of all namespaces.
     */
    QCString trNamespaceIndex()
    { return "N�vt�r index"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    QCString trNamespaceDocumentation()
    { return "N�vt�r document�ci�"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    QCString trNamespaces()
    { return "N�vterek"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result=(QCString)"Ez a dokument�ci� ";
      switch(compType)
      {
        case ClassDef::Class:      result+="az oszt�lyr�l"; break;
        case ClassDef::Struct:     result+="a strukt�r�r�l"; break;
        case ClassDef::Union:      result+="az uni�r�l"; break;
        case ClassDef::Interface:  result+="az interf�szr�l"; break;
        case ClassDef::Exception:  result+="a kiv�telr�l"; break;
      }
      result+=" a k�vetkez� f�jl";
      if (!single) result+="ok";
      result+=" alapj�n k�sz�lt:";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    QCString trAlphabeticalList()
    { return "�b�c� rendes lista"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    QCString trReturnValues()
    { return "Visszaadott �rt�kek"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    QCString trMainPage()
    { return "Kezd� lap"; }

    /*! This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    QCString trPageAbbreviation()
    { return "o."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    QCString trSources()
    {
      return "Forr�sok";
    }
    QCString trDefinedAtLineInSourceFile()
    {
      return "Defin�ci� a(z) @1 f�jl @0. sor�ban.";
    }
    QCString trDefinedInSourceFile()
    {
      return "Defin�ci� a(z) @0 f�jlban.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    QCString trDeprecated()
    {
      return "Ellenjavallt";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)"Egy�ttm�k�d�si diagram "+clName+" oszt�lyhoz:";
    }
    /*! this text is put before an include dependency graph */
    QCString trInclDepGraph(const char *fName)
    {
      return (QCString)"Defin�ci�s f�jl f�gg�si �bra "+fName+" f�jlhoz:";
    }
    /*! header that is put before the list of constructor/destructors. */
    QCString trConstructorDocumentation()
    {
      return "Konstruktor �s destruktor dokument�ci�"; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    QCString trGotoSourceCode()
    {
      return "Ugr�s a f�jl forr�s�hoz.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    QCString trGotoDocumentation()
    {
      return "Ugr�s a f�jl dokument�ci�j�hoz.";
    }
    /*! Text for the \\pre command */
    QCString trPrecondition()
    {
      return "El�felt�tel";
    }
    /*! Text for the \\post command */
    QCString trPostcondition()
    {
      return "Ut�felt�tel";
    }
    /*! Text for the \\invariant command */
    QCString trInvariant()
    {
      return "Invari�ns";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    QCString trInitialValue()
    {
      return "Kezd� �rt�k:";
    }
    /*! Text used the source code in the file index */
    QCString trCode()
    {
      return "forr�sk�d";
    }
    QCString trGraphicalHierarchy()
    {
      return "Oszt�ly-hierarchia grafikon";
    }
    QCString trGotoGraphicalHierarchy()
    {
      return "Ugr�s az oszt�ly-hierarchia grafikonhoz";
    }
    QCString trGotoTextualHierarchy()
    {
      return "Ugr�s az oszt�ly-hierarchia le�r�shoz";
    }
    QCString trPageIndex()
    {
      return "Oldal index";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////
    
    QCString trNote()
    {
      return "Megjegyz�s";
    }
    QCString trPublicTypes()
    {
      return "Publikus t�pusok";
    }
    QCString trPublicAttribs()
    {
      return "Publikus attrib�tumok";
    }
    QCString trStaticPublicAttribs()
    {
      return "Statikus publikus attrib�tumok";
    }
    QCString trProtectedTypes()
    {
      return "V�dett t�pusok";
    }
    QCString trProtectedAttribs()
    {
      return "V�dett attrib�tumok";
    }
    QCString trStaticProtectedAttribs()
    {
      return "Statikus v�dett attrib�tumok";
    }
    QCString trPrivateTypes()
    {
      return "Priv�t t�pusok";
    }
    QCString trPrivateAttribs()
    {
      return "Priv�t attrib�tumok";
    }
    QCString trStaticPrivateAttribs()
    {
      return "Statikus priv�t attrib�tumok";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a todo item */
    QCString trTodo()
    {
      return "Tennival�";
    }
    /*! Used as the header of the todo list */
    QCString trTodoList()
    {
      return "Tennival�k list�ja";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    QCString trReferencedBy()
    {
      return "hivatkoz�s innen:";
    }
    QCString trRemarks()
    {
      return "Megjegyz�sek";
    }
    QCString trAttention()
    {
      return "Figyelem";
    }
    QCString trInclByDepGraph()
    {
      return "Ez az �bra azt mutatja, hogy mely f�jlok �gyazz�k be "
             "k�zvetve vagy k�zvetlen�l ezt a f�jlt:";
    }
    QCString trSince()
    {
      return "El�sz�r bevezetve";
    }
    
//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /*! title of the graph legend page */
    QCString trLegendTitle()
    {
      return "Jelmagyar�zat";
    }
    /*! page explaining how the dot graph's should be interpreted */
    QCString trLegendDocs()
    {
      return 
        "Hogyan �rtelmezz�k a DopxyGen �ltal k�sz�tett �br�kat?<p>\n"
        "Vegy�k a k�vetkez� p�ld�t:\n"
        "\\code\n"
        "/*! Nem l�that� oszt�ly, nem f�r ki, v�g�sra ker�l */\n"
        "class Invisible { };\n\n"
        "/*! Sz�rmaztat�s rejtett */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* Nem dokument�lt oszt�ly */\n"
        "class Undocumented { };\n\n"
        "/*! Publikus sz�rmaztat�sal levezetett oszt�ly */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! V�dett sz�rmaztat�sal levezetett oszt�ly */\n"
        "class ProtectedBase { };\n\n"
        "/*! Priv�t sz�rmaztat�sal levezetett oszt�ly */\n"
        "class PrivateBase { };\n\n"
        "/*! Oszt�ly, melyet a sz�rmaztatott oszt�ly haszn�l */\n"
        "class Used { };\n\n"
        "/*! Oszt�ly, mely t�bb m�siknak lesz�rmazottja */\n"
        "class Inherited : public PublicBase,\n"
        "                  protected ProtectedBase,\n"
        "                  private PrivateBase,\n"
        "                  public Undocumented\n"
        "{\n"
        "  private:\n"
        "    Used *m_usedClass;\n"
        "};\n"
        "\\endcode\n"
        "Ha a konfigur�ci�s f�jl \\c MAX_DOT_GRAPH_HEIGHT elem�nek �rt�k�t "
        "200-ra �ll�tjuk, az eredm�ny a k�vetkez� �bra lesz:"
        "<p><center><img src=\"graph_legend."+Config_getEnum("DOT_IMAGE_FORMAT")+"\"></center>\n"
        "<p>\n"
        "Az �br�n lev� dobozok jelent�se:\n"
        "<ul>\n"
        "<li>Kit�lt�tt fekete doboz jelzi azt az oszt�lyt vagy strukt�r�t,"
        "amelyr�l az �bra sz�l.\n"
        "<li>Fekete keret jelszi a dokument�lt oszt�lyokat vagy strukt�r�kat.\n"
        "<li>Sz�rke keret jelzi a nem dokument�lt oszt�lyokat vagy strukt�r�kat.\n"
        "<li>Piros keret jelzi azokat az oszt�lyokat vagy strukt�r�kat, amelyekn�l v�g�s miatt nem l�that� "
        "az �sszes lesz�rmaztat�si kapcsolat. Egy �bra v�g�sra ker�l, ha nem f�r bele "
        "a megadott tartom�nyba."
        "</ul>\n"
        "A nyilak jelent�se:\n"
        "<ul>\n"
        "<li>S�t�tk�k ny�l jelzi a publikus sz�rmaztat�st.\n"
        "<li>S�t�tz�ld ny�l jelzi a v�dett sz�rmaztat�st.\n"
        "<li>S�t�tv�r�s ny�l jelzi a priv�t sz�rmaztat�st.\n"
        "<li>Lila szaggatott ny�l jelzi, ha az oszt�ly egy m�sikat haszn�l vagy tartalmaz. "
        "A ny�l felirata jelzi a v�ltoz�k nev�t, amelyeken kereszt�l a m�sik oszt�ly kapcsol�dik.\n"
        "</ul>\n";

    }
    /*! text for the link to the legend page */
    QCString trLegend()
    {
      return "Jelmagyar�zat";
    }
    
//////////////////////////////////////////////////////////////////////////
// new since 1.2.0
//////////////////////////////////////////////////////////////////////////
    
    /*! Used as a marker that is put before a test item */
    QCString trTest()
    {
      return "Teszt";
    }
    /*! Used as the header of the test list */
    QCString trTestList()
    {
      return "Teszt lista";
    }

};

#endif
