

#include "huaweicloud/identitycenter/v1/model/CreatePermissionSetReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreatePermissionSetReqBody::CreatePermissionSetReqBody()
{
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    relayState_ = "";
    relayStateIsSet_ = false;
    sessionDuration_ = "";
    sessionDurationIsSet_ = false;
    tagsIsSet_ = false;
}

CreatePermissionSetReqBody::~CreatePermissionSetReqBody() = default;

void CreatePermissionSetReqBody::validate()
{
}

web::json::value CreatePermissionSetReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(relayStateIsSet_) {
        val[utility::conversions::to_string_t("relay_state")] = ModelBase::toJson(relayState_);
    }
    if(sessionDurationIsSet_) {
        val[utility::conversions::to_string_t("session_duration")] = ModelBase::toJson(sessionDuration_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreatePermissionSetReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreatePermissionSetReqBody::getDescription() const
{
    return description_;
}

void CreatePermissionSetReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreatePermissionSetReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreatePermissionSetReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreatePermissionSetReqBody::getName() const
{
    return name_;
}

void CreatePermissionSetReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreatePermissionSetReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreatePermissionSetReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreatePermissionSetReqBody::getRelayState() const
{
    return relayState_;
}

void CreatePermissionSetReqBody::setRelayState(const std::string& value)
{
    relayState_ = value;
    relayStateIsSet_ = true;
}

bool CreatePermissionSetReqBody::relayStateIsSet() const
{
    return relayStateIsSet_;
}

void CreatePermissionSetReqBody::unsetrelayState()
{
    relayStateIsSet_ = false;
}

std::string CreatePermissionSetReqBody::getSessionDuration() const
{
    return sessionDuration_;
}

void CreatePermissionSetReqBody::setSessionDuration(const std::string& value)
{
    sessionDuration_ = value;
    sessionDurationIsSet_ = true;
}

bool CreatePermissionSetReqBody::sessionDurationIsSet() const
{
    return sessionDurationIsSet_;
}

void CreatePermissionSetReqBody::unsetsessionDuration()
{
    sessionDurationIsSet_ = false;
}

std::vector<TagDto>& CreatePermissionSetReqBody::getTags()
{
    return tags_;
}

void CreatePermissionSetReqBody::setTags(const std::vector<TagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreatePermissionSetReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreatePermissionSetReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


