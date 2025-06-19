

#include "huaweicloud/codeartsbuild/v3/model/CheckWebhookUrlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CheckWebhookUrlRequest::CheckWebhookUrlRequest()
{
    bodyIsSet_ = false;
}

CheckWebhookUrlRequest::~CheckWebhookUrlRequest() = default;

void CheckWebhookUrlRequest::validate()
{
}

web::json::value CheckWebhookUrlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckWebhookUrlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CheckWebhookUrlRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CheckWebhookUrlRequestBody CheckWebhookUrlRequest::getBody() const
{
    return body_;
}

void CheckWebhookUrlRequest::setBody(const CheckWebhookUrlRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckWebhookUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckWebhookUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


