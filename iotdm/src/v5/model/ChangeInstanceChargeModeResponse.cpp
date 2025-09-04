

#include "huaweicloud/iotdm/v5/model/ChangeInstanceChargeModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ChangeInstanceChargeModeResponse::ChangeInstanceChargeModeResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
}

ChangeInstanceChargeModeResponse::~ChangeInstanceChargeModeResponse() = default;

void ChangeInstanceChargeModeResponse::validate()
{
}

web::json::value ChangeInstanceChargeModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool ChangeInstanceChargeModeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ChangeInstanceChargeModeResponse::getOrderId() const
{
    return orderId_;
}

void ChangeInstanceChargeModeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeInstanceChargeModeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeInstanceChargeModeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


