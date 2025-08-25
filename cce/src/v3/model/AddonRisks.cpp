

#include "huaweicloud/cce/v3/model/AddonRisks.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonRisks::AddonRisks()
{
    addonTemplateName_ = "";
    addonTemplateNameIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
}

AddonRisks::~AddonRisks() = default;

void AddonRisks::validate()
{
}

web::json::value AddonRisks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addonTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("addonTemplateName")] = ModelBase::toJson(addonTemplateName_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool AddonRisks::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    return ok;
}


std::string AddonRisks::getAddonTemplateName() const
{
    return addonTemplateName_;
}

void AddonRisks::setAddonTemplateName(const std::string& value)
{
    addonTemplateName_ = value;
    addonTemplateNameIsSet_ = true;
}

bool AddonRisks::addonTemplateNameIsSet() const
{
    return addonTemplateNameIsSet_;
}

void AddonRisks::unsetaddonTemplateName()
{
    addonTemplateNameIsSet_ = false;
}

std::string AddonRisks::getAlias() const
{
    return alias_;
}

void AddonRisks::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool AddonRisks::aliasIsSet() const
{
    return aliasIsSet_;
}

void AddonRisks::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


