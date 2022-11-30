

#include "huaweicloud/eip/v2/model/ProfileResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ProfileResp::ProfileResp()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

ProfileResp::~ProfileResp() = default;

void ProfileResp::validate()
{
}

web::json::value ProfileResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}

bool ProfileResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string ProfileResp::getOrderId() const
{
    return orderId_;
}

void ProfileResp::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ProfileResp::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ProfileResp::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ProfileResp::getProductId() const
{
    return productId_;
}

void ProfileResp::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ProfileResp::productIdIsSet() const
{
    return productIdIsSet_;
}

void ProfileResp::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ProfileResp::getRegionId() const
{
    return regionId_;
}

void ProfileResp::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ProfileResp::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ProfileResp::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string ProfileResp::getUserId() const
{
    return userId_;
}

void ProfileResp::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ProfileResp::userIdIsSet() const
{
    return userIdIsSet_;
}

void ProfileResp::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


