

#include "huaweicloud/codehub/v4/model/ShowProjectsGeneralPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectsGeneralPolicyRequest::ShowProjectsGeneralPolicyRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectsGeneralPolicyRequest::~ShowProjectsGeneralPolicyRequest() = default;

void ShowProjectsGeneralPolicyRequest::validate()
{
}

web::json::value ShowProjectsGeneralPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectsGeneralPolicyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowProjectsGeneralPolicyRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectsGeneralPolicyRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectsGeneralPolicyRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectsGeneralPolicyRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


