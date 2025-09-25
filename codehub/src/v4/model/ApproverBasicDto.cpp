

#include "huaweicloud/codehub/v4/model/ApproverBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ApproverBasicDto::ApproverBasicDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    nameCn_ = "";
    nameCnIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    avatarUrl_ = "";
    avatarUrlIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    approverComment_ = "";
    approverCommentIsSet_ = false;
}

ApproverBasicDto::~ApproverBasicDto() = default;

void ApproverBasicDto::validate()
{
}

web::json::value ApproverBasicDto::toJson() const
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
    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(avatarUrlIsSet_) {
        val[utility::conversions::to_string_t("avatar_url")] = ModelBase::toJson(avatarUrl_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(approverCommentIsSet_) {
        val[utility::conversions::to_string_t("approver_comment")] = ModelBase::toJson(approverComment_);
    }

    return val;
}
bool ApproverBasicDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("approver_comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approver_comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApproverComment(refVal);
        }
    }
    return ok;
}


int32_t ApproverBasicDto::getId() const
{
    return id_;
}

void ApproverBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ApproverBasicDto::idIsSet() const
{
    return idIsSet_;
}

void ApproverBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string ApproverBasicDto::getName() const
{
    return name_;
}

void ApproverBasicDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApproverBasicDto::nameIsSet() const
{
    return nameIsSet_;
}

void ApproverBasicDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ApproverBasicDto::getUsername() const
{
    return username_;
}

void ApproverBasicDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool ApproverBasicDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void ApproverBasicDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string ApproverBasicDto::getNameCn() const
{
    return nameCn_;
}

void ApproverBasicDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool ApproverBasicDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void ApproverBasicDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string ApproverBasicDto::getEmail() const
{
    return email_;
}

void ApproverBasicDto::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ApproverBasicDto::emailIsSet() const
{
    return emailIsSet_;
}

void ApproverBasicDto::unsetemail()
{
    emailIsSet_ = false;
}

std::string ApproverBasicDto::getState() const
{
    return state_;
}

void ApproverBasicDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ApproverBasicDto::stateIsSet() const
{
    return stateIsSet_;
}

void ApproverBasicDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string ApproverBasicDto::getUpdatedAt() const
{
    return updatedAt_;
}

void ApproverBasicDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ApproverBasicDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ApproverBasicDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ApproverBasicDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void ApproverBasicDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool ApproverBasicDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void ApproverBasicDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string ApproverBasicDto::getNickName() const
{
    return nickName_;
}

void ApproverBasicDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ApproverBasicDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ApproverBasicDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ApproverBasicDto::getTenantName() const
{
    return tenantName_;
}

void ApproverBasicDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool ApproverBasicDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void ApproverBasicDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string ApproverBasicDto::getApproverComment() const
{
    return approverComment_;
}

void ApproverBasicDto::setApproverComment(const std::string& value)
{
    approverComment_ = value;
    approverCommentIsSet_ = true;
}

bool ApproverBasicDto::approverCommentIsSet() const
{
    return approverCommentIsSet_;
}

void ApproverBasicDto::unsetapproverComment()
{
    approverCommentIsSet_ = false;
}

}
}
}
}
}


