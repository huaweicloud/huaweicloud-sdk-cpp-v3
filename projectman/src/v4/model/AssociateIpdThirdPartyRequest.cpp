

#include "huaweicloud/projectman/v4/model/AssociateIpdThirdPartyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AssociateIpdThirdPartyRequest::AssociateIpdThirdPartyRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateIpdThirdPartyRequest::~AssociateIpdThirdPartyRequest() = default;

void AssociateIpdThirdPartyRequest::validate()
{
}

web::json::value AssociateIpdThirdPartyRequest::toJson() const
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
bool AssociateIpdThirdPartyRequest::fromJson(const web::json::value& val)
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
            CreateThirdPartyAssociateVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateIpdThirdPartyRequest::getProjectId() const
{
    return projectId_;
}

void AssociateIpdThirdPartyRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssociateIpdThirdPartyRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssociateIpdThirdPartyRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AssociateIpdThirdPartyRequest::getIssueId() const
{
    return issueId_;
}

void AssociateIpdThirdPartyRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool AssociateIpdThirdPartyRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void AssociateIpdThirdPartyRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

CreateThirdPartyAssociateVO AssociateIpdThirdPartyRequest::getBody() const
{
    return body_;
}

void AssociateIpdThirdPartyRequest::setBody(const CreateThirdPartyAssociateVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateIpdThirdPartyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateIpdThirdPartyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


