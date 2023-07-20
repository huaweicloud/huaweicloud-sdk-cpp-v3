

#include "huaweicloud/eip/v3/model/AttachShareBandwidthResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




AttachShareBandwidthResponse::AttachShareBandwidthResponse()
{
    publicipIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

AttachShareBandwidthResponse::~AttachShareBandwidthResponse() = default;

void AttachShareBandwidthResponse::validate()
{
}

web::json::value AttachShareBandwidthResponse::toJson() const
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

bool AttachShareBandwidthResponse::fromJson(const web::json::value& val)
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

PublicipResp AttachShareBandwidthResponse::getPublicip() const
{
    return publicip_;
}

void AttachShareBandwidthResponse::setPublicip(const PublicipResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool AttachShareBandwidthResponse::publicipIsSet() const
{
    return publicipIsSet_;
}

void AttachShareBandwidthResponse::unsetpublicip()
{
    publicipIsSet_ = false;
}

std::string AttachShareBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void AttachShareBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AttachShareBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AttachShareBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


