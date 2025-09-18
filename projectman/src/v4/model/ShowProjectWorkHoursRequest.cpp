

#include "huaweicloud/projectman/v4/model/ShowProjectWorkHoursRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowProjectWorkHoursRequest::ShowProjectWorkHoursRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowProjectWorkHoursRequest::~ShowProjectWorkHoursRequest() = default;

void ShowProjectWorkHoursRequest::validate()
{
}

web::json::value ShowProjectWorkHoursRequest::toJson() const
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
bool ShowProjectWorkHoursRequest::fromJson(const web::json::value& val)
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
            ShowProjectWorkHoursRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowProjectWorkHoursRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectWorkHoursRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectWorkHoursRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectWorkHoursRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ShowProjectWorkHoursRequestBody ShowProjectWorkHoursRequest::getBody() const
{
    return body_;
}

void ShowProjectWorkHoursRequest::setBody(const ShowProjectWorkHoursRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowProjectWorkHoursRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowProjectWorkHoursRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


