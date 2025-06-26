

#include "huaweicloud/rgc/v1/model/TargetControl.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




TargetControl::TargetControl()
{
    manageAccountId_ = "";
    manageAccountIdIsSet_ = false;
    controlIdentifier_ = "";
    controlIdentifierIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    controlObjective_ = "";
    controlObjectiveIsSet_ = false;
    behavior_ = "";
    behaviorIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    regionalPreference_ = "";
    regionalPreferenceIsSet_ = false;
    guidance_ = "";
    guidanceIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
    implementation_ = "";
    implementationIsSet_ = false;
}

TargetControl::~TargetControl() = default;

void TargetControl::validate()
{
}

web::json::value TargetControl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(manageAccountIdIsSet_) {
        val[utility::conversions::to_string_t("manage_account_id")] = ModelBase::toJson(manageAccountId_);
    }
    if(controlIdentifierIsSet_) {
        val[utility::conversions::to_string_t("control_identifier")] = ModelBase::toJson(controlIdentifier_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(controlObjectiveIsSet_) {
        val[utility::conversions::to_string_t("control_objective")] = ModelBase::toJson(controlObjective_);
    }
    if(behaviorIsSet_) {
        val[utility::conversions::to_string_t("behavior")] = ModelBase::toJson(behavior_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(regionalPreferenceIsSet_) {
        val[utility::conversions::to_string_t("regional_preference")] = ModelBase::toJson(regionalPreference_);
    }
    if(guidanceIsSet_) {
        val[utility::conversions::to_string_t("guidance")] = ModelBase::toJson(guidance_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(implementationIsSet_) {
        val[utility::conversions::to_string_t("implementation")] = ModelBase::toJson(implementation_);
    }

    return val;
}
bool TargetControl::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("manage_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manage_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManageAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("control_identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("control_objective"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_objective"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlObjective(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("behavior"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("behavior"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBehavior(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regional_preference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regional_preference"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionalPreference(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guidance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guidance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuidance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("implementation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("implementation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImplementation(refVal);
        }
    }
    return ok;
}


std::string TargetControl::getManageAccountId() const
{
    return manageAccountId_;
}

void TargetControl::setManageAccountId(const std::string& value)
{
    manageAccountId_ = value;
    manageAccountIdIsSet_ = true;
}

bool TargetControl::manageAccountIdIsSet() const
{
    return manageAccountIdIsSet_;
}

void TargetControl::unsetmanageAccountId()
{
    manageAccountIdIsSet_ = false;
}

std::string TargetControl::getControlIdentifier() const
{
    return controlIdentifier_;
}

void TargetControl::setControlIdentifier(const std::string& value)
{
    controlIdentifier_ = value;
    controlIdentifierIsSet_ = true;
}

bool TargetControl::controlIdentifierIsSet() const
{
    return controlIdentifierIsSet_;
}

void TargetControl::unsetcontrolIdentifier()
{
    controlIdentifierIsSet_ = false;
}

std::string TargetControl::getState() const
{
    return state_;
}

void TargetControl::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TargetControl::stateIsSet() const
{
    return stateIsSet_;
}

void TargetControl::unsetstate()
{
    stateIsSet_ = false;
}

std::string TargetControl::getVersion() const
{
    return version_;
}

void TargetControl::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool TargetControl::versionIsSet() const
{
    return versionIsSet_;
}

void TargetControl::unsetversion()
{
    versionIsSet_ = false;
}

std::string TargetControl::getName() const
{
    return name_;
}

void TargetControl::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TargetControl::nameIsSet() const
{
    return nameIsSet_;
}

void TargetControl::unsetname()
{
    nameIsSet_ = false;
}

std::string TargetControl::getDescription() const
{
    return description_;
}

void TargetControl::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TargetControl::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TargetControl::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TargetControl::getControlObjective() const
{
    return controlObjective_;
}

void TargetControl::setControlObjective(const std::string& value)
{
    controlObjective_ = value;
    controlObjectiveIsSet_ = true;
}

bool TargetControl::controlObjectiveIsSet() const
{
    return controlObjectiveIsSet_;
}

void TargetControl::unsetcontrolObjective()
{
    controlObjectiveIsSet_ = false;
}

std::string TargetControl::getBehavior() const
{
    return behavior_;
}

void TargetControl::setBehavior(const std::string& value)
{
    behavior_ = value;
    behaviorIsSet_ = true;
}

bool TargetControl::behaviorIsSet() const
{
    return behaviorIsSet_;
}

void TargetControl::unsetbehavior()
{
    behaviorIsSet_ = false;
}

std::string TargetControl::getOwner() const
{
    return owner_;
}

void TargetControl::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TargetControl::ownerIsSet() const
{
    return ownerIsSet_;
}

void TargetControl::unsetowner()
{
    ownerIsSet_ = false;
}

std::string TargetControl::getRegionalPreference() const
{
    return regionalPreference_;
}

void TargetControl::setRegionalPreference(const std::string& value)
{
    regionalPreference_ = value;
    regionalPreferenceIsSet_ = true;
}

bool TargetControl::regionalPreferenceIsSet() const
{
    return regionalPreferenceIsSet_;
}

void TargetControl::unsetregionalPreference()
{
    regionalPreferenceIsSet_ = false;
}

std::string TargetControl::getGuidance() const
{
    return guidance_;
}

void TargetControl::setGuidance(const std::string& value)
{
    guidance_ = value;
    guidanceIsSet_ = true;
}

bool TargetControl::guidanceIsSet() const
{
    return guidanceIsSet_;
}

void TargetControl::unsetguidance()
{
    guidanceIsSet_ = false;
}

std::string TargetControl::getService() const
{
    return service_;
}

void TargetControl::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool TargetControl::serviceIsSet() const
{
    return serviceIsSet_;
}

void TargetControl::unsetservice()
{
    serviceIsSet_ = false;
}

std::string TargetControl::getImplementation() const
{
    return implementation_;
}

void TargetControl::setImplementation(const std::string& value)
{
    implementation_ = value;
    implementationIsSet_ = true;
}

bool TargetControl::implementationIsSet() const
{
    return implementationIsSet_;
}

void TargetControl::unsetimplementation()
{
    implementationIsSet_ = false;
}

}
}
}
}
}


