

#include "huaweicloud/cdn/v2/model/SetChargeModesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SetChargeModesResponse::SetChargeModesResponse()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    productType_ = "";
    productTypeIsSet_ = false;
    effectiveTime_ = 0L;
    effectiveTimeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SetChargeModesResponse::~SetChargeModesResponse() = default;

void SetChargeModesResponse::validate()
{
}

web::json::value SetChargeModesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(productTypeIsSet_) {
        val[utility::conversions::to_string_t("product_type")] = ModelBase::toJson(productType_);
    }
    if(effectiveTimeIsSet_) {
        val[utility::conversions::to_string_t("effective_time")] = ModelBase::toJson(effectiveTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool SetChargeModesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("effective_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}

std::string SetChargeModesResponse::getChargeMode() const
{
    return chargeMode_;
}

void SetChargeModesResponse::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool SetChargeModesResponse::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void SetChargeModesResponse::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string SetChargeModesResponse::getProductType() const
{
    return productType_;
}

void SetChargeModesResponse::setProductType(const std::string& value)
{
    productType_ = value;
    productTypeIsSet_ = true;
}

bool SetChargeModesResponse::productTypeIsSet() const
{
    return productTypeIsSet_;
}

void SetChargeModesResponse::unsetproductType()
{
    productTypeIsSet_ = false;
}

int64_t SetChargeModesResponse::getEffectiveTime() const
{
    return effectiveTime_;
}

void SetChargeModesResponse::setEffectiveTime(int64_t value)
{
    effectiveTime_ = value;
    effectiveTimeIsSet_ = true;
}

bool SetChargeModesResponse::effectiveTimeIsSet() const
{
    return effectiveTimeIsSet_;
}

void SetChargeModesResponse::unseteffectiveTime()
{
    effectiveTimeIsSet_ = false;
}

int64_t SetChargeModesResponse::getCreateTime() const
{
    return createTime_;
}

void SetChargeModesResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SetChargeModesResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SetChargeModesResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string SetChargeModesResponse::getServiceArea() const
{
    return serviceArea_;
}

void SetChargeModesResponse::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool SetChargeModesResponse::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void SetChargeModesResponse::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string SetChargeModesResponse::getStatus() const
{
    return status_;
}

void SetChargeModesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetChargeModesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetChargeModesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


