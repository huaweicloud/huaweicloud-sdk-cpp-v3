

#include "huaweicloud/cloudtest/v1/model/CheckPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CheckPermissionRequest::CheckPermissionRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

CheckPermissionRequest::~CheckPermissionRequest() = default;

void CheckPermissionRequest::validate()
{
}

web::json::value CheckPermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CheckPermissionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string CheckPermissionRequest::getProjectId() const
{
    return projectId_;
}

void CheckPermissionRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckPermissionRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckPermissionRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CheckPermissionRequest::getId() const
{
    return id_;
}

void CheckPermissionRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CheckPermissionRequest::idIsSet() const
{
    return idIsSet_;
}

void CheckPermissionRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


