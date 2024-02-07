

#include "huaweicloud/geip/v3/model/BatchDetachGeipSegmentInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDetachGeipSegmentInternetBandwidthRequest::BatchDetachGeipSegmentInternetBandwidthRequest()
{
    bodyIsSet_ = false;
}

BatchDetachGeipSegmentInternetBandwidthRequest::~BatchDetachGeipSegmentInternetBandwidthRequest() = default;

void BatchDetachGeipSegmentInternetBandwidthRequest::validate()
{
}

web::json::value BatchDetachGeipSegmentInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDetachGeipSegmentInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody BatchDetachGeipSegmentInternetBandwidthRequest::getBody() const
{
    return body_;
}

void BatchDetachGeipSegmentInternetBandwidthRequest::setBody(const BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDetachGeipSegmentInternetBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDetachGeipSegmentInternetBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


