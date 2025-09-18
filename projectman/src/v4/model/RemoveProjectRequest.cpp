

#include "huaweicloud/projectman/v4/model/RemoveProjectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




RemoveProjectRequest::RemoveProjectRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

RemoveProjectRequest::~RemoveProjectRequest() = default;

void RemoveProjectRequest::validate()
{
}

web::json::value RemoveProjectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool RemoveProjectRequest::fromJson(const web::json::value& val)
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


std::string RemoveProjectRequest::getProjectId() const
{
    return projectId_;
}

void RemoveProjectRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RemoveProjectRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RemoveProjectRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


