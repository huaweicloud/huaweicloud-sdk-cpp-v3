

#include "huaweicloud/cfw/v1/model/ItemInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ItemInfo::ItemInfo()
{
    maxQuota_ = 0;
    maxQuotaIsSet_ = false;
    usedQuota_ = 0;
    usedQuotaIsSet_ = false;
    extrasInfoIsSet_ = false;
}

ItemInfo::~ItemInfo() = default;

void ItemInfo::validate()
{
}

web::json::value ItemInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxQuotaIsSet_) {
        val[utility::conversions::to_string_t("max_quota")] = ModelBase::toJson(maxQuota_);
    }
    if(usedQuotaIsSet_) {
        val[utility::conversions::to_string_t("used_quota")] = ModelBase::toJson(usedQuota_);
    }
    if(extrasInfoIsSet_) {
        val[utility::conversions::to_string_t("extras_info")] = ModelBase::toJson(extrasInfo_);
    }

    return val;
}
bool ItemInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extras_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extras_info"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtrasInfo(refVal);
        }
    }
    return ok;
}


int32_t ItemInfo::getMaxQuota() const
{
    return maxQuota_;
}

void ItemInfo::setMaxQuota(int32_t value)
{
    maxQuota_ = value;
    maxQuotaIsSet_ = true;
}

bool ItemInfo::maxQuotaIsSet() const
{
    return maxQuotaIsSet_;
}

void ItemInfo::unsetmaxQuota()
{
    maxQuotaIsSet_ = false;
}

int32_t ItemInfo::getUsedQuota() const
{
    return usedQuota_;
}

void ItemInfo::setUsedQuota(int32_t value)
{
    usedQuota_ = value;
    usedQuotaIsSet_ = true;
}

bool ItemInfo::usedQuotaIsSet() const
{
    return usedQuotaIsSet_;
}

void ItemInfo::unsetusedQuota()
{
    usedQuotaIsSet_ = false;
}

std::map<std::string, std::string>& ItemInfo::getExtrasInfo()
{
    return extrasInfo_;
}

void ItemInfo::setExtrasInfo(const std::map<std::string, std::string>& value)
{
    extrasInfo_ = value;
    extrasInfoIsSet_ = true;
}

bool ItemInfo::extrasInfoIsSet() const
{
    return extrasInfoIsSet_;
}

void ItemInfo::unsetextrasInfo()
{
    extrasInfoIsSet_ = false;
}

}
}
}
}
}


