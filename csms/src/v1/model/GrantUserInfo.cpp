

#include "huaweicloud/csms/v1/model/GrantUserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




GrantUserInfo::GrantUserInfo()
{
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    validityTime_ = 0L;
    validityTimeIsSet_ = false;
}

GrantUserInfo::~GrantUserInfo() = default;

void GrantUserInfo::validate()
{
}

web::json::value GrantUserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(validityTimeIsSet_) {
        val[utility::conversions::to_string_t("validity_time")] = ModelBase::toJson(validityTime_);
    }

    return val;
}
bool GrantUserInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validity_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validity_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidityTime(refVal);
        }
    }
    return ok;
}


std::string GrantUserInfo::getUserId() const
{
    return userId_;
}

void GrantUserInfo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool GrantUserInfo::userIdIsSet() const
{
    return userIdIsSet_;
}

void GrantUserInfo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string GrantUserInfo::getUserName() const
{
    return userName_;
}

void GrantUserInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool GrantUserInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void GrantUserInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

int64_t GrantUserInfo::getCreateTime() const
{
    return createTime_;
}

void GrantUserInfo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool GrantUserInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void GrantUserInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t GrantUserInfo::getValidityTime() const
{
    return validityTime_;
}

void GrantUserInfo::setValidityTime(int64_t value)
{
    validityTime_ = value;
    validityTimeIsSet_ = true;
}

bool GrantUserInfo::validityTimeIsSet() const
{
    return validityTimeIsSet_;
}

void GrantUserInfo::unsetvalidityTime()
{
    validityTimeIsSet_ = false;
}

}
}
}
}
}


