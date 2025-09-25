

#include "huaweicloud/codehub/v4/model/MergeRequestVoteReviewerDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeRequestVoteReviewerDto::MergeRequestVoteReviewerDto()
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
}

MergeRequestVoteReviewerDto::~MergeRequestVoteReviewerDto() = default;

void MergeRequestVoteReviewerDto::validate()
{
}

web::json::value MergeRequestVoteReviewerDto::toJson() const
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

    return val;
}
bool MergeRequestVoteReviewerDto::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t MergeRequestVoteReviewerDto::getId() const
{
    return id_;
}

void MergeRequestVoteReviewerDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestVoteReviewerDto::unsetid()
{
    idIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getName() const
{
    return name_;
}

void MergeRequestVoteReviewerDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::nameIsSet() const
{
    return nameIsSet_;
}

void MergeRequestVoteReviewerDto::unsetname()
{
    nameIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getUsername() const
{
    return username_;
}

void MergeRequestVoteReviewerDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void MergeRequestVoteReviewerDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getState() const
{
    return state_;
}

void MergeRequestVoteReviewerDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestVoteReviewerDto::unsetstate()
{
    stateIsSet_ = false;
}

int32_t MergeRequestVoteReviewerDto::getServiceLicenseStatus() const
{
    return serviceLicenseStatus_;
}

void MergeRequestVoteReviewerDto::setServiceLicenseStatus(int32_t value)
{
    serviceLicenseStatus_ = value;
    serviceLicenseStatusIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::serviceLicenseStatusIsSet() const
{
    return serviceLicenseStatusIsSet_;
}

void MergeRequestVoteReviewerDto::unsetserviceLicenseStatus()
{
    serviceLicenseStatusIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void MergeRequestVoteReviewerDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void MergeRequestVoteReviewerDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getAvatarPath() const
{
    return avatarPath_;
}

void MergeRequestVoteReviewerDto::setAvatarPath(const std::string& value)
{
    avatarPath_ = value;
    avatarPathIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::avatarPathIsSet() const
{
    return avatarPathIsSet_;
}

void MergeRequestVoteReviewerDto::unsetavatarPath()
{
    avatarPathIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getEmail() const
{
    return email_;
}

void MergeRequestVoteReviewerDto::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::emailIsSet() const
{
    return emailIsSet_;
}

void MergeRequestVoteReviewerDto::unsetemail()
{
    emailIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getNameCn() const
{
    return nameCn_;
}

void MergeRequestVoteReviewerDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void MergeRequestVoteReviewerDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getWebUrl() const
{
    return webUrl_;
}

void MergeRequestVoteReviewerDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void MergeRequestVoteReviewerDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getNickName() const
{
    return nickName_;
}

void MergeRequestVoteReviewerDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void MergeRequestVoteReviewerDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getTenantName() const
{
    return tenantName_;
}

void MergeRequestVoteReviewerDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void MergeRequestVoteReviewerDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string MergeRequestVoteReviewerDto::getErrorMessage() const
{
    return errorMessage_;
}

void MergeRequestVoteReviewerDto::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void MergeRequestVoteReviewerDto::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

bool MergeRequestVoteReviewerDto::isIsCommitter() const
{
    return isCommitter_;
}

void MergeRequestVoteReviewerDto::setIsCommitter(bool value)
{
    isCommitter_ = value;
    isCommitterIsSet_ = true;
}

bool MergeRequestVoteReviewerDto::isCommitterIsSet() const
{
    return isCommitterIsSet_;
}

void MergeRequestVoteReviewerDto::unsetisCommitter()
{
    isCommitterIsSet_ = false;
}

}
}
}
}
}


