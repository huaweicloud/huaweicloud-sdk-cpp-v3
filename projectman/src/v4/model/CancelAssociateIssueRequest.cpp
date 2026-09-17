

#include "huaweicloud/projectman/v4/model/CancelAssociateIssueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CancelAssociateIssueRequest::CancelAssociateIssueRequest()
{
    projectUUId_ = "";
    projectUUIdIsSet_ = false;
    attachProjectUUId_ = "";
    attachProjectUUIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    attachIssueId_ = 0;
    attachIssueIdIsSet_ = false;
}

CancelAssociateIssueRequest::~CancelAssociateIssueRequest() = default;

void CancelAssociateIssueRequest::validate()
{
}

web::json::value CancelAssociateIssueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUUIdIsSet_) {
        val[utility::conversions::to_string_t("projectUUId")] = ModelBase::toJson(projectUUId_);
    }
    if(attachProjectUUIdIsSet_) {
        val[utility::conversions::to_string_t("attachProjectUUId")] = ModelBase::toJson(attachProjectUUId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issueId")] = ModelBase::toJson(issueId_);
    }
    if(attachIssueIdIsSet_) {
        val[utility::conversions::to_string_t("attachIssueId")] = ModelBase::toJson(attachIssueId_);
    }

    return val;
}
bool CancelAssociateIssueRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projectUUId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectUUId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUUId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachProjectUUId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachProjectUUId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachProjectUUId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issueId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issueId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachIssueId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachIssueId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachIssueId(refVal);
        }
    }
    return ok;
}


std::string CancelAssociateIssueRequest::getProjectUUId() const
{
    return projectUUId_;
}

void CancelAssociateIssueRequest::setProjectUUId(const std::string& value)
{
    projectUUId_ = value;
    projectUUIdIsSet_ = true;
}

bool CancelAssociateIssueRequest::projectUUIdIsSet() const
{
    return projectUUIdIsSet_;
}

void CancelAssociateIssueRequest::unsetprojectUUId()
{
    projectUUIdIsSet_ = false;
}

std::string CancelAssociateIssueRequest::getAttachProjectUUId() const
{
    return attachProjectUUId_;
}

void CancelAssociateIssueRequest::setAttachProjectUUId(const std::string& value)
{
    attachProjectUUId_ = value;
    attachProjectUUIdIsSet_ = true;
}

bool CancelAssociateIssueRequest::attachProjectUUIdIsSet() const
{
    return attachProjectUUIdIsSet_;
}

void CancelAssociateIssueRequest::unsetattachProjectUUId()
{
    attachProjectUUIdIsSet_ = false;
}

int32_t CancelAssociateIssueRequest::getIssueId() const
{
    return issueId_;
}

void CancelAssociateIssueRequest::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool CancelAssociateIssueRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void CancelAssociateIssueRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

int32_t CancelAssociateIssueRequest::getAttachIssueId() const
{
    return attachIssueId_;
}

void CancelAssociateIssueRequest::setAttachIssueId(int32_t value)
{
    attachIssueId_ = value;
    attachIssueIdIsSet_ = true;
}

bool CancelAssociateIssueRequest::attachIssueIdIsSet() const
{
    return attachIssueIdIsSet_;
}

void CancelAssociateIssueRequest::unsetattachIssueId()
{
    attachIssueIdIsSet_ = false;
}

}
}
}
}
}


