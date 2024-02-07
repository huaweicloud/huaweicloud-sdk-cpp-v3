

#include "huaweicloud/geip/v3/model/BatchCreateInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateInternetBandwidthRequest::BatchCreateInternetBandwidthRequest()
{
    bodyIsSet_ = false;
}

BatchCreateInternetBandwidthRequest::~BatchCreateInternetBandwidthRequest() = default;

void BatchCreateInternetBandwidthRequest::validate()
{
}

web::json::value BatchCreateInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateInternetBandwidthRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchCreateInternetBandwidthRequestBody BatchCreateInternetBandwidthRequest::getBody() const
{
    return body_;
}

void BatchCreateInternetBandwidthRequest::setBody(const BatchCreateInternetBandwidthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateInternetBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


