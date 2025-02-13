

#include "huaweicloud/mpc/v1/model/AdditionalManifests.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




AdditionalManifests::AdditionalManifests()
{
    manifestNameModifier_ = "";
    manifestNameModifierIsSet_ = false;
    selectedOutputsIsSet_ = false;
}

AdditionalManifests::~AdditionalManifests() = default;

void AdditionalManifests::validate()
{
}

web::json::value AdditionalManifests::toJson() const
{
    web::json::value val = web::json::value::object();

    if(manifestNameModifierIsSet_) {
        val[utility::conversions::to_string_t("manifest_name_modifier")] = ModelBase::toJson(manifestNameModifier_);
    }
    if(selectedOutputsIsSet_) {
        val[utility::conversions::to_string_t("selected_outputs")] = ModelBase::toJson(selectedOutputs_);
    }

    return val;
}
bool AdditionalManifests::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("manifest_name_modifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_name_modifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestNameModifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("selected_outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selected_outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelectedOutputs(refVal);
        }
    }
    return ok;
}


std::string AdditionalManifests::getManifestNameModifier() const
{
    return manifestNameModifier_;
}

void AdditionalManifests::setManifestNameModifier(const std::string& value)
{
    manifestNameModifier_ = value;
    manifestNameModifierIsSet_ = true;
}

bool AdditionalManifests::manifestNameModifierIsSet() const
{
    return manifestNameModifierIsSet_;
}

void AdditionalManifests::unsetmanifestNameModifier()
{
    manifestNameModifierIsSet_ = false;
}

std::vector<std::string>& AdditionalManifests::getSelectedOutputs()
{
    return selectedOutputs_;
}

void AdditionalManifests::setSelectedOutputs(const std::vector<std::string>& value)
{
    selectedOutputs_ = value;
    selectedOutputsIsSet_ = true;
}

bool AdditionalManifests::selectedOutputsIsSet() const
{
    return selectedOutputsIsSet_;
}

void AdditionalManifests::unsetselectedOutputs()
{
    selectedOutputsIsSet_ = false;
}

}
}
}
}
}


