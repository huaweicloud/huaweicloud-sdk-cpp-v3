

#include "huaweicloud/projectman/v4/model/DeleteProjectV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteProjectV4Request::DeleteProjectV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

DeleteProjectV4Request::~DeleteProjectV4Request() = default;

void DeleteProjectV4Request::validate()
{
}

web::json::value DeleteProjectV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool DeleteProjectV4Request::fromJson(const web::json::value& val)
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


std::string DeleteProjectV4Request::getProjectId() const
{
    return projectId_;
}

void DeleteProjectV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteProjectV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteProjectV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


