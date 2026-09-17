

#include "huaweicloud/rds/v3/model/ResourceUsage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ResourceUsage::ResourceUsage()
{
    value_ = 0.0;
    valueIsSet_ = false;
    total_ = 0.0;
    totalIsSet_ = false;
    contrast_ = 0.0;
    contrastIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

ResourceUsage::~ResourceUsage() = default;

void ResourceUsage::validate()
{
}

web::json::value ResourceUsage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(contrastIsSet_) {
        val[utility::conversions::to_string_t("contrast")] = ModelBase::toJson(contrast_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool ResourceUsage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contrast"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contrast"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContrast(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


double ResourceUsage::getValue() const
{
    return value_;
}

void ResourceUsage::setValue(double value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceUsage::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceUsage::unsetvalue()
{
    valueIsSet_ = false;
}

double ResourceUsage::getTotal() const
{
    return total_;
}

void ResourceUsage::setTotal(double value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResourceUsage::totalIsSet() const
{
    return totalIsSet_;
}

void ResourceUsage::unsettotal()
{
    totalIsSet_ = false;
}

double ResourceUsage::getContrast() const
{
    return contrast_;
}

void ResourceUsage::setContrast(double value)
{
    contrast_ = value;
    contrastIsSet_ = true;
}

bool ResourceUsage::contrastIsSet() const
{
    return contrastIsSet_;
}

void ResourceUsage::unsetcontrast()
{
    contrastIsSet_ = false;
}

std::string ResourceUsage::getUnit() const
{
    return unit_;
}

void ResourceUsage::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ResourceUsage::unitIsSet() const
{
    return unitIsSet_;
}

void ResourceUsage::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


