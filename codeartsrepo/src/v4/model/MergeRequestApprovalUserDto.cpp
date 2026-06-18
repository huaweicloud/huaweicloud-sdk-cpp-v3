

#include "huaweicloud/codeartsrepo/v4/model/MergeRequestApprovalUserDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MergeRequestApprovalUserDto::MergeRequestApprovalUserDto()
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
    avatarUrl_ = "";
    avatarUrlIsSet_ = false;
    avatarPath_ = "";
    avatarPathIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    nameCn_ = "";
    nameCnIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    hasPermission_ = false;
    hasPermissionIsSet_ = false;
}

MergeRequestApprovalUserDto::~MergeRequestApprovalUserDto() = default;

void MergeRequestApprovalUserDto::validate()
{
}

web::json::value MergeRequestApprovalUserDto::toJson() const
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
    if(avatarUrlIsSet_) {
        val[utility::conversions::to_string_t("avatar_url")] = ModelBase::toJson(avatarUrl_);
    }
    if(avatarPathIsSet_) {
        val[utility::conversions::to_string_t("avatar_path")] = ModelBase::toJson(avatarPath_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(hasPermissionIsSet_) {
        val[utility::conversions::to_string_t("has_permission")] = ModelBase::toJson(hasPermission_);
    }

    return val;
}
bool MergeRequestApprovalUserDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("avatar_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avatar_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvatarUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avatar_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avatar_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvatarPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasPermission(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestApprovalUserDto::getId() const
{
    return id_;
}

void MergeRequestApprovalUserDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestApprovalUserDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestApprovalUserDto::unsetid()
{
    idIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getName() const
{
    return name_;
}

void MergeRequestApprovalUserDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MergeRequestApprovalUserDto::nameIsSet() const
{
    return nameIsSet_;
}

void MergeRequestApprovalUserDto::unsetname()
{
    nameIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getUsername() const
{
    return username_;
}

void MergeRequestApprovalUserDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool MergeRequestApprovalUserDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void MergeRequestApprovalUserDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getState() const
{
    return state_;
}

void MergeRequestApprovalUserDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestApprovalUserDto::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestApprovalUserDto::unsetstate()
{
    stateIsSet_ = false;
}

int32_t MergeRequestApprovalUserDto::getServiceLicenseStatus() const
{
    return serviceLicenseStatus_;
}

void MergeRequestApprovalUserDto::setServiceLicenseStatus(int32_t value)
{
    serviceLicenseStatus_ = value;
    serviceLicenseStatusIsSet_ = true;
}

bool MergeRequestApprovalUserDto::serviceLicenseStatusIsSet() const
{
    return serviceLicenseStatusIsSet_;
}

void MergeRequestApprovalUserDto::unsetserviceLicenseStatus()
{
    serviceLicenseStatusIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void MergeRequestApprovalUserDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool MergeRequestApprovalUserDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void MergeRequestApprovalUserDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getAvatarPath() const
{
    return avatarPath_;
}

void MergeRequestApprovalUserDto::setAvatarPath(const std::string& value)
{
    avatarPath_ = value;
    avatarPathIsSet_ = true;
}

bool MergeRequestApprovalUserDto::avatarPathIsSet() const
{
    return avatarPathIsSet_;
}

void MergeRequestApprovalUserDto::unsetavatarPath()
{
    avatarPathIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getEmail() const
{
    return email_;
}

void MergeRequestApprovalUserDto::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool MergeRequestApprovalUserDto::emailIsSet() const
{
    return emailIsSet_;
}

void MergeRequestApprovalUserDto::unsetemail()
{
    emailIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getNameCn() const
{
    return nameCn_;
}

void MergeRequestApprovalUserDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool MergeRequestApprovalUserDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void MergeRequestApprovalUserDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getWebUrl() const
{
    return webUrl_;
}

void MergeRequestApprovalUserDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool MergeRequestApprovalUserDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void MergeRequestApprovalUserDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getNickName() const
{
    return nickName_;
}

void MergeRequestApprovalUserDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool MergeRequestApprovalUserDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void MergeRequestApprovalUserDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getTenantName() const
{
    return tenantName_;
}

void MergeRequestApprovalUserDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool MergeRequestApprovalUserDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void MergeRequestApprovalUserDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string MergeRequestApprovalUserDto::getErrorMessage() const
{
    return errorMessage_;
}

void MergeRequestApprovalUserDto::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool MergeRequestApprovalUserDto::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void MergeRequestApprovalUserDto::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

bool MergeRequestApprovalUserDto::isHasPermission() const
{
    return hasPermission_;
}

void MergeRequestApprovalUserDto::setHasPermission(bool value)
{
    hasPermission_ = value;
    hasPermissionIsSet_ = true;
}

bool MergeRequestApprovalUserDto::hasPermissionIsSet() const
{
    return hasPermissionIsSet_;
}

void MergeRequestApprovalUserDto::unsethasPermission()
{
    hasPermissionIsSet_ = false;
}

}
}
}
}
}


