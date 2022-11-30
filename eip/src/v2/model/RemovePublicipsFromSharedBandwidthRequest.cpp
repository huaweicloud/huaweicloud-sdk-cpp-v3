

#include "huaweicloud/eip/v2/model/RemovePublicipsFromSharedBandwidthRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




RemovePublicipsFromSharedBandwidthRequest::RemovePublicipsFromSharedBandwidthRequest()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    bodyIsSet_ = false;
}

RemovePublicipsFromSharedBandwidthRequest::~RemovePublicipsFromSharedBandwidthRequest() = default;

void RemovePublicipsFromSharedBandwidthRequest::validate()
{
}

web::json::value RemovePublicipsFromSharedBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RemovePublicipsFromSharedBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RemovePublicipsFromSharedBandwidthRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RemovePublicipsFromSharedBandwidthRequest::getBandwidthId() const
{
    return bandwidthId_;
}

void RemovePublicipsFromSharedBandwidthRequest::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool RemovePublicipsFromSharedBandwidthRequest::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void RemovePublicipsFromSharedBandwidthRequest::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

RemovePublicipsFromSharedBandwidthRequestBody RemovePublicipsFromSharedBandwidthRequest::getBody() const
{
    return body_;
}

void RemovePublicipsFromSharedBandwidthRequest::setBody(const RemovePublicipsFromSharedBandwidthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RemovePublicipsFromSharedBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RemovePublicipsFromSharedBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


