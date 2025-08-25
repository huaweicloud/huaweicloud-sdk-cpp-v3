

#include "huaweicloud/cce/v3/model/InstanceSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InstanceSpec::InstanceSpec()
{
    clusterID_ = "";
    clusterIDIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    addonTemplateName_ = "";
    addonTemplateNameIsSet_ = false;
    addonTemplateType_ = "";
    addonTemplateTypeIsSet_ = false;
    addonTemplateLogo_ = "";
    addonTemplateLogoIsSet_ = false;
    addonTemplateLabelsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    valuesIsSet_ = false;
}

InstanceSpec::~InstanceSpec() = default;

void InstanceSpec::validate()
{
}

web::json::value InstanceSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIDIsSet_) {
        val[utility::conversions::to_string_t("clusterID")] = ModelBase::toJson(clusterID_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(addonTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("addonTemplateName")] = ModelBase::toJson(addonTemplateName_);
    }
    if(addonTemplateTypeIsSet_) {
        val[utility::conversions::to_string_t("addonTemplateType")] = ModelBase::toJson(addonTemplateType_);
    }
    if(addonTemplateLogoIsSet_) {
        val[utility::conversions::to_string_t("addonTemplateLogo")] = ModelBase::toJson(addonTemplateLogo_);
    }
    if(addonTemplateLabelsIsSet_) {
        val[utility::conversions::to_string_t("addonTemplateLabels")] = ModelBase::toJson(addonTemplateLabels_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool InstanceSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("addonTemplateName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonTemplateName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addonTemplateType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonTemplateType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTemplateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addonTemplateLogo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonTemplateLogo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTemplateLogo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addonTemplateLabels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonTemplateLabels"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTemplateLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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


std::string InstanceSpec::getClusterID() const
{
    return clusterID_;
}

void InstanceSpec::setClusterID(const std::string& value)
{
    clusterID_ = value;
    clusterIDIsSet_ = true;
}

bool InstanceSpec::clusterIDIsSet() const
{
    return clusterIDIsSet_;
}

void InstanceSpec::unsetclusterID()
{
    clusterIDIsSet_ = false;
}

std::string InstanceSpec::getVersion() const
{
    return version_;
}

void InstanceSpec::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool InstanceSpec::versionIsSet() const
{
    return versionIsSet_;
}

void InstanceSpec::unsetversion()
{
    versionIsSet_ = false;
}

std::string InstanceSpec::getAddonTemplateName() const
{
    return addonTemplateName_;
}

void InstanceSpec::setAddonTemplateName(const std::string& value)
{
    addonTemplateName_ = value;
    addonTemplateNameIsSet_ = true;
}

bool InstanceSpec::addonTemplateNameIsSet() const
{
    return addonTemplateNameIsSet_;
}

void InstanceSpec::unsetaddonTemplateName()
{
    addonTemplateNameIsSet_ = false;
}

std::string InstanceSpec::getAddonTemplateType() const
{
    return addonTemplateType_;
}

void InstanceSpec::setAddonTemplateType(const std::string& value)
{
    addonTemplateType_ = value;
    addonTemplateTypeIsSet_ = true;
}

bool InstanceSpec::addonTemplateTypeIsSet() const
{
    return addonTemplateTypeIsSet_;
}

void InstanceSpec::unsetaddonTemplateType()
{
    addonTemplateTypeIsSet_ = false;
}

std::string InstanceSpec::getAddonTemplateLogo() const
{
    return addonTemplateLogo_;
}

void InstanceSpec::setAddonTemplateLogo(const std::string& value)
{
    addonTemplateLogo_ = value;
    addonTemplateLogoIsSet_ = true;
}

bool InstanceSpec::addonTemplateLogoIsSet() const
{
    return addonTemplateLogoIsSet_;
}

void InstanceSpec::unsetaddonTemplateLogo()
{
    addonTemplateLogoIsSet_ = false;
}

std::vector<std::string>& InstanceSpec::getAddonTemplateLabels()
{
    return addonTemplateLabels_;
}

void InstanceSpec::setAddonTemplateLabels(const std::vector<std::string>& value)
{
    addonTemplateLabels_ = value;
    addonTemplateLabelsIsSet_ = true;
}

bool InstanceSpec::addonTemplateLabelsIsSet() const
{
    return addonTemplateLabelsIsSet_;
}

void InstanceSpec::unsetaddonTemplateLabels()
{
    addonTemplateLabelsIsSet_ = false;
}

std::string InstanceSpec::getDescription() const
{
    return description_;
}

void InstanceSpec::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool InstanceSpec::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void InstanceSpec::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, Object>& InstanceSpec::getValues()
{
    return values_;
}

void InstanceSpec::setValues(const std::map<std::string, Object>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool InstanceSpec::valuesIsSet() const
{
    return valuesIsSet_;
}

void InstanceSpec::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


