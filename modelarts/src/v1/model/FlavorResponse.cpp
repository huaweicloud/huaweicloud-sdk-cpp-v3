

#include "huaweicloud/modelarts/v1/model/FlavorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FlavorResponse::FlavorResponse()
{
    poolId_ = "";
    poolIdIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    flavorName_ = "";
    flavorNameIsSet_ = false;
    maxNum_ = 0;
    maxNumIsSet_ = false;
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    billingIsSet_ = false;
    flavorInfoIsSet_ = false;
    attributesIsSet_ = false;
}

FlavorResponse::~FlavorResponse() = default;

void FlavorResponse::validate()
{
}

web::json::value FlavorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(flavorNameIsSet_) {
        val[utility::conversions::to_string_t("flavor_name")] = ModelBase::toJson(flavorName_);
    }
    if(maxNumIsSet_) {
        val[utility::conversions::to_string_t("max_num")] = ModelBase::toJson(maxNum_);
    }
    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }
    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(flavorInfoIsSet_) {
        val[utility::conversions::to_string_t("flavor_info")] = ModelBase::toJson(flavorInfo_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}
bool FlavorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxNum(refVal);
        }
    }
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
            FlavorInfoResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}


std::string FlavorResponse::getPoolId() const
{
    return poolId_;
}

void FlavorResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool FlavorResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void FlavorResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string FlavorResponse::getFlavorId() const
{
    return flavorId_;
}

void FlavorResponse::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool FlavorResponse::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void FlavorResponse::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string FlavorResponse::getFlavorName() const
{
    return flavorName_;
}

void FlavorResponse::setFlavorName(const std::string& value)
{
    flavorName_ = value;
    flavorNameIsSet_ = true;
}

bool FlavorResponse::flavorNameIsSet() const
{
    return flavorNameIsSet_;
}

void FlavorResponse::unsetflavorName()
{
    flavorNameIsSet_ = false;
}

int32_t FlavorResponse::getMaxNum() const
{
    return maxNum_;
}

void FlavorResponse::setMaxNum(int32_t value)
{
    maxNum_ = value;
    maxNumIsSet_ = true;
}

bool FlavorResponse::maxNumIsSet() const
{
    return maxNumIsSet_;
}

void FlavorResponse::unsetmaxNum()
{
    maxNumIsSet_ = false;
}

std::string FlavorResponse::getFlavorType() const
{
    return flavorType_;
}

void FlavorResponse::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool FlavorResponse::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void FlavorResponse::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

BillingInfo FlavorResponse::getBilling() const
{
    return billing_;
}

void FlavorResponse::setBilling(const BillingInfo& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool FlavorResponse::billingIsSet() const
{
    return billingIsSet_;
}

void FlavorResponse::unsetbilling()
{
    billingIsSet_ = false;
}

FlavorInfoResponse FlavorResponse::getFlavorInfo() const
{
    return flavorInfo_;
}

void FlavorResponse::setFlavorInfo(const FlavorInfoResponse& value)
{
    flavorInfo_ = value;
    flavorInfoIsSet_ = true;
}

bool FlavorResponse::flavorInfoIsSet() const
{
    return flavorInfoIsSet_;
}

void FlavorResponse::unsetflavorInfo()
{
    flavorInfoIsSet_ = false;
}

std::map<std::string, std::string>& FlavorResponse::getAttributes()
{
    return attributes_;
}

void FlavorResponse::setAttributes(const std::map<std::string, std::string>& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool FlavorResponse::attributesIsSet() const
{
    return attributesIsSet_;
}

void FlavorResponse::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


