/******************************************************************************
 *
 * 
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
 *  Russian translation by Andrey V. Stolyarov <crocodil<AT>croco.net>
 *  released Feb 14, 2001
 */

#ifndef TRANSLATOR_RU_H
#define TRANSLATOR_RU_H

#include "translator.h"

class TranslatorRussian : public Translator
{
  public:
    QCString idLanguage()
    { return "russian"; }
    QCString latexBabelPackage()
    { return "russian"; }
    QCString idLanguageCharset()
    {
      return "koi8-r";
    }
    QCString trRelatedFunctions()
    {
	return "��������� �������";
    }
    QCString trRelatedSubscript()
    {
	return "(�������� ��������, ��� ��� ������� - �� ����� ������)";
    }
    QCString trDetailedDescription()
    {
	return "��������� ��������";
    }
    QCString trMemberTypedefDocumentation()
    {
	// Need additional translation
	return "�������� typedef-������";
    }
    QCString trMemberEnumerationDocumentation()
    {
	return "�������� ������ ������������� ����";
    }
    QCString trMemberFunctionDocumentation()
    {
	return "�������� �������-������";
    }
    QCString trMemberDataDocumentation()
    {
      if (Config::optimizeForCFlag)
      {
        return "�������� �����";
      }
      else
      {
        return "�������� ����������-������";
      }
    }
    QCString trMore()
    {
	return "������...";
    }
    QCString trListOfAllMembers()
    {
	return "C����� ���� ������ ������.";
    }
    QCString trMemberList()
    {
	return "������ ������";
    }
    QCString trThisIsTheListOfAllMembers()
    {
	return "��� ������ ������ ������ ������/��������� ";
    }
    QCString trIncludeIncludingInheritedMembers()
    {
	return ", ������� ��� �������������� �����.";
    }
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="������������� ������� �������� Doxygen";
      if (s) result+=(QCString)" ��� "+s;
      result+=" �� ������ ��������� ������."; 
      return result;
    }
    QCString trEnumName()
    {
	return "��� ������������";
    }
    QCString trEnumValue()
    {
	return "�������� ������������";
    }
    QCString trDefinedIn()
    {
	return "���������� �";
    }
    QCString trVerbatimText(const char* f)
    {
	return (QCString)"��� ������ ������� ������ �� ����������� �����"+f;
    }
    QCString trModules()
    {
	return "������";
    }
    QCString trClassHierarchy()
    {
	return "�������� �������";
    }
    QCString trCompoundList()
    {
      if (Config::optimizeForCFlag)
      {
        return "��������� ������";
      }
      else
      {
        // doubtful translation; originally - "Compound List"
        return "������ ��������� ��������";
      }
    }
    QCString trFileList()
    {
	return "������ ������";
    }
    QCString trHeaderFiles()
    {
	return "������������ �����";
    }
    QCString trCompoundMembers()
    {
      if (Config::optimizeForCFlag)
      {
        return "���� ��������";
      }
      else
      {
        return "�����-������";
      }
    }
    QCString trFileMembers()
    {
      if (Config::optimizeForCFlag)
      {
        return "���������� �����";
      }
      else
      {
         // doubtful translation 
         // (originally - "File members", but not good for Russian)
        return "����� �����";
      }
    }
    QCString trRelatedPages()
    {
         // non-verbatim translation: originally "related pages"
	return "��. �����: ";
    }
    QCString trExamples()
    {
	return "�������";
    }
    QCString trSearch()
    {
	return "�����";
    }
    QCString trClassHierarchyDescription()
    {
	return "��� ������ ������������ ������������� �������������� "
               "(�� �� ������) �� ��������";
    }
    QCString trFileListDescription(bool extractAll)
    {
	QCString result="������ ���� ";
	if(!extractAll) result+="����������������� ";
	result+="������ � ������� ���������:";
	return result;
    }
    QCString trCompoundListDescription()
    {
      if (Config::optimizeForCFlag)
      {
        return "��������� ������ � �� ������� ��������: ";
      }
      else
      {
	return "������, ���������, ����������� � ���������� " 
	       "� �� ������� ��������: ";
      }
    }
    QCString trCompoundMembersDescription(bool extractAll)
    {
	// Need additional translation
	QCString result="������ ���� ";
	if(!extractAll) result+="����������������� ";
	result+="������ ������� �� �������� �� ";
	if(extractAll)
	    result+="������������ �� ������ ��� ������� �����:";
	else
	    result+="������, � ������� ��� �����������:";
	return result;
    }
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="������ ���� ";
      if (!extractAll) result+="����������������� ";

      if (Config::optimizeForCFlag)
      {
        result+="�������, ����������, ����������������, "
                "������������ � ����������� �����";
      }
      else
      {
        result+="������ ������ ";
      }
      result+=" �� �������� �� ";
      if (extractAll)
        result+="�����, � ������� ��� �����������:";
      else
        result+="������������:";
      return result;
    }
    QCString trHeaderFilesDescription()
    {
	return "������ ������������ ������, ������������ API:";
    }
    QCString trExamplesDescription()
    {
	return "������ ���� ��������:";
    }
    QCString trRelatedPagesDescription()
    {
	return "������ ���� ����������� ������� ������������:";
    }
    QCString trModulesDescription()
    {
	return "������ ���� �������:";
    }
    QCString trNoDescriptionAvailable()
    {
	return "�������� �����������";
    }
    QCString trDocumentation()
    {
	return "������������";
    }
    QCString trModuleIndex()
    {
	return "��������� �������";
    }
    QCString trHierarchicalIndex()
    {
	return "������������� ������";
    }
    QCString trCompoundIndex()
    {
      if (Config::optimizeForCFlag)
      {
        return "������ �������� ������";
      }
      else
      {
          // originally "compound index"
        return "������ ������� � ��������";
      }
    }
    QCString trFileIndex()
    {
	return "������ ������";
    }
    QCString trModuleDocumentation()
    {
	return "������������ �� �������";
    }
    QCString trClassDocumentation()
    {
	return "������������ �� �������";
    }
    QCString trFileDocumentation()
    {
	return "������������ �� ������";
    }
    QCString trExampleDocumentation()
    {
	return "�������� ��������";
    }
    QCString trPageDocumentation()
    {
	return "������������ �� ���������";
    }
    QCString trReferenceManual()
    {
           // originally reference manual
	return "������� ����������";
    }
    QCString trDefines()
    {
	return "�����������";
    }
    QCString trFunctionPrototypes()
    {
	return "��������� �������";
    }
    QCString trTypedefs()
    {
	return "����������� �����";
    }
    QCString trEnumerations()
    {
	return "������������";
    }
    QCString trFunctions()
    {
	return "�������";
    }
    QCString trVariables()
    {
	return "����������";
    }
    QCString trEnumerationValues()
    {
	return "�������� ������������� ����";
    }
    QCString trAuthor()
    {
	return "�����";
    }
    QCString trDefineDocumentation()
    {	
	return "������������ �� ������������";
    }
    QCString trFunctionPrototypeDocumentation()
    {
	return "������������ �� ���������� �������";
    }
    QCString trTypedefDocumentation()
    {
	return "������������ �� ������������ �����"; 
    }
    QCString trEnumerationTypeDocumentation()
    {
	return "������������ �� ������������ �����";
    }
    QCString trEnumerationValueDocumentation()
    {
	return "������������ �� ��������� ������������ �����";
    }
    QCString trFunctionDocumentation()
    {
	return "������������ �� ��������";
    }
    QCString trVariableDocumentation()
    {
	return "������������ �� ����������";
    }
    QCString trCompounds()
    {
      if (Config::optimizeForCFlag)
      {
        return "��������� ������";
      }
      else
      { 
          // originally "compounds"
        return "��������� ����";
      }

    }
    QCString trFiles()
    {
	return "�����";
    }
    QCString trGeneratedAt(const char* date,const char* projName)
    {
	QCString result=(QCString)"������� "+date;
	if(projName) result+=(QCString)" ��� "+projName;
	result+=(QCString)" � ������� ";
	return result;
    }
    QCString trWrittenBy()
    {
	return "�����������";
    }
    QCString trClassDiagram(const char* clName)
    {
	return (QCString)"��������� ������������ ��� "+clName+":";
    }
    QCString trForInternalUseOnly()
    {
	return "������ ��� ����������� �������������.";
    }
    QCString trReimplementedForInternalREasons()
    {
	return "���������� �������� �� ���������� ��������;"
	       " ������������ ����� �� ����������.";
    }
    QCString trWarning()
    {
	return "��������������";
    }
    QCString trBugsAndLimitations()
    {
	return "������ � �����������";
    }
    QCString trVersion()
    {
	return "������";
    }
    QCString trDate()
    {
	return "����";
    }
    QCString trAuthors()
    {
	return "�����(�)";
    }
    QCString trReturns()
    {
	return "����������";
    }
    QCString trSeeAlso()
    {
	return "��. �����";
    }
    QCString trParameters()
    {
	return "���������";
    }
    QCString trExceptions()
    {
	return "����������";
    }
    QCString trGeneratedBy()
    {
	return "������� ��� ������";
    }
    QCString trNamespaceList()
    {
	return "������ ����������� ���� (namespaces)";
    }
    QCString trNamespaceListDescription(bool extractAll)
    {
	QCString result="������ ���� ";
	if(!extractAll) result+="����������������� ";
	result+="����������� ���� � ������� ���������:";
	return result;
    }
    QCString trFriends()
    {
	return "������";
    }
    QCString trRelatedFunctionDocumentation()
    {
	// need translation
	return "������������ �� ������� ������ � ��������� ��������";
    }
    QCString trCompoundReference(const char* clName,
                                 ClassDef::CompoundType compType,
                                 bool isTemplate)
    {
	QCString result=(QCString)"�������� ";
        if (isTemplate){ 
	  	switch(compType)
	  	{
	  	    case ClassDef::Struct: result+="��������� "; break;
	  	    case ClassDef::Class: 
	  	    case ClassDef::Union: 
	  	    case ClassDef::Interface: 
	  	    case ClassDef::Exception: 
					result+="���������� "; break;
	  	}
	}   
	switch(compType)
	{
	    case ClassDef::Class: result+="������ "; break;
	    case ClassDef::Struct: result+="��������� "; break;
	    case ClassDef::Union: result+="����������� "; break;
	    case ClassDef::Interface: result+="���������� "; break;
	    case ClassDef::Exception: result+="���������� "; break;
	}
	result+=clName;
	return result;
    }
    QCString trFileReference(const char* fileName)
    {
	QCString result;
	result+=(QCString)"�������� ����� "+fileName;
	return result;
    }
    QCString trNamespaceReference(const char* namespaceName)
    {
	QCString result=(QCString)"�������� ������������ ���� "+namespaceName;
	return result;
    }
    QCString trPublicMembers()
    {
	return "�������� �����";
    }
    QCString trPublicSlots()
    {
	return "�������� �����";
    }
    QCString trSignals()
    {
	return "�������";
    }
    QCString trStaticPublicMembers()
    {
	return "����������� �������� �����";
    }
    QCString trProtectedMembers()
    {
	return "���������� �����";
    }
    QCString trProtectedSlots()
    {
	return "���������� �����";
    }
    QCString trStaticProtectedSlots()
    {
	return "����������� ���������� �����";
    }
    QCString trPrivateMembers()
    {
	return "�������� �����";
    }
    QCString trPrivateSlots()
    {
	return "�������� �����";
    }
    QCString trStaticPrivateMembers()
    {
	return "�������� ����������� �����";
    }
    QCString trWriteList(int numEntries)
    {
	QCString result;
	int i;
	for(i=0;i<numEntries;i++)
	{
	    result+=generateMarker(i);
	    if(i!=numEntries-1)
	    {
		if(i<numEntries-2)
		    result+=", ";
		else
		    result+=" � ";
	    }
	}
	return result;
    }
    QCString trInheritsList(int numEntries)
    {
	return "����������� �� "+trWriteList(numEntries)+".";
    }
    QCString trInheritedByList(int numEntries)
    {
	return "����������� "+trWriteList(numEntries)+".";
    }

    QCString trReimplementedFromList(int numEntries)
    {
        // Originally: "reimplemented from"
        // This translation assumes numEntries is always 1
        //    which is true as of 1.2.5 and it's hard for me to 
        //    imagine a situation when it could be wrong. 
      return "�������������� ����� ������ "+trWriteList(numEntries)+".";
    }
    QCString trReimplementedInList(int numEntries)
    {
	return "���������������� � "+trWriteList(numEntries)+".";
    }
    QCString trNamespaceMembers()
    {
	return "����� ����������� ����";
    }
    QCString trNamespaceMemberDescription(bool extractAll)
    {
	QCString result="������ ���� ";
	if(!extractAll) result+="����������������� ";
	result+="������ ����������� ���� �� �������� �� ";
	if(extractAll)
	    result+="������������ �� ������� �����:";
	else
	    result+="������������ ����, � ������� ��� �����������:";
	return result;
    }
    QCString trNamespaceIndex()
    {
	return "������ ����������� ����";
    }
    QCString trNamespaceDocumentation()
    {
	return "������������ ����������� ����";
    }
    QCString trNamespaces()
    {
	return "������������ ����";
    }
    QCString trGeneratedFromFiles(ClassDef::CompoundType compType, bool single)
    {
	QCString result=(QCString)"������������ ��� ���";
	switch(compType)
	{
	    case ClassDef::Class: result+="�� ������"; break;
	    case ClassDef::Struct: result+="� ���������"; break;
	    case ClassDef::Union: result+="�� �����������"; break;
	    case ClassDef::Interface: result+="�� ����������"; break;
	    case ClassDef::Exception: result+="�� ����������"; break;
	}
	result+=" ���� ������� �� ����";
	if(single) 
	    result+="�:"; 
	else
	    result+="��:";
	return result;
    }
    QCString trAlphabeticalList()
    {
	return "���������� ������";
    }
    QCString trReturnValues()
    {
	return "������������ ��������";
    }
    QCString trMainPage()
    {
	return "������� ��������";
    }
    QCString trPageAbbreviation()
    {
	return "���.";
    }
    QCString trSources()
    {
	return "�������� ������";
    }
    QCString trDefinedAtLineInSourceFile()
    {
	return "������������ � ������ @0 ����� @1.";
    }
    QCString trDefinedInSourceFile()
    {
	return "������������ � ����� @0.";
    }
    QCString trDeprecated()
    {
	return "��������";
    }
    QCString trCollaborationDiagram(const char* clName)
    {
           // originally "collaboration diagram"
	return (QCString)"��������� ������������� ��� "+clName+":";
    }
    QCString trInclDepGraph(const char* fName)
    {
	return (QCString)"���� ������������ �� ���������� "
                         "������ ��� "+fName+":";
    }
    QCString trConstructorDocumentation()
    {
	return "������������ �� ������������ � �����������";
    }
    QCString trGotoSourceCode()
    {
	return "������� � ��������� ������ ����� �����.";
    }
    QCString trGotoDocumentation()
    {
	return "������� � ������������ �� ���� ����.";
    }
    QCString trPrecondition()
    {
	return "�����������";
    }
    QCString trPostcondition()
    {
	return "�����������";
    }
    QCString trInvariant()
    {
	return "���������";
    }
    QCString trInitialValue()
    {
	return "��������� ��������:";
    }
    QCString trCode()
    {
	return "�������� �����";
    }
    QCString trGraphicalHierarchy()
    {
	return "����������� �������� ������(��)";
    }
    QCString trGotoGraphicalHierarchy()
    {
	return "������� � ����������� ��������";
    }
    QCString trGotoTextualHierarchy()
    {
	return "������� � ��������� ��������";
    }
    QCString trPageIndex()
    {
	return "������ �������";
    }
    QCString trNote()
    {
	return "����������";
    }
    QCString trPublicTypes()
    {
	return "�������� ����";
    }
    QCString trPublicAttribs()
    {
      if (Config::optimizeForCFlag)
      {
        return "���� ������";
      }
      else
      {
	return "�������� ��������";
      }
    }
    QCString trStaticPublicAttribs()
    {
	return "�������� ����������� ��������";
    }
    QCString trProtectedTypes()
    {
	return "���������� ����";
    }
    QCString trProtectedAttribs()
    {
	return "���������� ��������";
    }
    QCString trStaticProtectedAttribs()
    {
	return "����������� ����������  ��������";
    }
    QCString trPrivateTypes()
    {
	return "�������� ����";
    }
    QCString trPrivateAttribs()
    {
	return "�������� ��������";
    }
    QCString trStaticPrivateAttribs()
    {
	return "�������� ����������� ��������";
    }
    QCString trTodo()
    {
      return "���������� �������:";
    }
    QCString trTodoList()
    {
      return "������ ���";
    }
    QCString trReferencedBy()
    {
      return "����������� �";
    }
    QCString trRemarks()
    {
      return "����������";
    }
    QCString trAttention()
    {
      return "��������";
    }
    QCString trInclByDepGraph()
    {
      return "���� ���� ����������, ����� ����� ����� ��� "
             "�������� �������� ������ ����:";
    }
    QCString trSince()
    {
      return "������� �";
    }
    QCString trLegendTitle()
    {
      return "�������� �����������";
    }
    QCString trLegendDocs()
    {
      return 
        //"�������� ����������� �� ������, ������������ ���������� "
        //"doxygen.<p>\n"
        "���������� ��������� ������:\n"
        "\\code\n"
        "/*! ��������� ����� ��-�� �������� */\n"
        "class Invisible { };\n\n"
        "/*! ��������� �����, ��������� ������������ ������ */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* �����, �� ����������������� ������������� doxygen */\n"
        "class Undocumented { };\n\n"
        "/*! �����, ������������ �������� ������������ */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! �����, ������������ ���������� ������������ */\n"
        "class ProtectedBase { };\n\n"
        "/*! �����, ������������ �������� ������������ */\n"
        "class PrivateBase { };\n\n"
        "/*! �����, ������������ � ������ Inherited */\n"
        "class Used { };\n\n"
        "/*! ����������, �������������� �� ���������� ������� */\n"
        "class Inherited : public PublicBase,\n"
        "                  protected ProtectedBase,\n"
        "                  private PrivateBase,\n"
        "                  public Undocumented\n"
        "{\n"
        "  private:\n"
        "    Used *m_usedClass;\n"
        "};\n"
        "\\endcode\n"
        "���� ��� \\c MAX_DOT_GRAPH_HEIGHT � ���������������� ����� "
        "����� �������� 200, ������� ��������� ����:"
        "<p><center><img src=\"graph_legend.gif\"></center>\n"
        "<p>\n"
        "�������������� � ���� ����� ����� ��������� ��������:\n"
        "<ul>\n"
        "<li>����������� ������ ������������� ������������ ��������� ��� �����, "
	"��� �������� ������ ������ ����.\n"
        "<li>������������� � ������ �������� ���������� ����������������� ��������� ��� �����.\n"
        "<li>������������� � ����� �������� ���������� ������������������� ��������� ��� �����.\n"
        "<li>������������� � ������� �������� ���������� ����������������� ��������� ��� �����, ��� ��������\n"
        " �� ��� ��������� ������������/���������� ��������. ���� ���������, "
        "���� �� �� ���������� � ��������� �������."
        "</ul>\n"
        "������� ����� ��������� ��������:\n"
        "<ul>\n"
        "<li>���������� ������� ������������ ��� ����������� ��������� ��������� ������������ "
        "����� ����� ��������.\n"
        "<li>������������ ������� ������������ ��� ���������� ������������.\n"
        "<li>������������ ������� ������������ ��� �������� ������������.\n"
        "<li>���������� ���������� ������� ������������, ���� ����� ���������� "
        "� ������ ������ ��� ������������ ������ �������. "
        "������� ����������� ������ ����������, "
        "����� ������� �������� ����������� ����� ��� ���������. \n"
        "</ul>\n";
    }
    QCString trLegend()
    {
      return "�����������";
    }
    QCString trTest()
    {
      return "����";
    }
    QCString trTestList()
    {
      return "������ ������";
    }

    virtual QCString trDCOPMethods()
    {
      return "������ DCOP";
    }


    virtual QCString trProperties()
    {
      return "��������";
    }
    virtual QCString trPropertyDocumentation()
    {
      return "������������ �������";
    }


    virtual QCString trInterfaces()
    {
      return "����������";
    }
    virtual QCString trClasses()
    {
      return "������";
    }
    virtual QCString trPackage(const char *name)
    {
      return (QCString)"����� "+name;
    }
    virtual QCString trPackageList()
    {
      return "������ �������";
    }
    virtual QCString trPackageListDescription()
    {
      return "������ ������� � ������� ��������� (���� ����):";
    }
    virtual QCString trPackages()
    {
      return "������";
    }
    virtual QCString trPackageDocumentation()
    {
      return "������������ �������";
    }
    virtual QCString trDefineValue()
    {
      return "��������:";
    }
};

#endif
