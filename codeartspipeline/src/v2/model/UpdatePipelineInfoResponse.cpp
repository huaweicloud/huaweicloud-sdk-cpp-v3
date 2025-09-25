

#include "huaweicloud/codeartspipeline/v2/model/UpdatePipelineInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePipelineInfoResponse::UpdatePipelineInfoResponse()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
}

UpdatePipelineInfoResponse::~UpdatePipelineInfoResponse() = default;

void UpdatePipelineInfoResponse::validate()
{
}

web::json::value UpdatePipelineInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }

    return val;
}
bool UpdatePipelineInfoResponse::fromJson(const web::json::value& val)
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


std::string UpdatePipelineInfoResponse::getPipelineId() const
{
    return pipelineId_;
}

void UpdatePipelineInfoResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool UpdatePipelineInfoResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void UpdatePipelineInfoResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

}
}
}
}
}


