

#include "huaweicloud/codeartspipeline/v2/model/RemovePipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RemovePipelineRequest::RemovePipelineRequest()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
}

RemovePipelineRequest::~RemovePipelineRequest() = default;

void RemovePipelineRequest::validate()
{
}

web::json::value RemovePipelineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }

    return val;
}
bool RemovePipelineRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RemovePipelineRequest::getPipelineId() const
{
    return pipelineId_;
}

void RemovePipelineRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool RemovePipelineRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void RemovePipelineRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

}
}
}
}
}


