

#include "huaweicloud/cloudtest/v1/model/DeleteMindmapBackupByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteMindmapBackupByIdRequest::DeleteMindmapBackupByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteMindmapBackupByIdRequest::~DeleteMindmapBackupByIdRequest() = default;

void DeleteMindmapBackupByIdRequest::validate()
{
}

web::json::value DeleteMindmapBackupByIdRequest::toJson() const
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
bool DeleteMindmapBackupByIdRequest::fromJson(const web::json::value& val)
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


std::string DeleteMindmapBackupByIdRequest::getProjectId() const
{
    return projectId_;
}

void DeleteMindmapBackupByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteMindmapBackupByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteMindmapBackupByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteMindmapBackupByIdRequest::getId() const
{
    return id_;
}

void DeleteMindmapBackupByIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteMindmapBackupByIdRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteMindmapBackupByIdRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


