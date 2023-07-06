

#include "huaweicloud/cbr/v1/model/BackupRestore.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupRestore::BackupRestore()
{
    mappingsIsSet_ = false;
    powerOn_ = false;
    powerOnIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

BackupRestore::~BackupRestore() = default;

void BackupRestore::validate()
{
}

web::json::value BackupRestore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mappingsIsSet_) {
        val[utility::conversions::to_string_t("mappings")] = ModelBase::toJson(mappings_);
    }
    if(powerOnIsSet_) {
        val[utility::conversions::to_string_t("power_on")] = ModelBase::toJson(powerOn_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}

bool BackupRestore::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mappings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mappings"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupRestoreServerMapping> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMappings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("power_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("power_on"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPowerOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}

std::vector<BackupRestoreServerMapping>& BackupRestore::getMappings()
{
    return mappings_;
}

void BackupRestore::setMappings(const std::vector<BackupRestoreServerMapping>& value)
{
    mappings_ = value;
    mappingsIsSet_ = true;
}

bool BackupRestore::mappingsIsSet() const
{
    return mappingsIsSet_;
}

void BackupRestore::unsetmappings()
{
    mappingsIsSet_ = false;
}

bool BackupRestore::isPowerOn() const
{
    return powerOn_;
}

void BackupRestore::setPowerOn(bool value)
{
    powerOn_ = value;
    powerOnIsSet_ = true;
}

bool BackupRestore::powerOnIsSet() const
{
    return powerOnIsSet_;
}

void BackupRestore::unsetpowerOn()
{
    powerOnIsSet_ = false;
}

std::string BackupRestore::getServerId() const
{
    return serverId_;
}

void BackupRestore::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool BackupRestore::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void BackupRestore::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string BackupRestore::getVolumeId() const
{
    return volumeId_;
}

void BackupRestore::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool BackupRestore::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void BackupRestore::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string BackupRestore::getResourceId() const
{
    return resourceId_;
}

void BackupRestore::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BackupRestore::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BackupRestore::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


