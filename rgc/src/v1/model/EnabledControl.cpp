

#include "huaweicloud/rgc/v1/model/EnabledControl.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




EnabledControl::EnabledControl()
{
    manageAccountId_ = "";
    manageAccountIdIsSet_ = false;
    controlIdentifier_ = "";
    controlIdentifierIsSet_ = false;
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
}

EnabledControl::~EnabledControl() = default;

void EnabledControl::validate()
{
}

web::json::value EnabledControl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(manageAccountIdIsSet_) {
        val[utility::conversions::to_string_t("manage_account_id")] = ModelBase::toJson(manageAccountId_);
    }
    if(controlIdentifierIsSet_) {
        val[utility::conversions::to_string_t("control_identifier")] = ModelBase::toJson(controlIdentifier_);
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

    return val;
}
bool EnabledControl::fromJson(const web::json::value& val)
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
    return ok;
}


std::string EnabledControl::getManageAccountId() const
{
    return manageAccountId_;
}

void EnabledControl::setManageAccountId(const std::string& value)
{
    manageAccountId_ = value;
    manageAccountIdIsSet_ = true;
}

bool EnabledControl::manageAccountIdIsSet() const
{
    return manageAccountIdIsSet_;
}

void EnabledControl::unsetmanageAccountId()
{
    manageAccountIdIsSet_ = false;
}

std::string EnabledControl::getControlIdentifier() const
{
    return controlIdentifier_;
}

void EnabledControl::setControlIdentifier(const std::string& value)
{
    controlIdentifier_ = value;
    controlIdentifierIsSet_ = true;
}

bool EnabledControl::controlIdentifierIsSet() const
{
    return controlIdentifierIsSet_;
}

void EnabledControl::unsetcontrolIdentifier()
{
    controlIdentifierIsSet_ = false;
}

std::string EnabledControl::getName() const
{
    return name_;
}

void EnabledControl::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnabledControl::nameIsSet() const
{
    return nameIsSet_;
}

void EnabledControl::unsetname()
{
    nameIsSet_ = false;
}

std::string EnabledControl::getDescription() const
{
    return description_;
}

void EnabledControl::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EnabledControl::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EnabledControl::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string EnabledControl::getControlObjective() const
{
    return controlObjective_;
}

void EnabledControl::setControlObjective(const std::string& value)
{
    controlObjective_ = value;
    controlObjectiveIsSet_ = true;
}

bool EnabledControl::controlObjectiveIsSet() const
{
    return controlObjectiveIsSet_;
}

void EnabledControl::unsetcontrolObjective()
{
    controlObjectiveIsSet_ = false;
}

std::string EnabledControl::getBehavior() const
{
    return behavior_;
}

void EnabledControl::setBehavior(const std::string& value)
{
    behavior_ = value;
    behaviorIsSet_ = true;
}

bool EnabledControl::behaviorIsSet() const
{
    return behaviorIsSet_;
}

void EnabledControl::unsetbehavior()
{
    behaviorIsSet_ = false;
}

std::string EnabledControl::getOwner() const
{
    return owner_;
}

void EnabledControl::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool EnabledControl::ownerIsSet() const
{
    return ownerIsSet_;
}

void EnabledControl::unsetowner()
{
    ownerIsSet_ = false;
}

std::string EnabledControl::getRegionalPreference() const
{
    return regionalPreference_;
}

void EnabledControl::setRegionalPreference(const std::string& value)
{
    regionalPreference_ = value;
    regionalPreferenceIsSet_ = true;
}

bool EnabledControl::regionalPreferenceIsSet() const
{
    return regionalPreferenceIsSet_;
}

void EnabledControl::unsetregionalPreference()
{
    regionalPreferenceIsSet_ = false;
}

}
}
}
}
}


