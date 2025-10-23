

#include "huaweicloud/codehub/v4/model/UpdateRepositoryRemoteMirrorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepositoryRemoteMirrorResponse::UpdateRepositoryRemoteMirrorResponse()
{
    url_ = "";
    urlIsSet_ = false;
    mirroringEnabled_ = false;
    mirroringEnabledIsSet_ = false;
    endpointUuid_ = "";
    endpointUuidIsSet_ = false;
    syncBranchType_ = "";
    syncBranchTypeIsSet_ = false;
}

UpdateRepositoryRemoteMirrorResponse::~UpdateRepositoryRemoteMirrorResponse() = default;

void UpdateRepositoryRemoteMirrorResponse::validate()
{
}

web::json::value UpdateRepositoryRemoteMirrorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(mirroringEnabledIsSet_) {
        val[utility::conversions::to_string_t("mirroring_enabled")] = ModelBase::toJson(mirroringEnabled_);
    }
    if(endpointUuidIsSet_) {
        val[utility::conversions::to_string_t("endpoint_uuid")] = ModelBase::toJson(endpointUuid_);
    }
    if(syncBranchTypeIsSet_) {
        val[utility::conversions::to_string_t("sync_branch_type")] = ModelBase::toJson(syncBranchType_);
    }

    return val;
}
bool UpdateRepositoryRemoteMirrorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mirroring_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mirroring_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMirroringEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sync_branch_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_branch_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncBranchType(refVal);
        }
    }
    return ok;
}


std::string UpdateRepositoryRemoteMirrorResponse::getUrl() const
{
    return url_;
}

void UpdateRepositoryRemoteMirrorResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UpdateRepositoryRemoteMirrorResponse::urlIsSet() const
{
    return urlIsSet_;
}

void UpdateRepositoryRemoteMirrorResponse::unseturl()
{
    urlIsSet_ = false;
}

bool UpdateRepositoryRemoteMirrorResponse::isMirroringEnabled() const
{
    return mirroringEnabled_;
}

void UpdateRepositoryRemoteMirrorResponse::setMirroringEnabled(bool value)
{
    mirroringEnabled_ = value;
    mirroringEnabledIsSet_ = true;
}

bool UpdateRepositoryRemoteMirrorResponse::mirroringEnabledIsSet() const
{
    return mirroringEnabledIsSet_;
}

void UpdateRepositoryRemoteMirrorResponse::unsetmirroringEnabled()
{
    mirroringEnabledIsSet_ = false;
}

std::string UpdateRepositoryRemoteMirrorResponse::getEndpointUuid() const
{
    return endpointUuid_;
}

void UpdateRepositoryRemoteMirrorResponse::setEndpointUuid(const std::string& value)
{
    endpointUuid_ = value;
    endpointUuidIsSet_ = true;
}

bool UpdateRepositoryRemoteMirrorResponse::endpointUuidIsSet() const
{
    return endpointUuidIsSet_;
}

void UpdateRepositoryRemoteMirrorResponse::unsetendpointUuid()
{
    endpointUuidIsSet_ = false;
}

std::string UpdateRepositoryRemoteMirrorResponse::getSyncBranchType() const
{
    return syncBranchType_;
}

void UpdateRepositoryRemoteMirrorResponse::setSyncBranchType(const std::string& value)
{
    syncBranchType_ = value;
    syncBranchTypeIsSet_ = true;
}

bool UpdateRepositoryRemoteMirrorResponse::syncBranchTypeIsSet() const
{
    return syncBranchTypeIsSet_;
}

void UpdateRepositoryRemoteMirrorResponse::unsetsyncBranchType()
{
    syncBranchTypeIsSet_ = false;
}

}
}
}
}
}


