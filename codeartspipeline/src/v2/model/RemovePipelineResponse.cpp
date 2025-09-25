

#include "huaweicloud/codeartspipeline/v2/model/RemovePipelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RemovePipelineResponse::RemovePipelineResponse()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
}

RemovePipelineResponse::~RemovePipelineResponse() = default;

void RemovePipelineResponse::validate()
{
}

web::json::value RemovePipelineResponse::toJson() const
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
bool RemovePipelineResponse::fromJson(const web::json::value& val)
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


std::string RemovePipelineResponse::getPipelineId() const
{
    return pipelineId_;
}

void RemovePipelineResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool RemovePipelineResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void RemovePipelineResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string RemovePipelineResponse::getPipelineName() const
{
    return pipelineName_;
}

void RemovePipelineResponse::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool RemovePipelineResponse::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void RemovePipelineResponse::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

}
}
}
}
}


