

#include "huaweicloud/codeartspipeline/v2/model/StartNewPipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StartNewPipelineRequest::StartNewPipelineRequest()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartNewPipelineRequest::~StartNewPipelineRequest() = default;

void StartNewPipelineRequest::validate()
{
}

web::json::value StartNewPipelineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartNewPipelineRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StartPipelineParameters refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartNewPipelineRequest::getPipelineId() const
{
    return pipelineId_;
}

void StartNewPipelineRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool StartNewPipelineRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void StartNewPipelineRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

StartPipelineParameters StartNewPipelineRequest::getBody() const
{
    return body_;
}

void StartNewPipelineRequest::setBody(const StartPipelineParameters& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartNewPipelineRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartNewPipelineRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


