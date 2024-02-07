

#include "huaweicloud/geip/v3/model/AttachInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AttachInternetBandwidthRequest::AttachInternetBandwidthRequest()
{
    globalEipId_ = "";
    globalEipIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachInternetBandwidthRequest::~AttachInternetBandwidthRequest() = default;

void AttachInternetBandwidthRequest::validate()
{
}

web::json::value AttachInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_id")] = ModelBase::toJson(globalEipId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AttachInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AttachInternetBandwidthGlobalEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachInternetBandwidthRequest::getGlobalEipId() const
{
    return globalEipId_;
}

void AttachInternetBandwidthRequest::setGlobalEipId(const std::string& value)
{
    globalEipId_ = value;
    globalEipIdIsSet_ = true;
}

bool AttachInternetBandwidthRequest::globalEipIdIsSet() const
{
    return globalEipIdIsSet_;
}

void AttachInternetBandwidthRequest::unsetglobalEipId()
{
    globalEipIdIsSet_ = false;
}

AttachInternetBandwidthGlobalEipRequestBody AttachInternetBandwidthRequest::getBody() const
{
    return body_;
}

void AttachInternetBandwidthRequest::setBody(const AttachInternetBandwidthGlobalEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachInternetBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachInternetBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


