

#include "huaweicloud/eip/v3/model/ShowTenantDict.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShowTenantDict::ShowTenantDict()
{
    id_ = "";
    idIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    minSize_ = 0;
    minSizeIsSet_ = false;
    maxSize_ = 0;
    maxSizeIsSet_ = false;
    extLimitIsSet_ = false;
}

ShowTenantDict::~ShowTenantDict() = default;

void ShowTenantDict::validate()
{
}

web::json::value ShowTenantDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(minSizeIsSet_) {
        val[utility::conversions::to_string_t("min_size")] = ModelBase::toJson(minSize_);
    }
    if(maxSizeIsSet_) {
        val[utility::conversions::to_string_t("max_size")] = ModelBase::toJson(maxSize_);
    }
    if(extLimitIsSet_) {
        val[utility::conversions::to_string_t("ext_limit")] = ModelBase::toJson(extLimit_);
    }

    return val;
}
bool ShowTenantDict::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext_limit"));
        if(!fieldValue.is_null())
        {
            ExtLimitPojo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtLimit(refVal);
        }
    }
    return ok;
}


std::string ShowTenantDict::getId() const
{
    return id_;
}

void ShowTenantDict::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowTenantDict::idIsSet() const
{
    return idIsSet_;
}

void ShowTenantDict::unsetid()
{
    idIsSet_ = false;
}

std::string ShowTenantDict::getChargeMode() const
{
    return chargeMode_;
}

void ShowTenantDict::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ShowTenantDict::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ShowTenantDict::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t ShowTenantDict::getMinSize() const
{
    return minSize_;
}

void ShowTenantDict::setMinSize(int32_t value)
{
    minSize_ = value;
    minSizeIsSet_ = true;
}

bool ShowTenantDict::minSizeIsSet() const
{
    return minSizeIsSet_;
}

void ShowTenantDict::unsetminSize()
{
    minSizeIsSet_ = false;
}

int32_t ShowTenantDict::getMaxSize() const
{
    return maxSize_;
}

void ShowTenantDict::setMaxSize(int32_t value)
{
    maxSize_ = value;
    maxSizeIsSet_ = true;
}

bool ShowTenantDict::maxSizeIsSet() const
{
    return maxSizeIsSet_;
}

void ShowTenantDict::unsetmaxSize()
{
    maxSizeIsSet_ = false;
}

ExtLimitPojo ShowTenantDict::getExtLimit() const
{
    return extLimit_;
}

void ShowTenantDict::setExtLimit(const ExtLimitPojo& value)
{
    extLimit_ = value;
    extLimitIsSet_ = true;
}

bool ShowTenantDict::extLimitIsSet() const
{
    return extLimitIsSet_;
}

void ShowTenantDict::unsetextLimit()
{
    extLimitIsSet_ = false;
}

}
}
}
}
}


