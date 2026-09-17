

#include "huaweicloud/projectman/v4/model/GetModelConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




GetModelConfigRequest::GetModelConfigRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

GetModelConfigRequest::~GetModelConfigRequest() = default;

void GetModelConfigRequest::validate()
{
}

web::json::value GetModelConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool GetModelConfigRequest::fromJson(const web::json::value& val)
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


std::string GetModelConfigRequest::getProjectId() const
{
    return projectId_;
}

void GetModelConfigRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool GetModelConfigRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void GetModelConfigRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


