

#include "huaweicloud/eip/v2/model/BatchProfile.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchProfile::BatchProfile()
{
    userId_ = "";
    userIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

BatchProfile::~BatchProfile() = default;

void BatchProfile::validate()
{
}

web::json::value BatchProfile::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}

bool BatchProfile::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
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


std::string BatchProfile::getUserId() const
{
    return userId_;
}

void BatchProfile::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool BatchProfile::userIdIsSet() const
{
    return userIdIsSet_;
}

void BatchProfile::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string BatchProfile::getProductId() const
{
    return productId_;
}

void BatchProfile::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool BatchProfile::productIdIsSet() const
{
    return productIdIsSet_;
}

void BatchProfile::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string BatchProfile::getRegionId() const
{
    return regionId_;
}

void BatchProfile::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool BatchProfile::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void BatchProfile::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string BatchProfile::getOrderId() const
{
    return orderId_;
}

void BatchProfile::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool BatchProfile::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void BatchProfile::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


