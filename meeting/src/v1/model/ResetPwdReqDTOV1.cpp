

#include "huaweicloud/meeting/v1/model/ResetPwdReqDTOV1.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResetPwdReqDTOV1::ResetPwdReqDTOV1()
{
    user_ = "";
    userIsSet_ = false;
    newPwd_ = "";
    newPwdIsSet_ = false;
    passWordType_ = 0;
    passWordTypeIsSet_ = false;
}

ResetPwdReqDTOV1::~ResetPwdReqDTOV1() = default;

void ResetPwdReqDTOV1::validate()
{
}

web::json::value ResetPwdReqDTOV1::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(newPwdIsSet_) {
        val[utility::conversions::to_string_t("newPwd")] = ModelBase::toJson(newPwd_);
    }
    if(passWordTypeIsSet_) {
        val[utility::conversions::to_string_t("passWordType")] = ModelBase::toJson(passWordType_);
    }

    return val;
}
bool ResetPwdReqDTOV1::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("newPwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newPwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("passWordType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passWordType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassWordType(refVal);
        }
    }
    return ok;
}


std::string ResetPwdReqDTOV1::getUser() const
{
    return user_;
}

void ResetPwdReqDTOV1::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool ResetPwdReqDTOV1::userIsSet() const
{
    return userIsSet_;
}

void ResetPwdReqDTOV1::unsetuser()
{
    userIsSet_ = false;
}

std::string ResetPwdReqDTOV1::getNewPwd() const
{
    return newPwd_;
}

void ResetPwdReqDTOV1::setNewPwd(const std::string& value)
{
    newPwd_ = value;
    newPwdIsSet_ = true;
}

bool ResetPwdReqDTOV1::newPwdIsSet() const
{
    return newPwdIsSet_;
}

void ResetPwdReqDTOV1::unsetnewPwd()
{
    newPwdIsSet_ = false;
}

int32_t ResetPwdReqDTOV1::getPassWordType() const
{
    return passWordType_;
}

void ResetPwdReqDTOV1::setPassWordType(int32_t value)
{
    passWordType_ = value;
    passWordTypeIsSet_ = true;
}

bool ResetPwdReqDTOV1::passWordTypeIsSet() const
{
    return passWordTypeIsSet_;
}

void ResetPwdReqDTOV1::unsetpassWordType()
{
    passWordTypeIsSet_ = false;
}

}
}
}
}
}


