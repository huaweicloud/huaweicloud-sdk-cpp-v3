

#include "huaweicloud/eip/v2/model/UpdatePrePaidBandwidthResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdatePrePaidBandwidthResponse::UpdatePrePaidBandwidthResponse()
{
    bandwidthIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

UpdatePrePaidBandwidthResponse::~UpdatePrePaidBandwidthResponse() = default;

void UpdatePrePaidBandwidthResponse::validate()
{
}

web::json::value UpdatePrePaidBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}

bool UpdatePrePaidBandwidthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            BandwidthResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    return ok;
}


BandwidthResp UpdatePrePaidBandwidthResponse::getBandwidth() const
{
    return bandwidth_;
}

void UpdatePrePaidBandwidthResponse::setBandwidth(const BandwidthResp& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool UpdatePrePaidBandwidthResponse::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void UpdatePrePaidBandwidthResponse::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

std::string UpdatePrePaidBandwidthResponse::getOrderId() const
{
    return orderId_;
}

void UpdatePrePaidBandwidthResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool UpdatePrePaidBandwidthResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void UpdatePrePaidBandwidthResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


