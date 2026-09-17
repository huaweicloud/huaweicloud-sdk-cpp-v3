

#include "huaweicloud/projectman/v4/model/AssociateIssueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateIssueRequest::AssociateIssueRequest()
{
    projectUUId_ = "";
    projectUUIdIsSet_ = false;
    attachProjectUUId_ = "";
    attachProjectUUIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    associatedIssueIdListIsSet_ = false;
    unassociatedIssueIdListIsSet_ = false;
}

AssociateIssueRequest::~AssociateIssueRequest() = default;

void AssociateIssueRequest::validate()
{
}

web::json::value AssociateIssueRequest::toJson() const
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
    if(associatedIssueIdListIsSet_) {
        val[utility::conversions::to_string_t("associatedIssueIdList")] = ModelBase::toJson(associatedIssueIdList_);
    }
    if(unassociatedIssueIdListIsSet_) {
        val[utility::conversions::to_string_t("unassociatedIssueIdList")] = ModelBase::toJson(unassociatedIssueIdList_);
    }

    return val;
}
bool AssociateIssueRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("associatedIssueIdList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associatedIssueIdList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedIssueIdList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unassociatedIssueIdList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unassociatedIssueIdList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnassociatedIssueIdList(refVal);
        }
    }
    return ok;
}


std::string AssociateIssueRequest::getProjectUUId() const
{
    return projectUUId_;
}

void AssociateIssueRequest::setProjectUUId(const std::string& value)
{
    projectUUId_ = value;
    projectUUIdIsSet_ = true;
}

bool AssociateIssueRequest::projectUUIdIsSet() const
{
    return projectUUIdIsSet_;
}

void AssociateIssueRequest::unsetprojectUUId()
{
    projectUUIdIsSet_ = false;
}

std::string AssociateIssueRequest::getAttachProjectUUId() const
{
    return attachProjectUUId_;
}

void AssociateIssueRequest::setAttachProjectUUId(const std::string& value)
{
    attachProjectUUId_ = value;
    attachProjectUUIdIsSet_ = true;
}

bool AssociateIssueRequest::attachProjectUUIdIsSet() const
{
    return attachProjectUUIdIsSet_;
}

void AssociateIssueRequest::unsetattachProjectUUId()
{
    attachProjectUUIdIsSet_ = false;
}

int32_t AssociateIssueRequest::getIssueId() const
{
    return issueId_;
}

void AssociateIssueRequest::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AssociateIssueRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AssociateIssueRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::vector<std::string>& AssociateIssueRequest::getAssociatedIssueIdList()
{
    return associatedIssueIdList_;
}

void AssociateIssueRequest::setAssociatedIssueIdList(const std::vector<std::string>& value)
{
    associatedIssueIdList_ = value;
    associatedIssueIdListIsSet_ = true;
}

bool AssociateIssueRequest::associatedIssueIdListIsSet() const
{
    return associatedIssueIdListIsSet_;
}

void AssociateIssueRequest::unsetassociatedIssueIdList()
{
    associatedIssueIdListIsSet_ = false;
}

std::vector<std::string>& AssociateIssueRequest::getUnassociatedIssueIdList()
{
    return unassociatedIssueIdList_;
}

void AssociateIssueRequest::setUnassociatedIssueIdList(const std::vector<std::string>& value)
{
    unassociatedIssueIdList_ = value;
    unassociatedIssueIdListIsSet_ = true;
}

bool AssociateIssueRequest::unassociatedIssueIdListIsSet() const
{
    return unassociatedIssueIdListIsSet_;
}

void AssociateIssueRequest::unsetunassociatedIssueIdList()
{
    unassociatedIssueIdListIsSet_ = false;
}

}
}
}
}
}


