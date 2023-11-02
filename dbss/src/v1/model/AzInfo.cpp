

#include "huaweicloud/dbss/v1/model/AzInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AzInfo::AzInfo()
{
    zoneName_ = "";
    zoneNameIsSet_ = false;
    zoneNumber_ = 0;
    zoneNumberIsSet_ = false;
    azType_ = "";
    azTypeIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    aliasUs_ = "";
    aliasUsIsSet_ = false;
}

AzInfo::~AzInfo() = default;

void AzInfo::validate()
{
}

web::json::value AzInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(zoneNameIsSet_) {
        val[utility::conversions::to_string_t("zone_name")] = ModelBase::toJson(zoneName_);
    }
    if(zoneNumberIsSet_) {
        val[utility::conversions::to_string_t("zone_number")] = ModelBase::toJson(zoneNumber_);
    }
    if(azTypeIsSet_) {
        val[utility::conversions::to_string_t("az_type")] = ModelBase::toJson(azType_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(aliasUsIsSet_) {
        val[utility::conversions::to_string_t("alias_us")] = ModelBase::toJson(aliasUs_);
    }

    return val;
}
bool AzInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("zone_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zone_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZoneName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zone_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zone_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZoneNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias_us"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_us"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasUs(refVal);
        }
    }
    return ok;
}


std::string AzInfo::getZoneName() const
{
    return zoneName_;
}

void AzInfo::setZoneName(const std::string& value)
{
    zoneName_ = value;
    zoneNameIsSet_ = true;
}

bool AzInfo::zoneNameIsSet() const
{
    return zoneNameIsSet_;
}

void AzInfo::unsetzoneName()
{
    zoneNameIsSet_ = false;
}

int32_t AzInfo::getZoneNumber() const
{
    return zoneNumber_;
}

void AzInfo::setZoneNumber(int32_t value)
{
    zoneNumber_ = value;
    zoneNumberIsSet_ = true;
}

bool AzInfo::zoneNumberIsSet() const
{
    return zoneNumberIsSet_;
}

void AzInfo::unsetzoneNumber()
{
    zoneNumberIsSet_ = false;
}

std::string AzInfo::getAzType() const
{
    return azType_;
}

void AzInfo::setAzType(const std::string& value)
{
    azType_ = value;
    azTypeIsSet_ = true;
}

bool AzInfo::azTypeIsSet() const
{
    return azTypeIsSet_;
}

void AzInfo::unsetazType()
{
    azTypeIsSet_ = false;
}

std::string AzInfo::getAlias() const
{
    return alias_;
}

void AzInfo::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool AzInfo::aliasIsSet() const
{
    return aliasIsSet_;
}

void AzInfo::unsetalias()
{
    aliasIsSet_ = false;
}

std::string AzInfo::getAliasUs() const
{
    return aliasUs_;
}

void AzInfo::setAliasUs(const std::string& value)
{
    aliasUs_ = value;
    aliasUsIsSet_ = true;
}

bool AzInfo::aliasUsIsSet() const
{
    return aliasUsIsSet_;
}

void AzInfo::unsetaliasUs()
{
    aliasUsIsSet_ = false;
}

}
}
}
}
}


