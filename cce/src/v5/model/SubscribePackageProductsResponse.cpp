

#include "huaweicloud/cce/v5/model/SubscribePackageProductsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




SubscribePackageProductsResponse::SubscribePackageProductsResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
}

SubscribePackageProductsResponse::~SubscribePackageProductsResponse() = default;

void SubscribePackageProductsResponse::validate()
{
}

web::json::value SubscribePackageProductsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool SubscribePackageProductsResponse::fromJson(const web::json::value& val)
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


std::string SubscribePackageProductsResponse::getOrderId() const
{
    return orderId_;
}

void SubscribePackageProductsResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool SubscribePackageProductsResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void SubscribePackageProductsResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


