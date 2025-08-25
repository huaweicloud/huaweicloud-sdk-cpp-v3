

#include "huaweicloud/cce/v3/model/InstanceRequestSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InstanceRequestSpec::InstanceRequestSpec()
{
    version_ = "";
    versionIsSet_ = false;
    clusterID_ = "";
    clusterIDIsSet_ = false;
    valuesIsSet_ = false;
    addonTemplateName_ = "";
    addonTemplateNameIsSet_ = false;
}

InstanceRequestSpec::~InstanceRequestSpec() = default;

void InstanceRequestSpec::validate()
{
}

web::json::value InstanceRequestSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(clusterIDIsSet_) {
        val[utility::conversions::to_string_t("clusterID")] = ModelBase::toJson(clusterID_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(addonTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("addonTemplateName")] = ModelBase::toJson(addonTemplateName_);
    }

    return val;
}
bool InstanceRequestSpec::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("clusterID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("addonTemplateName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonTemplateName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTemplateName(refVal);
        }
    }
    return ok;
}


std::string InstanceRequestSpec::getVersion() const
{
    return version_;
}

void InstanceRequestSpec::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool InstanceRequestSpec::versionIsSet() const
{
    return versionIsSet_;
}

void InstanceRequestSpec::unsetversion()
{
    versionIsSet_ = false;
}

std::string InstanceRequestSpec::getClusterID() const
{
    return clusterID_;
}

void InstanceRequestSpec::setClusterID(const std::string& value)
{
    clusterID_ = value;
    clusterIDIsSet_ = true;
}

bool InstanceRequestSpec::clusterIDIsSet() const
{
    return clusterIDIsSet_;
}

void InstanceRequestSpec::unsetclusterID()
{
    clusterIDIsSet_ = false;
}

std::map<std::string, Object>& InstanceRequestSpec::getValues()
{
    return values_;
}

void InstanceRequestSpec::setValues(const std::map<std::string, Object>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool InstanceRequestSpec::valuesIsSet() const
{
    return valuesIsSet_;
}

void InstanceRequestSpec::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string InstanceRequestSpec::getAddonTemplateName() const
{
    return addonTemplateName_;
}

void InstanceRequestSpec::setAddonTemplateName(const std::string& value)
{
    addonTemplateName_ = value;
    addonTemplateNameIsSet_ = true;
}

bool InstanceRequestSpec::addonTemplateNameIsSet() const
{
    return addonTemplateNameIsSet_;
}

void InstanceRequestSpec::unsetaddonTemplateName()
{
    addonTemplateNameIsSet_ = false;
}

}
}
}
}
}


