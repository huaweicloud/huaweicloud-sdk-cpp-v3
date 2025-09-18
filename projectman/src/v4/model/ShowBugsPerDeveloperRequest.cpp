

#include "huaweicloud/projectman/v4/model/ShowBugsPerDeveloperRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowBugsPerDeveloperRequest::ShowBugsPerDeveloperRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowBugsPerDeveloperRequest::~ShowBugsPerDeveloperRequest() = default;

void ShowBugsPerDeveloperRequest::validate()
{
}

web::json::value ShowBugsPerDeveloperRequest::toJson() const
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
bool ShowBugsPerDeveloperRequest::fromJson(const web::json::value& val)
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
            MetricRequest2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowBugsPerDeveloperRequest::getProjectId() const
{
    return projectId_;
}

void ShowBugsPerDeveloperRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowBugsPerDeveloperRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowBugsPerDeveloperRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

MetricRequest2 ShowBugsPerDeveloperRequest::getBody() const
{
    return body_;
}

void ShowBugsPerDeveloperRequest::setBody(const MetricRequest2& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowBugsPerDeveloperRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowBugsPerDeveloperRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


