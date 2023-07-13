

#include "huaweicloud/cts/v3/model/CtsQuota.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CtsQuota::CtsQuota()
{
    type_ = "";
    typeIsSet_ = false;
    used_ = 0L;
    usedIsSet_ = false;
    quota_ = 0L;
    quotaIsSet_ = false;
}

CtsQuota::~CtsQuota() = default;

void CtsQuota::validate()
{
}

web::json::value CtsQuota::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }

    return val;
}

bool CtsQuota::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    return ok;
}

std::string CtsQuota::getType() const
{
    return type_;
}

void CtsQuota::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CtsQuota::typeIsSet() const
{
    return typeIsSet_;
}

void CtsQuota::unsettype()
{
    typeIsSet_ = false;
}

int64_t CtsQuota::getUsed() const
{
    return used_;
}

void CtsQuota::setUsed(int64_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool CtsQuota::usedIsSet() const
{
    return usedIsSet_;
}

void CtsQuota::unsetused()
{
    usedIsSet_ = false;
}

int64_t CtsQuota::getQuota() const
{
    return quota_;
}

void CtsQuota::setQuota(int64_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool CtsQuota::quotaIsSet() const
{
    return quotaIsSet_;
}

void CtsQuota::unsetquota()
{
    quotaIsSet_ = false;
}

}
}
}
}
}


