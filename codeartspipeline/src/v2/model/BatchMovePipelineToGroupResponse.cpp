

#include "huaweicloud/codeartspipeline/v2/model/BatchMovePipelineToGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




BatchMovePipelineToGroupResponse::BatchMovePipelineToGroupResponse()
{
    bodyIsSet_ = false;
}

BatchMovePipelineToGroupResponse::~BatchMovePipelineToGroupResponse() = default;

void BatchMovePipelineToGroupResponse::validate()
{
}

web::json::value BatchMovePipelineToGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchMovePipelineToGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineMoveToGroupResponseVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PipelineMoveToGroupResponseVo>& BatchMovePipelineToGroupResponse::getBody()
{
    return body_;
}

void BatchMovePipelineToGroupResponse::setBody(const std::vector<PipelineMoveToGroupResponseVo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchMovePipelineToGroupResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchMovePipelineToGroupResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


