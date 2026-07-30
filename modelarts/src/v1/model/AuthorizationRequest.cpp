

#include "huaweicloud/modelarts/v1/model/AuthorizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AuthorizationRequest::AuthorizationRequest()
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
}

AuthorizationRequest::~AuthorizationRequest() = default;

void AuthorizationRequest::validate()
{
}

web::json::value AuthorizationRequest::toJson() const
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

    return val;
}
bool AuthorizationRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AuthorizationRequest::getUserId() const
{
    return userId_;
}

void AuthorizationRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool AuthorizationRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void AuthorizationRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string AuthorizationRequest::getType() const
{
    return type_;
}

void AuthorizationRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AuthorizationRequest::typeIsSet() const
{
    return typeIsSet_;
}

void AuthorizationRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string AuthorizationRequest::getContent() const
{
    return content_;
}

void AuthorizationRequest::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool AuthorizationRequest::contentIsSet() const
{
    return contentIsSet_;
}

void AuthorizationRequest::unsetcontent()
{
    contentIsSet_ = false;
}

std::string AuthorizationRequest::getSecretKey() const
{
    return secretKey_;
}

void AuthorizationRequest::setSecretKey(const std::string& value)
{
    secretKey_ = value;
    secretKeyIsSet_ = true;
}

bool AuthorizationRequest::secretKeyIsSet() const
{
    return secretKeyIsSet_;
}

void AuthorizationRequest::unsetsecretKey()
{
    secretKeyIsSet_ = false;
}

std::string AuthorizationRequest::getUserName() const
{
    return userName_;
}

void AuthorizationRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool AuthorizationRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void AuthorizationRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string AuthorizationRequest::getUserType() const
{
    return userType_;
}

void AuthorizationRequest::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool AuthorizationRequest::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void AuthorizationRequest::unsetuserType()
{
    userTypeIsSet_ = false;
}

}
}
}
}
}


