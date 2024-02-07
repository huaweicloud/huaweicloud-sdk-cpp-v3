

#include "huaweicloud/geip/v3/model/BatchAttachInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchAttachInternetBandwidthRequest::BatchAttachInternetBandwidthRequest()
{
    bodyIsSet_ = false;
}

BatchAttachInternetBandwidthRequest::~BatchAttachInternetBandwidthRequest() = default;

void BatchAttachInternetBandwidthRequest::validate()
{
}

web::json::value BatchAttachInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchAttachInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAttachInternetBandwidthsGlobalEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchAttachInternetBandwidthsGlobalEipRequestBody BatchAttachInternetBandwidthRequest::getBody() const
{
    return body_;
}

void BatchAttachInternetBandwidthRequest::setBody(const BatchAttachInternetBandwidthsGlobalEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAttachInternetBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAttachInternetBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


