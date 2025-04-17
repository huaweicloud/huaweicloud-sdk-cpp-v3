

#include "huaweicloud/vod/v1/model/AdditionalManifest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AdditionalManifest::AdditionalManifest()
{
    manifestNameModifier_ = "";
    manifestNameModifierIsSet_ = false;
    selectedOutputsIsSet_ = false;
}

AdditionalManifest::~AdditionalManifest() = default;

void AdditionalManifest::validate()
{
}

web::json::value AdditionalManifest::toJson() const
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
bool AdditionalManifest::fromJson(const web::json::value& val)
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


std::string AdditionalManifest::getManifestNameModifier() const
{
    return manifestNameModifier_;
}

void AdditionalManifest::setManifestNameModifier(const std::string& value)
{
    manifestNameModifier_ = value;
    manifestNameModifierIsSet_ = true;
}

bool AdditionalManifest::manifestNameModifierIsSet() const
{
    return manifestNameModifierIsSet_;
}

void AdditionalManifest::unsetmanifestNameModifier()
{
    manifestNameModifierIsSet_ = false;
}

std::vector<std::string>& AdditionalManifest::getSelectedOutputs()
{
    return selectedOutputs_;
}

void AdditionalManifest::setSelectedOutputs(const std::vector<std::string>& value)
{
    selectedOutputs_ = value;
    selectedOutputsIsSet_ = true;
}

bool AdditionalManifest::selectedOutputsIsSet() const
{
    return selectedOutputsIsSet_;
}

void AdditionalManifest::unsetselectedOutputs()
{
    selectedOutputsIsSet_ = false;
}

}
}
}
}
}


