

#include "huaweicloud/cce/v3/model/UpgradeTaskSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeTaskSpec::UpgradeTaskSpec()
{
    version_ = "";
    versionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    itemsIsSet_ = false;
}

UpgradeTaskSpec::~UpgradeTaskSpec() = default;

void UpgradeTaskSpec::validate()
{
}

web::json::value UpgradeTaskSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("targetVersion")] = ModelBase::toJson(targetVersion_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool UpgradeTaskSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targetVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string UpgradeTaskSpec::getVersion() const
{
    return version_;
}

void UpgradeTaskSpec::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpgradeTaskSpec::versionIsSet() const
{
    return versionIsSet_;
}

void UpgradeTaskSpec::unsetversion()
{
    versionIsSet_ = false;
}

std::string UpgradeTaskSpec::getTargetVersion() const
{
    return targetVersion_;
}

void UpgradeTaskSpec::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool UpgradeTaskSpec::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void UpgradeTaskSpec::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

Object UpgradeTaskSpec::getItems() const
{
    return items_;
}

void UpgradeTaskSpec::setItems(const Object& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool UpgradeTaskSpec::itemsIsSet() const
{
    return itemsIsSet_;
}

void UpgradeTaskSpec::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


