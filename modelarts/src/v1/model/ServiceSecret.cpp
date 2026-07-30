

#include "huaweicloud/modelarts/v1/model/ServiceSecret.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceSecret::ServiceSecret()
{
    secretEnable_ = false;
    secretEnableIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
    secretVolumesIsSet_ = false;
    groupEnable_ = false;
    groupEnableIsSet_ = false;
    groupId_ = 0L;
    groupIdIsSet_ = false;
}

ServiceSecret::~ServiceSecret() = default;

void ServiceSecret::validate()
{
}

web::json::value ServiceSecret::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretEnableIsSet_) {
        val[utility::conversions::to_string_t("secret_enable")] = ModelBase::toJson(secretEnable_);
    }
    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }
    if(secretVolumesIsSet_) {
        val[utility::conversions::to_string_t("secret_volumes")] = ModelBase::toJson(secretVolumes_);
    }
    if(groupEnableIsSet_) {
        val[utility::conversions::to_string_t("group_enable")] = ModelBase::toJson(groupEnable_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ServiceSecret::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<SecretVolume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


bool ServiceSecret::isSecretEnable() const
{
    return secretEnable_;
}

void ServiceSecret::setSecretEnable(bool value)
{
    secretEnable_ = value;
    secretEnableIsSet_ = true;
}

bool ServiceSecret::secretEnableIsSet() const
{
    return secretEnableIsSet_;
}

void ServiceSecret::unsetsecretEnable()
{
    secretEnableIsSet_ = false;
}

std::string ServiceSecret::getSecretType() const
{
    return secretType_;
}

void ServiceSecret::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool ServiceSecret::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void ServiceSecret::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::vector<SecretVolume>& ServiceSecret::getSecretVolumes()
{
    return secretVolumes_;
}

void ServiceSecret::setSecretVolumes(const std::vector<SecretVolume>& value)
{
    secretVolumes_ = value;
    secretVolumesIsSet_ = true;
}

bool ServiceSecret::secretVolumesIsSet() const
{
    return secretVolumesIsSet_;
}

void ServiceSecret::unsetsecretVolumes()
{
    secretVolumesIsSet_ = false;
}

bool ServiceSecret::isGroupEnable() const
{
    return groupEnable_;
}

void ServiceSecret::setGroupEnable(bool value)
{
    groupEnable_ = value;
    groupEnableIsSet_ = true;
}

bool ServiceSecret::groupEnableIsSet() const
{
    return groupEnableIsSet_;
}

void ServiceSecret::unsetgroupEnable()
{
    groupEnableIsSet_ = false;
}

int64_t ServiceSecret::getGroupId() const
{
    return groupId_;
}

void ServiceSecret::setGroupId(int64_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ServiceSecret::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ServiceSecret::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


