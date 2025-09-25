

#include "huaweicloud/codeartspipeline/v2/model/RunPipelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunPipelineResponse::RunPipelineResponse()
{
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
}

RunPipelineResponse::~RunPipelineResponse() = default;

void RunPipelineResponse::validate()
{
}

web::json::value RunPipelineResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineRunIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_run_id")] = ModelBase::toJson(pipelineRunId_);
    }

    return val;
}
bool RunPipelineResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineRunId(refVal);
        }
    }
    return ok;
}


std::string RunPipelineResponse::getPipelineRunId() const
{
    return pipelineRunId_;
}

void RunPipelineResponse::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool RunPipelineResponse::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void RunPipelineResponse::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

}
}
}
}
}


