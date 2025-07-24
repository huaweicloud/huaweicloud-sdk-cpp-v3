

#include "huaweicloud/cloudtest/v1/model/CaseRemoveInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CaseRemoveInfo::CaseRemoveInfo()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
    removeAssociateIssue_ = false;
    removeAssociateIssueIsSet_ = false;
    caseListIsSet_ = false;
}

CaseRemoveInfo::~CaseRemoveInfo() = default;

void CaseRemoveInfo::validate()
{
}

web::json::value CaseRemoveInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }
    if(removeAssociateIssueIsSet_) {
        val[utility::conversions::to_string_t("remove_associate_issue")] = ModelBase::toJson(removeAssociateIssue_);
    }
    if(caseListIsSet_) {
        val[utility::conversions::to_string_t("case_list")] = ModelBase::toJson(caseList_);
    }

    return val;
}
bool CaseRemoveInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterator_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remove_associate_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remove_associate_issue"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoveAssociateIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CaseIdAndTypeInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseList(refVal);
        }
    }
    return ok;
}


std::string CaseRemoveInfo::getProjectUuid() const
{
    return projectUuid_;
}

void CaseRemoveInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool CaseRemoveInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void CaseRemoveInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string CaseRemoveInfo::getIteratorUri() const
{
    return iteratorUri_;
}

void CaseRemoveInfo::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool CaseRemoveInfo::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void CaseRemoveInfo::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

bool CaseRemoveInfo::isRemoveAssociateIssue() const
{
    return removeAssociateIssue_;
}

void CaseRemoveInfo::setRemoveAssociateIssue(bool value)
{
    removeAssociateIssue_ = value;
    removeAssociateIssueIsSet_ = true;
}

bool CaseRemoveInfo::removeAssociateIssueIsSet() const
{
    return removeAssociateIssueIsSet_;
}

void CaseRemoveInfo::unsetremoveAssociateIssue()
{
    removeAssociateIssueIsSet_ = false;
}

std::vector<CaseIdAndTypeInfo>& CaseRemoveInfo::getCaseList()
{
    return caseList_;
}

void CaseRemoveInfo::setCaseList(const std::vector<CaseIdAndTypeInfo>& value)
{
    caseList_ = value;
    caseListIsSet_ = true;
}

bool CaseRemoveInfo::caseListIsSet() const
{
    return caseListIsSet_;
}

void CaseRemoveInfo::unsetcaseList()
{
    caseListIsSet_ = false;
}

}
}
}
}
}


