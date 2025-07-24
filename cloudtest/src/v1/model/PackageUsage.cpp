

#include "huaweicloud/cloudtest/v1/model/PackageUsage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PackageUsage::PackageUsage()
{
    name_ = "";
    nameIsSet_ = false;
    usedPercent_ = 0;
    usedPercentIsSet_ = false;
}

PackageUsage::~PackageUsage() = default;

void PackageUsage::validate()
{
}

web::json::value PackageUsage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(usedPercentIsSet_) {
        val[utility::conversions::to_string_t("used_percent")] = ModelBase::toJson(usedPercent_);
    }

    return val;
}
bool PackageUsage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedPercent(refVal);
        }
    }
    return ok;
}


std::string PackageUsage::getName() const
{
    return name_;
}

void PackageUsage::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PackageUsage::nameIsSet() const
{
    return nameIsSet_;
}

void PackageUsage::unsetname()
{
    nameIsSet_ = false;
}

int32_t PackageUsage::getUsedPercent() const
{
    return usedPercent_;
}

void PackageUsage::setUsedPercent(int32_t value)
{
    usedPercent_ = value;
    usedPercentIsSet_ = true;
}

bool PackageUsage::usedPercentIsSet() const
{
    return usedPercentIsSet_;
}

void PackageUsage::unsetusedPercent()
{
    usedPercentIsSet_ = false;
}

}
}
}
}
}


