

#include "huaweicloud/projectman/v4/model/IterationHistory_operator.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IterationHistory_operator::IterationHistory_operator()
{
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
}

IterationHistory_operator::~IterationHistory_operator() = default;

void IterationHistory_operator::validate()
{
}

web::json::value IterationHistory_operator::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool IterationHistory_operator::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    return ok;
}


std::string IterationHistory_operator::getUserId() const
{
    return userId_;
}

void IterationHistory_operator::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool IterationHistory_operator::userIdIsSet() const
{
    return userIdIsSet_;
}

void IterationHistory_operator::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string IterationHistory_operator::getUserName() const
{
    return userName_;
}

void IterationHistory_operator::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool IterationHistory_operator::userNameIsSet() const
{
    return userNameIsSet_;
}

void IterationHistory_operator::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string IterationHistory_operator::getNickName() const
{
    return nickName_;
}

void IterationHistory_operator::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool IterationHistory_operator::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void IterationHistory_operator::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string IterationHistory_operator::getDomainId() const
{
    return domainId_;
}

void IterationHistory_operator::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool IterationHistory_operator::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void IterationHistory_operator::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string IterationHistory_operator::getDomainName() const
{
    return domainName_;
}

void IterationHistory_operator::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool IterationHistory_operator::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void IterationHistory_operator::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


