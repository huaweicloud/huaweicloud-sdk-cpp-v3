

#include "huaweicloud/rds/v3/model/ListReplicationProfilesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListReplicationProfilesResult::ListReplicationProfilesResult()
{
    profileId_ = "";
    profileIdIsSet_ = false;
    profileName_ = "";
    profileNameIsSet_ = false;
    agentType_ = "";
    agentTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isDefProfile_ = false;
    isDefProfileIsSet_ = false;
}

ListReplicationProfilesResult::~ListReplicationProfilesResult() = default;

void ListReplicationProfilesResult::validate()
{
}

web::json::value ListReplicationProfilesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(profileIdIsSet_) {
        val[utility::conversions::to_string_t("profile_id")] = ModelBase::toJson(profileId_);
    }
    if(profileNameIsSet_) {
        val[utility::conversions::to_string_t("profile_name")] = ModelBase::toJson(profileName_);
    }
    if(agentTypeIsSet_) {
        val[utility::conversions::to_string_t("agent_type")] = ModelBase::toJson(agentType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isDefProfileIsSet_) {
        val[utility::conversions::to_string_t("is_def_profile")] = ModelBase::toJson(isDefProfile_);
    }

    return val;
}
bool ListReplicationProfilesResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("profile_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_def_profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_def_profile"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefProfile(refVal);
        }
    }
    return ok;
}


std::string ListReplicationProfilesResult::getProfileId() const
{
    return profileId_;
}

void ListReplicationProfilesResult::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool ListReplicationProfilesResult::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void ListReplicationProfilesResult::unsetprofileId()
{
    profileIdIsSet_ = false;
}

std::string ListReplicationProfilesResult::getProfileName() const
{
    return profileName_;
}

void ListReplicationProfilesResult::setProfileName(const std::string& value)
{
    profileName_ = value;
    profileNameIsSet_ = true;
}

bool ListReplicationProfilesResult::profileNameIsSet() const
{
    return profileNameIsSet_;
}

void ListReplicationProfilesResult::unsetprofileName()
{
    profileNameIsSet_ = false;
}

std::string ListReplicationProfilesResult::getAgentType() const
{
    return agentType_;
}

void ListReplicationProfilesResult::setAgentType(const std::string& value)
{
    agentType_ = value;
    agentTypeIsSet_ = true;
}

bool ListReplicationProfilesResult::agentTypeIsSet() const
{
    return agentTypeIsSet_;
}

void ListReplicationProfilesResult::unsetagentType()
{
    agentTypeIsSet_ = false;
}

std::string ListReplicationProfilesResult::getDescription() const
{
    return description_;
}

void ListReplicationProfilesResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListReplicationProfilesResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListReplicationProfilesResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool ListReplicationProfilesResult::isIsDefProfile() const
{
    return isDefProfile_;
}

void ListReplicationProfilesResult::setIsDefProfile(bool value)
{
    isDefProfile_ = value;
    isDefProfileIsSet_ = true;
}

bool ListReplicationProfilesResult::isDefProfileIsSet() const
{
    return isDefProfileIsSet_;
}

void ListReplicationProfilesResult::unsetisDefProfile()
{
    isDefProfileIsSet_ = false;
}

}
}
}
}
}


