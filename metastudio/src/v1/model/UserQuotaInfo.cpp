

#include "huaweicloud/metastudio/v1/model/UserQuotaInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UserQuotaInfo::UserQuotaInfo()
{
    userId_ = "";
    userIdIsSet_ = false;
    quotaIsSet_ = false;
    usageIsSet_ = false;
}

UserQuotaInfo::~UserQuotaInfo() = default;

void UserQuotaInfo::validate()
{
}

web::json::value UserQuotaInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(usageIsSet_) {
        val[utility::conversions::to_string_t("usage")] = ModelBase::toJson(usage_);
    }

    return val;
}
bool UserQuotaInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            ListUserQuotaDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage"));
        if(!fieldValue.is_null())
        {
            ListUserQuotaDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsage(refVal);
        }
    }
    return ok;
}


std::string UserQuotaInfo::getUserId() const
{
    return userId_;
}

void UserQuotaInfo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UserQuotaInfo::userIdIsSet() const
{
    return userIdIsSet_;
}

void UserQuotaInfo::unsetuserId()
{
    userIdIsSet_ = false;
}

ListUserQuotaDetail UserQuotaInfo::getQuota() const
{
    return quota_;
}

void UserQuotaInfo::setQuota(const ListUserQuotaDetail& value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool UserQuotaInfo::quotaIsSet() const
{
    return quotaIsSet_;
}

void UserQuotaInfo::unsetquota()
{
    quotaIsSet_ = false;
}

ListUserQuotaDetail UserQuotaInfo::getUsage() const
{
    return usage_;
}

void UserQuotaInfo::setUsage(const ListUserQuotaDetail& value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool UserQuotaInfo::usageIsSet() const
{
    return usageIsSet_;
}

void UserQuotaInfo::unsetusage()
{
    usageIsSet_ = false;
}

}
}
}
}
}


