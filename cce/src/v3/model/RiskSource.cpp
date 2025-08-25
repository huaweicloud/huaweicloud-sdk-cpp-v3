

#include "huaweicloud/cce/v3/model/RiskSource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RiskSource::RiskSource()
{
    configurationRisksIsSet_ = false;
    deprecatedAPIRisksIsSet_ = false;
    nodeRisksIsSet_ = false;
    addonRisksIsSet_ = false;
}

RiskSource::~RiskSource() = default;

void RiskSource::validate()
{
}

web::json::value RiskSource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationRisksIsSet_) {
        val[utility::conversions::to_string_t("configurationRisks")] = ModelBase::toJson(configurationRisks_);
    }
    if(deprecatedAPIRisksIsSet_) {
        val[utility::conversions::to_string_t("deprecatedAPIRisks")] = ModelBase::toJson(deprecatedAPIRisks_);
    }
    if(nodeRisksIsSet_) {
        val[utility::conversions::to_string_t("nodeRisks")] = ModelBase::toJson(nodeRisks_);
    }
    if(addonRisksIsSet_) {
        val[utility::conversions::to_string_t("addonRisks")] = ModelBase::toJson(addonRisks_);
    }

    return val;
}
bool RiskSource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configurationRisks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurationRisks"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationRisks> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationRisks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deprecatedAPIRisks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deprecatedAPIRisks"));
        if(!fieldValue.is_null())
        {
            std::vector<DeprecatedAPIRisks> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeprecatedAPIRisks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeRisks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeRisks"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeRisks> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeRisks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addonRisks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonRisks"));
        if(!fieldValue.is_null())
        {
            std::vector<AddonRisks> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonRisks(refVal);
        }
    }
    return ok;
}


std::vector<ConfigurationRisks>& RiskSource::getConfigurationRisks()
{
    return configurationRisks_;
}

void RiskSource::setConfigurationRisks(const std::vector<ConfigurationRisks>& value)
{
    configurationRisks_ = value;
    configurationRisksIsSet_ = true;
}

bool RiskSource::configurationRisksIsSet() const
{
    return configurationRisksIsSet_;
}

void RiskSource::unsetconfigurationRisks()
{
    configurationRisksIsSet_ = false;
}

std::vector<DeprecatedAPIRisks>& RiskSource::getDeprecatedAPIRisks()
{
    return deprecatedAPIRisks_;
}

void RiskSource::setDeprecatedAPIRisks(const std::vector<DeprecatedAPIRisks>& value)
{
    deprecatedAPIRisks_ = value;
    deprecatedAPIRisksIsSet_ = true;
}

bool RiskSource::deprecatedAPIRisksIsSet() const
{
    return deprecatedAPIRisksIsSet_;
}

void RiskSource::unsetdeprecatedAPIRisks()
{
    deprecatedAPIRisksIsSet_ = false;
}

std::vector<NodeRisks>& RiskSource::getNodeRisks()
{
    return nodeRisks_;
}

void RiskSource::setNodeRisks(const std::vector<NodeRisks>& value)
{
    nodeRisks_ = value;
    nodeRisksIsSet_ = true;
}

bool RiskSource::nodeRisksIsSet() const
{
    return nodeRisksIsSet_;
}

void RiskSource::unsetnodeRisks()
{
    nodeRisksIsSet_ = false;
}

std::vector<AddonRisks>& RiskSource::getAddonRisks()
{
    return addonRisks_;
}

void RiskSource::setAddonRisks(const std::vector<AddonRisks>& value)
{
    addonRisks_ = value;
    addonRisksIsSet_ = true;
}

bool RiskSource::addonRisksIsSet() const
{
    return addonRisksIsSet_;
}

void RiskSource::unsetaddonRisks()
{
    addonRisksIsSet_ = false;
}

}
}
}
}
}


