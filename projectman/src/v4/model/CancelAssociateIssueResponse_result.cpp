

#include "huaweicloud/projectman/v4/model/CancelAssociateIssueResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CancelAssociateIssueResponse_result::CancelAssociateIssueResponse_result()
{
    identifier_ = "";
    identifierIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
    associateType_ = "";
    associateTypeIsSet_ = false;
    associateIssueId_ = 0;
    associateIssueIdIsSet_ = false;
    associateProjectId_ = 0;
    associateProjectIdIsSet_ = false;
    createdOn_ = utility::datetime();
    createdOnIsSet_ = false;
    authorId_ = 0;
    authorIdIsSet_ = false;
    flag_ = false;
    flagIsSet_ = false;
}

CancelAssociateIssueResponse_result::~CancelAssociateIssueResponse_result() = default;

void CancelAssociateIssueResponse_result::validate()
{
}

web::json::value CancelAssociateIssueResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issueId")] = ModelBase::toJson(issueId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(associateTypeIsSet_) {
        val[utility::conversions::to_string_t("associateType")] = ModelBase::toJson(associateType_);
    }
    if(associateIssueIdIsSet_) {
        val[utility::conversions::to_string_t("associateIssueId")] = ModelBase::toJson(associateIssueId_);
    }
    if(associateProjectIdIsSet_) {
        val[utility::conversions::to_string_t("associateProjectId")] = ModelBase::toJson(associateProjectId_);
    }
    if(createdOnIsSet_) {
        val[utility::conversions::to_string_t("createdOn")] = ModelBase::toJson(createdOn_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("authorId")] = ModelBase::toJson(authorId_);
    }
    if(flagIsSet_) {
        val[utility::conversions::to_string_t("flag")] = ModelBase::toJson(flag_);
    }

    return val;
}
bool CancelAssociateIssueResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associateType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associateType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associateIssueId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associateIssueId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associateProjectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associateProjectId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdOn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdOn"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlag(refVal);
        }
    }
    return ok;
}


std::string CancelAssociateIssueResponse_result::getIdentifier() const
{
    return identifier_;
}

void CancelAssociateIssueResponse_result::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool CancelAssociateIssueResponse_result::identifierIsSet() const
{
    return identifierIsSet_;
}

void CancelAssociateIssueResponse_result::unsetidentifier()
{
    identifierIsSet_ = false;
}

int32_t CancelAssociateIssueResponse_result::getIssueId() const
{
    return issueId_;
}

void CancelAssociateIssueResponse_result::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool CancelAssociateIssueResponse_result::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void CancelAssociateIssueResponse_result::unsetissueId()
{
    issueIdIsSet_ = false;
}

int32_t CancelAssociateIssueResponse_result::getProjectId() const
{
    return projectId_;
}

void CancelAssociateIssueResponse_result::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CancelAssociateIssueResponse_result::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CancelAssociateIssueResponse_result::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CancelAssociateIssueResponse_result::getAssociateType() const
{
    return associateType_;
}

void CancelAssociateIssueResponse_result::setAssociateType(const std::string& value)
{
    associateType_ = value;
    associateTypeIsSet_ = true;
}

bool CancelAssociateIssueResponse_result::associateTypeIsSet() const
{
    return associateTypeIsSet_;
}

void CancelAssociateIssueResponse_result::unsetassociateType()
{
    associateTypeIsSet_ = false;
}

int32_t CancelAssociateIssueResponse_result::getAssociateIssueId() const
{
    return associateIssueId_;
}

void CancelAssociateIssueResponse_result::setAssociateIssueId(int32_t value)
{
    associateIssueId_ = value;
    associateIssueIdIsSet_ = true;
}

bool CancelAssociateIssueResponse_result::associateIssueIdIsSet() const
{
    return associateIssueIdIsSet_;
}

void CancelAssociateIssueResponse_result::unsetassociateIssueId()
{
    associateIssueIdIsSet_ = false;
}

int32_t CancelAssociateIssueResponse_result::getAssociateProjectId() const
{
    return associateProjectId_;
}

void CancelAssociateIssueResponse_result::setAssociateProjectId(int32_t value)
{
    associateProjectId_ = value;
    associateProjectIdIsSet_ = true;
}

bool CancelAssociateIssueResponse_result::associateProjectIdIsSet() const
{
    return associateProjectIdIsSet_;
}

void CancelAssociateIssueResponse_result::unsetassociateProjectId()
{
    associateProjectIdIsSet_ = false;
}

utility::datetime CancelAssociateIssueResponse_result::getCreatedOn() const
{
    return createdOn_;
}

void CancelAssociateIssueResponse_result::setCreatedOn(const utility::datetime& value)
{
    createdOn_ = value;
    createdOnIsSet_ = true;
}

bool CancelAssociateIssueResponse_result::createdOnIsSet() const
{
    return createdOnIsSet_;
}

void CancelAssociateIssueResponse_result::unsetcreatedOn()
{
    createdOnIsSet_ = false;
}

int32_t CancelAssociateIssueResponse_result::getAuthorId() const
{
    return authorId_;
}

void CancelAssociateIssueResponse_result::setAuthorId(int32_t value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool CancelAssociateIssueResponse_result::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void CancelAssociateIssueResponse_result::unsetauthorId()
{
    authorIdIsSet_ = false;
}

bool CancelAssociateIssueResponse_result::isFlag() const
{
    return flag_;
}

void CancelAssociateIssueResponse_result::setFlag(bool value)
{
    flag_ = value;
    flagIsSet_ = true;
}

bool CancelAssociateIssueResponse_result::flagIsSet() const
{
    return flagIsSet_;
}

void CancelAssociateIssueResponse_result::unsetflag()
{
    flagIsSet_ = false;
}

}
}
}
}
}


