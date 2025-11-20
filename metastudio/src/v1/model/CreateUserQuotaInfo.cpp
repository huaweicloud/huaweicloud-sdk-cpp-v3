

#include "huaweicloud/metastudio/v1/model/CreateUserQuotaInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateUserQuotaInfo::CreateUserQuotaInfo()
{
    userId_ = "";
    userIdIsSet_ = false;
    quotaIsSet_ = false;
}

CreateUserQuotaInfo::~CreateUserQuotaInfo() = default;

void CreateUserQuotaInfo::validate()
{
}

web::json::value CreateUserQuotaInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }

    return val;
}
bool CreateUserQuotaInfo::fromJson(const web::json::value& val)
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
            UserQuotaDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    return ok;
}


std::string CreateUserQuotaInfo::getUserId() const
{
    return userId_;
}

void CreateUserQuotaInfo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CreateUserQuotaInfo::userIdIsSet() const
{
    return userIdIsSet_;
}

void CreateUserQuotaInfo::unsetuserId()
{
    userIdIsSet_ = false;
}

UserQuotaDetail CreateUserQuotaInfo::getQuota() const
{
    return quota_;
}

void CreateUserQuotaInfo::setQuota(const UserQuotaDetail& value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool CreateUserQuotaInfo::quotaIsSet() const
{
    return quotaIsSet_;
}

void CreateUserQuotaInfo::unsetquota()
{
    quotaIsSet_ = false;
}

}
}
}
}
}


