

#include "huaweicloud/projectman/v4/model/CreateProjectDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectDomainRequest::CreateProjectDomainRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProjectDomainRequest::~CreateProjectDomainRequest() = default;

void CreateProjectDomainRequest::validate()
{
}

web::json::value CreateProjectDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateProjectDomainRequest::fromJson(const web::json::value& val)
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


std::string CreateProjectDomainRequest::getProjectId() const
{
    return projectId_;
}

void CreateProjectDomainRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateProjectDomainRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateProjectDomainRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateProjectDomainRequestBody CreateProjectDomainRequest::getBody() const
{
    return body_;
}

void CreateProjectDomainRequest::setBody(const CreateProjectDomainRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


