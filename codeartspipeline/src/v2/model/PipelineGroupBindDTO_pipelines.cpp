

#include "huaweicloud/codeartspipeline/v2/model/PipelineGroupBindDTO_pipelines.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineGroupBindDTO_pipelines::PipelineGroupBindDTO_pipelines()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
}

PipelineGroupBindDTO_pipelines::~PipelineGroupBindDTO_pipelines() = default;

void PipelineGroupBindDTO_pipelines::validate()
{
}

web::json::value PipelineGroupBindDTO_pipelines::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_name")] = ModelBase::toJson(pipelineName_);
    }

    return val;
}
bool PipelineGroupBindDTO_pipelines::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineName(refVal);
        }
    }
    return ok;
}


std::string PipelineGroupBindDTO_pipelines::getPipelineId() const
{
    return pipelineId_;
}

void PipelineGroupBindDTO_pipelines::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool PipelineGroupBindDTO_pipelines::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void PipelineGroupBindDTO_pipelines::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string PipelineGroupBindDTO_pipelines::getPipelineName() const
{
    return pipelineName_;
}

void PipelineGroupBindDTO_pipelines::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool PipelineGroupBindDTO_pipelines::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void PipelineGroupBindDTO_pipelines::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

}
}
}
}
}


