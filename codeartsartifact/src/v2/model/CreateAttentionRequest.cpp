

#include "huaweicloud/codeartsartifact/v2/model/CreateAttentionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateAttentionRequest::CreateAttentionRequest()
{
    bodyIsSet_ = false;
}

CreateAttentionRequest::~CreateAttentionRequest() = default;

void CreateAttentionRequest::validate()
{
}

web::json::value CreateAttentionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAttentionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AttentionDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AttentionDO CreateAttentionRequest::getBody() const
{
    return body_;
}

void CreateAttentionRequest::setBody(const AttentionDO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAttentionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAttentionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


