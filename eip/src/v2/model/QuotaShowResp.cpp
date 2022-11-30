

#include "huaweicloud/eip/v2/model/QuotaShowResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




QuotaShowResp::QuotaShowResp()
{
    type_ = "";
    typeIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    min_ = 0;
    minIsSet_ = false;
}

QuotaShowResp::~QuotaShowResp() = default;

void QuotaShowResp::validate()
{
}

web::json::value QuotaShowResp::toJson() const
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
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }

    return val;
}

bool QuotaShowResp::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMin(refVal);
        }
    }
    return ok;
}


std::string QuotaShowResp::getType() const
{
    return type_;
}

void QuotaShowResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuotaShowResp::typeIsSet() const
{
    return typeIsSet_;
}

void QuotaShowResp::unsettype()
{
    typeIsSet_ = false;
}

int32_t QuotaShowResp::getUsed() const
{
    return used_;
}

void QuotaShowResp::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool QuotaShowResp::usedIsSet() const
{
    return usedIsSet_;
}

void QuotaShowResp::unsetused()
{
    usedIsSet_ = false;
}

int32_t QuotaShowResp::getQuota() const
{
    return quota_;
}

void QuotaShowResp::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool QuotaShowResp::quotaIsSet() const
{
    return quotaIsSet_;
}

void QuotaShowResp::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t QuotaShowResp::getMin() const
{
    return min_;
}

void QuotaShowResp::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool QuotaShowResp::minIsSet() const
{
    return minIsSet_;
}

void QuotaShowResp::unsetmin()
{
    minIsSet_ = false;
}

}
}
}
}
}


