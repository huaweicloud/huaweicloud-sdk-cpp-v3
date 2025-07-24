

#include "huaweicloud/cloudtest/v1/model/UpdateUserDnsMappingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateUserDnsMappingRequest::UpdateUserDnsMappingRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    body_ = "";
    bodyIsSet_ = false;
}

UpdateUserDnsMappingRequest::~UpdateUserDnsMappingRequest() = default;

void UpdateUserDnsMappingRequest::validate()
{
}

web::json::value UpdateUserDnsMappingRequest::toJson() const
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
bool UpdateUserDnsMappingRequest::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateUserDnsMappingRequest::getProjectId() const
{
    return projectId_;
}

void UpdateUserDnsMappingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateUserDnsMappingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateUserDnsMappingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateUserDnsMappingRequest::getBody() const
{
    return body_;
}

void UpdateUserDnsMappingRequest::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateUserDnsMappingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateUserDnsMappingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


