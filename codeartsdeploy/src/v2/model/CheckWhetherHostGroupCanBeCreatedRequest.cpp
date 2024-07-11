

#include "huaweicloud/codeartsdeploy/v2/model/CheckWhetherHostGroupCanBeCreatedRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CheckWhetherHostGroupCanBeCreatedRequest::CheckWhetherHostGroupCanBeCreatedRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

CheckWhetherHostGroupCanBeCreatedRequest::~CheckWhetherHostGroupCanBeCreatedRequest() = default;

void CheckWhetherHostGroupCanBeCreatedRequest::validate()
{
}

web::json::value CheckWhetherHostGroupCanBeCreatedRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool CheckWhetherHostGroupCanBeCreatedRequest::fromJson(const web::json::value& val)
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


std::string CheckWhetherHostGroupCanBeCreatedRequest::getProjectId() const
{
    return projectId_;
}

void CheckWhetherHostGroupCanBeCreatedRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckWhetherHostGroupCanBeCreatedRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckWhetherHostGroupCanBeCreatedRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


