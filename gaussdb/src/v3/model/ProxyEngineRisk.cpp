

#include "huaweicloud/gaussdb/v3/model/ProxyEngineRisk.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyEngineRisk::ProxyEngineRisk()
{
    level_ = 0;
    levelIsSet_ = false;
    suggest_ = "";
    suggestIsSet_ = false;
    influence_ = "";
    influenceIsSet_ = false;
    guidance_ = "";
    guidanceIsSet_ = false;
    serviceImpactDuration_ = "";
    serviceImpactDurationIsSet_ = false;
    upgradeDuration_ = "";
    upgradeDurationIsSet_ = false;
}

ProxyEngineRisk::~ProxyEngineRisk() = default;

void ProxyEngineRisk::validate()
{
}

web::json::value ProxyEngineRisk::toJson() const
{
    web::json::value val = web::json::value::object();

    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(suggestIsSet_) {
        val[utility::conversions::to_string_t("suggest")] = ModelBase::toJson(suggest_);
    }
    if(influenceIsSet_) {
        val[utility::conversions::to_string_t("influence")] = ModelBase::toJson(influence_);
    }
    if(guidanceIsSet_) {
        val[utility::conversions::to_string_t("guidance")] = ModelBase::toJson(guidance_);
    }
    if(serviceImpactDurationIsSet_) {
        val[utility::conversions::to_string_t("service_impact_duration")] = ModelBase::toJson(serviceImpactDuration_);
    }
    if(upgradeDurationIsSet_) {
        val[utility::conversions::to_string_t("upgrade_duration")] = ModelBase::toJson(upgradeDuration_);
    }

    return val;
}
bool ProxyEngineRisk::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("influence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("influence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfluence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guidance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guidance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuidance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_impact_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_impact_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceImpactDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeDuration(refVal);
        }
    }
    return ok;
}


int32_t ProxyEngineRisk::getLevel() const
{
    return level_;
}

void ProxyEngineRisk::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ProxyEngineRisk::levelIsSet() const
{
    return levelIsSet_;
}

void ProxyEngineRisk::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ProxyEngineRisk::getSuggest() const
{
    return suggest_;
}

void ProxyEngineRisk::setSuggest(const std::string& value)
{
    suggest_ = value;
    suggestIsSet_ = true;
}

bool ProxyEngineRisk::suggestIsSet() const
{
    return suggestIsSet_;
}

void ProxyEngineRisk::unsetsuggest()
{
    suggestIsSet_ = false;
}

std::string ProxyEngineRisk::getInfluence() const
{
    return influence_;
}

void ProxyEngineRisk::setInfluence(const std::string& value)
{
    influence_ = value;
    influenceIsSet_ = true;
}

bool ProxyEngineRisk::influenceIsSet() const
{
    return influenceIsSet_;
}

void ProxyEngineRisk::unsetinfluence()
{
    influenceIsSet_ = false;
}

std::string ProxyEngineRisk::getGuidance() const
{
    return guidance_;
}

void ProxyEngineRisk::setGuidance(const std::string& value)
{
    guidance_ = value;
    guidanceIsSet_ = true;
}

bool ProxyEngineRisk::guidanceIsSet() const
{
    return guidanceIsSet_;
}

void ProxyEngineRisk::unsetguidance()
{
    guidanceIsSet_ = false;
}

std::string ProxyEngineRisk::getServiceImpactDuration() const
{
    return serviceImpactDuration_;
}

void ProxyEngineRisk::setServiceImpactDuration(const std::string& value)
{
    serviceImpactDuration_ = value;
    serviceImpactDurationIsSet_ = true;
}

bool ProxyEngineRisk::serviceImpactDurationIsSet() const
{
    return serviceImpactDurationIsSet_;
}

void ProxyEngineRisk::unsetserviceImpactDuration()
{
    serviceImpactDurationIsSet_ = false;
}

std::string ProxyEngineRisk::getUpgradeDuration() const
{
    return upgradeDuration_;
}

void ProxyEngineRisk::setUpgradeDuration(const std::string& value)
{
    upgradeDuration_ = value;
    upgradeDurationIsSet_ = true;
}

bool ProxyEngineRisk::upgradeDurationIsSet() const
{
    return upgradeDurationIsSet_;
}

void ProxyEngineRisk::unsetupgradeDuration()
{
    upgradeDurationIsSet_ = false;
}

}
}
}
}
}


