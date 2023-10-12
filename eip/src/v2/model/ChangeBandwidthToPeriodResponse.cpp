

#include "huaweicloud/eip/v2/model/ChangeBandwidthToPeriodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ChangeBandwidthToPeriodResponse::ChangeBandwidthToPeriodResponse()
{
    bandwidthIdsIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ChangeBandwidthToPeriodResponse::~ChangeBandwidthToPeriodResponse() = default;

void ChangeBandwidthToPeriodResponse::validate()
{
}

web::json::value ChangeBandwidthToPeriodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIdsIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_ids")] = ModelBase::toJson(bandwidthIds_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ChangeBandwidthToPeriodResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthIds(refVal);
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


std::vector<std::string>& ChangeBandwidthToPeriodResponse::getBandwidthIds()
{
    return bandwidthIds_;
}

void ChangeBandwidthToPeriodResponse::setBandwidthIds(const std::vector<std::string>& value)
{
    bandwidthIds_ = value;
    bandwidthIdsIsSet_ = true;
}

bool ChangeBandwidthToPeriodResponse::bandwidthIdsIsSet() const
{
    return bandwidthIdsIsSet_;
}

void ChangeBandwidthToPeriodResponse::unsetbandwidthIds()
{
    bandwidthIdsIsSet_ = false;
}

std::string ChangeBandwidthToPeriodResponse::getOrderId() const
{
    return orderId_;
}

void ChangeBandwidthToPeriodResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeBandwidthToPeriodResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeBandwidthToPeriodResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ChangeBandwidthToPeriodResponse::getRequestId() const
{
    return requestId_;
}

void ChangeBandwidthToPeriodResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ChangeBandwidthToPeriodResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ChangeBandwidthToPeriodResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


