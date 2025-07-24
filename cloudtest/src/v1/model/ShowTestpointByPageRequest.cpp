

#include "huaweicloud/cloudtest/v1/model/ShowTestpointByPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestpointByPageRequest::ShowTestpointByPageRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowTestpointByPageRequest::~ShowTestpointByPageRequest() = default;

void ShowTestpointByPageRequest::validate()
{
}

web::json::value ShowTestpointByPageRequest::toJson() const
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
bool ShowTestpointByPageRequest::fromJson(const web::json::value& val)
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
            CommRequestTestPointPageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowTestpointByPageRequest::getProjectId() const
{
    return projectId_;
}

void ShowTestpointByPageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTestpointByPageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTestpointByPageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestTestPointPageParam ShowTestpointByPageRequest::getBody() const
{
    return body_;
}

void ShowTestpointByPageRequest::setBody(const CommRequestTestPointPageParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowTestpointByPageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowTestpointByPageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


