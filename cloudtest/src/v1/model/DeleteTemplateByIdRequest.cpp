

#include "huaweicloud/cloudtest/v1/model/DeleteTemplateByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteTemplateByIdRequest::DeleteTemplateByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteTemplateByIdRequest::~DeleteTemplateByIdRequest() = default;

void DeleteTemplateByIdRequest::validate()
{
}

web::json::value DeleteTemplateByIdRequest::toJson() const
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
bool DeleteTemplateByIdRequest::fromJson(const web::json::value& val)
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


std::string DeleteTemplateByIdRequest::getProjectId() const
{
    return projectId_;
}

void DeleteTemplateByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteTemplateByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteTemplateByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteTemplateByIdRequest::getId() const
{
    return id_;
}

void DeleteTemplateByIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteTemplateByIdRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteTemplateByIdRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


