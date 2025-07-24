

#include "huaweicloud/cloudtest/v1/model/DeleteFacotrByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteFacotrByIdRequest::DeleteFacotrByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteFacotrByIdRequest::~DeleteFacotrByIdRequest() = default;

void DeleteFacotrByIdRequest::validate()
{
}

web::json::value DeleteFacotrByIdRequest::toJson() const
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
bool DeleteFacotrByIdRequest::fromJson(const web::json::value& val)
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


std::string DeleteFacotrByIdRequest::getProjectId() const
{
    return projectId_;
}

void DeleteFacotrByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteFacotrByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteFacotrByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteFacotrByIdRequest::getId() const
{
    return id_;
}

void DeleteFacotrByIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteFacotrByIdRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteFacotrByIdRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


