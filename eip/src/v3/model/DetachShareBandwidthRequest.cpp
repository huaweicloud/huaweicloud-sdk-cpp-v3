

#include "huaweicloud/eip/v3/model/DetachShareBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DetachShareBandwidthRequest::DetachShareBandwidthRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetachShareBandwidthRequest::~DetachShareBandwidthRequest() = default;

void DetachShareBandwidthRequest::validate()
{
}

web::json::value DetachShareBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DetachShareBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DetachSharedbwReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetachShareBandwidthRequest::getPublicipId() const
{
    return publicipId_;
}

void DetachShareBandwidthRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool DetachShareBandwidthRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void DetachShareBandwidthRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

DetachSharedbwReq DetachShareBandwidthRequest::getBody() const
{
    return body_;
}

void DetachShareBandwidthRequest::setBody(const DetachSharedbwReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetachShareBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetachShareBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


