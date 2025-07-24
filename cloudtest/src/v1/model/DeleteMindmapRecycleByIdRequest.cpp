

#include "huaweicloud/cloudtest/v1/model/DeleteMindmapRecycleByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteMindmapRecycleByIdRequest::DeleteMindmapRecycleByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteMindmapRecycleByIdRequest::~DeleteMindmapRecycleByIdRequest() = default;

void DeleteMindmapRecycleByIdRequest::validate()
{
}

web::json::value DeleteMindmapRecycleByIdRequest::toJson() const
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
bool DeleteMindmapRecycleByIdRequest::fromJson(const web::json::value& val)
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


std::string DeleteMindmapRecycleByIdRequest::getProjectId() const
{
    return projectId_;
}

void DeleteMindmapRecycleByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteMindmapRecycleByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteMindmapRecycleByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteMindmapRecycleByIdRequest::getId() const
{
    return id_;
}

void DeleteMindmapRecycleByIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteMindmapRecycleByIdRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteMindmapRecycleByIdRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


