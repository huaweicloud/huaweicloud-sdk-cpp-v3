

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineByTemplateIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineByTemplateIdResponse::CreatePipelineByTemplateIdResponse()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
}

CreatePipelineByTemplateIdResponse::~CreatePipelineByTemplateIdResponse() = default;

void CreatePipelineByTemplateIdResponse::validate()
{
}

web::json::value CreatePipelineByTemplateIdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }

    return val;
}
bool CreatePipelineByTemplateIdResponse::fromJson(const web::json::value& val)
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


std::string CreatePipelineByTemplateIdResponse::getPipelineId() const
{
    return pipelineId_;
}

void CreatePipelineByTemplateIdResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool CreatePipelineByTemplateIdResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void CreatePipelineByTemplateIdResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

}
}
}
}
}


