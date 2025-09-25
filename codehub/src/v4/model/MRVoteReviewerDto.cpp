

#include "huaweicloud/codehub/v4/model/MRVoteReviewerDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MRVoteReviewerDto::MRVoteReviewerDto()
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
    isCommitter_ = false;
    isCommitterIsSet_ = false;
    isVerified_ = false;
    isVerifiedIsSet_ = false;
    hasPermission_ = false;
    hasPermissionIsSet_ = false;
}

MRVoteReviewerDto::~MRVoteReviewerDto() = default;

void MRVoteReviewerDto::validate()
{
}

web::json::value MRVoteReviewerDto::toJson() const
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
    if(isCommitterIsSet_) {
        val[utility::conversions::to_string_t("is_committer")] = ModelBase::toJson(isCommitter_);
    }
    if(isVerifiedIsSet_) {
        val[utility::conversions::to_string_t("is_verified")] = ModelBase::toJson(isVerified_);
    }
    if(hasPermissionIsSet_) {
        val[utility::conversions::to_string_t("has_permission")] = ModelBase::toJson(hasPermission_);
    }

    return val;
}
bool MRVoteReviewerDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_committer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_committer"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCommitter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_verified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_verified"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsVerified(refVal);
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


int32_t MRVoteReviewerDto::getId() const
{
    return id_;
}

void MRVoteReviewerDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MRVoteReviewerDto::idIsSet() const
{
    return idIsSet_;
}

void MRVoteReviewerDto::unsetid()
{
    idIsSet_ = false;
}

std::string MRVoteReviewerDto::getName() const
{
    return name_;
}

void MRVoteReviewerDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MRVoteReviewerDto::nameIsSet() const
{
    return nameIsSet_;
}

void MRVoteReviewerDto::unsetname()
{
    nameIsSet_ = false;
}

std::string MRVoteReviewerDto::getUsername() const
{
    return username_;
}

void MRVoteReviewerDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool MRVoteReviewerDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void MRVoteReviewerDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string MRVoteReviewerDto::getState() const
{
    return state_;
}

void MRVoteReviewerDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MRVoteReviewerDto::stateIsSet() const
{
    return stateIsSet_;
}

void MRVoteReviewerDto::unsetstate()
{
    stateIsSet_ = false;
}

int32_t MRVoteReviewerDto::getServiceLicenseStatus() const
{
    return serviceLicenseStatus_;
}

void MRVoteReviewerDto::setServiceLicenseStatus(int32_t value)
{
    serviceLicenseStatus_ = value;
    serviceLicenseStatusIsSet_ = true;
}

bool MRVoteReviewerDto::serviceLicenseStatusIsSet() const
{
    return serviceLicenseStatusIsSet_;
}

void MRVoteReviewerDto::unsetserviceLicenseStatus()
{
    serviceLicenseStatusIsSet_ = false;
}

std::string MRVoteReviewerDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void MRVoteReviewerDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool MRVoteReviewerDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void MRVoteReviewerDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string MRVoteReviewerDto::getAvatarPath() const
{
    return avatarPath_;
}

void MRVoteReviewerDto::setAvatarPath(const std::string& value)
{
    avatarPath_ = value;
    avatarPathIsSet_ = true;
}

bool MRVoteReviewerDto::avatarPathIsSet() const
{
    return avatarPathIsSet_;
}

void MRVoteReviewerDto::unsetavatarPath()
{
    avatarPathIsSet_ = false;
}

std::string MRVoteReviewerDto::getEmail() const
{
    return email_;
}

void MRVoteReviewerDto::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool MRVoteReviewerDto::emailIsSet() const
{
    return emailIsSet_;
}

void MRVoteReviewerDto::unsetemail()
{
    emailIsSet_ = false;
}

std::string MRVoteReviewerDto::getNameCn() const
{
    return nameCn_;
}

void MRVoteReviewerDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool MRVoteReviewerDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void MRVoteReviewerDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string MRVoteReviewerDto::getWebUrl() const
{
    return webUrl_;
}

void MRVoteReviewerDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool MRVoteReviewerDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void MRVoteReviewerDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string MRVoteReviewerDto::getNickName() const
{
    return nickName_;
}

void MRVoteReviewerDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool MRVoteReviewerDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void MRVoteReviewerDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string MRVoteReviewerDto::getTenantName() const
{
    return tenantName_;
}

void MRVoteReviewerDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool MRVoteReviewerDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void MRVoteReviewerDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string MRVoteReviewerDto::getErrorMessage() const
{
    return errorMessage_;
}

void MRVoteReviewerDto::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool MRVoteReviewerDto::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void MRVoteReviewerDto::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

bool MRVoteReviewerDto::isIsCommitter() const
{
    return isCommitter_;
}

void MRVoteReviewerDto::setIsCommitter(bool value)
{
    isCommitter_ = value;
    isCommitterIsSet_ = true;
}

bool MRVoteReviewerDto::isCommitterIsSet() const
{
    return isCommitterIsSet_;
}

void MRVoteReviewerDto::unsetisCommitter()
{
    isCommitterIsSet_ = false;
}

bool MRVoteReviewerDto::isIsVerified() const
{
    return isVerified_;
}

void MRVoteReviewerDto::setIsVerified(bool value)
{
    isVerified_ = value;
    isVerifiedIsSet_ = true;
}

bool MRVoteReviewerDto::isVerifiedIsSet() const
{
    return isVerifiedIsSet_;
}

void MRVoteReviewerDto::unsetisVerified()
{
    isVerifiedIsSet_ = false;
}

bool MRVoteReviewerDto::isHasPermission() const
{
    return hasPermission_;
}

void MRVoteReviewerDto::setHasPermission(bool value)
{
    hasPermission_ = value;
    hasPermissionIsSet_ = true;
}

bool MRVoteReviewerDto::hasPermissionIsSet() const
{
    return hasPermissionIsSet_;
}

void MRVoteReviewerDto::unsethasPermission()
{
    hasPermissionIsSet_ = false;
}

}
}
}
}
}


