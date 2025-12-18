

#include "huaweicloud/meeting/v1/model/SlideVerifyCodeSendDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SlideVerifyCodeSendDTO::SlideVerifyCodeSendDTO()
{
    user_ = "";
    userIsSet_ = false;
    clientType_ = 0;
    clientTypeIsSet_ = false;
    checkType_ = 0;
    checkTypeIsSet_ = false;
}

SlideVerifyCodeSendDTO::~SlideVerifyCodeSendDTO() = default;

void SlideVerifyCodeSendDTO::validate()
{
}

web::json::value SlideVerifyCodeSendDTO::toJson() const
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

    return val;
}
bool SlideVerifyCodeSendDTO::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SlideVerifyCodeSendDTO::getUser() const
{
    return user_;
}

void SlideVerifyCodeSendDTO::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool SlideVerifyCodeSendDTO::userIsSet() const
{
    return userIsSet_;
}

void SlideVerifyCodeSendDTO::unsetuser()
{
    userIsSet_ = false;
}

int32_t SlideVerifyCodeSendDTO::getClientType() const
{
    return clientType_;
}

void SlideVerifyCodeSendDTO::setClientType(int32_t value)
{
    clientType_ = value;
    clientTypeIsSet_ = true;
}

bool SlideVerifyCodeSendDTO::clientTypeIsSet() const
{
    return clientTypeIsSet_;
}

void SlideVerifyCodeSendDTO::unsetclientType()
{
    clientTypeIsSet_ = false;
}

int32_t SlideVerifyCodeSendDTO::getCheckType() const
{
    return checkType_;
}

void SlideVerifyCodeSendDTO::setCheckType(int32_t value)
{
    checkType_ = value;
    checkTypeIsSet_ = true;
}

bool SlideVerifyCodeSendDTO::checkTypeIsSet() const
{
    return checkTypeIsSet_;
}

void SlideVerifyCodeSendDTO::unsetcheckType()
{
    checkTypeIsSet_ = false;
}

}
}
}
}
}


