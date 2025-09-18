

#include "huaweicloud/projectman/v4/model/ShowBugDensityV2Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowBugDensityV2Request::ShowBugDensityV2Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowBugDensityV2Request::~ShowBugDensityV2Request() = default;

void ShowBugDensityV2Request::validate()
{
}

web::json::value ShowBugDensityV2Request::toJson() const
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
bool ShowBugDensityV2Request::fromJson(const web::json::value& val)
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
            MetricRequestV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowBugDensityV2Request::getProjectId() const
{
    return projectId_;
}

void ShowBugDensityV2Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowBugDensityV2Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowBugDensityV2Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

MetricRequestV2 ShowBugDensityV2Request::getBody() const
{
    return body_;
}

void ShowBugDensityV2Request::setBody(const MetricRequestV2& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowBugDensityV2Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowBugDensityV2Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


