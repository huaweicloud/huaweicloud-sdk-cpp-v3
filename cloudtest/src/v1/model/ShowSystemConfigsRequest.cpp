

#include "huaweicloud/cloudtest/v1/model/ShowSystemConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowSystemConfigsRequest::ShowSystemConfigsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowSystemConfigsRequest::~ShowSystemConfigsRequest() = default;

void ShowSystemConfigsRequest::validate()
{
}

web::json::value ShowSystemConfigsRequest::toJson() const
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
bool ShowSystemConfigsRequest::fromJson(const web::json::value& val)
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
            CommRequestSystemConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowSystemConfigsRequest::getProjectId() const
{
    return projectId_;
}

void ShowSystemConfigsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowSystemConfigsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowSystemConfigsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestSystemConfig ShowSystemConfigsRequest::getBody() const
{
    return body_;
}

void ShowSystemConfigsRequest::setBody(const CommRequestSystemConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowSystemConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowSystemConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


