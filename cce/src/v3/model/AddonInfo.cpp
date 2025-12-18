

#include "huaweicloud/cce/v3/model/AddonInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonInfo::AddonInfo()
{
    addonTemplateName_ = "";
    addonTemplateNameIsSet_ = false;
    addonInstanceID_ = "";
    addonInstanceIDIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    valuesIsSet_ = false;
}

AddonInfo::~AddonInfo() = default;

void AddonInfo::validate()
{
}

web::json::value AddonInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addonTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("addonTemplateName")] = ModelBase::toJson(addonTemplateName_);
    }
    if(addonInstanceIDIsSet_) {
        val[utility::conversions::to_string_t("addonInstanceID")] = ModelBase::toJson(addonInstanceID_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("targetVersion")] = ModelBase::toJson(targetVersion_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool AddonInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("addonInstanceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonInstanceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonInstanceID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string AddonInfo::getAddonTemplateName() const
{
    return addonTemplateName_;
}

void AddonInfo::setAddonTemplateName(const std::string& value)
{
    addonTemplateName_ = value;
    addonTemplateNameIsSet_ = true;
}

bool AddonInfo::addonTemplateNameIsSet() const
{
    return addonTemplateNameIsSet_;
}

void AddonInfo::unsetaddonTemplateName()
{
    addonTemplateNameIsSet_ = false;
}

std::string AddonInfo::getAddonInstanceID() const
{
    return addonInstanceID_;
}

void AddonInfo::setAddonInstanceID(const std::string& value)
{
    addonInstanceID_ = value;
    addonInstanceIDIsSet_ = true;
}

bool AddonInfo::addonInstanceIDIsSet() const
{
    return addonInstanceIDIsSet_;
}

void AddonInfo::unsetaddonInstanceID()
{
    addonInstanceIDIsSet_ = false;
}

std::string AddonInfo::getTargetVersion() const
{
    return targetVersion_;
}

void AddonInfo::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool AddonInfo::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void AddonInfo::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::string AddonInfo::getType() const
{
    return type_;
}

void AddonInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AddonInfo::typeIsSet() const
{
    return typeIsSet_;
}

void AddonInfo::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, Object>& AddonInfo::getValues()
{
    return values_;
}

void AddonInfo::setValues(const std::map<std::string, Object>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool AddonInfo::valuesIsSet() const
{
    return valuesIsSet_;
}

void AddonInfo::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


