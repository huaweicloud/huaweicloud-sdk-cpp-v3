

#include "huaweicloud/cloudtest/v1/model/ShowIfUserNameRepeatRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIfUserNameRepeatRequest::ShowIfUserNameRepeatRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

ShowIfUserNameRepeatRequest::~ShowIfUserNameRepeatRequest() = default;

void ShowIfUserNameRepeatRequest::validate()
{
}

web::json::value ShowIfUserNameRepeatRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("userName")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool ShowIfUserNameRepeatRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string ShowIfUserNameRepeatRequest::getServiceId() const
{
    return serviceId_;
}

void ShowIfUserNameRepeatRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowIfUserNameRepeatRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowIfUserNameRepeatRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowIfUserNameRepeatRequest::getUserId() const
{
    return userId_;
}

void ShowIfUserNameRepeatRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowIfUserNameRepeatRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowIfUserNameRepeatRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowIfUserNameRepeatRequest::getUserName() const
{
    return userName_;
}

void ShowIfUserNameRepeatRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowIfUserNameRepeatRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowIfUserNameRepeatRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


