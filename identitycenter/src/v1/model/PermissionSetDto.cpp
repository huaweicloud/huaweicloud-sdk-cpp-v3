

#include "huaweicloud/identitycenter/v1/model/PermissionSetDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PermissionSetDto::PermissionSetDto()
{
    createdDate_ = 0L;
    createdDateIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    relayState_ = "";
    relayStateIsSet_ = false;
    sessionDuration_ = "";
    sessionDurationIsSet_ = false;
    permissionUrn_ = "";
    permissionUrnIsSet_ = false;
}

PermissionSetDto::~PermissionSetDto() = default;

void PermissionSetDto::validate()
{
}

web::json::value PermissionSetDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(permissionSetIdIsSet_) {
        val[utility::conversions::to_string_t("permission_set_id")] = ModelBase::toJson(permissionSetId_);
    }
    if(relayStateIsSet_) {
        val[utility::conversions::to_string_t("relay_state")] = ModelBase::toJson(relayState_);
    }
    if(sessionDurationIsSet_) {
        val[utility::conversions::to_string_t("session_duration")] = ModelBase::toJson(sessionDuration_);
    }
    if(permissionUrnIsSet_) {
        val[utility::conversions::to_string_t("permission_urn")] = ModelBase::toJson(permissionUrn_);
    }

    return val;
}
bool PermissionSetDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relay_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relay_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelayState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionUrn(refVal);
        }
    }
    return ok;
}


int64_t PermissionSetDto::getCreatedDate() const
{
    return createdDate_;
}

void PermissionSetDto::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool PermissionSetDto::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void PermissionSetDto::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string PermissionSetDto::getDescription() const
{
    return description_;
}

void PermissionSetDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PermissionSetDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PermissionSetDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PermissionSetDto::getName() const
{
    return name_;
}

void PermissionSetDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PermissionSetDto::nameIsSet() const
{
    return nameIsSet_;
}

void PermissionSetDto::unsetname()
{
    nameIsSet_ = false;
}

std::string PermissionSetDto::getPermissionSetId() const
{
    return permissionSetId_;
}

void PermissionSetDto::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool PermissionSetDto::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void PermissionSetDto::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

std::string PermissionSetDto::getRelayState() const
{
    return relayState_;
}

void PermissionSetDto::setRelayState(const std::string& value)
{
    relayState_ = value;
    relayStateIsSet_ = true;
}

bool PermissionSetDto::relayStateIsSet() const
{
    return relayStateIsSet_;
}

void PermissionSetDto::unsetrelayState()
{
    relayStateIsSet_ = false;
}

std::string PermissionSetDto::getSessionDuration() const
{
    return sessionDuration_;
}

void PermissionSetDto::setSessionDuration(const std::string& value)
{
    sessionDuration_ = value;
    sessionDurationIsSet_ = true;
}

bool PermissionSetDto::sessionDurationIsSet() const
{
    return sessionDurationIsSet_;
}

void PermissionSetDto::unsetsessionDuration()
{
    sessionDurationIsSet_ = false;
}

std::string PermissionSetDto::getPermissionUrn() const
{
    return permissionUrn_;
}

void PermissionSetDto::setPermissionUrn(const std::string& value)
{
    permissionUrn_ = value;
    permissionUrnIsSet_ = true;
}

bool PermissionSetDto::permissionUrnIsSet() const
{
    return permissionUrnIsSet_;
}

void PermissionSetDto::unsetpermissionUrn()
{
    permissionUrnIsSet_ = false;
}

}
}
}
}
}


