

#include "huaweicloud/codeartsdeploy/v2/model/CheckCanCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CheckCanCreateRequest::CheckCanCreateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

CheckCanCreateRequest::~CheckCanCreateRequest() = default;

void CheckCanCreateRequest::validate()
{
}

web::json::value CheckCanCreateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool CheckCanCreateRequest::fromJson(const web::json::value& val)
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


std::string CheckCanCreateRequest::getProjectId() const
{
    return projectId_;
}

void CheckCanCreateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckCanCreateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckCanCreateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


