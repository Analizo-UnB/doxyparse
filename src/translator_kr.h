/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2001 by Dimitri van Heesch.
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

#ifndef TRANSLATOR_KR_H
#define TRANSLATOR_KR_H

#include "translator_adapter.h"

class TranslatorKorean : public TranslatorAdapter_1_1_0
{
  public:
    QCString idLanguage()
    { return "korean"; }
    /*! returns the name of the package that is included by LaTeX */
    QCString latexBabelPackage()
    { return ""; } // What is the correct value here?

    /*! return the language charset. This will be used for the HTML output */
    virtual QCString idLanguageCharset()
    {
      return "euc-kr";
    }

    /*! used in the compound documentation before a list of related functions. */
    QCString trRelatedFunctions()
    { return "���õ� �Լ���"; }

    /*! subscript for the related functions. */
    QCString trRelatedSubscript()
    { return "�����ּ�"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    QCString trDetailedDescription()
    { return "���� ����"; }

    /*! header that is put before the list of typedefs. */
    QCString trMemberTypedefDocumentation()
    { return "��� Ÿ������ ����ȭ"; }
    
    /*! header that is put before the list of enumerations. */
    QCString trMemberEnumerationDocumentation()
    { return "������(member) ���� ����ȭ"; }
    
    /*! header that is put before the list of member functions. */
    QCString trMemberFunctionDocumentation()
    { return "��� �Լ� ����ȭ"; }
    
    /*! header that is put before the list of member attributes. */
    QCString trMemberDataDocumentation()
    { return "�⼭ ����Ÿ ����ȭ"; }

    /*! this is the text of a link put after brief descriptions. */
    QCString trMore()
    { return "More..."; }

    /*! put in the class documentation */
    QCString trListOfAllMembers()
    { return "��� ��������(members)�� ���"; }

    /*! used as the title of the "list of all members" page of a class */
    QCString trMemberList()
    { return "������(member) ���"; }

    /*! this is the first part of a sentence that is followed by a class name */
    QCString trThisIsTheListOfAllMembers()
    { return "������ ��������(members)�� ��� " ; } // "This is the complete list of members for "

    /*! this is the remainder of the sentence after the class name */
    QCString trIncludingInheritedMembers()
    { return ", ��ӹ��� ��� ������(members)�鵵 ����"; } // ", including all inherited members."
    
    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="";
    if (s) result+=(QCString)s+"�� ";
    result+="source �ڵ�� ���� Doxygen�� ���� �ڵ������� ����";
    return result;
    }

    /*! put after an enum name in the list of all members */
    QCString trEnumName()
    { return "����ü �̸�"; }
    
    /*! put after an enum value in the list of all members */
    QCString trEnumValue()
    { return "����ü ��"; }
    
    /*! put after an undocumented member in the list of all members */
    QCString trDefinedIn()
    { return "���� ���ǵ�"; }

    /*! put as in introduction in the verbatim header file of a class.
     *  parameter f is the name of the include file.
     */
    QCString trVerbatimText(const char *f)
    { return (QCString)"�̰��� "+f+" ���� ������ ������� �����̴�"; }

    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of 
     *  compounds or files (see the \group command).
     */
    QCString trModules()
    { return "����"; }
    
    /*! This is put above each page as a link to the class hierarchy */
    QCString trClassHierarchy()
    { return "Ŭ���� ����(��)"; } // "Ŭ���� ����" or "Ŭ���� �з�ü��"
    
    /*! This is put above each page as a link to the list of annotated classes */
    QCString trCompoundList()
    { return "ȥ�� ���"; } //"ȥ�� ���", "�ռ�(����) ���(����Ʈ)"
    
    /*! This is put above each page as a link to the list of documented files */
    QCString trFileList()
    { return "���� ���"; } //"���� ���", "���� ����Ʈ"

    /*! This is put above each page as a link to the list of all verbatim headers */
    QCString trHeaderFiles()
    { return "��� ���ϵ�"; }

    /*! This is put above each page as a link to all members of compounds. */
    QCString trCompoundMembers()
    { return "ȥ�� �����"; } // "�ռ�(����) ���(�����)"

    /*! This is put above each page as a link to all members of files. */
    QCString trFileMembers()
    { return "���� �����"; }

    /*! This is put above each page as a link to all related pages. */
    QCString trRelatedPages()
    { return "���õ� ��������"; }

    /*! This is put above each page as a link to all examples. */
    QCString trExamples()
    { return "������"; }

    /*! This is put above each page as a link to the search engine. */
    QCString trSearch()
    { return "�˻�"; }

    /*! This is an introduction to the class hierarchy. */
    QCString trClassHierarchyDescription()
    { return "�� ��� ����� ���������� ������ ���ĺ������� �з��Ǿ����ϴ�.";}

