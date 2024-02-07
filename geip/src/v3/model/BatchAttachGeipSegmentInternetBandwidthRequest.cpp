

#include "huaweicloud/geip/v3/model/BatchAttachGeipSegmentInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchAttachGeipSegmentInternetBandwidthRequest::BatchAttachGeipSegmentInternetBandwidthRequest()
{
    bodyIsSet_ = false;
}

BatchAttachGeipSegmentInternetBandwidthRequest::~BatchAttachGeipSegmentInternetBandwidthRequest() = default;

void BatchAttachGeipSegmentInternetBandwidthRequest::validate()
{
}

web::json::value BatchAttachGeipSegmentInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchAttachGeipSegmentInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody BatchAttachGeipSegmentInternetBandwidthRequest::getBody() const
{
    return body_;
}

void BatchAttachGeipSegmentInternetBandwidthRequest::setBody(const BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAttachGeipSegmentInternetBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAttachGeipSegmentInternetBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


