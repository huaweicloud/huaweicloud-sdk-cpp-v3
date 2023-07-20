

#include "huaweicloud/eip/v3/model/DetachShareBandwidthResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DetachShareBandwidthResponse::DetachShareBandwidthResponse()
{
    publicipIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

DetachShareBandwidthResponse::~DetachShareBandwidthResponse() = default;

void DetachShareBandwidthResponse::validate()
{
}

web::json::value DetachShareBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool DetachShareBandwidthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PublicipResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}

PublicipResp DetachShareBandwidthResponse::getPublicip() const
{
    return publicip_;
}

void DetachShareBandwidthResponse::setPublicip(const PublicipResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool DetachShareBandwidthResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void DetachShareBandwidthResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

std::string DetachShareBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void DetachShareBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DetachShareBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DetachShareBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


