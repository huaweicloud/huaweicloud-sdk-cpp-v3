

#include "huaweicloud/codeartspipeline/v2/model/DeletePipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePipelineRequest::DeletePipelineRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
}

DeletePipelineRequest::~DeletePipelineRequest() = default;

void DeletePipelineRequest::validate()
{
}

web::json::value DeletePipelineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }

    return val;
}
bool DeletePipelineRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
        }
    }
    return ok;
}


std::string DeletePipelineRequest::getProjectId() const
{
    return projectId_;
}

void DeletePipelineRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeletePipelineRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeletePipelineRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeletePipelineRequest::getPipelineId() const
{
    return pipelineId_;
}

void DeletePipelineRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool DeletePipelineRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void DeletePipelineRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

}
}
}
}
}


