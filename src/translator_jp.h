/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2000 by Dimitri van Heesch.
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

#ifndef TRANSLATOR_JP_H
#define TRANSLATOR_JP_H

#include "translator.h"

class TranslatorJapanese : public Translator
{
  public:
    //--------------------------------------------------------------------
    // NOTICE:
    // the following functions are now obsolete: these are no longer used and 
    // will disappear in future versions. You do not have to translate them!
    QCString trInherits()
    { return "�Ѿ�"; }
    QCString trAnd()
    { return "��"; }
    QCString trInheritedBy()
    { return "���˷Ѿ�����Ƥ��ޤ���"; }
    QCString trReference()
    { return "��ե����"; }
    QCString trReimplementedFrom()
    { return "��������"; }
    QCString trReimplementedIn()
    { return "���Ǻ����"; }
    QCString trIncludeFile()
    { return "���󥯥롼�ɥե�����"; }
    QCString trGeneratedFrom(const char *s,bool)
    { 
      QCString result=(QCString)"����"+s+
	           "���Ф���ɥ�����Ȥϰʲ��Υե����뤫����������ޤ�����";
      return result;
    }
    // end of obsolete functions 
    //--------------------------------------------------------------------

    /*! returns the name of the package that is included by LaTeX */
    QCString latexBabelPackage()
    { return "a4j"; }

    /*! used in the compound documentation before a list of related functions. */
    QCString trRelatedFunctions()
    { return "��Ϣ����ؿ�"; }

    /*! subscript for the related functions. */
    QCString trRelatedSubscript()
    { return "�ʤ����ϥ��дؿ��Ǥʤ����Ȥ���ա�"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    QCString trDetailedDescription()
    { return "����"; }

    /*! header that is put before the list of typedefs. */
    QCString trMemberTypedefDocumentation()
    { return "���з�����β���"; }
    
    /*! header that is put before the list of enumerations. */
    QCString trMemberEnumerationDocumentation()
    { return "������󷿤β���"; }
    
    /*! header that is put before the list of member functions. */
    QCString trMemberFunctionDocumentation()
    { return "���дؿ��β���"; }
    
    /*! header that is put before the list of member attributes. */
    QCString trMemberDataDocumentation()
    { return "���Хǡ����β���"; }

    /*! this is the text of a link put after brief descriptions. */
    QCString trMore()
    { return "���ܤ���..."; }

    /*! put in the class documentation */
    QCString trListOfAllMembers()
    { return "���٤ƤΥ��Хꥹ��"; }

    /*! used as the title of the "list of all members" page of a class */
    QCString trMemberList()
    { return "���Хꥹ��"; }

    /*! this is the first part of a sentence that is followed by a class name */
    QCString trThisIsTheListOfAllMembers()
    { return "����������Хꥹ�ȤǤ���"; }

    /*! this is the remainder of the sentence after the class name */
    QCString trIncludingInheritedMembers()
    { return "�Ѿ����Ф⤹�٤ƴޤ�Ǥ��ޤ���"; }
    
    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    QCString trGeneratedAutomatically(const char *s)
    { QCString result;
      if (s) result=(QCString)s+"��";
      result+="�����������ɤ��� Doxygen ����ưŪ���������ޤ�����";
      return result;
    }

    /*! put after an enum name in the list of all members */
    QCString trEnumName()
    { return "enum ��"; }
    
    /*! put after an enum value in the list of all members */
    QCString trEnumValue()
    { return "enum ��"; }
    
    /*! put after an undocumented member in the list of all members */
    QCString trDefinedIn()
    { return "�����������ޤ�����"; }

    /*! put as in introduction in the verbatim header file of a class.
     *  parameter f is the name of the include file.
     */
    QCString trVerbatimText(const char *f)
    { return (QCString)"����ϥ��󥯥롼�ɥե�����"+f+"�����ƤǤ���"; }

    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of 
     *  compounds or files (see the \group command).
     */
    QCString trModules()
    { return "�⥸�塼��"; }
    
    /*! This is put above each page as a link to the class hierarchy */
    QCString trClassHierarchy()
    { return "���饹����"; }
    
    /*! This is put above each page as a link to the list of annotated classes */
    QCString trCompoundList()
    { return "�ǡ�����¤�ꥹ��"; }
    
    /*! This is put above each page as a link to the list of documented files */
    QCString trFileList()
    { return "�ե�����ꥹ��"; }

    /*! This is put above each page as a link to the list of all verbatim headers */
    QCString trHeaderFiles()
    { return "�إå��ե�����"; }

    /*! This is put above each page as a link to all members of compounds. */
    QCString trCompoundMembers()
    { return "�ǡ�����¤����"; }

    /*! This is put above each page as a link to all members of files. */
    QCString trFileMembers()
    { return "�ե��������"; }

    /*! This is put above each page as a link to all related pages. */
    QCString trRelatedPages()
    { return "��Ϣ�ڡ���"; }

    /*! This is put above each page as a link to all examples. */
    QCString trExamples()
    { return "��"; }

    /*! This is put above each page as a link to the search engine. */
    QCString trSearch()
    { return "����"; }

    /*! This is an introduction to the class hierarchy. */
    QCString trClassHierarchyDescription()
    { return "���ηѾ��ꥹ�ȤϤ����ޤ��ˤϥ����Ȥ���Ƥ��ޤ�����"
             "����ե��٥åȽ�Ǵ����˥����Ȥ���ƤϤ��ޤ���";
    }

    /*! This is an introduction to the list with all files. */
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="���Υꥹ�Ȥϡ�";
      if (!extractAll) result+="�ɥ�����Ȳ����졢";
      result+="�ʰ���������ĥե����뤹�٤ƤΥꥹ�ȤǤ���";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    QCString trCompoundListDescription()
    { return "����ϴʰ���������ġ����饹����¤�Ρ������ΤΥꥹ�ȤǤ���";}

    /*! This is an introduction to the page with all class members. */
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="�����";
      if (!extractAll) result+="�ɥ�����Ȳ����줿";
      result+="���饹���Ф��٤ƤΥꥹ�Ȥǡ����줾��";
      if (extractAll) result+="��°���Ƥ��륯�饹";
      result+="�β���ؤΥ�󥯤�ĥ���Ƥ��ޤ���";
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="�����";
      if (!extractAll) result+="�ɥ�����Ȳ����줿";
      result+="�ե�������Ф��٤ƤΥꥹ�Ȥǡ����줾��";
      if (extractAll) result+="��°���Ƥ���ե�����";
      result+="�β���ؤΥ�󥯤�ĥ���Ƥ��ޤ���";
      return result;
    }

