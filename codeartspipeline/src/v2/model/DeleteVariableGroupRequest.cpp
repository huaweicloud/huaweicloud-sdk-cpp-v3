

#include "huaweicloud/codeartspipeline/v2/model/DeleteVariableGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteVariableGroupRequest::DeleteVariableGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteVariableGroupRequest::~DeleteVariableGroupRequest() = default;

void DeleteVariableGroupRequest::validate()
{
}

web::json::value DeleteVariableGroupRequest::toJson() const
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
bool DeleteVariableGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteVariableGroupRequest::getProjectId() const
{
    return projectId_;
}

void DeleteVariableGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteVariableGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteVariableGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteVariableGroupRequest::getId() const
{
    return id_;
}

void DeleteVariableGroupRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteVariableGroupRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteVariableGroupRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


