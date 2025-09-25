

#include "huaweicloud/codeartspipeline/v2/model/BatchShowPipelinesStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




BatchShowPipelinesStatusRequest::BatchShowPipelinesStatusRequest()
{
    pipelineIds_ = "";
    pipelineIdsIsSet_ = false;
}

BatchShowPipelinesStatusRequest::~BatchShowPipelinesStatusRequest() = default;

void BatchShowPipelinesStatusRequest::validate()
{
}

web::json::value BatchShowPipelinesStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdsIsSet_) {
        val[utility::conversions::to_string_t("pipeline_ids")] = ModelBase::toJson(pipelineIds_);
    }

    return val;
}
bool BatchShowPipelinesStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineIds(refVal);
        }
    }
    return ok;
}


std::string BatchShowPipelinesStatusRequest::getPipelineIds() const
{
    return pipelineIds_;
}

void BatchShowPipelinesStatusRequest::setPipelineIds(const std::string& value)
{
    pipelineIds_ = value;
    pipelineIdsIsSet_ = true;
}

bool BatchShowPipelinesStatusRequest::pipelineIdsIsSet() const
{
    return pipelineIdsIsSet_;
}

void BatchShowPipelinesStatusRequest::unsetpipelineIds()
{
    pipelineIdsIsSet_ = false;
}

}
}
}
}
}