    /*! This is an introduction to the list with all files. */
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="�̰��� ������ ������ ���� ��� "; // "Here is a list of all "
      if (!extractAll) result+="����ȭ�� "; // "documented "
      result+="���ϵ鿡 ���� ����Դϴ�."; // "files with brief descriptions:"
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    QCString trCompoundListDescription()
    { return "�̰��� ������ ������ ���� Ŭ������, "
        "����ü��, ����ü��, �׸��� �������̽����Դϴ�.";
    }

    /*! This is an introduction to the page with all class members. */
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="�̰��� ��� ����Ʈ�� �ֽ��ϴ�";  //"Here is a list of all "
      if (!extractAll) result+="����ȭ�� ";             //"documented "
      result+="��ũ�� �� Ŭ���� ����� ";               //"class members with links to "
      if (extractAll) 
        result+="������ ����� ���� Ŭ���� ����:";      //"the class documentation for each member:"
      else 
        result+="���Ϸ� ���� Ŭ������:";                //"the classes they belong to:"
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="�̰��� ��� ����Ʈ�� �ֽ��ϴ�";
      if (!extractAll) result+="����ȭ�� ";
      result+="��ũ�� �� ���� ����� ";
      if (extractAll) 
        result+="�� ����鿡 ���� ���� ����ȭ"; // "the file documentation for each member:"
      else 
        result+="�װ͵��� �����ִ� ���ϵ�"; // "the files they belong to:"
      return result;
    }

    /*! This is an introduction to the page with the list of all header files. */
    QCString trHeaderFilesDescription()
    { return "�̰��� API�� �����ϴ� ��� ���ϵ��Դϴ�."; } // "Here are the header files that make up the API:"

    /*! This is an introduction to the page with the list of all examples */
    QCString trExamplesDescription()
    { return "�̰��� ��� �������� ����Դϴ�."; } // "Here is a list of all examples:"

    /*! This is an introduction to the page with the list of related pages */
    QCString trRelatedPagesDescription()
    { return "�̰��� ��� ���õ� ����ȭ ���������� ����Դϴ�."; }
    // "Here is a list of all related documentation pages:"

    /*! This is an introduction to the page with the list of class/file groups */
    QCString trModulesDescription()
    { return "�̰��� ��� ������ ����Դϴ�."; } // "Here is a list of all modules:"

    /*! This sentences is used in the annotated class/file lists if no brief
     * description is given. 
     */
    QCString trNoDescriptionAvailable()
    { return "������ ������ �����ϴ�."; } // "No description available"
    
    // index titles (the project name is prepended for these) 


    /*! This is used in HTML as the title of index.html. */
    QCString trDocumentation()
    { return "����ȭ"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * index of all groups.
     */
    QCString trModuleIndex()
    { return "��� ����"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * class hierarchy.
     */
    QCString trHierarchicalIndex()
    { return "�з�ü�� ����"; } // "���� ����", "������ �ε���"

    /*! This is used in LaTeX as the title of the chapter with the 
     * annotated compound index.
     */
    QCString trCompoundIndex()
    { return "�ռ� �ε���"; } // "ȥ�� ����"

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    QCString trFileIndex() 
    { return "���� ����"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    QCString trModuleDocumentation()
    { return "��� ����ȭ"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    QCString trClassDocumentation()
    { return "Ŭ���� ����ȭ"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    QCString trFileDocumentation()
    { return "���� ����ȭ"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    QCString trExampleDocumentation()
    { return "���� ����ȭ"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all related pages.
     */
    QCString trPageDocumentation()
    { return "������ ����ȭ"; }

    /*! This is used in LaTeX as the title of the document */
    QCString trReferenceManual()
    { return "����"; } // "����","���� �Ŵ���", "���� �޴���"
    
    /*! This is used in the documentation of a file as a header before the 
     *  list of defines
     */
    QCString trDefines()
    { return "���ǵ�"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of function prototypes
     */
    QCString trFuncProtos()
    { return "�Լ� ������"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of typedefs
     */
    QCString trTypedefs()
    { return "Ÿ�� ���ǵ�"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of enumerations
     */
    QCString trEnumerations()
    { return "Enumerations"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) functions
     */
    QCString trFunctions()
    { return "�Լ���"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trVariables()
    { return "������"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trEnumerationValues()
    { return "����ü ����"; }
    
    /*! This is used in man pages as the author section. */
    QCString trAuthor()
    { return "����"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    QCString trDefineDocumentation()
    { return "���� ����ȭ"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for function prototypes
     */
    QCString trFunctionPrototypeDocumentation()
    { return "�Լ� ���� ����ȭ"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for typedefs
     */
    QCString trTypedefDocumentation()
    { return "Ÿ�� ���� ����ȭ"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration types
     */
    QCString trEnumerationTypeDocumentation()
    { return "����ü Ÿ�� ����ȭ"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration values
     */
    QCString trEnumerationValueDocumentation()
    { return "����ü �� ����ȭ"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for functions
     */
    QCString trFunctionDocumentation()
    { return "�Լ� ����ȭ"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for variables
     */
    QCString trVariableDocumentation()
    { return "���� ����ȭ"; }

    /*! This is used in the documentation of a file/namespace/group before 
     *  the list of links to documented compounds
     */
    QCString trCompounds()
    { return "ȥ�յ�"; }

    /*! This is used in the documentation of a group before the list of 
     *  links to documented files
     */
    QCString trFiles()
    { return "���ϵ�"; }

    /*! This is used in the standard footer of each page and indicates when 
     *  the page was generated 
     */
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result="";
      if (projName) result+=(QCString)projName+"�� ���� ";
      result += (QCString)date+" ���� by";
      return result;
    }
    /*! This is part of the sentence used in the standard footer of each page.
     */
    QCString trWrittenBy()
    {
      return "written by"; // "�� ���� ������?"
    }

    /*! this text is put before a class diagram */
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)clName+"�� ���� ��� ��ǥ"; // "Inheritance diagram for "+clName
    }
    
    /*! this text is generated when the \\internal command is used. */
    QCString trForInternalUseOnly()
    { return "���� ��븸�� ����"; }

    /*! this text is generated when the \\reimp command is used. */
    QCString trReimplementedForInternalReasons()
    { return "������ ������ ���� �籸����: API�� ������ �����ʾҴ�."; }
    // "Reimplemented for internal reasons; the API is not affected."

    /*! this text is generated when the \\warning command is used. */
    QCString trWarning()
    { return "���"; }

    /*! this text is generated when the \\bug command is used. */
    QCString trBugsAndLimitations()
    { return "���׵�� �Ѱ��"; }

    /*! this text is generated when the \\version command is used. */
    QCString trVersion()
    { return "����"; }

    /*! this text is generated when the \\date command is used. */
    QCString trDate()
    { return "��¥"; }

    /*! this text is generated when the \\author command is used. */
    QCString trAuthors()
    { return "����(��)"; }

    /*! this text is generated when the \\return command is used. */
    QCString trReturns()
    { return "��ȯ"; }

    /*! this text is generated when the \\sa command is used. */
    QCString trSeeAlso()
    { return "�����Ͻÿ�"; }

    /*! this text is generated when the \\param command is used. */
    QCString trParameters()
    { return "�Ű�������"; }

    /*! this text is generated when the \\exception command is used. */
    QCString trExceptions()
    { return "���ܵ�"; }
    
    /*! this text is used in the title page of a LaTeX document. */
    QCString trGeneratedBy()
    { return "�� ���� ������"; }

    // new since 0.49-990307
    
    /*! used as the title of page containing all the index of all namespaces. */
    QCString trNamespaceList()
    { return "�̸����� ���"; }

    /*! used as an introduction to the namespace list */
    QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="�̰��� ��� ������ ������ ���� ";
      if (!extractAll) result+="����ȭ�� ";
      result+="�̸������� ����Դϴ�:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    QCString trFriends()
    { return "������"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    /*! used in the class documentation as a header before the list of all
     * related classes 
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "������, �׸��� ���õ� �Լ� ����ȭ"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result=(QCString)clName+" ";
      if (isTemplate) result+=" ���ø�";
      switch(compType)
      {
        case ClassDef::Class:      result+=" Ŭ����"; break;
        case ClassDef::Struct:     result+=" ����ü"; break;
        case ClassDef::Union:      result+=" ����ü"; break;
        case ClassDef::Interface:  result+=" �������̽�"; break;
        case ClassDef::Exception:  result+=" ����"; break;
      }
      result+=" ����";
      return result;
    }

    /*! used as the title of the HTML page of a file */
    QCString trFileReference(const char *fileName)
    {
      QCString result=fileName;
      result+=" ���� ����"; 
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result=namespaceName;
      result+=" �̸� ���� ����";
      return result;
    }
    
    /*! \mgroup Class sections
     *  these are for the member sections of a class, struct or union 
     */
    QCString trPublicMembers()
    { return "���� �޼ҵ�"; }
    QCString trPublicSlots()
    { return "���� Slots"; }
    QCString trSignals()
    { return "��ȣ"; }
    QCString trStaticPublicMembers()
    { return "���� ���� �޼ҵ�"; }
    QCString trProtectedMembers()
    { return "������Ƽ�� �޼ҵ�"; }
    QCString trProtectedSlots()
    { return "Protected Slots"; }
    QCString trStaticProtectedMembers()
    { return "���� ������Ƽ�� �޼ҵ�"; }
    QCString trPrivateMembers()
    { return "�����̺���Ʈ �޼ҵ�"; }
    QCString trPrivateSlots()
    { return "Private Slots"; }
    QCString trStaticPrivateMembers()
    { return "���� �����̺���Ʈ �޼ҵ�"; }
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
            result+=", and ";
        }
      }
      return result; 
    }
    
    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritsList(int numEntries)
    {
      return trWriteList(numEntries)+" ���� ����ϴ�.";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    QCString trInheritedByList(int numEntries)
    {
      return trWriteList(numEntries)+"�� ���� ��ӵ�.";
    }

    /*! used in member documentation blocks to produce a list of 
     *  members that are hidden by this one.
     */
    QCString trReimplementedFromList(int numEntries)
    {
      return trWriteList(numEntries)+"���κ��� �籸����.";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    QCString trReimplementedInList(int numEntries)
    {
      return trWriteList(numEntries)+"���� �籸����.";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    QCString trNamespaceMembers()
    { return "�̸����� �����"; }

    /*! This is an introduction to the page with all namespace members */
    QCString trNamespaceMemberDescription(bool extractAll)
    {
      QCString result="�̰��� ��� ";
      if (!extractAll) result+="����ȭ�� ";
      result+="�̸����� ������� ����Դϴ�.";
      if (extractAll) 
        result+="�� ����鿡 ���� ����ȭ�� ";
      else 
        result+="�����ִ� �̸������� ";
      result+="��ũ�������ϴ�.";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the 
     *  index of all namespaces.
     */
    QCString trNamespaceIndex()
    { return "�̸����� ����"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    QCString trNamespaceDocumentation()
    { return "�̸����� ����ȭ"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    QCString trNamespaces()
    { return "�̸�����"; }

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
      QCString result=(QCString)"�� ";
      switch(compType)
      {
        case ClassDef::Class:      result+="Ŭ����"; break;
        case ClassDef::Struct:     result+="����ü"; break;
        case ClassDef::Union:      result+="����ü"; break;
        case ClassDef::Interface:  result+="�������̽�"; break;
        case ClassDef::Exception:  result+="����"; break;
      }
      result+="�� ���� ����ȭ�� ������ ����";
      if (!single) result+="��";
      result+="�κ��� �����Ǿ����ϴ�:";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    QCString trAlphabeticalList()
    { return "���ĺ������� ���"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    QCString trReturnValues()
    { return "��ȯ��"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    QCString trMainPage()
    { return "�ֿ� ������"; }

    /*! This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    QCString trPageAbbreviation()
    { return "������"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    QCString trSources()
    {
      return "��ó";
    }
    QCString trDefinedAtLineInSourceFile()
    {
      return "���� @1. �� @0 ��° ���ο��� ����"; // "Definition at line @0 of file @1."
    }
    QCString trDefinedInSourceFile()
    {
      return "���� @0. ���� ����"; // "Definition in file @0."
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    QCString trDeprecated()
    {
      return "Deprecated"; // "�񳭹���(??)","�ݴ��ϴ�"
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)clName+"�� ���� ���� ��ǥ:";
    }
    /*! this text is put before an include dependency graph */
    QCString trInclDepGraph(const char *fName)
    {
      return (QCString)fName+"�� ���� include ���� �׷���";
    }
    /*! header that is put before the list of constructor/destructors. */
    QCString trConstructorDocumentation()
    {
      return "������ & �Ҹ��� ����ȭ"; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    QCString trGotoSourceCode()
    {
      return "�� ���Ͽ� ���� �ҽ� �ڵ�� ���ÿ�";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    QCString trGotoDocumentation()
    {
      return "�� ������ ����ȭ�� ���ÿ�";
    }
    /*! Text for the \pre command */
    QCString trPrecondition()
    {
      return "���� ����";
    }
    /*! Text for the \post command */
    QCString trPostcondition()
    {
      return "�Ĺ� ����"; // "��ġ����"
    }
    /*! Text for the \invariant command */
    QCString trInvariant()
    {
      return "������ �ʴ�";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    QCString trInitialValue()
    {
      return "�ʱ�ȭ��";
    }
    /*! Text used the source code in the file index */
    QCString trCode()
    {
      return "�ڵ�";
    }
    QCString trGraphicalHierarchy()
    {
      return "��ǥ�� Ŭ���� �з�ü��"; // "��ǥ�� Ŭ���� ����"
    }
    QCString trGotoGraphicalHierarchy()
    {
      return "��ǥ�� Ŭ���� �з�ü��� ���ÿ�"; // "��ǥ�� Ŭ���� �������� ���ÿ�"
    }
    QCString trGotoTextualHierarchy()
    {
      return "������ Ŭ���� �з�ü��� ���ÿ�"; // "������ Ŭ���� �������� ���ÿ�"
    }
    QCString trPageIndex()
    {
      return "������ ����";
    }
};

#endif
