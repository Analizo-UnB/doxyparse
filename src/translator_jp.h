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

#ifndef TRANSLATOR_JP_H
#define TRANSLATOR_JP_H

#include "translator.h"

class TranslatorJapanese : public Translator
{
  public:
    QCString latexBabelPackage()
    { return "a4j"; }
    QCString trInherits()
    { return "�Ѿ�"; }
    QCString trAnd()
    { return "��"; }
    QCString trInheritedBy()
    { return "���˷Ѿ�����Ƥ��ޤ���"; }
    QCString trRelatedFunctions()
    { return "��Ϣ����ؿ�"; }
    QCString trRelatedSubscript()
    { return "�ʤ����ϥ��дؿ��Ǥʤ����Ȥ���ա�"; }
    QCString trDetailedDescription()
    { return "����"; }
    QCString trMemberTypedefDocumentation()
    { return "���з�����β���"; }
    QCString trMemberEnumerationDocumentation()
    { return "������󷿤β���"; }
    QCString trEnumerationValueDocumentation()
    { return "����ͤβ���"; }
    QCString trMemberFunctionDocumentation()
    { return "���дؿ��β���"; }
    QCString trMemberDataDocumentation()
    { return "���Хǡ����β���"; }
    QCString trGeneratedFrom(const char *s,bool)
    { 
      QCString result=(QCString)"����"+s+
	           "���Ф���ɥ�����Ȥϰʲ��Υե����뤫����������ޤ�����";
      return result;
    }
    QCString trMore()
    { return "���ܤ���..."; }
    QCString trReference()
    { return "��ե����"; }
    QCString trListOfAllMembers()
    { return "���٤ƤΥ��Хꥹ��"; }
    QCString trMemberList()
    { return "���Хꥹ��"; }
    QCString trThisIsTheListOfAllMembers()
    { return "����ϼ��������Хꥹ�ȤǤ���"; }
    QCString trIncludingInheritedMembers()
    { return "�Ѿ����Ф��٤Ƥ�ޤ�ǡ�"; }
    QCString trGeneratedAutomatically(const char *s)
    { QCString result;
      if (s) result=(QCString)s+"���Ф���";
      result+="�����������ɤ��� Doxygen ����ưŪ���������ޤ�����";
      return result;
    }
    QCString trEnumName()
    { return "enum ��"; }
    QCString trEnumValue()
    { return "enum ��"; }
    QCString trDefinedIn()
    { return "�����������ޤ�����"; }
    QCString trIncludeFile()
    { return "���󥯥롼�ɥե�����"; }
    QCString trVerbatimText(const char *f)
    { return (QCString)"����ϥ��󥯥롼�ɥե�����"+f+
	"�� Verbatim �ƥ����ȤǤ���"; }
    QCString trModules()
    { return "�⥸�塼��"; }
    QCString trClassHierarchy()
    { return "���饹����"; }
    QCString trCompoundList()
    { return "�ǡ�����¤�ꥹ��"; }
    QCString trFileList()
    { return "�ե�����ꥹ��"; }
    QCString trHeaderFiles()
    { return "�إå��ե�����"; }
    QCString trCompoundMembers()
    { return "�ǡ�����¤����"; }
    QCString trFileMembers()
    { return "�ե��������"; }
    QCString trRelatedPages()
    { return "��Ϣ�ڡ���"; }
    QCString trExamples()
    { return "��"; }
    QCString trSearch()
    { return "����"; }
    QCString trClassHierarchyDescription()
    { return "���ηѾ��ꥹ�ȤϤ����ޤ��ˤϥ����Ȥ���Ƥ��ޤ�����"
             "����ե��٥åȽ�Ǵ����˥����Ȥ���ƤϤ��ޤ���";
    }
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="���Υꥹ�Ȥϡ�";
      if (!extractAll) result+="�ɥ�����Ȳ����졢";
      result+="�ʰ���������ĥե����뤹�٤ƤΥꥹ�ȤǤ���";
      return result;
    }
    QCString trCompoundListDescription()
    { return "����ϴʰ���������ġ����饹����¤�Ρ������ΤΥꥹ�ȤǤ���";}
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="�����";
      if (!extractAll) result+="�ɥ�����Ȳ����줿";
      result+="���饹���Ф��٤ƤΥꥹ�Ȥǡ����줾��";
      if (extractAll) result+="��°���Ƥ��륯�饹";
      result+="�β���ؤΥ�󥯤�ĥ���Ƥ��ޤ���";
      return result;
    }
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="�����";
      if (!extractAll) result+="�ɥ�����Ȳ����줿";
      result+="�ե�������Ф��٤ƤΥꥹ�Ȥǡ����줾��";
      if (extractAll) result+="��°���Ƥ���ե�����";
      result+="�β���ؤΥ�󥯤�ĥ���Ƥ��ޤ���";
      return result;
    }
    QCString trHeaderFilesDescription()
    { return "API��������إå��ե�����Ǥ���"; }
    QCString trExamplesDescription()
    { return "���٤Ƥ���Υꥹ�ȤǤ���"; }
    QCString trRelatedPagesDescription()
    { return "��Ϣ����ɥ�����ȥڡ������٤ƤΥꥹ�ȤǤ���"; }
    QCString trModulesDescription()
    { return "���٤ƤΥ⥸�塼��Υꥹ�ȤǤ���"; }
    QCString trNoDescriptionAvailable()
    { return "�ɥ�����Ȥ����Ҥ���Ƥ��ޤ���"; }

    QCString trDocumentation()
    { return "�ɥ������"; }
    QCString trModuleIndex()
    { return "�⥸�塼�����"; }
    QCString trHierarchicalIndex()
    { return "���غ���"; }
    QCString trCompoundIndex()
    { return "�ǡ�����¤����"; }
    QCString trFileIndex() 
    { return "�ե��������"; }
    QCString trModuleDocumentation()
    { return "�⥸�塼��β���"; }
    QCString trClassDocumentation()
    { return "���饹�β���"; }
    QCString trFileDocumentation()
    { return "�ե�����β���"; }
    QCString trExampleDocumentation()
    { return "����β���"; }
    QCString trPageDocumentation()
    { return "�ڡ����β���"; }
    QCString trReferenceManual()
    { return "��ե���󥹥ޥ˥奢��"; }

    QCString trDefines()
    { return "�ޥ������"; }
    QCString trFuncProtos()
    { return "�ؿ��ץ�ȥ�����"; }
    QCString trTypedefs()
    { return "�����"; }
    QCString trEnumerations()
    { return "���"; }
    QCString trFunctions()
    { return "�ؿ�"; }
    QCString trVariables()
    { return "�ѿ�"; }
    QCString trEnumerationValues()
    { return "�����"; }
    QCString trReimplementedFrom()
    { return "��������"; }
    QCString trReimplementedIn()
    { return "���Ǻ����"; }
    QCString trAuthor()
    { return "���"; }
    QCString trDefineDocumentation()
    { return "�ޥ�������β���"; }
    QCString trFunctionPrototypeDocumentation()
    { return "�ؿ��ץ�ȥ����פβ���"; }
    QCString trTypedefDocumentation()
    { return "������β���"; }
    QCString trEnumerationTypeDocumentation()
    { return "��󷿤β���"; }
    QCString trFunctionDocumentation()
    { return "�ؿ��β���"; }
    QCString trVariableDocumentation()
    { return "�ѿ��β���"; }
    QCString trCompounds()
    { return "�ǡ�����¤"; }
    QCString trFiles()
    { return "�ե�����"; }
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result;
      if (projName) result+=(QCString)projName+"���Ф���";
      result+=(QCString)date+"����������ޤ�����";
      return result;
    }
    QCString trWrittenBy()
    {
      return "��ȯ�����Τ�";
    }
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)clName+"���Ф��륯�饹���ؿ�";
    }
    QCString trForInternalUseOnly()
    { return "�������ѤΤߡ�"; }
    QCString trReimplementedForInternalReasons()
    { return "����Ū����ͳ�ˤ��Ƽ�������ޤ�������API�ˤϱƶ����ޤ���";
    }
    QCString trWarning()
    { return "���"; }
    QCString trBugsAndLimitations()
    { return "�Х�������"; }
    QCString trVersion()
    { return "�С������"; }
    QCString trDate()
    { return "����"; }
    QCString trAuthors()
    { return "���"; }
    QCString trReturns()
    { return "�����"; }
    QCString trSeeAlso()
    { return "����"; }
    QCString trParameters()
    { return "����"; }
    QCString trExceptions()
    { return "�㳰"; }
    QCString trGeneratedBy()
    { return ""; }
    
    // new since 0.49-990307 
    
    QCString trNamespaces()
    { return "̾������"; }
    QCString trNamespaceList()
    { return "̾�����֥ꥹ��"; }
    QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="���Υꥹ�Ȥϡ��ʰ���������Ĥ��٤Ƥ�";
      if (!extractAll) result+="�ɥ�����Ȳ����줿";
      result+="̾�����֤Υꥹ�ȤǤ���";
      return result;
    }
    QCString trFriends()
    { return "�ե���"; }
    
    // new since 0.49-990405
    
    virtual QCString trRelatedFunctionDocumentation()
    { return "�ե��ɤȴ�Ϣ����ؿ��β���"; }
};

#endif
