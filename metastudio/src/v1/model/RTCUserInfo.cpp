

#include "huaweicloud/metastudio/v1/model/RTCUserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RTCUserInfo::RTCUserInfo()
{
    userType_ = "";
    userTypeIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    signature_ = "";
    signatureIsSet_ = false;
    ctime_ = 0L;
    ctimeIsSet_ = false;
}

RTCUserInfo::~RTCUserInfo() = default;

void RTCUserInfo::validate()
{
}

web::json::value RTCUserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("user_type")] = ModelBase::toJson(userType_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(signatureIsSet_) {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(signature_);
    }
    if(ctimeIsSet_) {
        val[utility::conversions::to_string_t("ctime")] = ModelBase::toJson(ctime_);
    }

    return val;
}
bool RTCUserInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ctime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ctime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCtime(refVal);
        }
    }
    return ok;
}


std::string RTCUserInfo::getUserType() const
{
    return userType_;
}

void RTCUserInfo::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool RTCUserInfo::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void RTCUserInfo::unsetuserType()
{
    userTypeIsSet_ = false;
}

std::string RTCUserInfo::getUserId() const
{
    return userId_;
}

void RTCUserInfo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RTCUserInfo::userIdIsSet() const
{
    return userIdIsSet_;
}

void RTCUserInfo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string RTCUserInfo::getSignature() const
{
    return signature_;
}

void RTCUserInfo::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool RTCUserInfo::signatureIsSet() const
{
    return signatureIsSet_;
}

void RTCUserInfo::unsetsignature()
{
    signatureIsSet_ = false;
}

int64_t RTCUserInfo::getCtime() const
{
    return ctime_;
}

void RTCUserInfo::setCtime(int64_t value)
{
    ctime_ = value;
    ctimeIsSet_ = true;
}

bool RTCUserInfo::ctimeIsSet() const
{
    return ctimeIsSet_;
}

void RTCUserInfo::unsetctime()
{
    ctimeIsSet_ = false;
}

}
}
}
}
}


