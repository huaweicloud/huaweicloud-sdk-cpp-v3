

#include "huaweicloud/cloudtest/v1/model/ShowFactorByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowFactorByIdRequest::ShowFactorByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowFactorByIdRequest::~ShowFactorByIdRequest() = default;

void ShowFactorByIdRequest::validate()
{
}

web::json::value ShowFactorByIdRequest::toJson() const
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
bool ShowFactorByIdRequest::fromJson(const web::json::value& val)
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


std::string ShowFactorByIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowFactorByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowFactorByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowFactorByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowFactorByIdRequest::getId() const
{
    return id_;
}

void ShowFactorByIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowFactorByIdRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowFactorByIdRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


