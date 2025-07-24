

#include "huaweicloud/cloudtest/v1/model/UsageInfos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UsageInfos::UsageInfos()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    amount_ = "";
    amountIsSet_ = false;
    used_ = "";
    usedIsSet_ = false;
    usedPercent_ = 0;
    usedPercentIsSet_ = false;
    usageInfoIsSet_ = false;
}

UsageInfos::~UsageInfos() = default;

void UsageInfos::validate()
{
}

web::json::value UsageInfos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(amountIsSet_) {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(amount_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(usedPercentIsSet_) {
        val[utility::conversions::to_string_t("used_percent")] = ModelBase::toJson(usedPercent_);
    }
    if(usageInfoIsSet_) {
        val[utility::conversions::to_string_t("usage_info")] = ModelBase::toJson(*usageInfo_);
    }

    return val;
}
bool UsageInfos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage_info"));
        if(!fieldValue.is_null())
        {
            std::vector<UsageInfos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsageInfo(refVal);
        }
    }
    return ok;
}


std::string UsageInfos::getName() const
{
    return name_;
}

void UsageInfos::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UsageInfos::nameIsSet() const
{
    return nameIsSet_;
}

void UsageInfos::unsetname()
{
    nameIsSet_ = false;
}

std::string UsageInfos::getId() const
{
    return id_;
}

void UsageInfos::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UsageInfos::idIsSet() const
{
    return idIsSet_;
}

void UsageInfos::unsetid()
{
    idIsSet_ = false;
}

std::string UsageInfos::getAmount() const
{
    return amount_;
}

void UsageInfos::setAmount(const std::string& value)
{
    amount_ = value;
    amountIsSet_ = true;
}

bool UsageInfos::amountIsSet() const
{
    return amountIsSet_;
}

void UsageInfos::unsetamount()
{
    amountIsSet_ = false;
}

std::string UsageInfos::getUsed() const
{
    return used_;
}

void UsageInfos::setUsed(const std::string& value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool UsageInfos::usedIsSet() const
{
    return usedIsSet_;
}

void UsageInfos::unsetused()
{
    usedIsSet_ = false;
}

int32_t UsageInfos::getUsedPercent() const
{
    return usedPercent_;
}

void UsageInfos::setUsedPercent(int32_t value)
{
    usedPercent_ = value;
    usedPercentIsSet_ = true;
}

bool UsageInfos::usedPercentIsSet() const
{
    return usedPercentIsSet_;
}

void UsageInfos::unsetusedPercent()
{
    usedPercentIsSet_ = false;
}

std::vector<UsageInfos>& UsageInfos::getUsageInfo()
{
    return *usageInfo_;
}

void UsageInfos::setUsageInfo(const std::vector<UsageInfos>& value)
{
    *usageInfo_ = value;
    usageInfoIsSet_ = true;
}

bool UsageInfos::usageInfoIsSet() const
{
    return usageInfoIsSet_;
}

void UsageInfos::unsetusageInfo()
{
    usageInfoIsSet_ = false;
}

}
}
}
}
}


