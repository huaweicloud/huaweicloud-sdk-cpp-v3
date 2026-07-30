

#include "huaweicloud/modelarts/v1/model/PluginStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PluginStatus::PluginStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    values_ = "";
    valuesIsSet_ = false;
    resourcesIsSet_ = false;
}

PluginStatus::~PluginStatus() = default;

void PluginStatus::validate()
{
}

web::json::value PluginStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool PluginStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<PluginResources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::string PluginStatus::getPhase() const
{
    return phase_;
}

void PluginStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool PluginStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void PluginStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string PluginStatus::getVersion() const
{
    return version_;
}

void PluginStatus::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PluginStatus::versionIsSet() const
{
    return versionIsSet_;
}

void PluginStatus::unsetversion()
{
    versionIsSet_ = false;
}

std::string PluginStatus::getReason() const
{
    return reason_;
}

void PluginStatus::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool PluginStatus::reasonIsSet() const
{
    return reasonIsSet_;
}

void PluginStatus::unsetreason()
{
    reasonIsSet_ = false;
}

std::string PluginStatus::getValues() const
{
    return values_;
}

void PluginStatus::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool PluginStatus::valuesIsSet() const
{
    return valuesIsSet_;
}

void PluginStatus::unsetvalues()
{
    valuesIsSet_ = false;
}

std::vector<PluginResources>& PluginStatus::getResources()
{
    return resources_;
}

void PluginStatus::setResources(const std::vector<PluginResources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool PluginStatus::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void PluginStatus::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


