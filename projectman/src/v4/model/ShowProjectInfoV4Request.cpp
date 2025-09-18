

#include "huaweicloud/projectman/v4/model/ShowProjectInfoV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowProjectInfoV4Request::ShowProjectInfoV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectInfoV4Request::~ShowProjectInfoV4Request() = default;

void ShowProjectInfoV4Request::validate()
{
}

web::json::value ShowProjectInfoV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectInfoV4Request::fromJson(const web::json::value& val)
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


std::string ShowProjectInfoV4Request::getProjectId() const
{
    return projectId_;
}

void ShowProjectInfoV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectInfoV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectInfoV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


