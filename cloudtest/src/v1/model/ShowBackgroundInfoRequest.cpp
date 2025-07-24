

#include "huaweicloud/cloudtest/v1/model/ShowBackgroundInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowBackgroundInfoRequest::ShowBackgroundInfoRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowBackgroundInfoRequest::~ShowBackgroundInfoRequest() = default;

void ShowBackgroundInfoRequest::validate()
{
}

web::json::value ShowBackgroundInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowBackgroundInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowBackgroundInfoRequest::getProjectId() const
{
    return projectId_;
}

void ShowBackgroundInfoRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowBackgroundInfoRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowBackgroundInfoRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


