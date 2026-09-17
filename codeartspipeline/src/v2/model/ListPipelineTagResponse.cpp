

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineTagResponse::ListPipelineTagResponse()
{
    bodyIsSet_ = false;
}

ListPipelineTagResponse::~ListPipelineTagResponse() = default;

void ListPipelineTagResponse::validate()
{
}

web::json::value ListPipelineTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPipelineTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineTagResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PipelineTagResp>& ListPipelineTagResponse::getBody()
{
    return body_;
}

void ListPipelineTagResponse::setBody(const std::vector<PipelineTagResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPipelineTagResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPipelineTagResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


