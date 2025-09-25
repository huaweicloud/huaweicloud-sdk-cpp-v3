

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineDetailRequest::ShowPipelineDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
}

ShowPipelineDetailRequest::~ShowPipelineDetailRequest() = default;

void ShowPipelineDetailRequest::validate()
{
}

web::json::value ShowPipelineDetailRequest::toJson() const
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
bool ShowPipelineDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowPipelineDetailRequest::getProjectId() const
{
    return projectId_;
}

void ShowPipelineDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPipelineDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPipelineDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowPipelineDetailRequest::getPipelineId() const
{
    return pipelineId_;
}

void ShowPipelineDetailRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowPipelineDetailRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowPipelineDetailRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

}
}
}
}
}


