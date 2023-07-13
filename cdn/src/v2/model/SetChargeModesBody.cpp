

#include "huaweicloud/cdn/v2/model/SetChargeModesBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SetChargeModesBody::SetChargeModesBody()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    productType_ = "";
    productTypeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
}

SetChargeModesBody::~SetChargeModesBody() = default;

void SetChargeModesBody::validate()
{
}

web::json::value SetChargeModesBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(productTypeIsSet_) {
        val[utility::conversions::to_string_t("product_type")] = ModelBase::toJson(productType_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }

    return val;
}

bool SetChargeModesBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
    return ok;
}

std::string SetChargeModesBody::getChargeMode() const
{
    return chargeMode_;
}

void SetChargeModesBody::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool SetChargeModesBody::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void SetChargeModesBody::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string SetChargeModesBody::getProductType() const
{
    return productType_;
}

void SetChargeModesBody::setProductType(const std::string& value)
{
    productType_ = value;
    productTypeIsSet_ = true;
}

bool SetChargeModesBody::productTypeIsSet() const
{
    return productTypeIsSet_;
}

void SetChargeModesBody::unsetproductType()
{
    productTypeIsSet_ = false;
}

std::string SetChargeModesBody::getServiceArea() const
{
    return serviceArea_;
}

void SetChargeModesBody::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool SetChargeModesBody::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void SetChargeModesBody::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

}
}
}
}
}


