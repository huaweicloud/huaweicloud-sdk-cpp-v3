

#include "huaweicloud/cloudtest/v1/model/ShowTemplateByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTemplateByIdRequest::ShowTemplateByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowTemplateByIdRequest::~ShowTemplateByIdRequest() = default;

void ShowTemplateByIdRequest::validate()
{
}

web::json::value ShowTemplateByIdRequest::toJson() const
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
bool ShowTemplateByIdRequest::fromJson(const web::json::value& val)
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


std::string ShowTemplateByIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowTemplateByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTemplateByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTemplateByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTemplateByIdRequest::getId() const
{
    return id_;
}

void ShowTemplateByIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowTemplateByIdRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowTemplateByIdRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


