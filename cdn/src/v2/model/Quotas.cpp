

#include "huaweicloud/cdn/v2/model/Quotas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Quotas::Quotas()
{
    quotaLimit_ = 0;
    quotaLimitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    userDomainId_ = "";
    userDomainIdIsSet_ = false;
}

Quotas::~Quotas() = default;

void Quotas::validate()
{
}

web::json::value Quotas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaLimitIsSet_) {
        val[utility::conversions::to_string_t("quota_limit")] = ModelBase::toJson(quotaLimit_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(userDomainIdIsSet_) {
        val[utility::conversions::to_string_t("user_domain_id")] = ModelBase::toJson(userDomainId_);
    }

    return val;
}
bool Quotas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quota_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDomainId(refVal);
        }
    }
    return ok;
}


int32_t Quotas::getQuotaLimit() const
{
    return quotaLimit_;
}

void Quotas::setQuotaLimit(int32_t value)
{
    quotaLimit_ = value;
    quotaLimitIsSet_ = true;
}

bool Quotas::quotaLimitIsSet() const
{
    return quotaLimitIsSet_;
}

void Quotas::unsetquotaLimit()
{
    quotaLimitIsSet_ = false;
}

std::string Quotas::getType() const
{
    return type_;
}

void Quotas::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Quotas::typeIsSet() const
{
    return typeIsSet_;
}

void Quotas::unsettype()
{
    typeIsSet_ = false;
}

int32_t Quotas::getUsed() const
{
    return used_;
}

void Quotas::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool Quotas::usedIsSet() const
{
    return usedIsSet_;
}

void Quotas::unsetused()
{
    usedIsSet_ = false;
}

std::string Quotas::getUserDomainId() const
{
    return userDomainId_;
}

void Quotas::setUserDomainId(const std::string& value)
{
    userDomainId_ = value;
    userDomainIdIsSet_ = true;
}

bool Quotas::userDomainIdIsSet() const
{
    return userDomainIdIsSet_;
}

void Quotas::unsetuserDomainId()
{
    userDomainIdIsSet_ = false;
}

}
}
}
}
}


