

#include "huaweicloud/cdn/v2/model/UrlAuthGetBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UrlAuthGetBody::UrlAuthGetBody()
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
}

UrlAuthGetBody::~UrlAuthGetBody() = default;

void UrlAuthGetBody::validate()
{
}

web::json::value UrlAuthGetBody::toJson() const
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

    return val;
}
bool UrlAuthGetBody::fromJson(const web::json::value& val)
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
            InheritConfigQuery refVal;
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
    return ok;
}


std::string UrlAuthGetBody::getStatus() const
{
    return status_;
}

void UrlAuthGetBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UrlAuthGetBody::statusIsSet() const
{
    return statusIsSet_;
}

void UrlAuthGetBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UrlAuthGetBody::getType() const
{
    return type_;
}

void UrlAuthGetBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UrlAuthGetBody::typeIsSet() const
{
    return typeIsSet_;
}

void UrlAuthGetBody::unsettype()
{
    typeIsSet_ = false;
}

int32_t UrlAuthGetBody::getExpireTime() const
{
    return expireTime_;
}

void UrlAuthGetBody::setExpireTime(int32_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool UrlAuthGetBody::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void UrlAuthGetBody::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string UrlAuthGetBody::getSignMethod() const
{
    return signMethod_;
}

void UrlAuthGetBody::setSignMethod(const std::string& value)
{
    signMethod_ = value;
    signMethodIsSet_ = true;
}

bool UrlAuthGetBody::signMethodIsSet() const
{
    return signMethodIsSet_;
}

void UrlAuthGetBody::unsetsignMethod()
{
    signMethodIsSet_ = false;
}

std::string UrlAuthGetBody::getMatchType() const
{
    return matchType_;
}

void UrlAuthGetBody::setMatchType(const std::string& value)
{
    matchType_ = value;
    matchTypeIsSet_ = true;
}

bool UrlAuthGetBody::matchTypeIsSet() const
{
    return matchTypeIsSet_;
}

void UrlAuthGetBody::unsetmatchType()
{
    matchTypeIsSet_ = false;
}

InheritConfigQuery UrlAuthGetBody::getInheritConfig() const
{
    return inheritConfig_;
}

void UrlAuthGetBody::setInheritConfig(const InheritConfigQuery& value)
{
    inheritConfig_ = value;
    inheritConfigIsSet_ = true;
}

bool UrlAuthGetBody::inheritConfigIsSet() const
{
    return inheritConfigIsSet_;
}

void UrlAuthGetBody::unsetinheritConfig()
{
    inheritConfigIsSet_ = false;
}

std::string UrlAuthGetBody::getKey() const
{
    return key_;
}

void UrlAuthGetBody::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool UrlAuthGetBody::keyIsSet() const
{
    return keyIsSet_;
}

void UrlAuthGetBody::unsetkey()
{
    keyIsSet_ = false;
}

std::string UrlAuthGetBody::getBackupKey() const
{
    return backupKey_;
}

void UrlAuthGetBody::setBackupKey(const std::string& value)
{
    backupKey_ = value;
    backupKeyIsSet_ = true;
}

bool UrlAuthGetBody::backupKeyIsSet() const
{
    return backupKeyIsSet_;
}

void UrlAuthGetBody::unsetbackupKey()
{
    backupKeyIsSet_ = false;
}

std::string UrlAuthGetBody::getSignArg() const
{
    return signArg_;
}

void UrlAuthGetBody::setSignArg(const std::string& value)
{
    signArg_ = value;
    signArgIsSet_ = true;
}

bool UrlAuthGetBody::signArgIsSet() const
{
    return signArgIsSet_;
}

void UrlAuthGetBody::unsetsignArg()
{
    signArgIsSet_ = false;
}

std::string UrlAuthGetBody::getTimeFormat() const
{
    return timeFormat_;
}

void UrlAuthGetBody::setTimeFormat(const std::string& value)
{
    timeFormat_ = value;
    timeFormatIsSet_ = true;
}

bool UrlAuthGetBody::timeFormatIsSet() const
{
    return timeFormatIsSet_;
}

void UrlAuthGetBody::unsettimeFormat()
{
    timeFormatIsSet_ = false;
}

}
}
}
}
}


