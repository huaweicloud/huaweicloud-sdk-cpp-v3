

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineNewResponse::CreatePipelineNewResponse()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
}

CreatePipelineNewResponse::~CreatePipelineNewResponse() = default;

void CreatePipelineNewResponse::validate()
{
}

web::json::value CreatePipelineNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }

    return val;
}
bool CreatePipelineNewResponse::fromJson(const web::json::value& val)
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


std::string CreatePipelineNewResponse::getPipelineId() const
{
    return pipelineId_;
}

void CreatePipelineNewResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool CreatePipelineNewResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void CreatePipelineNewResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

}
}
}
}
}


