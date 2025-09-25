

#include "huaweicloud/codehub/v4/model/ApprovalUserDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ApprovalUserDto::ApprovalUserDto()
{
    id_ = 0;
    idIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
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
    tenantName_ = "";
    tenantNameIsSet_ = false;
    approverComment_ = "";
    approverCommentIsSet_ = false;
}

ApprovalUserDto::~ApprovalUserDto() = default;

void ApprovalUserDto::validate()
{
}

web::json::value ApprovalUserDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
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
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(approverCommentIsSet_) {
        val[utility::conversions::to_string_t("approver_comment")] = ModelBase::toJson(approverComment_);
    }

    return val;
}
bool ApprovalUserDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
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


int32_t ApprovalUserDto::getId() const
{
    return id_;
}

void ApprovalUserDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ApprovalUserDto::idIsSet() const
{
    return idIsSet_;
}

void ApprovalUserDto::unsetid()
{
    idIsSet_ = false;
}

std::string ApprovalUserDto::getUsername() const
{
    return username_;
}

void ApprovalUserDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool ApprovalUserDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void ApprovalUserDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string ApprovalUserDto::getName() const
{
    return name_;
}

void ApprovalUserDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApprovalUserDto::nameIsSet() const
{
    return nameIsSet_;
}

void ApprovalUserDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ApprovalUserDto::getNickName() const
{
    return nickName_;
}

void ApprovalUserDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ApprovalUserDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ApprovalUserDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ApprovalUserDto::getNameCn() const
{
    return nameCn_;
}

void ApprovalUserDto::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool ApprovalUserDto::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void ApprovalUserDto::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string ApprovalUserDto::getEmail() const
{
    return email_;
}

void ApprovalUserDto::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ApprovalUserDto::emailIsSet() const
{
    return emailIsSet_;
}

void ApprovalUserDto::unsetemail()
{
    emailIsSet_ = false;
}

std::string ApprovalUserDto::getState() const
{
    return state_;
}

void ApprovalUserDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ApprovalUserDto::stateIsSet() const
{
    return stateIsSet_;
}

void ApprovalUserDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string ApprovalUserDto::getUpdatedAt() const
{
    return updatedAt_;
}

void ApprovalUserDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ApprovalUserDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ApprovalUserDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ApprovalUserDto::getAvatarUrl() const
{
    return avatarUrl_;
}

void ApprovalUserDto::setAvatarUrl(const std::string& value)
{
    avatarUrl_ = value;
    avatarUrlIsSet_ = true;
}

bool ApprovalUserDto::avatarUrlIsSet() const
{
    return avatarUrlIsSet_;
}

void ApprovalUserDto::unsetavatarUrl()
{
    avatarUrlIsSet_ = false;
}

std::string ApprovalUserDto::getTenantName() const
{
    return tenantName_;
}

void ApprovalUserDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool ApprovalUserDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void ApprovalUserDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string ApprovalUserDto::getApproverComment() const
{
    return approverComment_;
}

void ApprovalUserDto::setApproverComment(const std::string& value)
{
    approverComment_ = value;
    approverCommentIsSet_ = true;
}

bool ApprovalUserDto::approverCommentIsSet() const
{
    return approverCommentIsSet_;
}

void ApprovalUserDto::unsetapproverComment()
{
    approverCommentIsSet_ = false;
}

}
}
}
}
}


