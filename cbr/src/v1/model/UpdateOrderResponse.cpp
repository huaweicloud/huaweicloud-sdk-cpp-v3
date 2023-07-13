

#include "huaweicloud/cbr/v1/model/UpdateOrderResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateOrderResponse::UpdateOrderResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    retCode_ = "";
    retCodeIsSet_ = false;
    retMsg_ = "";
    retMsgIsSet_ = false;
}

UpdateOrderResponse::~UpdateOrderResponse() = default;

void UpdateOrderResponse::validate()
{
}

web::json::value UpdateOrderResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("orderId")] = ModelBase::toJson(orderId_);
    }
    if(retCodeIsSet_) {
        val[utility::conversions::to_string_t("retCode")] = ModelBase::toJson(retCode_);
    }
    if(retMsgIsSet_) {
        val[utility::conversions::to_string_t("retMsg")] = ModelBase::toJson(retMsg_);
    }

    return val;
}

bool UpdateOrderResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("orderId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orderId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retMsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retMsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetMsg(refVal);
        }
    }
    return ok;
}

std::string UpdateOrderResponse::getOrderId() const
{
    return orderId_;
}

void UpdateOrderResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool UpdateOrderResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void UpdateOrderResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string UpdateOrderResponse::getRetCode() const
{
    return retCode_;
}

void UpdateOrderResponse::setRetCode(const std::string& value)
{
    retCode_ = value;
    retCodeIsSet_ = true;
}

bool UpdateOrderResponse::retCodeIsSet() const
{
    return retCodeIsSet_;
}

void UpdateOrderResponse::unsetretCode()
{
    retCodeIsSet_ = false;
}

std::string UpdateOrderResponse::getRetMsg() const
{
    return retMsg_;
}

void UpdateOrderResponse::setRetMsg(const std::string& value)
{
    retMsg_ = value;
    retMsgIsSet_ = true;
}

bool UpdateOrderResponse::retMsgIsSet() const
{
    return retMsgIsSet_;
}

void UpdateOrderResponse::unsetretMsg()
{
    retMsgIsSet_ = false;
}

}
}
}
}
}


