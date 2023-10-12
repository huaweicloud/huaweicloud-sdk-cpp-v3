

#include "huaweicloud/eip/v3/model/AttachShareBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




AttachShareBandwidthRequest::AttachShareBandwidthRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachShareBandwidthRequest::~AttachShareBandwidthRequest() = default;

void AttachShareBandwidthRequest::validate()
{
}

web::json::value AttachShareBandwidthRequest::toJson() const
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
bool AttachShareBandwidthRequest::fromJson(const web::json::value& val)
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
            AttachSharebwReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachShareBandwidthRequest::getPublicipId() const
{
    return publicipId_;
}

void AttachShareBandwidthRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool AttachShareBandwidthRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void AttachShareBandwidthRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

AttachSharebwReq AttachShareBandwidthRequest::getBody() const
{
    return body_;
}

void AttachShareBandwidthRequest::setBody(const AttachSharebwReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachShareBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachShareBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


