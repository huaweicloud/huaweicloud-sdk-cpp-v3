

#include "huaweicloud/codehub/v4/model/RepositoryUserBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositoryUserBasicDto::RepositoryUserBasicDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    serviceLicenseStatus_ = 0;
    serviceLicenseStatusIsSet_ = false;
    nameCn_ = "";
    nameCnIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
}

RepositoryUserBasicDto::~RepositoryUserBasicDto() = default;

void RepositoryUserBasicDto::validate()
{
}

web::json::value RepositoryUserBasicDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(serviceLicenseStatusIsSet_) {
        val[utility::conversions::to_string_t("service_license_status")] = ModelBase::toJson(serviceLicenseStatus_);
    }
    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }

    return val;
}
bool RepositoryUserBasicDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
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
    return ok;
}


int32_t RepositoryUserBasicDto::getId() const
{
    return id_;
}

void RepositoryUserBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryUserBasicDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryUserBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryUserBasicDto::getName() const
{
    return name_;
}

void RepositoryUserBasicDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryUserBasicDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryUserBasicDto::unsetname()
{
    nameIsSet_ = false;
}

std::string RepositoryUserBasicDto::getUsername() const
{
    return username_;
}

void RepositoryUserBasicDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool RepositoryUserBasicDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void RepositoryUserBasicDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string RepositoryUserBasicDto::getState() const
{
    return state_;
}

void RepositoryUserBasicDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool RepositoryUserBasicDto::stateIsSet() const
{
    return stateIsSet_;
}

void RepositoryUserBasicDto::unsetstate()
{
    stateIsSet_ = false;
}

int32_t RepositoryUserBasicDto::getServiceLicenseStatus() const
{
    return serviceLicenseStatus_;
}

void RepositoryUserBasicDto::setServiceLicenseStatus(int32_t value)
{
    serviceLicenseStatus_ = value;
    serviceLicenseStatusIsSet_ = true;
}

bool RepositoryUserBasicDto::serviceLicenseStatusIsSet() const
{
    return serviceLicenseStatusIsSet_;
}

void RepositoryUserBasicDto::unsetserviceLicenseStatus()
{
    serviceLicenseStatusIsSet_ = false;
}

std::string RepositoryUserBasicDto::getNameCn() const
{
    return nameCn_;
}

void RepositoryUserBasicDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool RepositoryUserBasicDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void RepositoryUserBasicDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string RepositoryUserBasicDto::getNickName() const
{
    return nickName_;
}

void RepositoryUserBasicDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool RepositoryUserBasicDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void RepositoryUserBasicDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string RepositoryUserBasicDto::getTenantName() const
{
    return tenantName_;
}

void RepositoryUserBasicDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool RepositoryUserBasicDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void RepositoryUserBasicDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

}
}
}
}
}


