

#include "huaweicloud/smn/v2/model/BatchDeleteSubscriptionsFilterPolicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchDeleteSubscriptionsFilterPolicesRequest::BatchDeleteSubscriptionsFilterPolicesRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteSubscriptionsFilterPolicesRequest::~BatchDeleteSubscriptionsFilterPolicesRequest() = default;

void BatchDeleteSubscriptionsFilterPolicesRequest::validate()
{
}

web::json::value BatchDeleteSubscriptionsFilterPolicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteSubscriptionsFilterPolicesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteSubscriptionsFilterPolicesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchDeleteSubscriptionsFilterPolicesRequestBody BatchDeleteSubscriptionsFilterPolicesRequest::getBody() const
{
    return body_;
}

void BatchDeleteSubscriptionsFilterPolicesRequest::setBody(const BatchDeleteSubscriptionsFilterPolicesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteSubscriptionsFilterPolicesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteSubscriptionsFilterPolicesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


