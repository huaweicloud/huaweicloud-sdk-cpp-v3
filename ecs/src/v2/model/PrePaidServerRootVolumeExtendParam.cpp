

#include "huaweicloud/ecs/v2/model/PrePaidServerRootVolumeExtendParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerRootVolumeExtendParam::PrePaidServerRootVolumeExtendParam()
{
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
}

PrePaidServerRootVolumeExtendParam::~PrePaidServerRootVolumeExtendParam() = default;

void PrePaidServerRootVolumeExtendParam::validate()
{
}

web::json::value PrePaidServerRootVolumeExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(systemEncryptedIsSet_) {
        val[utility::conversions::to_string_t("__system__encrypted")] = ModelBase::toJson(systemEncrypted_);
    }
    if(systemCmkidIsSet_) {
        val[utility::conversions::to_string_t("__system__cmkid")] = ModelBase::toJson(systemCmkid_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resourceSpecCode")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resourceType")] = ModelBase::toJson(resourceType_);
    }
    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshotId")] = ModelBase::toJson(snapshotId_);
    }

    return val;
}

bool PrePaidServerRootVolumeExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("__system__encrypted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__encrypted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemEncrypted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__system__cmkid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__cmkid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemCmkid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceSpecCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceSpecCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshotId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshotId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    return ok;
}


std::string PrePaidServerRootVolumeExtendParam::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void PrePaidServerRootVolumeExtendParam::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool PrePaidServerRootVolumeExtendParam::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void PrePaidServerRootVolumeExtendParam::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string PrePaidServerRootVolumeExtendParam::getSystemCmkid() const
{
    return systemCmkid_;
}

void PrePaidServerRootVolumeExtendParam::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool PrePaidServerRootVolumeExtendParam::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void PrePaidServerRootVolumeExtendParam::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

std::string PrePaidServerRootVolumeExtendParam::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void PrePaidServerRootVolumeExtendParam::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool PrePaidServerRootVolumeExtendParam::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void PrePaidServerRootVolumeExtendParam::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string PrePaidServerRootVolumeExtendParam::getResourceType() const
{
    return resourceType_;
}

void PrePaidServerRootVolumeExtendParam::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool PrePaidServerRootVolumeExtendParam::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void PrePaidServerRootVolumeExtendParam::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string PrePaidServerRootVolumeExtendParam::getSnapshotId() const
{
    return snapshotId_;
}

void PrePaidServerRootVolumeExtendParam::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool PrePaidServerRootVolumeExtendParam::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void PrePaidServerRootVolumeExtendParam::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

}
}
}
}
}