    /*! This is an introduction to the page with the list of all header files. */
    QCString trHeaderFilesDescription()
    { return "API��������إå��ե�����Ǥ���"; }

    /*! This is an introduction to the page with the list of all examples */
    QCString trExamplesDescription()
    { return "���٤Ƥ���Υꥹ�ȤǤ���"; }

    /*! This is an introduction to the page with the list of related pages */
    QCString trRelatedPagesDescription()
    { return "��Ϣ����ɥ�����ȥڡ������٤ƤΥꥹ�ȤǤ���"; }

    /*! This is an introduction to the page with the list of class/file groups */
    QCString trModulesDescription()
    { return "���٤ƤΥ⥸�塼��Υꥹ�ȤǤ���"; }

    /*! This sentences is used in the annotated class/file lists if no brief
     * description is given. 
     */
    QCString trNoDescriptionAvailable()
    { return "�ɥ�����Ȥ����Ҥ���Ƥ��ޤ���"; }
    
    // index titles (the project name is prepended for these) 


    /*! This is used in HTML as the title of index.html. */
    QCString trDocumentation()
    { return "�ɥ������"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * index of all groups.
     */
    QCString trModuleIndex()
    { return "�⥸�塼�����"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * class hierarchy.
     */
    QCString trHierarchicalIndex()
    { return "���غ���"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * annotated compound index.
     */
    QCString trCompoundIndex()
    { return "�ǡ�����¤����"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    QCString trFileIndex() 
    { return "�ե��������"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    QCString trModuleDocumentation()
    { return "�⥸�塼��β���"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    QCString trClassDocumentation()
    { return "���饹�β���"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    QCString trFileDocumentation()
    { return "�ե�����β���"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    QCString trExampleDocumentation()
    { return "����β���"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all related pages.
     */
    QCString trPageDocumentation()
    { return "�ڡ����β���"; }

    /*! This is used in LaTeX as the title of the document */
    QCString trReferenceManual()
    { return "��ե���󥹥ޥ˥奢��"; }
    
    /*! This is used in the documentation of a file as a header before the 
     *  list of defines
     */
    QCString trDefines()
    { return "�ޥ������"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of function prototypes
     */
    QCString trFuncProtos()
    { return "�ؿ��ץ�ȥ�����"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of typedefs
     */
    QCString trTypedefs()
    { return "�����"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of enumerations
     */
    QCString trEnumerations()
    { return "���"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) functions
     */
    QCString trFunctions()
    { return "�ؿ�"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trVariables()
    { return "�ѿ�"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trEnumerationValues()
    { return "�����"; }
    
    /*! This is used in man pages as the author section. */
    QCString trAuthor()
    { return "���"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    QCString trDefineDocumentation()
    { return "�ޥ�������β���"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for function prototypes
     */
    QCString trFunctionPrototypeDocumentation()
    { return "�ؿ��ץ�ȥ����פβ���"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for typedefs
     */
    QCString trTypedefDocumentation()
    { return "������β���"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration types
     */
    QCString trEnumerationTypeDocumentation()
    { return "��󷿤β���"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration values
     */
    QCString trEnumerationValueDocumentation()
    { return "����ͤβ���"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for functions
     */
    QCString trFunctionDocumentation()
    { return "�ؿ��β���"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for variables
     */
    QCString trVariableDocumentation()
    { return "�ѿ��β���"; }

    /*! This is used in the documentation of a file/namespace/group before 
     *  the list of links to documented compounds
     */
    QCString trCompounds()
    { return "�ǡ�����¤"; }

    /*! This is used in the documentation of a group before the list of 
     *  links to documented files
     */
    QCString trFiles()
    { return "�ե�����"; }

    /*! This is used in the standard footer of each page and indicates when 
     *  the page was generated 
     */
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result;
      if (projName) result+=(QCString)projName+"���Ф���";
      result+=(QCString)date+"����������ޤ�����";
      return result;
    }
    /*! This is part of the sentence used in the standard footer of each page.
     */
    QCString trWrittenBy()
    {
      return "�γ�ȯ��:";
    }

    /*! this text is put before a class diagram */
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)clName+"���Ф��륯�饹���ؿ�";
    }
    
    /*! this text is generated when the \internal command is used. */
    QCString trForInternalUseOnly()
    { return "�������ѤΤߡ�"; }

    /*! this text is generated when the \reimp command is used. */
    QCString trReimplementedForInternalReasons()
    { return "����Ū����ͳ�ˤ��Ƽ�������ޤ�������API�ˤϱƶ����ޤ���";
    }

    /*! this text is generated when the \warning command is used. */
    QCString trWarning()
    { return "���"; }

    /*! this text is generated when the \bug command is used. */
    QCString trBugsAndLimitations()
    { return "�Х�������"; }

    /*! this text is generated when the \version command is used. */
    QCString trVersion()
    { return "�С������"; }

    /*! this text is generated when the \date command is used. */
    QCString trDate()
    { return "����"; }

    /*! this text is generated when the \author command is used. */
    QCString trAuthors()
    { return "���"; }

    /*! this text is generated when the \return command is used. */
    QCString trReturns()
    { return "�����"; }

    /*! this text is generated when the \sa command is used. */
    QCString trSeeAlso()
    { return "����"; }

    /*! this text is generated when the \param command is used. */
    QCString trParameters()
    { return "����"; }

    /*! this text is generated when the \exception command is used. */
    QCString trExceptions()
    { return "�㳰"; }
    
    /*! this text is used in the title page of a LaTeX document. */
    QCString trGeneratedBy()
    { return ""; }

    // new since 0.49-990307
    
    /*! used as the title of page containing all the index of all namespaces. */
    QCString trNamespaceList()
    { return "̾�����֥ꥹ��"; }

    /*! used as an introduction to the namespace list */
    QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="���Υꥹ�Ȥϡ��ʰ���������Ĥ��٤Ƥ�";
      if (!extractAll) result+="�ɥ�����Ȳ����줿";
      result+="̾�����֤Υꥹ�ȤǤ���";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    QCString trFriends()
    { return "�ե���"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    /*! used in the class documentation as a header before the list of all
     * related classes 
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "�ե��ɤȴ�Ϣ����ؿ��β���"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    QCString trCompoundReference(const char *clName,
                                 ClassDef::CompoundType compType,
                                 bool /*isTemplate*/)
    {
      QCString result="";
      switch(compType)
      {
        case ClassDef::Class:      result+="���饹 "; break;
        case ClassDef::Struct:     result+="��¤�� "; break;
        case ClassDef::Union:      result+="������ "; break;
        case ClassDef::Interface:  result+="���󥿥ե�����"; break;
        case ClassDef::Exception:  result+="Exception "; break; //TODO:fixme
      }
      result+=(QCString)clName+" �β���";
      return result;
    }

    /*! used as the title of the HTML page of a file */
    QCString trFileReference(const char *fileName)
    {
      QCString result="�ե����� "+(QCString)fileName+" �β���"; 
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result="̾������ "+(QCString)namespaceName+" �β���";
      return result;
    }
    
    /*! \mgroup Class sections
     *  these are for the member sections of a class, struct or union 
     */
    QCString trPublicMembers()
    { return "��������"; }
    QCString trPublicSlots()
    { return "��������å�"; }
    QCString trSignals()
    { return "�����ʥ�"; }
    QCString trStaticPublicMembers()
    { return "��Ū��������"; }
    QCString trProtectedMembers()
    { return "�ݸ����"; }
    QCString trProtectedSlots()
    { return "�ݸ��å�"; }
    QCString trStaticProtectedMembers()
    { return "��Ū�ݸ����"; }
    QCString trPrivateMembers()
    { return "���������"; }
    QCString trPrivateSlots()
    { return "���������å�"; }
    QCString trStaticPrivateMembers()
    { return "��Ū���������"; }
    /*! \endmgroup */ 
    
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
            result+=", �� ";
        }
      }
      return result; 
    }
    
    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritsList(int numEntries)
    {
      return trWriteList(numEntries)+"��Ѿ����Ƥ��ޤ���";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritedByList(int numEntries)
    {
      return trWriteList(numEntries)+"�˷Ѿ�����Ƥ��ޤ���";
    }

    /*! used in member documentation blocks to produce a list of 
     *  members that are hidden by this one.
     */
    QCString trReimplementedFromList(int numEntries)
    {
      return trWriteList(numEntries)+"���������Ƥ��ޤ���";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    QCString trReimplementedInList(int numEntries)
    {
      return trWriteList(numEntries)+"�Ǻ��������Ƥ��ޤ���";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    QCString trNamespaceMembers()
    { return "̾�����֥���"; }

    /*! This is an introduction to the page with all namespace members */
    QCString trNamespaceMemberDescription(bool extractAll)
    { 
	QCString result="�����";
      if (!extractAll) result+="�ɥ�����Ȳ����줿";
      result+="̾�����֤��٤ƤΥꥹ�Ȥǡ����줾��";
      if (extractAll) 
	  result+="��̾�����֤β���";
      else 
	  result+="��°���Ƥ���̾������";
      result+="�ؤΥ�󥯤�ĥ���Ƥ��ޤ���";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the 
     *  index of all namespaces.
     */
    QCString trNamespaceIndex()
    { return "̾�����ֺ���"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    QCString trNamespaceDocumentation()
    { return "̾�����֤β���"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    QCString trNamespaces()
    { return "̾������"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result=(QCString)"����";
      switch(compType)
      {
        case ClassDef::Class:      result+="���饹"; break;
        case ClassDef::Struct:     result+="��¤��"; break;
        case ClassDef::Union:      result+="������"; break;
        case ClassDef::Interface:  result+="���󥿥ե�����"; break;
        case ClassDef::Exception:  result+="Exception"; break; //TODO:fixme
      }
      result+="�β���ϼ��Υե����뤫����������ޤ���:";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    QCString trAlphabeticalList()
    { return "����ե��٥åȽ�ꥹ��"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    QCString trReturnValues()
    { return "�����"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    QCString trMainPage()
    { return "�ᥤ��ڡ���"; }

    /*! This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    QCString trPageAbbreviation()
    { return "p."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    QCString trSources()
    {
      return "������";
    }
    QCString trDefinedAtLineInSourceFile()
    {
      return "�ե����� @1 �� @0 �Ԥ��������Ƥ��ޤ���";
    }
    QCString trDefinedInSourceFile()
    {
      return "�ե����� @0 ���������Ƥ��ޤ���";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    QCString trDeprecated()
    {
      return "Deprecated";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)clName+"�Υ���ܥ졼������";
    }
    /*! this text is put before an include dependency graph */
    QCString trInclDepGraph(const char *fName)
    {
	return (QCString)fName+"�Υ��󥯥롼�ɰ�¸�ط���";
    }
    /*! header that is put before the list of constructor/destructors. */
    QCString trConstructorDocumentation()
    {
      return "���󥹥ȥ饯���ȥǥ��ȥ饯���β���"; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    QCString trGotoSourceCode()
    {
      return "���Υե�����Υ����������ɤ򸫤롣";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    QCString trGotoDocumentation()
    {
      return "���Υե�����β���򸫤롣";
    }
    /*! Text for the \pre command */
    QCString trPrecondition()
    {
      return "������";
    }
    /*! Text for the \post command */
    QCString trPostcondition()
    {
      return "Postcondition";
    }
    /*! Text for the \invariant command */
    QCString trInvariant()
    {
      return "Invariant";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    QCString trInitialValue()
    {
      return "�����:";
    }
    /*! Text used the source code in the file index */
    QCString trCode()
    {
      return "������";
    }
    QCString trGraphicalHierarchy()
    {
      return "���饹���ؿ�";
    }
    QCString trGotoGraphicalHierarchy()
    {
      return "���饹���ؿޤ򸫤롣";
    }
    QCString trGotoTextualHierarchy()
    {
      return "���饹���ؿ�(�ƥ�����)�򸫤롣";
    }
    QCString trPageIndex()
    {
      return "�ڡ�������";
    }
};

#endif
