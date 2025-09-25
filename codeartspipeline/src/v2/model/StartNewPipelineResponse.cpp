

#include "huaweicloud/codeartspipeline/v2/model/StartNewPipelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StartNewPipelineResponse::StartNewPipelineResponse()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    buildId_ = "";
    buildIdIsSet_ = false;
}

StartNewPipelineResponse::~StartNewPipelineResponse() = default;

void StartNewPipelineResponse::validate()
{
}

web::json::value StartNewPipelineResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(buildIdIsSet_) {
        val[utility::conversions::to_string_t("build_id")] = ModelBase::toJson(buildId_);
    }

    return val;
}
bool StartNewPipelineResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("build_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildId(refVal);
        }
    }
    return ok;
}


std::string StartNewPipelineResponse::getPipelineId() const
{
    return pipelineId_;
}

void StartNewPipelineResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool StartNewPipelineResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void StartNewPipelineResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string StartNewPipelineResponse::getBuildId() const
{
    return buildId_;
}

void StartNewPipelineResponse::setBuildId(const std::string& value)
{
    buildId_ = value;
    buildIdIsSet_ = true;
}

bool StartNewPipelineResponse::buildIdIsSet() const
{
    return buildIdIsSet_;
}

void StartNewPipelineResponse::unsetbuildId()
{
    buildIdIsSet_ = false;
}

}
}
}
}
}


