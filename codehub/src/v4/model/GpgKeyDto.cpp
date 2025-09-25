

#include "huaweicloud/codehub/v4/model/GpgKeyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




GpgKeyDto::GpgKeyDto()
{
    gpgName_ = "";
    gpgNameIsSet_ = false;
    openGpgVerified_ = false;
    openGpgVerifiedIsSet_ = false;
    verificationStatus_ = 0;
    verificationStatusIsSet_ = false;
    gpgPrimaryKeyId_ = "";
    gpgPrimaryKeyIdIsSet_ = false;
    gpgNickName_ = "";
    gpgNickNameIsSet_ = false;
    gpgTenantName_ = "";
    gpgTenantNameIsSet_ = false;
    gpgUserName_ = "";
    gpgUserNameIsSet_ = false;
}

GpgKeyDto::~GpgKeyDto() = default;

void GpgKeyDto::validate()
{
}

web::json::value GpgKeyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gpgNameIsSet_) {
        val[utility::conversions::to_string_t("gpg_name")] = ModelBase::toJson(gpgName_);
    }
    if(openGpgVerifiedIsSet_) {
        val[utility::conversions::to_string_t("open_gpg_verified")] = ModelBase::toJson(openGpgVerified_);
    }
    if(verificationStatusIsSet_) {
        val[utility::conversions::to_string_t("verification_status")] = ModelBase::toJson(verificationStatus_);
    }
    if(gpgPrimaryKeyIdIsSet_) {
        val[utility::conversions::to_string_t("gpg_primary_key_id")] = ModelBase::toJson(gpgPrimaryKeyId_);
    }
    if(gpgNickNameIsSet_) {
        val[utility::conversions::to_string_t("gpg_nick_name")] = ModelBase::toJson(gpgNickName_);
    }
    if(gpgTenantNameIsSet_) {
        val[utility::conversions::to_string_t("gpg_tenant_name")] = ModelBase::toJson(gpgTenantName_);
    }
    if(gpgUserNameIsSet_) {
        val[utility::conversions::to_string_t("gpg_user_name")] = ModelBase::toJson(gpgUserName_);
    }

    return val;
}
bool GpgKeyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gpg_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open_gpg_verified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_gpg_verified"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenGpgVerified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpg_primary_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_primary_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgPrimaryKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpg_nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpg_tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgTenantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpg_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgUserName(refVal);
        }
    }
    return ok;
}


std::string GpgKeyDto::getGpgName() const
{
    return gpgName_;
}

void GpgKeyDto::setGpgName(const std::string& value)
{
    gpgName_ = value;
    gpgNameIsSet_ = true;
}

bool GpgKeyDto::gpgNameIsSet() const
{
    return gpgNameIsSet_;
}

void GpgKeyDto::unsetgpgName()
{
    gpgNameIsSet_ = false;
}

bool GpgKeyDto::isOpenGpgVerified() const
{
    return openGpgVerified_;
}

void GpgKeyDto::setOpenGpgVerified(bool value)
{
    openGpgVerified_ = value;
    openGpgVerifiedIsSet_ = true;
}

bool GpgKeyDto::openGpgVerifiedIsSet() const
{
    return openGpgVerifiedIsSet_;
}

void GpgKeyDto::unsetopenGpgVerified()
{
    openGpgVerifiedIsSet_ = false;
}

int32_t GpgKeyDto::getVerificationStatus() const
{
    return verificationStatus_;
}

void GpgKeyDto::setVerificationStatus(int32_t value)
{
    verificationStatus_ = value;
    verificationStatusIsSet_ = true;
}

bool GpgKeyDto::verificationStatusIsSet() const
{
    return verificationStatusIsSet_;
}

void GpgKeyDto::unsetverificationStatus()
{
    verificationStatusIsSet_ = false;
}

std::string GpgKeyDto::getGpgPrimaryKeyId() const
{
    return gpgPrimaryKeyId_;
}

void GpgKeyDto::setGpgPrimaryKeyId(const std::string& value)
{
    gpgPrimaryKeyId_ = value;
    gpgPrimaryKeyIdIsSet_ = true;
}

bool GpgKeyDto::gpgPrimaryKeyIdIsSet() const
{
    return gpgPrimaryKeyIdIsSet_;
}

void GpgKeyDto::unsetgpgPrimaryKeyId()
{
    gpgPrimaryKeyIdIsSet_ = false;
}

std::string GpgKeyDto::getGpgNickName() const
{
    return gpgNickName_;
}

void GpgKeyDto::setGpgNickName(const std::string& value)
{
    gpgNickName_ = value;
    gpgNickNameIsSet_ = true;
}

bool GpgKeyDto::gpgNickNameIsSet() const
{
    return gpgNickNameIsSet_;
}

void GpgKeyDto::unsetgpgNickName()
{
    gpgNickNameIsSet_ = false;
}

std::string GpgKeyDto::getGpgTenantName() const
{
    return gpgTenantName_;
}

void GpgKeyDto::setGpgTenantName(const std::string& value)
{
    gpgTenantName_ = value;
    gpgTenantNameIsSet_ = true;
}

bool GpgKeyDto::gpgTenantNameIsSet() const
{
    return gpgTenantNameIsSet_;
}

void GpgKeyDto::unsetgpgTenantName()
{
    gpgTenantNameIsSet_ = false;
}

std::string GpgKeyDto::getGpgUserName() const
{
    return gpgUserName_;
}

void GpgKeyDto::setGpgUserName(const std::string& value)
{
    gpgUserName_ = value;
    gpgUserNameIsSet_ = true;
}

bool GpgKeyDto::gpgUserNameIsSet() const
{
    return gpgUserNameIsSet_;
}

void GpgKeyDto::unsetgpgUserName()
{
    gpgUserNameIsSet_ = false;
}

}
}
}
}
}


