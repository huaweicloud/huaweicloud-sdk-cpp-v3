

#include "huaweicloud/cbr/v1/model/ChangeOrderResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ChangeOrderResponse::ChangeOrderResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    retCode_ = "";
    retCodeIsSet_ = false;
    retMsg_ = "";
    retMsgIsSet_ = false;
}

ChangeOrderResponse::~ChangeOrderResponse() = default;

void ChangeOrderResponse::validate()
{
}

web::json::value ChangeOrderResponse::toJson() const
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
bool ChangeOrderResponse::fromJson(const web::json::value& val)
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


std::string ChangeOrderResponse::getOrderId() const
{
    return orderId_;
}

void ChangeOrderResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeOrderResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeOrderResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ChangeOrderResponse::getRetCode() const
{
    return retCode_;
}

void ChangeOrderResponse::setRetCode(const std::string& value)
{
    retCode_ = value;
    retCodeIsSet_ = true;
}

bool ChangeOrderResponse::retCodeIsSet() const
{
    return retCodeIsSet_;
}

void ChangeOrderResponse::unsetretCode()
{
    retCodeIsSet_ = false;
}

std::string ChangeOrderResponse::getRetMsg() const
{
    return retMsg_;
}

void ChangeOrderResponse::setRetMsg(const std::string& value)
{
    retMsg_ = value;
    retMsgIsSet_ = true;
}

bool ChangeOrderResponse::retMsgIsSet() const
{
    return retMsgIsSet_;
}

void ChangeOrderResponse::unsetretMsg()
{
    retMsgIsSet_ = false;
}

}
}
}
}
}


