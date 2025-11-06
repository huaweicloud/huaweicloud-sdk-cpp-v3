

#include "huaweicloud/codeartsrepo/v4/model/RemoteMirrorSyncInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RemoteMirrorSyncInfoDto::RemoteMirrorSyncInfoDto()
{
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    endpointUuid_ = "";
    endpointUuidIsSet_ = false;
    forceFetch_ = false;
    forceFetchIsSet_ = false;
}

RemoteMirrorSyncInfoDto::~RemoteMirrorSyncInfoDto() = default;

void RemoteMirrorSyncInfoDto::validate()
{
}

web::json::value RemoteMirrorSyncInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(endpointUuidIsSet_) {
        val[utility::conversions::to_string_t("endpoint_uuid")] = ModelBase::toJson(endpointUuid_);
    }
    if(forceFetchIsSet_) {
        val[utility::conversions::to_string_t("force_fetch")] = ModelBase::toJson(forceFetch_);
    }

    return val;
}
bool RemoteMirrorSyncInfoDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_fetch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_fetch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceFetch(refVal);
        }
    }
    return ok;
}


std::string RemoteMirrorSyncInfoDto::getUsername() const
{
    return username_;
}

void RemoteMirrorSyncInfoDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool RemoteMirrorSyncInfoDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void RemoteMirrorSyncInfoDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string RemoteMirrorSyncInfoDto::getPassword() const
{
    return password_;
}

void RemoteMirrorSyncInfoDto::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RemoteMirrorSyncInfoDto::passwordIsSet() const
{
    return passwordIsSet_;
}

void RemoteMirrorSyncInfoDto::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string RemoteMirrorSyncInfoDto::getEndpointUuid() const
{
    return endpointUuid_;
}

void RemoteMirrorSyncInfoDto::setEndpointUuid(const std::string& value)
{
    endpointUuid_ = value;
    endpointUuidIsSet_ = true;
}

bool RemoteMirrorSyncInfoDto::endpointUuidIsSet() const
{
    return endpointUuidIsSet_;
}

void RemoteMirrorSyncInfoDto::unsetendpointUuid()
{
    endpointUuidIsSet_ = false;
}

bool RemoteMirrorSyncInfoDto::isForceFetch() const
{
    return forceFetch_;
}

void RemoteMirrorSyncInfoDto::setForceFetch(bool value)
{
    forceFetch_ = value;
    forceFetchIsSet_ = true;
}

bool RemoteMirrorSyncInfoDto::forceFetchIsSet() const
{
    return forceFetchIsSet_;
}

void RemoteMirrorSyncInfoDto::unsetforceFetch()
{
    forceFetchIsSet_ = false;
}

}
}
}
}
}


