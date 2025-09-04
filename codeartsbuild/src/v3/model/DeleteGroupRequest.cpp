

#include "huaweicloud/codeartsbuild/v3/model/DeleteGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteGroupRequest::DeleteGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteGroupRequest::~DeleteGroupRequest() = default;

void DeleteGroupRequest::validate()
{
}

web::json::value DeleteGroupRequest::toJson() const
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
bool DeleteGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteGroupRequest::getProjectId() const
{
    return projectId_;
}

void DeleteGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteGroupRequest::getId() const
{
    return id_;
}

void DeleteGroupRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteGroupRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteGroupRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


