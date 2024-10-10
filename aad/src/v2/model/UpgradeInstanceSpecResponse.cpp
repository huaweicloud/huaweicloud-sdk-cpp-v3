

#include "huaweicloud/aad/v2/model/UpgradeInstanceSpecResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpgradeInstanceSpecResponse::UpgradeInstanceSpecResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
}

UpgradeInstanceSpecResponse::~UpgradeInstanceSpecResponse() = default;

void UpgradeInstanceSpecResponse::validate()
{
}

web::json::value UpgradeInstanceSpecResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool UpgradeInstanceSpecResponse::fromJson(const web::json::value& val)
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


std::string UpgradeInstanceSpecResponse::getOrderId() const
{
    return orderId_;
}

void UpgradeInstanceSpecResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool UpgradeInstanceSpecResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void UpgradeInstanceSpecResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


