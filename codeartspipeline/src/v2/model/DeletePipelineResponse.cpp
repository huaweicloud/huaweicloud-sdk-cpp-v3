

#include "huaweicloud/codeartspipeline/v2/model/DeletePipelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePipelineResponse::DeletePipelineResponse()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
}

DeletePipelineResponse::~DeletePipelineResponse() = default;

void DeletePipelineResponse::validate()
{
}

web::json::value DeletePipelineResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }

    return val;
}
bool DeletePipelineResponse::fromJson(const web::json::value& val)
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


std::string DeletePipelineResponse::getPipelineId() const
{
    return pipelineId_;
}

void DeletePipelineResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool DeletePipelineResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void DeletePipelineResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

}
}
}
}
}


