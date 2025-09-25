

#include "huaweicloud/codehub/v4/model/ShowProjectGeneralPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectGeneralPolicyRequest::ShowProjectGeneralPolicyRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectGeneralPolicyRequest::~ShowProjectGeneralPolicyRequest() = default;

void ShowProjectGeneralPolicyRequest::validate()
{
}

web::json::value ShowProjectGeneralPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectGeneralPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectGeneralPolicyRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectGeneralPolicyRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectGeneralPolicyRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectGeneralPolicyRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


