

#include "huaweicloud/meeting/v1/model/SlideVerifyCodeCheckDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SlideVerifyCodeCheckDTO::SlideVerifyCodeCheckDTO()
{
    user_ = "";
    userIsSet_ = false;
    clientType_ = 0;
    clientTypeIsSet_ = false;
    checkType_ = 0;
    checkTypeIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
    pointX_ = 0;
    pointXIsSet_ = false;
    slideTime_ = 0;
    slideTimeIsSet_ = false;
}

SlideVerifyCodeCheckDTO::~SlideVerifyCodeCheckDTO() = default;

void SlideVerifyCodeCheckDTO::validate()
{
}

web::json::value SlideVerifyCodeCheckDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(clientTypeIsSet_) {
        val[utility::conversions::to_string_t("clientType")] = ModelBase::toJson(clientType_);
    }
    if(checkTypeIsSet_) {
        val[utility::conversions::to_string_t("checkType")] = ModelBase::toJson(checkType_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(pointXIsSet_) {
        val[utility::conversions::to_string_t("pointX")] = ModelBase::toJson(pointX_);
    }
    if(slideTimeIsSet_) {
        val[utility::conversions::to_string_t("slideTime")] = ModelBase::toJson(slideTime_);
    }

    return val;
}
bool SlideVerifyCodeCheckDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clientType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checkType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pointX"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pointX"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPointX(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slideTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slideTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlideTime(refVal);
        }
    }
    return ok;
}


std::string SlideVerifyCodeCheckDTO::getUser() const
{
    return user_;
}

void SlideVerifyCodeCheckDTO::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool SlideVerifyCodeCheckDTO::userIsSet() const
{
    return userIsSet_;
}

void SlideVerifyCodeCheckDTO::unsetuser()
{
    userIsSet_ = false;
}

int32_t SlideVerifyCodeCheckDTO::getClientType() const
{
    return clientType_;
}

void SlideVerifyCodeCheckDTO::setClientType(int32_t value)
{
    clientType_ = value;
    clientTypeIsSet_ = true;
}

bool SlideVerifyCodeCheckDTO::clientTypeIsSet() const
{
    return clientTypeIsSet_;
}

void SlideVerifyCodeCheckDTO::unsetclientType()
{
    clientTypeIsSet_ = false;
}

int32_t SlideVerifyCodeCheckDTO::getCheckType() const
{
    return checkType_;
}

void SlideVerifyCodeCheckDTO::setCheckType(int32_t value)
{
    checkType_ = value;
    checkTypeIsSet_ = true;
}

bool SlideVerifyCodeCheckDTO::checkTypeIsSet() const
{
    return checkTypeIsSet_;
}

void SlideVerifyCodeCheckDTO::unsetcheckType()
{
    checkTypeIsSet_ = false;
}

std::string SlideVerifyCodeCheckDTO::getToken() const
{
    return token_;
}

void SlideVerifyCodeCheckDTO::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool SlideVerifyCodeCheckDTO::tokenIsSet() const
{
    return tokenIsSet_;
}

void SlideVerifyCodeCheckDTO::unsettoken()
{
    tokenIsSet_ = false;
}

int32_t SlideVerifyCodeCheckDTO::getPointX() const
{
    return pointX_;
}

void SlideVerifyCodeCheckDTO::setPointX(int32_t value)
{
    pointX_ = value;
    pointXIsSet_ = true;
}

bool SlideVerifyCodeCheckDTO::pointXIsSet() const
{
    return pointXIsSet_;
}

void SlideVerifyCodeCheckDTO::unsetpointX()
{
    pointXIsSet_ = false;
}

int32_t SlideVerifyCodeCheckDTO::getSlideTime() const
{
    return slideTime_;
}

void SlideVerifyCodeCheckDTO::setSlideTime(int32_t value)
{
    slideTime_ = value;
    slideTimeIsSet_ = true;
}

bool SlideVerifyCodeCheckDTO::slideTimeIsSet() const
{
    return slideTimeIsSet_;
}

void SlideVerifyCodeCheckDTO::unsetslideTime()
{
    slideTimeIsSet_ = false;
}

}
}
}
}
}


