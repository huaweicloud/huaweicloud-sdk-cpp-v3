

#include "huaweicloud/cce/v3/model/PersistentVolumeClaimSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PersistentVolumeClaimSpec::PersistentVolumeClaimSpec()
{
    volumeID_ = "";
    volumeIDIsSet_ = false;
    storageType_ = "";
    storageTypeIsSet_ = false;
    accessModesIsSet_ = false;
    storageClassName_ = "";
    storageClassNameIsSet_ = false;
    volumeName_ = "";
    volumeNameIsSet_ = false;
    resourcesIsSet_ = false;
    volumeMode_ = "";
    volumeModeIsSet_ = false;
}

PersistentVolumeClaimSpec::~PersistentVolumeClaimSpec() = default;

void PersistentVolumeClaimSpec::validate()
{
}

web::json::value PersistentVolumeClaimSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIDIsSet_) {
        val[utility::conversions::to_string_t("volumeID")] = ModelBase::toJson(volumeID_);
    }
    if(storageTypeIsSet_) {
        val[utility::conversions::to_string_t("storageType")] = ModelBase::toJson(storageType_);
    }
    if(accessModesIsSet_) {
        val[utility::conversions::to_string_t("accessModes")] = ModelBase::toJson(accessModes_);
    }
    if(storageClassNameIsSet_) {
        val[utility::conversions::to_string_t("storageClassName")] = ModelBase::toJson(storageClassName_);
    }
    if(volumeNameIsSet_) {
        val[utility::conversions::to_string_t("volumeName")] = ModelBase::toJson(volumeName_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(volumeModeIsSet_) {
        val[utility::conversions::to_string_t("volumeMode")] = ModelBase::toJson(volumeMode_);
    }

    return val;
}
bool PersistentVolumeClaimSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumeID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storageType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storageType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessModes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessModes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessModes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storageClassName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storageClassName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageClassName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            ResourceRequirements refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeMode(refVal);
        }
    }
    return ok;
}


std::string PersistentVolumeClaimSpec::getVolumeID() const
{
    return volumeID_;
}

void PersistentVolumeClaimSpec::setVolumeID(const std::string& value)
{
    volumeID_ = value;
    volumeIDIsSet_ = true;
}

bool PersistentVolumeClaimSpec::volumeIDIsSet() const
{
    return volumeIDIsSet_;
}

void PersistentVolumeClaimSpec::unsetvolumeID()
{
    volumeIDIsSet_ = false;
}

std::string PersistentVolumeClaimSpec::getStorageType() const
{
    return storageType_;
}

void PersistentVolumeClaimSpec::setStorageType(const std::string& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool PersistentVolumeClaimSpec::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void PersistentVolumeClaimSpec::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

std::vector<std::string>& PersistentVolumeClaimSpec::getAccessModes()
{
    return accessModes_;
}

void PersistentVolumeClaimSpec::setAccessModes(const std::vector<std::string>& value)
{
    accessModes_ = value;
    accessModesIsSet_ = true;
}

bool PersistentVolumeClaimSpec::accessModesIsSet() const
{
    return accessModesIsSet_;
}

void PersistentVolumeClaimSpec::unsetaccessModes()
{
    accessModesIsSet_ = false;
}

std::string PersistentVolumeClaimSpec::getStorageClassName() const
{
    return storageClassName_;
}

void PersistentVolumeClaimSpec::setStorageClassName(const std::string& value)
{
    storageClassName_ = value;
    storageClassNameIsSet_ = true;
}

bool PersistentVolumeClaimSpec::storageClassNameIsSet() const
{
    return storageClassNameIsSet_;
}

void PersistentVolumeClaimSpec::unsetstorageClassName()
{
    storageClassNameIsSet_ = false;
}

std::string PersistentVolumeClaimSpec::getVolumeName() const
{
    return volumeName_;
}

void PersistentVolumeClaimSpec::setVolumeName(const std::string& value)
{
    volumeName_ = value;
    volumeNameIsSet_ = true;
}

bool PersistentVolumeClaimSpec::volumeNameIsSet() const
{
    return volumeNameIsSet_;
}

void PersistentVolumeClaimSpec::unsetvolumeName()
{
    volumeNameIsSet_ = false;
}

ResourceRequirements PersistentVolumeClaimSpec::getResources() const
{
    return resources_;
}

void PersistentVolumeClaimSpec::setResources(const ResourceRequirements& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool PersistentVolumeClaimSpec::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void PersistentVolumeClaimSpec::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string PersistentVolumeClaimSpec::getVolumeMode() const
{
    return volumeMode_;
}

void PersistentVolumeClaimSpec::setVolumeMode(const std::string& value)
{
    volumeMode_ = value;
    volumeModeIsSet_ = true;
}

bool PersistentVolumeClaimSpec::volumeModeIsSet() const
{
    return volumeModeIsSet_;
}

void PersistentVolumeClaimSpec::unsetvolumeMode()
{
    volumeModeIsSet_ = false;
}

}
}
}
}
}


