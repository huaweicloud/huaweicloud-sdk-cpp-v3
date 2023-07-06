

#include "huaweicloud/eip/v3/model/BillingInfoDict.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




BillingInfoDict::BillingInfoDict()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
}

BillingInfoDict::~BillingInfoDict() = default;

void BillingInfoDict::validate()
{
}

web::json::value BillingInfoDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }

    return val;
}

bool BillingInfoDict::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    return ok;
}

std::string BillingInfoDict::getOrderId() const
{
    return orderId_;
}

void BillingInfoDict::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool BillingInfoDict::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void BillingInfoDict::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string BillingInfoDict::getProductId() const
{
    return productId_;
}

void BillingInfoDict::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool BillingInfoDict::productIdIsSet() const
{
    return productIdIsSet_;
}

void BillingInfoDict::unsetproductId()
{
    productIdIsSet_ = false;
}

}
}
}
}
}


