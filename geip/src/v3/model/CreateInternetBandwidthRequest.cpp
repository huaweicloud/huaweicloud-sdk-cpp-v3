

#include "huaweicloud/geip/v3/model/CreateInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateInternetBandwidthRequest::CreateInternetBandwidthRequest()
{
    bodyIsSet_ = false;
}

CreateInternetBandwidthRequest::~CreateInternetBandwidthRequest() = default;

void CreateInternetBandwidthRequest::validate()
{
}

web::json::value CreateInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateInternetBandwidthRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateInternetBandwidthRequestBody CreateInternetBandwidthRequest::getBody() const
{
    return body_;
}

void CreateInternetBandwidthRequest::setBody(const CreateInternetBandwidthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInternetBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInternetBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


