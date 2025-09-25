

#include "huaweicloud/codehub/v4/model/CreateRepositoryMemberResponseDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateRepositoryMemberResponseDto::CreateRepositoryMemberResponseDto()
{
    userIamId_ = "";
    userIamIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    userNickName_ = "";
    userNickNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

CreateRepositoryMemberResponseDto::~CreateRepositoryMemberResponseDto() = default;

void CreateRepositoryMemberResponseDto::validate()
{
}

web::json::value CreateRepositoryMemberResponseDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIamIdIsSet_) {
        val[utility::conversions::to_string_t("user_iam_id")] = ModelBase::toJson(userIamId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(userNickNameIsSet_) {
        val[utility::conversions::to_string_t("user_nick_name")] = ModelBase::toJson(userNickName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool CreateRepositoryMemberResponseDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_iam_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_iam_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserIamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string CreateRepositoryMemberResponseDto::getUserIamId() const
{
    return userIamId_;
}

void CreateRepositoryMemberResponseDto::setUserIamId(const std::string& value)
{
    userIamId_ = value;
    userIamIdIsSet_ = true;
}

bool CreateRepositoryMemberResponseDto::userIamIdIsSet() const
{
    return userIamIdIsSet_;
}

void CreateRepositoryMemberResponseDto::unsetuserIamId()
{
    userIamIdIsSet_ = false;
}

std::string CreateRepositoryMemberResponseDto::getUserName() const
{
    return userName_;
}

void CreateRepositoryMemberResponseDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateRepositoryMemberResponseDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateRepositoryMemberResponseDto::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CreateRepositoryMemberResponseDto::getTenantName() const
{
    return tenantName_;
}

void CreateRepositoryMemberResponseDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool CreateRepositoryMemberResponseDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void CreateRepositoryMemberResponseDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string CreateRepositoryMemberResponseDto::getUserNickName() const
{
    return userNickName_;
}

void CreateRepositoryMemberResponseDto::setUserNickName(const std::string& value)
{
    userNickName_ = value;
    userNickNameIsSet_ = true;
}

bool CreateRepositoryMemberResponseDto::userNickNameIsSet() const
{
    return userNickNameIsSet_;
}

void CreateRepositoryMemberResponseDto::unsetuserNickName()
{
    userNickNameIsSet_ = false;
}

std::string CreateRepositoryMemberResponseDto::getStatus() const
{
    return status_;
}

void CreateRepositoryMemberResponseDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateRepositoryMemberResponseDto::statusIsSet() const
{
    return statusIsSet_;
}

void CreateRepositoryMemberResponseDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateRepositoryMemberResponseDto::getMessage() const
{
    return message_;
}

void CreateRepositoryMemberResponseDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateRepositoryMemberResponseDto::messageIsSet() const
{
    return messageIsSet_;
}

void CreateRepositoryMemberResponseDto::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


