

#include "huaweicloud/meeting/v1/model/InterpreterInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




InterpreterInfo::InterpreterInfo()
{
    loginAccount_ = "";
    loginAccountIsSet_ = false;
    userID_ = "";
    userIDIsSet_ = false;
    callNumber_ = "";
    callNumberIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    interpreterId_ = "";
    interpreterIdIsSet_ = false;
    interpreterType_ = "";
    interpreterTypeIsSet_ = false;
    aiDigitalInfoIsSet_ = false;
}

InterpreterInfo::~InterpreterInfo() = default;

void InterpreterInfo::validate()
{
}

web::json::value InterpreterInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(loginAccountIsSet_) {
        val[utility::conversions::to_string_t("loginAccount")] = ModelBase::toJson(loginAccount_);
    }
    if(userIDIsSet_) {
        val[utility::conversions::to_string_t("userID")] = ModelBase::toJson(userID_);
    }
    if(callNumberIsSet_) {
        val[utility::conversions::to_string_t("callNumber")] = ModelBase::toJson(callNumber_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(interpreterIdIsSet_) {
        val[utility::conversions::to_string_t("interpreterId")] = ModelBase::toJson(interpreterId_);
    }
    if(interpreterTypeIsSet_) {
        val[utility::conversions::to_string_t("interpreterType")] = ModelBase::toJson(interpreterType_);
    }
    if(aiDigitalInfoIsSet_) {
        val[utility::conversions::to_string_t("aiDigitalInfo")] = ModelBase::toJson(aiDigitalInfo_);
    }

    return val;
}
bool InterpreterInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("loginAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("loginAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoginAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("interpreterId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interpreterId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterpreterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interpreterType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interpreterType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterpreterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aiDigitalInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aiDigitalInfo"));
        if(!fieldValue.is_null())
        {
            InterpreterAiDigitalInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAiDigitalInfo(refVal);
        }
    }
    return ok;
}


std::string InterpreterInfo::getLoginAccount() const
{
    return loginAccount_;
}

void InterpreterInfo::setLoginAccount(const std::string& value)
{
    loginAccount_ = value;
    loginAccountIsSet_ = true;
}

bool InterpreterInfo::loginAccountIsSet() const
{
    return loginAccountIsSet_;
}

void InterpreterInfo::unsetloginAccount()
{
    loginAccountIsSet_ = false;
}

std::string InterpreterInfo::getUserID() const
{
    return userID_;
}

void InterpreterInfo::setUserID(const std::string& value)
{
    userID_ = value;
    userIDIsSet_ = true;
}

bool InterpreterInfo::userIDIsSet() const
{
    return userIDIsSet_;
}

void InterpreterInfo::unsetuserID()
{
    userIDIsSet_ = false;
}

std::string InterpreterInfo::getCallNumber() const
{
    return callNumber_;
}

void InterpreterInfo::setCallNumber(const std::string& value)
{
    callNumber_ = value;
    callNumberIsSet_ = true;
}

bool InterpreterInfo::callNumberIsSet() const
{
    return callNumberIsSet_;
}

void InterpreterInfo::unsetcallNumber()
{
    callNumberIsSet_ = false;
}

std::string InterpreterInfo::getName() const
{
    return name_;
}

void InterpreterInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InterpreterInfo::nameIsSet() const
{
    return nameIsSet_;
}

void InterpreterInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string InterpreterInfo::getInterpreterId() const
{
    return interpreterId_;
}

void InterpreterInfo::setInterpreterId(const std::string& value)
{
    interpreterId_ = value;
    interpreterIdIsSet_ = true;
}

bool InterpreterInfo::interpreterIdIsSet() const
{
    return interpreterIdIsSet_;
}

void InterpreterInfo::unsetinterpreterId()
{
    interpreterIdIsSet_ = false;
}

std::string InterpreterInfo::getInterpreterType() const
{
    return interpreterType_;
}

void InterpreterInfo::setInterpreterType(const std::string& value)
{
    interpreterType_ = value;
    interpreterTypeIsSet_ = true;
}

bool InterpreterInfo::interpreterTypeIsSet() const
{
    return interpreterTypeIsSet_;
}

void InterpreterInfo::unsetinterpreterType()
{
    interpreterTypeIsSet_ = false;
}

InterpreterAiDigitalInfo InterpreterInfo::getAiDigitalInfo() const
{
    return aiDigitalInfo_;
}

void InterpreterInfo::setAiDigitalInfo(const InterpreterAiDigitalInfo& value)
{
    aiDigitalInfo_ = value;
    aiDigitalInfoIsSet_ = true;
}

bool InterpreterInfo::aiDigitalInfoIsSet() const
{
    return aiDigitalInfoIsSet_;
}

void InterpreterInfo::unsetaiDigitalInfo()
{
    aiDigitalInfoIsSet_ = false;
}

}
}
}
}
}


