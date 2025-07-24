

#include "huaweicloud/cloudtest/v1/model/ShowMindmapBackupByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapBackupByIdRequest::ShowMindmapBackupByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowMindmapBackupByIdRequest::~ShowMindmapBackupByIdRequest() = default;

void ShowMindmapBackupByIdRequest::validate()
{
}

web::json::value ShowMindmapBackupByIdRequest::toJson() const
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
bool ShowMindmapBackupByIdRequest::fromJson(const web::json::value& val)
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


std::string ShowMindmapBackupByIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowMindmapBackupByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowMindmapBackupByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowMindmapBackupByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowMindmapBackupByIdRequest::getId() const
{
    return id_;
}

void ShowMindmapBackupByIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowMindmapBackupByIdRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowMindmapBackupByIdRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


