

#include "huaweicloud/gaussdbforopengauss/v3/model/RollUpgradeProgress.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RollUpgradeProgress::RollUpgradeProgress()
{
    upgradedDnGroupNumbers_ = "";
    upgradedDnGroupNumbersIsSet_ = false;
    totalDnGroupNumbers_ = "";
    totalDnGroupNumbersIsSet_ = false;
    notFullyUpgradedAz_ = "";
    notFullyUpgradedAzIsSet_ = false;
    alreadyUpgradedAz_ = "";
    alreadyUpgradedAzIsSet_ = false;
    azDescriptionMapIsSet_ = false;
}

RollUpgradeProgress::~RollUpgradeProgress() = default;

void RollUpgradeProgress::validate()
{
}

web::json::value RollUpgradeProgress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upgradedDnGroupNumbersIsSet_) {
        val[utility::conversions::to_string_t("upgraded_dn_group_numbers")] = ModelBase::toJson(upgradedDnGroupNumbers_);
    }
    if(totalDnGroupNumbersIsSet_) {
        val[utility::conversions::to_string_t("total_dn_group_numbers")] = ModelBase::toJson(totalDnGroupNumbers_);
    }
    if(notFullyUpgradedAzIsSet_) {
        val[utility::conversions::to_string_t("not_fully_upgraded_az")] = ModelBase::toJson(notFullyUpgradedAz_);
    }
    if(alreadyUpgradedAzIsSet_) {
        val[utility::conversions::to_string_t("already_upgraded_az")] = ModelBase::toJson(alreadyUpgradedAz_);
    }
    if(azDescriptionMapIsSet_) {
        val[utility::conversions::to_string_t("az_description_map")] = ModelBase::toJson(azDescriptionMap_);
    }

    return val;
}
bool RollUpgradeProgress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upgraded_dn_group_numbers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgraded_dn_group_numbers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradedDnGroupNumbers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_dn_group_numbers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_dn_group_numbers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalDnGroupNumbers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_fully_upgraded_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_fully_upgraded_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotFullyUpgradedAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("already_upgraded_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("already_upgraded_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlreadyUpgradedAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_description_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_description_map"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzDescriptionMap(refVal);
        }
    }
    return ok;
}


std::string RollUpgradeProgress::getUpgradedDnGroupNumbers() const
{
    return upgradedDnGroupNumbers_;
}

void RollUpgradeProgress::setUpgradedDnGroupNumbers(const std::string& value)
{
    upgradedDnGroupNumbers_ = value;
    upgradedDnGroupNumbersIsSet_ = true;
}

bool RollUpgradeProgress::upgradedDnGroupNumbersIsSet() const
{
    return upgradedDnGroupNumbersIsSet_;
}

void RollUpgradeProgress::unsetupgradedDnGroupNumbers()
{
    upgradedDnGroupNumbersIsSet_ = false;
}

std::string RollUpgradeProgress::getTotalDnGroupNumbers() const
{
    return totalDnGroupNumbers_;
}

void RollUpgradeProgress::setTotalDnGroupNumbers(const std::string& value)
{
    totalDnGroupNumbers_ = value;
    totalDnGroupNumbersIsSet_ = true;
}

bool RollUpgradeProgress::totalDnGroupNumbersIsSet() const
{
    return totalDnGroupNumbersIsSet_;
}

void RollUpgradeProgress::unsettotalDnGroupNumbers()
{
    totalDnGroupNumbersIsSet_ = false;
}

std::string RollUpgradeProgress::getNotFullyUpgradedAz() const
{
    return notFullyUpgradedAz_;
}

void RollUpgradeProgress::setNotFullyUpgradedAz(const std::string& value)
{
    notFullyUpgradedAz_ = value;
    notFullyUpgradedAzIsSet_ = true;
}

bool RollUpgradeProgress::notFullyUpgradedAzIsSet() const
{
    return notFullyUpgradedAzIsSet_;
}

void RollUpgradeProgress::unsetnotFullyUpgradedAz()
{
    notFullyUpgradedAzIsSet_ = false;
}

std::string RollUpgradeProgress::getAlreadyUpgradedAz() const
{
    return alreadyUpgradedAz_;
}

void RollUpgradeProgress::setAlreadyUpgradedAz(const std::string& value)
{
    alreadyUpgradedAz_ = value;
    alreadyUpgradedAzIsSet_ = true;
}

bool RollUpgradeProgress::alreadyUpgradedAzIsSet() const
{
    return alreadyUpgradedAzIsSet_;
}

void RollUpgradeProgress::unsetalreadyUpgradedAz()
{
    alreadyUpgradedAzIsSet_ = false;
}

std::map<std::string, std::string>& RollUpgradeProgress::getAzDescriptionMap()
{
    return azDescriptionMap_;
}

void RollUpgradeProgress::setAzDescriptionMap(const std::map<std::string, std::string>& value)
{
    azDescriptionMap_ = value;
    azDescriptionMapIsSet_ = true;
}

bool RollUpgradeProgress::azDescriptionMapIsSet() const
{
    return azDescriptionMapIsSet_;
}

void RollUpgradeProgress::unsetazDescriptionMap()
{
    azDescriptionMapIsSet_ = false;
}

}
}
}
}
}


