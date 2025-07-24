

#include "huaweicloud/cloudtest/v1/model/ShowMindmapRecycleByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapRecycleByIdRequest::ShowMindmapRecycleByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowMindmapRecycleByIdRequest::~ShowMindmapRecycleByIdRequest() = default;

void ShowMindmapRecycleByIdRequest::validate()
{
}

web::json::value ShowMindmapRecycleByIdRequest::toJson() const
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
bool ShowMindmapRecycleByIdRequest::fromJson(const web::json::value& val)
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


std::string ShowMindmapRecycleByIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowMindmapRecycleByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowMindmapRecycleByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowMindmapRecycleByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowMindmapRecycleByIdRequest::getId() const
{
    return id_;
}

void ShowMindmapRecycleByIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowMindmapRecycleByIdRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowMindmapRecycleByIdRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


