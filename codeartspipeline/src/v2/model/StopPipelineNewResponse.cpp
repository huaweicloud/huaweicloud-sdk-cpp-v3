

#include "huaweicloud/codeartspipeline/v2/model/StopPipelineNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StopPipelineNewResponse::StopPipelineNewResponse()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
}

StopPipelineNewResponse::~StopPipelineNewResponse() = default;

void StopPipelineNewResponse::validate()
{
}

web::json::value StopPipelineNewResponse::toJson() const
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
bool StopPipelineNewResponse::fromJson(const web::json::value& val)
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


std::string StopPipelineNewResponse::getPipelineId() const
{
    return pipelineId_;
}

void StopPipelineNewResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool StopPipelineNewResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void StopPipelineNewResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string StopPipelineNewResponse::getPipelineName() const
{
    return pipelineName_;
}

void StopPipelineNewResponse::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool StopPipelineNewResponse::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void StopPipelineNewResponse::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

}
}
}
}
}


