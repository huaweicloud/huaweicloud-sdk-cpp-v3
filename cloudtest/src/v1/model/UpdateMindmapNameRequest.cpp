

#include "huaweicloud/cloudtest/v1/model/UpdateMindmapNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateMindmapNameRequest::UpdateMindmapNameRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UpdateMindmapNameRequest::~UpdateMindmapNameRequest() = default;

void UpdateMindmapNameRequest::validate()
{
}

web::json::value UpdateMindmapNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateMindmapNameRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string UpdateMindmapNameRequest::getProjectId() const
{
    return projectId_;
}

void UpdateMindmapNameRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateMindmapNameRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateMindmapNameRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateMindmapNameRequest::getId() const
{
    return id_;
}

void UpdateMindmapNameRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateMindmapNameRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateMindmapNameRequest::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateMindmapNameRequest::getName() const
{
    return name_;
}

void UpdateMindmapNameRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateMindmapNameRequest::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateMindmapNameRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


