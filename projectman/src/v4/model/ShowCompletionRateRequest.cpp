

#include "huaweicloud/projectman/v4/model/ShowCompletionRateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowCompletionRateRequest::ShowCompletionRateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowCompletionRateRequest::~ShowCompletionRateRequest() = default;

void ShowCompletionRateRequest::validate()
{
}

web::json::value ShowCompletionRateRequest::toJson() const
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
bool ShowCompletionRateRequest::fromJson(const web::json::value& val)
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
            MetricRequest3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowCompletionRateRequest::getProjectId() const
{
    return projectId_;
}

void ShowCompletionRateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowCompletionRateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowCompletionRateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

MetricRequest3 ShowCompletionRateRequest::getBody() const
{
    return body_;
}

void ShowCompletionRateRequest::setBody(const MetricRequest3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowCompletionRateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowCompletionRateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


