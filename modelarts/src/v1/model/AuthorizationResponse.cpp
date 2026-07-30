

#include "huaweicloud/modelarts/v1/model/AuthorizationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AuthorizationResponse::AuthorizationResponse()
{
    userId_ = "";
    userIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    secretKey_ = "";
    secretKeyIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userType_ = "";
    userTypeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

AuthorizationResponse::~AuthorizationResponse() = default;

void AuthorizationResponse::validate()
{
}

web::json::value AuthorizationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(secretKeyIsSet_) {
        val[utility::conversions::to_string_t("secret_key")] = ModelBase::toJson(secretKey_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("user_type")] = ModelBase::toJson(userType_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool AuthorizationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string AuthorizationResponse::getUserId() const
{
    return userId_;
}

void AuthorizationResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool AuthorizationResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void AuthorizationResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string AuthorizationResponse::getType() const
{
    return type_;
}

void AuthorizationResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AuthorizationResponse::typeIsSet() const
{
    return typeIsSet_;
}

void AuthorizationResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string AuthorizationResponse::getContent() const
{
    return content_;
}

void AuthorizationResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool AuthorizationResponse::contentIsSet() const
{
    return contentIsSet_;
}

void AuthorizationResponse::unsetcontent()
{
    contentIsSet_ = false;
}

std::string AuthorizationResponse::getSecretKey() const
{
    return secretKey_;
}

void AuthorizationResponse::setSecretKey(const std::string& value)
{
    secretKey_ = value;
    secretKeyIsSet_ = true;
}

bool AuthorizationResponse::secretKeyIsSet() const
{
    return secretKeyIsSet_;
}

void AuthorizationResponse::unsetsecretKey()
{
    secretKeyIsSet_ = false;
}

std::string AuthorizationResponse::getUserName() const
{
    return userName_;
}

void AuthorizationResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool AuthorizationResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void AuthorizationResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string AuthorizationResponse::getUserType() const
{
    return userType_;
}

void AuthorizationResponse::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool AuthorizationResponse::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void AuthorizationResponse::unsetuserType()
{
    userTypeIsSet_ = false;
}

int64_t AuthorizationResponse::getCreateTime() const
{
    return createTime_;
}

void AuthorizationResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AuthorizationResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AuthorizationResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


