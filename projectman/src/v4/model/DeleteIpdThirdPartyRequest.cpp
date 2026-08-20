

#include "huaweicloud/projectman/v4/model/DeleteIpdThirdPartyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIpdThirdPartyRequest::DeleteIpdThirdPartyRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteIpdThirdPartyRequest::~DeleteIpdThirdPartyRequest() = default;

void DeleteIpdThirdPartyRequest::validate()
{
}

web::json::value DeleteIpdThirdPartyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteIpdThirdPartyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteThirdPartyAssociateVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteIpdThirdPartyRequest::getProjectId() const
{
    return projectId_;
}

void DeleteIpdThirdPartyRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteIpdThirdPartyRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteIpdThirdPartyRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteIpdThirdPartyRequest::getIssueId() const
{
    return issueId_;
}

void DeleteIpdThirdPartyRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool DeleteIpdThirdPartyRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void DeleteIpdThirdPartyRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

DeleteThirdPartyAssociateVO DeleteIpdThirdPartyRequest::getBody() const
{
    return body_;
}

void DeleteIpdThirdPartyRequest::setBody(const DeleteThirdPartyAssociateVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteIpdThirdPartyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteIpdThirdPartyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


