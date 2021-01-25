

#include "huaweicloud/ecs/v2/model/NovaCreateServersOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateServersOption::NovaCreateServersOption()
{
    autoTerminateTime_ = "";
    autoTerminateTimeIsSet_ = false;
    imageRef_ = "";
    imageRefIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    metadataIsSet_ = false;
    adminPass_ = "";
    adminPassIsSet_ = false;
    blockDeviceMappingV2IsSet_ = false;
    configDrive_ = "";
    configDriveIsSet_ = false;
    securityGroupsIsSet_ = false;
    networksIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    returnReservationId_ = false;
    returnReservationIdIsSet_ = false;
    minCount_ = 0;
    minCountIsSet_ = false;
    maxCount_ = 0;
    maxCountIsSet_ = false;
    oSDCFdiskConfig_ = "";
    oSDCFdiskConfigIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

NovaCreateServersOption::~NovaCreateServersOption() = default;

void NovaCreateServersOption::validate()
{
}

web::json::value NovaCreateServersOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoTerminateTimeIsSet_) {
        val[utility::conversions::to_string_t("auto_terminate_time")] = ModelBase::toJson(autoTerminateTime_);
    }
    if(imageRefIsSet_) {
        val[utility::conversions::to_string_t("imageRef")] = ModelBase::toJson(imageRef_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavorRef")] = ModelBase::toJson(flavorRef_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(adminPassIsSet_) {
        val[utility::conversions::to_string_t("adminPass")] = ModelBase::toJson(adminPass_);
    }
    if(blockDeviceMappingV2IsSet_) {
        val[utility::conversions::to_string_t("block_device_mapping_v2")] = ModelBase::toJson(blockDeviceMappingV2_);
    }
    if(configDriveIsSet_) {
        val[utility::conversions::to_string_t("config_drive")] = ModelBase::toJson(configDrive_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(networksIsSet_) {
        val[utility::conversions::to_string_t("networks")] = ModelBase::toJson(networks_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(returnReservationIdIsSet_) {
        val[utility::conversions::to_string_t("return_reservation_id")] = ModelBase::toJson(returnReservationId_);
    }
    if(minCountIsSet_) {
        val[utility::conversions::to_string_t("min_count")] = ModelBase::toJson(minCount_);
    }
    if(maxCountIsSet_) {
        val[utility::conversions::to_string_t("max_count")] = ModelBase::toJson(maxCount_);
    }
    if(oSDCFdiskConfigIsSet_) {
        val[utility::conversions::to_string_t("OS-DCF:diskConfig")] = ModelBase::toJson(oSDCFdiskConfig_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool NovaCreateServersOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_terminate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_terminate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoTerminateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavorRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavorRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminPass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminPass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminPass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_device_mapping_v2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_device_mapping_v2"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaServerBlockDeviceMapping> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockDeviceMappingV2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_drive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_drive"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigDrive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaServerSecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("networks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("networks"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaServerNetwork> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_reservation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_reservation_id"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnReservationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-DCF:diskConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-DCF:diskConfig"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSDCFdiskConfig(refVal);
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
    return ok;
}


std::string NovaCreateServersOption::getAutoTerminateTime() const
{
    return autoTerminateTime_;
}

void NovaCreateServersOption::setAutoTerminateTime(const std::string& value)
{
    autoTerminateTime_ = value;
    autoTerminateTimeIsSet_ = true;
}

bool NovaCreateServersOption::autoTerminateTimeIsSet() const
{
    return autoTerminateTimeIsSet_;
}

void NovaCreateServersOption::unsetautoTerminateTime()
{
    autoTerminateTimeIsSet_ = false;
}

std::string NovaCreateServersOption::getImageRef() const
{
    return imageRef_;
}

void NovaCreateServersOption::setImageRef(const std::string& value)
{
    imageRef_ = value;
    imageRefIsSet_ = true;
}

bool NovaCreateServersOption::imageRefIsSet() const
{
    return imageRefIsSet_;
}

void NovaCreateServersOption::unsetimageRef()
{
    imageRefIsSet_ = false;
}

std::string NovaCreateServersOption::getFlavorRef() const
{
    return flavorRef_;
}

void NovaCreateServersOption::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool NovaCreateServersOption::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void NovaCreateServersOption::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string NovaCreateServersOption::getName() const
{
    return name_;
}

void NovaCreateServersOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaCreateServersOption::nameIsSet() const
{
    return nameIsSet_;
}

void NovaCreateServersOption::unsetname()
{
    nameIsSet_ = false;
}

std::map<std::string, std::string>& NovaCreateServersOption::getMetadata()
{
    return metadata_;
}

void NovaCreateServersOption::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool NovaCreateServersOption::metadataIsSet() const
{
    return metadataIsSet_;
}

void NovaCreateServersOption::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string NovaCreateServersOption::getAdminPass() const
{
    return adminPass_;
}

void NovaCreateServersOption::setAdminPass(const std::string& value)
{
    adminPass_ = value;
    adminPassIsSet_ = true;
}

bool NovaCreateServersOption::adminPassIsSet() const
{
    return adminPassIsSet_;
}

void NovaCreateServersOption::unsetadminPass()
{
    adminPassIsSet_ = false;
}

std::vector<NovaServerBlockDeviceMapping>& NovaCreateServersOption::getBlockDeviceMappingV2()
{
    return blockDeviceMappingV2_;
}

void NovaCreateServersOption::setBlockDeviceMappingV2(const std::vector<NovaServerBlockDeviceMapping>& value)
{
    blockDeviceMappingV2_ = value;
    blockDeviceMappingV2IsSet_ = true;
}

bool NovaCreateServersOption::blockDeviceMappingV2IsSet() const
{
    return blockDeviceMappingV2IsSet_;
}

void NovaCreateServersOption::unsetblockDeviceMappingV2()
{
    blockDeviceMappingV2IsSet_ = false;
}

std::string NovaCreateServersOption::getConfigDrive() const
{
    return configDrive_;
}

void NovaCreateServersOption::setConfigDrive(const std::string& value)
{
    configDrive_ = value;
    configDriveIsSet_ = true;
}

bool NovaCreateServersOption::configDriveIsSet() const
{
    return configDriveIsSet_;
}

void NovaCreateServersOption::unsetconfigDrive()
{
    configDriveIsSet_ = false;
}

std::vector<NovaServerSecurityGroup>& NovaCreateServersOption::getSecurityGroups()
{
    return securityGroups_;
}

void NovaCreateServersOption::setSecurityGroups(const std::vector<NovaServerSecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NovaCreateServersOption::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NovaCreateServersOption::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::vector<NovaServerNetwork>& NovaCreateServersOption::getNetworks()
{
    return networks_;
}

void NovaCreateServersOption::setNetworks(const std::vector<NovaServerNetwork>& value)
{
    networks_ = value;
    networksIsSet_ = true;
}

bool NovaCreateServersOption::networksIsSet() const
{
    return networksIsSet_;
}

void NovaCreateServersOption::unsetnetworks()
{
    networksIsSet_ = false;
}

std::string NovaCreateServersOption::getKeyName() const
{
    return keyName_;
}

void NovaCreateServersOption::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool NovaCreateServersOption::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void NovaCreateServersOption::unsetkeyName()
{
    keyNameIsSet_ = false;
}

std::string NovaCreateServersOption::getUserData() const
{
    return userData_;
}

void NovaCreateServersOption::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool NovaCreateServersOption::userDataIsSet() const
{
    return userDataIsSet_;
}

void NovaCreateServersOption::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string NovaCreateServersOption::getAvailabilityZone() const
{
    return availabilityZone_;
}

void NovaCreateServersOption::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool NovaCreateServersOption::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void NovaCreateServersOption::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

bool NovaCreateServersOption::isReturnReservationId() const
{
    return returnReservationId_;
}

void NovaCreateServersOption::setReturnReservationId(bool value)
{
    returnReservationId_ = value;
    returnReservationIdIsSet_ = true;
}

bool NovaCreateServersOption::returnReservationIdIsSet() const
{
    return returnReservationIdIsSet_;
}

void NovaCreateServersOption::unsetreturnReservationId()
{
    returnReservationIdIsSet_ = false;
}

int32_t NovaCreateServersOption::getMinCount() const
{
    return minCount_;
}

void NovaCreateServersOption::setMinCount(int32_t value)
{
    minCount_ = value;
    minCountIsSet_ = true;
}

bool NovaCreateServersOption::minCountIsSet() const
{
    return minCountIsSet_;
}

void NovaCreateServersOption::unsetminCount()
{
    minCountIsSet_ = false;
}

int32_t NovaCreateServersOption::getMaxCount() const
{
    return maxCount_;
}

void NovaCreateServersOption::setMaxCount(int32_t value)
{
    maxCount_ = value;
    maxCountIsSet_ = true;
}

bool NovaCreateServersOption::maxCountIsSet() const
{
    return maxCountIsSet_;
}

void NovaCreateServersOption::unsetmaxCount()
{
    maxCountIsSet_ = false;
}

std::string NovaCreateServersOption::getOSDCFdiskConfig() const
{
    return oSDCFdiskConfig_;
}

void NovaCreateServersOption::setOSDCFdiskConfig(const std::string& value)
{
    oSDCFdiskConfig_ = value;
    oSDCFdiskConfigIsSet_ = true;
}

bool NovaCreateServersOption::oSDCFdiskConfigIsSet() const
{
    return oSDCFdiskConfigIsSet_;
}

void NovaCreateServersOption::unsetoSDCFdiskConfig()
{
    oSDCFdiskConfigIsSet_ = false;
}

std::string NovaCreateServersOption::getDescription() const
{
    return description_;
}

void NovaCreateServersOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NovaCreateServersOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NovaCreateServersOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


