

#include "huaweicloud/smn/v2/model/BatchUpdateSubscriptionsFilterPolicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchUpdateSubscriptionsFilterPolicesRequest::BatchUpdateSubscriptionsFilterPolicesRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateSubscriptionsFilterPolicesRequest::~BatchUpdateSubscriptionsFilterPolicesRequest() = default;

void BatchUpdateSubscriptionsFilterPolicesRequest::validate()
{
}

web::json::value BatchUpdateSubscriptionsFilterPolicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateSubscriptionsFilterPolicesRequest::fromJson(const web::json::value& val)
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


BatchSubscriptionsFilterPolicesRequestBody BatchUpdateSubscriptionsFilterPolicesRequest::getBody() const
{
    return body_;
}

void BatchUpdateSubscriptionsFilterPolicesRequest::setBody(const BatchSubscriptionsFilterPolicesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateSubscriptionsFilterPolicesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateSubscriptionsFilterPolicesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


