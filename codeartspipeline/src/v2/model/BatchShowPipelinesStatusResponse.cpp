

#include "huaweicloud/codeartspipeline/v2/model/BatchShowPipelinesStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




BatchShowPipelinesStatusResponse::BatchShowPipelinesStatusResponse()
{
    bodyIsSet_ = false;
}

BatchShowPipelinesStatusResponse::~BatchShowPipelinesStatusResponse() = default;

void BatchShowPipelinesStatusResponse::validate()
{
}

web::json::value BatchShowPipelinesStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchShowPipelinesStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineExecuteStates> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PipelineExecuteStates>& BatchShowPipelinesStatusResponse::getBody()
{
    return body_;
}

void BatchShowPipelinesStatusResponse::setBody(const std::vector<PipelineExecuteStates>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchShowPipelinesStatusResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchShowPipelinesStatusResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


