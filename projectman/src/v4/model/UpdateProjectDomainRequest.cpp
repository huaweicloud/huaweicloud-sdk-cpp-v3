

#include "huaweicloud/projectman/v4/model/UpdateProjectDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateProjectDomainRequest::UpdateProjectDomainRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectDomainRequest::~UpdateProjectDomainRequest() = default;

void UpdateProjectDomainRequest::validate()
{
}

web::json::value UpdateProjectDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProjectDomainRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateProjectDomainRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectDomainRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectDomainRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectDomainRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectDomainRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateProjectDomainRequest::getDomainId() const
{
    return domainId_;
}

void UpdateProjectDomainRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateProjectDomainRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateProjectDomainRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

CreateProjectDomainRequestBody UpdateProjectDomainRequest::getBody() const
{
    return body_;
}

void UpdateProjectDomainRequest::setBody(const CreateProjectDomainRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


