

#include "huaweicloud/modelarts/v1/model/ServiceSecretResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceSecretResponse::ServiceSecretResponse()
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

ServiceSecretResponse::~ServiceSecretResponse() = default;

void ServiceSecretResponse::validate()
{
}

web::json::value ServiceSecretResponse::toJson() const
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
bool ServiceSecretResponse::fromJson(const web::json::value& val)
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
            std::vector<SecretVolumeResponse> refVal;
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


bool ServiceSecretResponse::isSecretEnable() const
{
    return secretEnable_;
}

void ServiceSecretResponse::setSecretEnable(bool value)
{
    secretEnable_ = value;
    secretEnableIsSet_ = true;
}

bool ServiceSecretResponse::secretEnableIsSet() const
{
    return secretEnableIsSet_;
}

void ServiceSecretResponse::unsetsecretEnable()
{
    secretEnableIsSet_ = false;
}

std::string ServiceSecretResponse::getSecretType() const
{
    return secretType_;
}

void ServiceSecretResponse::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool ServiceSecretResponse::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void ServiceSecretResponse::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::vector<SecretVolumeResponse>& ServiceSecretResponse::getSecretVolumes()
{
    return secretVolumes_;
}

void ServiceSecretResponse::setSecretVolumes(const std::vector<SecretVolumeResponse>& value)
{
    secretVolumes_ = value;
    secretVolumesIsSet_ = true;
}

bool ServiceSecretResponse::secretVolumesIsSet() const
{
    return secretVolumesIsSet_;
}

void ServiceSecretResponse::unsetsecretVolumes()
{
    secretVolumesIsSet_ = false;
}

bool ServiceSecretResponse::isGroupEnable() const
{
    return groupEnable_;
}

void ServiceSecretResponse::setGroupEnable(bool value)
{
    groupEnable_ = value;
    groupEnableIsSet_ = true;
}

bool ServiceSecretResponse::groupEnableIsSet() const
{
    return groupEnableIsSet_;
}

void ServiceSecretResponse::unsetgroupEnable()
{
    groupEnableIsSet_ = false;
}

int64_t ServiceSecretResponse::getGroupId() const
{
    return groupId_;
}

void ServiceSecretResponse::setGroupId(int64_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ServiceSecretResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ServiceSecretResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


