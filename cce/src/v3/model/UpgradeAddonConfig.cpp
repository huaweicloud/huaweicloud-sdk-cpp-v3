

#include "huaweicloud/cce/v3/model/UpgradeAddonConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeAddonConfig::UpgradeAddonConfig()
{
    addonTemplateName_ = "";
    addonTemplateNameIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    valuesIsSet_ = false;
}

UpgradeAddonConfig::~UpgradeAddonConfig() = default;

void UpgradeAddonConfig::validate()
{
}

web::json::value UpgradeAddonConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addonTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("addonTemplateName")] = ModelBase::toJson(addonTemplateName_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool UpgradeAddonConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addonTemplateName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonTemplateName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string UpgradeAddonConfig::getAddonTemplateName() const
{
    return addonTemplateName_;
}

void UpgradeAddonConfig::setAddonTemplateName(const std::string& value)
{
    addonTemplateName_ = value;
    addonTemplateNameIsSet_ = true;
}

bool UpgradeAddonConfig::addonTemplateNameIsSet() const
{
    return addonTemplateNameIsSet_;
}

void UpgradeAddonConfig::unsetaddonTemplateName()
{
    addonTemplateNameIsSet_ = false;
}

std::string UpgradeAddonConfig::getOperation() const
{
    return operation_;
}

void UpgradeAddonConfig::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool UpgradeAddonConfig::operationIsSet() const
{
    return operationIsSet_;
}

void UpgradeAddonConfig::unsetoperation()
{
    operationIsSet_ = false;
}

std::string UpgradeAddonConfig::getVersion() const
{
    return version_;
}

void UpgradeAddonConfig::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpgradeAddonConfig::versionIsSet() const
{
    return versionIsSet_;
}

void UpgradeAddonConfig::unsetversion()
{
    versionIsSet_ = false;
}

Object UpgradeAddonConfig::getValues() const
{
    return values_;
}

void UpgradeAddonConfig::setValues(const Object& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool UpgradeAddonConfig::valuesIsSet() const
{
    return valuesIsSet_;
}

void UpgradeAddonConfig::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


