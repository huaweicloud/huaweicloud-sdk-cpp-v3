

#include "huaweicloud/cfw/v1/model/ShowConfigQuotaDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowConfigQuotaDto::ShowConfigQuotaDto()
{
    itemInfoIsSet_ = false;
    maxQuota_ = 0;
    maxQuotaIsSet_ = false;
    quotaType_ = "";
    quotaTypeIsSet_ = false;
    usedQuota_ = 0;
    usedQuotaIsSet_ = false;
}

ShowConfigQuotaDto::~ShowConfigQuotaDto() = default;

void ShowConfigQuotaDto::validate()
{
}

web::json::value ShowConfigQuotaDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemInfoIsSet_) {
        val[utility::conversions::to_string_t("item_info")] = ModelBase::toJson(itemInfo_);
    }
    if(maxQuotaIsSet_) {
        val[utility::conversions::to_string_t("max_quota")] = ModelBase::toJson(maxQuota_);
    }
    if(quotaTypeIsSet_) {
        val[utility::conversions::to_string_t("quota_type")] = ModelBase::toJson(quotaType_);
    }
    if(usedQuotaIsSet_) {
        val[utility::conversions::to_string_t("used_quota")] = ModelBase::toJson(usedQuota_);
    }

    return val;
}
bool ShowConfigQuotaDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("item_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_info"));
        if(!fieldValue.is_null())
        {
            ItemInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaType(refVal);
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
    return ok;
}


ItemInfo ShowConfigQuotaDto::getItemInfo() const
{
    return itemInfo_;
}

void ShowConfigQuotaDto::setItemInfo(const ItemInfo& value)
{
    itemInfo_ = value;
    itemInfoIsSet_ = true;
}

bool ShowConfigQuotaDto::itemInfoIsSet() const
{
    return itemInfoIsSet_;
}

void ShowConfigQuotaDto::unsetitemInfo()
{
    itemInfoIsSet_ = false;
}

int32_t ShowConfigQuotaDto::getMaxQuota() const
{
    return maxQuota_;
}

void ShowConfigQuotaDto::setMaxQuota(int32_t value)
{
    maxQuota_ = value;
    maxQuotaIsSet_ = true;
}

bool ShowConfigQuotaDto::maxQuotaIsSet() const
{
    return maxQuotaIsSet_;
}

void ShowConfigQuotaDto::unsetmaxQuota()
{
    maxQuotaIsSet_ = false;
}

std::string ShowConfigQuotaDto::getQuotaType() const
{
    return quotaType_;
}

void ShowConfigQuotaDto::setQuotaType(const std::string& value)
{
    quotaType_ = value;
    quotaTypeIsSet_ = true;
}

bool ShowConfigQuotaDto::quotaTypeIsSet() const
{
    return quotaTypeIsSet_;
}

void ShowConfigQuotaDto::unsetquotaType()
{
    quotaTypeIsSet_ = false;
}

int32_t ShowConfigQuotaDto::getUsedQuota() const
{
    return usedQuota_;
}

void ShowConfigQuotaDto::setUsedQuota(int32_t value)
{
    usedQuota_ = value;
    usedQuotaIsSet_ = true;
}

bool ShowConfigQuotaDto::usedQuotaIsSet() const
{
    return usedQuotaIsSet_;
}

void ShowConfigQuotaDto::unsetusedQuota()
{
    usedQuotaIsSet_ = false;
}

}
}
}
}
}


