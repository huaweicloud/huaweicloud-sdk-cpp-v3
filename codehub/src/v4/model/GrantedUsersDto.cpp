

#include "huaweicloud/codehub/v4/model/GrantedUsersDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




GrantedUsersDto::GrantedUsersDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameCn_ = "";
    nameCnIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    iamId_ = "";
    iamIdIsSet_ = false;
    serviceLicenseStatus_ = 0;
    serviceLicenseStatusIsSet_ = false;
}

GrantedUsersDto::~GrantedUsersDto() = default;

void GrantedUsersDto::validate()
{
}

web::json::value GrantedUsersDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(iamIdIsSet_) {
        val[utility::conversions::to_string_t("iam_id")] = ModelBase::toJson(iamId_);
    }
    if(serviceLicenseStatusIsSet_) {
        val[utility::conversions::to_string_t("service_license_status")] = ModelBase::toJson(serviceLicenseStatus_);
    }

    return val;
}
bool GrantedUsersDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iam_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iam_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_license_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_license_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceLicenseStatus(refVal);
        }
    }
    return ok;
}


int32_t GrantedUsersDto::getId() const
{
    return id_;
}

void GrantedUsersDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GrantedUsersDto::idIsSet() const
{
    return idIsSet_;
}

void GrantedUsersDto::unsetid()
{
    idIsSet_ = false;
}

std::string GrantedUsersDto::getName() const
{
    return name_;
}

void GrantedUsersDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GrantedUsersDto::nameIsSet() const
{
    return nameIsSet_;
}

void GrantedUsersDto::unsetname()
{
    nameIsSet_ = false;
}

std::string GrantedUsersDto::getNameCn() const
{
    return nameCn_;
}

void GrantedUsersDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool GrantedUsersDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void GrantedUsersDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string GrantedUsersDto::getUsername() const
{
    return username_;
}

void GrantedUsersDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool GrantedUsersDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void GrantedUsersDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string GrantedUsersDto::getNickName() const
{
    return nickName_;
}

void GrantedUsersDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool GrantedUsersDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void GrantedUsersDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string GrantedUsersDto::getTenantName() const
{
    return tenantName_;
}

void GrantedUsersDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool GrantedUsersDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void GrantedUsersDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string GrantedUsersDto::getEmail() const
{
    return email_;
}

void GrantedUsersDto::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool GrantedUsersDto::emailIsSet() const
{
    return emailIsSet_;
}

void GrantedUsersDto::unsetemail()
{
    emailIsSet_ = false;
}

std::string GrantedUsersDto::getIamId() const
{
    return iamId_;
}

void GrantedUsersDto::setIamId(const std::string& value)
{
    iamId_ = value;
    iamIdIsSet_ = true;
}

bool GrantedUsersDto::iamIdIsSet() const
{
    return iamIdIsSet_;
}

void GrantedUsersDto::unsetiamId()
{
    iamIdIsSet_ = false;
}

int32_t GrantedUsersDto::getServiceLicenseStatus() const
{
    return serviceLicenseStatus_;
}

void GrantedUsersDto::setServiceLicenseStatus(int32_t value)
{
    serviceLicenseStatus_ = value;
    serviceLicenseStatusIsSet_ = true;
}

bool GrantedUsersDto::serviceLicenseStatusIsSet() const
{
    return serviceLicenseStatusIsSet_;
}

void GrantedUsersDto::unsetserviceLicenseStatus()
{
    serviceLicenseStatusIsSet_ = false;
}

}
}
}
}
}


