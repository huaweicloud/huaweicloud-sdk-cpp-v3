

#include "huaweicloud/iotdm/v5/model/ResizeInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ResizeInstanceResponse::ResizeInstanceResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
}

ResizeInstanceResponse::~ResizeInstanceResponse() = default;

void ResizeInstanceResponse::validate()
{
}

web::json::value ResizeInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool ResizeInstanceResponse::fromJson(const web::json::value& val)
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


std::string ResizeInstanceResponse::getOrderId() const
{
    return orderId_;
}

void ResizeInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ResizeInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ResizeInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


