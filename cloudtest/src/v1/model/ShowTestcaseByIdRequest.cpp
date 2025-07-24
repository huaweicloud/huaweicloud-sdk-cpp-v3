

#include "huaweicloud/cloudtest/v1/model/ShowTestcaseByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestcaseByIdRequest::ShowTestcaseByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowTestcaseByIdRequest::~ShowTestcaseByIdRequest() = default;

void ShowTestcaseByIdRequest::validate()
{
}

web::json::value ShowTestcaseByIdRequest::toJson() const
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
bool ShowTestcaseByIdRequest::fromJson(const web::json::value& val)
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


std::string ShowTestcaseByIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowTestcaseByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTestcaseByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTestcaseByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTestcaseByIdRequest::getId() const
{
    return id_;
}

void ShowTestcaseByIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowTestcaseByIdRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowTestcaseByIdRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


