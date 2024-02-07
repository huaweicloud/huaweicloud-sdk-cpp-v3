

#include "huaweicloud/geip/v3/model/UpdateInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateInternetBandwidthRequest::UpdateInternetBandwidthRequest()
{
    internetBandwidthId_ = "";
    internetBandwidthIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInternetBandwidthRequest::~UpdateInternetBandwidthRequest() = default;

void UpdateInternetBandwidthRequest::validate()
{
}

web::json::value UpdateInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internetBandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_id")] = ModelBase::toJson(internetBandwidthId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateInternetBandwidthRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInternetBandwidthRequest::getInternetBandwidthId() const
{
    return internetBandwidthId_;
}

void UpdateInternetBandwidthRequest::setInternetBandwidthId(const std::string& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool UpdateInternetBandwidthRequest::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void UpdateInternetBandwidthRequest::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

UpdateInternetBandwidthRequestBody UpdateInternetBandwidthRequest::getBody() const
{
    return body_;
}

void UpdateInternetBandwidthRequest::setBody(const UpdateInternetBandwidthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInternetBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInternetBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


