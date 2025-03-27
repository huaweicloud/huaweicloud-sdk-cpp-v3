

#include "huaweicloud/cbr/v1/model/ChangeVaultChargeModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ChangeVaultChargeModeResponse::ChangeVaultChargeModeResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    retCode_ = 0.0;
    retCodeIsSet_ = false;
    retMsg_ = "";
    retMsgIsSet_ = false;
}

ChangeVaultChargeModeResponse::~ChangeVaultChargeModeResponse() = default;

void ChangeVaultChargeModeResponse::validate()
{
}

web::json::value ChangeVaultChargeModeResponse::toJson() const
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
bool ChangeVaultChargeModeResponse::fromJson(const web::json::value& val)
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
            double refVal;
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


std::string ChangeVaultChargeModeResponse::getOrderId() const
{
    return orderId_;
}

void ChangeVaultChargeModeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeVaultChargeModeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeVaultChargeModeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

double ChangeVaultChargeModeResponse::getRetCode() const
{
    return retCode_;
}

void ChangeVaultChargeModeResponse::setRetCode(double value)
{
    retCode_ = value;
    retCodeIsSet_ = true;
}

bool ChangeVaultChargeModeResponse::retCodeIsSet() const
{
    return retCodeIsSet_;
}

void ChangeVaultChargeModeResponse::unsetretCode()
{
    retCodeIsSet_ = false;
}

std::string ChangeVaultChargeModeResponse::getRetMsg() const
{
    return retMsg_;
}

void ChangeVaultChargeModeResponse::setRetMsg(const std::string& value)
{
    retMsg_ = value;
    retMsgIsSet_ = true;
}

bool ChangeVaultChargeModeResponse::retMsgIsSet() const
{
    return retMsgIsSet_;
}

void ChangeVaultChargeModeResponse::unsetretMsg()
{
    retMsgIsSet_ = false;
}

}
}
}
}
}


