

#include "huaweicloud/codeartsrepo/v4/model/ManagementUserDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ManagementUserDto::ManagementUserDto()
{
    name_ = "";
    nameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
}

ManagementUserDto::~ManagementUserDto() = default;

void ManagementUserDto::validate()
{
}

web::json::value ManagementUserDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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

    return val;
}
bool ManagementUserDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ManagementUserDto::getName() const
{
    return name_;
}

void ManagementUserDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ManagementUserDto::nameIsSet() const
{
    return nameIsSet_;
}

void ManagementUserDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ManagementUserDto::getUsername() const
{
    return username_;
}

void ManagementUserDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool ManagementUserDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void ManagementUserDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string ManagementUserDto::getNickName() const
{
    return nickName_;
}

void ManagementUserDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ManagementUserDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ManagementUserDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ManagementUserDto::getTenantName() const
{
    return tenantName_;
}

void ManagementUserDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool ManagementUserDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void ManagementUserDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

}
}
}
}
}


