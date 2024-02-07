

#include "huaweicloud/geip/v3/model/BatchDetachInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDetachInternetBandwidthRequest::BatchDetachInternetBandwidthRequest()
{
    bodyIsSet_ = false;
}

BatchDetachInternetBandwidthRequest::~BatchDetachInternetBandwidthRequest() = default;

void BatchDetachInternetBandwidthRequest::validate()
{
}

web::json::value BatchDetachInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDetachInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDetachInternetBandwidthsGlobalEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchDetachInternetBandwidthsGlobalEipRequestBody BatchDetachInternetBandwidthRequest::getBody() const
{
    return body_;
}

void BatchDetachInternetBandwidthRequest::setBody(const BatchDetachInternetBandwidthsGlobalEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDetachInternetBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDetachInternetBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


