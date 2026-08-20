

#include "huaweicloud/projectman/v4/model/UpdateIpdThirdPartyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIpdThirdPartyRequest::UpdateIpdThirdPartyRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIpdThirdPartyRequest::~UpdateIpdThirdPartyRequest() = default;

void UpdateIpdThirdPartyRequest::validate()
{
}

web::json::value UpdateIpdThirdPartyRequest::toJson() const
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
bool UpdateIpdThirdPartyRequest::fromJson(const web::json::value& val)
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
            UpdateThirdPartyAssociateVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateIpdThirdPartyRequest::getProjectId() const
{
    return projectId_;
}

void UpdateIpdThirdPartyRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateIpdThirdPartyRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateIpdThirdPartyRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateIpdThirdPartyRequest::getIssueId() const
{
    return issueId_;
}

void UpdateIpdThirdPartyRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool UpdateIpdThirdPartyRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void UpdateIpdThirdPartyRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

UpdateThirdPartyAssociateVO UpdateIpdThirdPartyRequest::getBody() const
{
    return body_;
}

void UpdateIpdThirdPartyRequest::setBody(const UpdateThirdPartyAssociateVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIpdThirdPartyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIpdThirdPartyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


