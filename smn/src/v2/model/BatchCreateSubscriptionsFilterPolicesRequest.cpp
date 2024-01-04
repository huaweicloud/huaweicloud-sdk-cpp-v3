

#include "huaweicloud/smn/v2/model/BatchCreateSubscriptionsFilterPolicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchCreateSubscriptionsFilterPolicesRequest::BatchCreateSubscriptionsFilterPolicesRequest()
{
    bodyIsSet_ = false;
}

BatchCreateSubscriptionsFilterPolicesRequest::~BatchCreateSubscriptionsFilterPolicesRequest() = default;

void BatchCreateSubscriptionsFilterPolicesRequest::validate()
{
}

web::json::value BatchCreateSubscriptionsFilterPolicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateSubscriptionsFilterPolicesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchSubscriptionsFilterPolicesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchSubscriptionsFilterPolicesRequestBody BatchCreateSubscriptionsFilterPolicesRequest::getBody() const
{
    return body_;
}

void BatchCreateSubscriptionsFilterPolicesRequest::setBody(const BatchSubscriptionsFilterPolicesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateSubscriptionsFilterPolicesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateSubscriptionsFilterPolicesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


