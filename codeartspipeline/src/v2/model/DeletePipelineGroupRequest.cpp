

#include "huaweicloud/codeartspipeline/v2/model/DeletePipelineGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePipelineGroupRequest::DeletePipelineGroupRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeletePipelineGroupRequest::~DeletePipelineGroupRequest() = default;

void DeletePipelineGroupRequest::validate()
{
}

web::json::value DeletePipelineGroupRequest::toJson() const
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
bool DeletePipelineGroupRequest::fromJson(const web::json::value& val)
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


std::string DeletePipelineGroupRequest::getProjectId() const
{
    return projectId_;
}

void DeletePipelineGroupRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeletePipelineGroupRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeletePipelineGroupRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeletePipelineGroupRequest::getId() const
{
    return id_;
}

void DeletePipelineGroupRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeletePipelineGroupRequest::idIsSet() const
{
    return idIsSet_;
}

void DeletePipelineGroupRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


