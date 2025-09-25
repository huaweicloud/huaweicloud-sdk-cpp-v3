

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineGroupTreeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineGroupTreeResponse::ShowPipelineGroupTreeResponse()
{
    bodyIsSet_ = false;
}

ShowPipelineGroupTreeResponse::~ShowPipelineGroupTreeResponse() = default;

void ShowPipelineGroupTreeResponse::validate()
{
}

web::json::value ShowPipelineGroupTreeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPipelineGroupTreeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineGroupVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PipelineGroupVo>& ShowPipelineGroupTreeResponse::getBody()
{
    return body_;
}

void ShowPipelineGroupTreeResponse::setBody(const std::vector<PipelineGroupVo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPipelineGroupTreeResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPipelineGroupTreeResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


