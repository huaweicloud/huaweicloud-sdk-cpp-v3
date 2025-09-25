

#include "huaweicloud/codeartspipeline/v2/model/StopPipelineNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StopPipelineNewRequest::StopPipelineNewRequest()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    buildId_ = "";
    buildIdIsSet_ = false;
}

StopPipelineNewRequest::~StopPipelineNewRequest() = default;

void StopPipelineNewRequest::validate()
{
}

web::json::value StopPipelineNewRequest::toJson() const
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
bool StopPipelineNewRequest::fromJson(const web::json::value& val)
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


std::string StopPipelineNewRequest::getPipelineId() const
{
    return pipelineId_;
}

void StopPipelineNewRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool StopPipelineNewRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void StopPipelineNewRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string StopPipelineNewRequest::getBuildId() const
{
    return buildId_;
}

void StopPipelineNewRequest::setBuildId(const std::string& value)
{
    buildId_ = value;
    buildIdIsSet_ = true;
}

bool StopPipelineNewRequest::buildIdIsSet() const
{
    return buildIdIsSet_;
}

void StopPipelineNewRequest::unsetbuildId()
{
    buildIdIsSet_ = false;
}

}
}
}
}
}


