

#include "huaweicloud/cdn/v2/model/UrlAuth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UrlAuth::UrlAuth()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    expireTime_ = 0;
    expireTimeIsSet_ = false;
    signMethod_ = "";
    signMethodIsSet_ = false;
    matchType_ = "";
    matchTypeIsSet_ = false;
    inheritConfigIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    backupKey_ = "";
    backupKeyIsSet_ = false;
    signArg_ = "";
    signArgIsSet_ = false;
    timeFormat_ = "";
    timeFormatIsSet_ = false;
    timeArg_ = "";
    timeArgIsSet_ = false;
}

UrlAuth::~UrlAuth() = default;

void UrlAuth::validate()
{
}

web::json::value UrlAuth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(signMethodIsSet_) {
        val[utility::conversions::to_string_t("sign_method")] = ModelBase::toJson(signMethod_);
    }
    if(matchTypeIsSet_) {
        val[utility::conversions::to_string_t("match_type")] = ModelBase::toJson(matchType_);
    }
    if(inheritConfigIsSet_) {
        val[utility::conversions::to_string_t("inherit_config")] = ModelBase::toJson(inheritConfig_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(backupKeyIsSet_) {
        val[utility::conversions::to_string_t("backup_key")] = ModelBase::toJson(backupKey_);
    }
    if(signArgIsSet_) {
        val[utility::conversions::to_string_t("sign_arg")] = ModelBase::toJson(signArg_);
    }
    if(timeFormatIsSet_) {
        val[utility::conversions::to_string_t("time_format")] = ModelBase::toJson(timeFormat_);
    }
    if(timeArgIsSet_) {
        val[utility::conversions::to_string_t("time_arg")] = ModelBase::toJson(timeArg_);
    }

    return val;
}
bool UrlAuth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inherit_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherit_config"));
        if(!fieldValue.is_null())
        {
            InheritConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_arg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_arg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignArg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_arg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_arg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeArg(refVal);
        }
    }
    return ok;
}


std::string UrlAuth::getStatus() const
{
    return status_;
}

void UrlAuth::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UrlAuth::statusIsSet() const
{
    return statusIsSet_;
}

void UrlAuth::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UrlAuth::getType() const
{
    return type_;
}

void UrlAuth::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UrlAuth::typeIsSet() const
{
    return typeIsSet_;
}

void UrlAuth::unsettype()
{
    typeIsSet_ = false;
}

int32_t UrlAuth::getExpireTime() const
{
    return expireTime_;
}

void UrlAuth::setExpireTime(int32_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool UrlAuth::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void UrlAuth::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string UrlAuth::getSignMethod() const
{
    return signMethod_;
}

void UrlAuth::setSignMethod(const std::string& value)
{
    signMethod_ = value;
    signMethodIsSet_ = true;
}

bool UrlAuth::signMethodIsSet() const
{
    return signMethodIsSet_;
}

void UrlAuth::unsetsignMethod()
{
    signMethodIsSet_ = false;
}

std::string UrlAuth::getMatchType() const
{
    return matchType_;
}

void UrlAuth::setMatchType(const std::string& value)
{
    matchType_ = value;
    matchTypeIsSet_ = true;
}

bool UrlAuth::matchTypeIsSet() const
{
    return matchTypeIsSet_;
}

void UrlAuth::unsetmatchType()
{
    matchTypeIsSet_ = false;
}

InheritConfig UrlAuth::getInheritConfig() const
{
    return inheritConfig_;
}

void UrlAuth::setInheritConfig(const InheritConfig& value)
{
    inheritConfig_ = value;
    inheritConfigIsSet_ = true;
}

bool UrlAuth::inheritConfigIsSet() const
{
    return inheritConfigIsSet_;
}

void UrlAuth::unsetinheritConfig()
{
    inheritConfigIsSet_ = false;
}

std::string UrlAuth::getKey() const
{
    return key_;
}

void UrlAuth::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool UrlAuth::keyIsSet() const
{
    return keyIsSet_;
}

void UrlAuth::unsetkey()
{
    keyIsSet_ = false;
}

std::string UrlAuth::getBackupKey() const
{
    return backupKey_;
}

void UrlAuth::setBackupKey(const std::string& value)
{
    backupKey_ = value;
    backupKeyIsSet_ = true;
}

bool UrlAuth::backupKeyIsSet() const
{
    return backupKeyIsSet_;
}

void UrlAuth::unsetbackupKey()
{
    backupKeyIsSet_ = false;
}

std::string UrlAuth::getSignArg() const
{
    return signArg_;
}

void UrlAuth::setSignArg(const std::string& value)
{
    signArg_ = value;
    signArgIsSet_ = true;
}

bool UrlAuth::signArgIsSet() const
{
    return signArgIsSet_;
}

void UrlAuth::unsetsignArg()
{
    signArgIsSet_ = false;
}

std::string UrlAuth::getTimeFormat() const
{
    return timeFormat_;
}

void UrlAuth::setTimeFormat(const std::string& value)
{
    timeFormat_ = value;
    timeFormatIsSet_ = true;
}

bool UrlAuth::timeFormatIsSet() const
{
    return timeFormatIsSet_;
}

void UrlAuth::unsettimeFormat()
{
    timeFormatIsSet_ = false;
}

std::string UrlAuth::getTimeArg() const
{
    return timeArg_;
}

void UrlAuth::setTimeArg(const std::string& value)
{
    timeArg_ = value;
    timeArgIsSet_ = true;
}

bool UrlAuth::timeArgIsSet() const
{
    return timeArgIsSet_;
}

void UrlAuth::unsettimeArg()
{
    timeArgIsSet_ = false;
}

}
}
}
}
}


