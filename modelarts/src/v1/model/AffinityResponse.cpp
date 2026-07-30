

#include "huaweicloud/modelarts/v1/model/AffinityResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AffinityResponse::AffinityResponse()
{
    affinityType_ = "";
    affinityTypeIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    selectionMode_ = "";
    selectionModeIsSet_ = false;
    targetsIsSet_ = false;
}

AffinityResponse::~AffinityResponse() = default;

void AffinityResponse::validate()
{
}

web::json::value AffinityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(affinityTypeIsSet_) {
        val[utility::conversions::to_string_t("affinity_type")] = ModelBase::toJson(affinityType_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }
    if(selectionModeIsSet_) {
        val[utility::conversions::to_string_t("selection_mode")] = ModelBase::toJson(selectionMode_);
    }
    if(targetsIsSet_) {
        val[utility::conversions::to_string_t("targets")] = ModelBase::toJson(targets_);
    }

    return val;
}
bool AffinityResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("affinity_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affinity_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffinityType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("selection_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selection_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelectionMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targets"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargets(refVal);
        }
    }
    return ok;
}


std::string AffinityResponse::getAffinityType() const
{
    return affinityType_;
}

void AffinityResponse::setAffinityType(const std::string& value)
{
    affinityType_ = value;
    affinityTypeIsSet_ = true;
}

bool AffinityResponse::affinityTypeIsSet() const
{
    return affinityTypeIsSet_;
}

void AffinityResponse::unsetaffinityType()
{
    affinityTypeIsSet_ = false;
}

bool AffinityResponse::isRequired() const
{
    return required_;
}

void AffinityResponse::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool AffinityResponse::requiredIsSet() const
{
    return requiredIsSet_;
}

void AffinityResponse::unsetrequired()
{
    requiredIsSet_ = false;
}

std::string AffinityResponse::getSelectionMode() const
{
    return selectionMode_;
}

void AffinityResponse::setSelectionMode(const std::string& value)
{
    selectionMode_ = value;
    selectionModeIsSet_ = true;
}

bool AffinityResponse::selectionModeIsSet() const
{
    return selectionModeIsSet_;
}

void AffinityResponse::unsetselectionMode()
{
    selectionModeIsSet_ = false;
}

std::map<std::string, std::string>& AffinityResponse::getTargets()
{
    return targets_;
}

void AffinityResponse::setTargets(const std::map<std::string, std::string>& value)
{
    targets_ = value;
    targetsIsSet_ = true;
}

bool AffinityResponse::targetsIsSet() const
{
    return targetsIsSet_;
}

void AffinityResponse::unsettargets()
{
    targetsIsSet_ = false;
}

}
}
}
}
}


