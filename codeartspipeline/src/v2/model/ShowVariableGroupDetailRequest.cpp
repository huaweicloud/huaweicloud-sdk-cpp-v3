

#include "huaweicloud/codeartspipeline/v2/model/ShowVariableGroupDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowVariableGroupDetailRequest::ShowVariableGroupDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowVariableGroupDetailRequest::~ShowVariableGroupDetailRequest() = default;

void ShowVariableGroupDetailRequest::validate()
{
}

web::json::value ShowVariableGroupDetailRequest::toJson() const
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
bool ShowVariableGroupDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowVariableGroupDetailRequest::getProjectId() const
{
    return projectId_;
}

void ShowVariableGroupDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowVariableGroupDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowVariableGroupDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowVariableGroupDetailRequest::getId() const
{
    return id_;
}

void ShowVariableGroupDetailRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowVariableGroupDetailRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowVariableGroupDetailRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


