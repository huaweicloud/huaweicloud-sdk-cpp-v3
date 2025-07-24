

#include "huaweicloud/cloudtest/v1/model/DeleteAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteAssetRequest::DeleteAssetRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteAssetRequest::~DeleteAssetRequest() = default;

void DeleteAssetRequest::validate()
{
}

web::json::value DeleteAssetRequest::toJson() const
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
bool DeleteAssetRequest::fromJson(const web::json::value& val)
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


std::string DeleteAssetRequest::getProjectId() const
{
    return projectId_;
}

void DeleteAssetRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteAssetRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteAssetRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteAssetRequest::getId() const
{
    return id_;
}

void DeleteAssetRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAssetRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAssetRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


