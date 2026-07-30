

#include "huaweicloud/modelarts/v1/model/FlavorDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FlavorDetail::FlavorDetail()
{
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    billingIsSet_ = false;
    flavorInfoIsSet_ = false;
}

FlavorDetail::~FlavorDetail() = default;

void FlavorDetail::validate()
{
}

web::json::value FlavorDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }
    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(flavorInfoIsSet_) {
        val[utility::conversions::to_string_t("flavor_info")] = ModelBase::toJson(flavorInfo_);
    }

    return val;
}
bool FlavorDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            BillingInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBilling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_info"));
        if(!fieldValue.is_null())
        {
            FlavorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorInfo(refVal);
        }
    }
    return ok;
}


std::string FlavorDetail::getFlavorType() const
{
    return flavorType_;
}

void FlavorDetail::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool FlavorDetail::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void FlavorDetail::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

BillingInfo FlavorDetail::getBilling() const
{
    return billing_;
}

void FlavorDetail::setBilling(const BillingInfo& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool FlavorDetail::billingIsSet() const
{
    return billingIsSet_;
}

void FlavorDetail::unsetbilling()
{
    billingIsSet_ = false;
}

FlavorInfo FlavorDetail::getFlavorInfo() const
{
    return flavorInfo_;
}

void FlavorDetail::setFlavorInfo(const FlavorInfo& value)
{
    flavorInfo_ = value;
    flavorInfoIsSet_ = true;
}

bool FlavorDetail::flavorInfoIsSet() const
{
    return flavorInfoIsSet_;
}

void FlavorDetail::unsetflavorInfo()
{
    flavorInfoIsSet_ = false;
}

}
}
}
}
}


