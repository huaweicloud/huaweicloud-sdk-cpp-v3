

#include "huaweicloud/codeartsrepo/v4/model/RemoteMirrorUpdateBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RemoteMirrorUpdateBody::RemoteMirrorUpdateBody()
{
    url_ = "";
    urlIsSet_ = false;
    syncBranchType_ = "";
    syncBranchTypeIsSet_ = false;
    mirroringEnabled_ = false;
    mirroringEnabledIsSet_ = false;
    endpointUuid_ = "";
    endpointUuidIsSet_ = false;
}

RemoteMirrorUpdateBody::~RemoteMirrorUpdateBody() = default;

void RemoteMirrorUpdateBody::validate()
{
}

web::json::value RemoteMirrorUpdateBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(syncBranchTypeIsSet_) {
        val[utility::conversions::to_string_t("sync_branch_type")] = ModelBase::toJson(syncBranchType_);
    }
    if(mirroringEnabledIsSet_) {
        val[utility::conversions::to_string_t("mirroring_enabled")] = ModelBase::toJson(mirroringEnabled_);
    }
    if(endpointUuidIsSet_) {
        val[utility::conversions::to_string_t("endpoint_uuid")] = ModelBase::toJson(endpointUuid_);
    }

    return val;
}
bool RemoteMirrorUpdateBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sync_branch_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_branch_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncBranchType(refVal);
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
    return ok;
}


std::string RemoteMirrorUpdateBody::getUrl() const
{
    return url_;
}

void RemoteMirrorUpdateBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RemoteMirrorUpdateBody::urlIsSet() const
{
    return urlIsSet_;
}

void RemoteMirrorUpdateBody::unseturl()
{
    urlIsSet_ = false;
}

std::string RemoteMirrorUpdateBody::getSyncBranchType() const
{
    return syncBranchType_;
}

void RemoteMirrorUpdateBody::setSyncBranchType(const std::string& value)
{
    syncBranchType_ = value;
    syncBranchTypeIsSet_ = true;
}

bool RemoteMirrorUpdateBody::syncBranchTypeIsSet() const
{
    return syncBranchTypeIsSet_;
}

void RemoteMirrorUpdateBody::unsetsyncBranchType()
{
    syncBranchTypeIsSet_ = false;
}

bool RemoteMirrorUpdateBody::isMirroringEnabled() const
{
    return mirroringEnabled_;
}

void RemoteMirrorUpdateBody::setMirroringEnabled(bool value)
{
    mirroringEnabled_ = value;
    mirroringEnabledIsSet_ = true;
}

bool RemoteMirrorUpdateBody::mirroringEnabledIsSet() const
{
    return mirroringEnabledIsSet_;
}

void RemoteMirrorUpdateBody::unsetmirroringEnabled()
{
    mirroringEnabledIsSet_ = false;
}

std::string RemoteMirrorUpdateBody::getEndpointUuid() const
{
    return endpointUuid_;
}

void RemoteMirrorUpdateBody::setEndpointUuid(const std::string& value)
{
    endpointUuid_ = value;
    endpointUuidIsSet_ = true;
}

bool RemoteMirrorUpdateBody::endpointUuidIsSet() const
{
    return endpointUuidIsSet_;
}

void RemoteMirrorUpdateBody::unsetendpointUuid()
{
    endpointUuidIsSet_ = false;
}

}
}
}
}
}


