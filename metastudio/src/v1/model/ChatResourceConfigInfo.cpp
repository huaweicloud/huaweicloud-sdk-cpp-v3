

#include "huaweicloud/metastudio/v1/model/ChatResourceConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ChatResourceConfigInfo::ChatResourceConfigInfo()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    countResource_ = 0;
    countResourceIsSet_ = false;
    resourceSource_ = "";
    resourceSourceIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    resourceNums_ = 0;
    resourceNumsIsSet_ = false;
    resourceAvailableNums_ = 0;
    resourceAvailableNumsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
}

ChatResourceConfigInfo::~ChatResourceConfigInfo() = default;

void ChatResourceConfigInfo::validate()
{
}

web::json::value ChatResourceConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(countResourceIsSet_) {
        val[utility::conversions::to_string_t("count_resource")] = ModelBase::toJson(countResource_);
    }
    if(resourceSourceIsSet_) {
        val[utility::conversions::to_string_t("resource_source")] = ModelBase::toJson(resourceSource_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(resourceNumsIsSet_) {
        val[utility::conversions::to_string_t("resource_nums")] = ModelBase::toJson(resourceNums_);
    }
    if(resourceAvailableNumsIsSet_) {
        val[utility::conversions::to_string_t("resource_available_nums")] = ModelBase::toJson(resourceAvailableNums_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }

    return val;
}
bool ChatResourceConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count_resource"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceNums(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_available_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_available_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceAvailableNums(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    return ok;
}


std::string ChatResourceConfigInfo::getResourceId() const
{
    return resourceId_;
}

void ChatResourceConfigInfo::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ChatResourceConfigInfo::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ChatResourceConfigInfo::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

int32_t ChatResourceConfigInfo::getCountResource() const
{
    return countResource_;
}

void ChatResourceConfigInfo::setCountResource(int32_t value)
{
    countResource_ = value;
    countResourceIsSet_ = true;
}

bool ChatResourceConfigInfo::countResourceIsSet() const
{
    return countResourceIsSet_;
}

void ChatResourceConfigInfo::unsetcountResource()
{
    countResourceIsSet_ = false;
}

std::string ChatResourceConfigInfo::getResourceSource() const
{
    return resourceSource_;
}

void ChatResourceConfigInfo::setResourceSource(const std::string& value)
{
    resourceSource_ = value;
    resourceSourceIsSet_ = true;
}

bool ChatResourceConfigInfo::resourceSourceIsSet() const
{
    return resourceSourceIsSet_;
}

void ChatResourceConfigInfo::unsetresourceSource()
{
    resourceSourceIsSet_ = false;
}

std::string ChatResourceConfigInfo::getChargeMode() const
{
    return chargeMode_;
}

void ChatResourceConfigInfo::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ChatResourceConfigInfo::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ChatResourceConfigInfo::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t ChatResourceConfigInfo::getResourceNums() const
{
    return resourceNums_;
}

void ChatResourceConfigInfo::setResourceNums(int32_t value)
{
    resourceNums_ = value;
    resourceNumsIsSet_ = true;
}

bool ChatResourceConfigInfo::resourceNumsIsSet() const
{
    return resourceNumsIsSet_;
}

void ChatResourceConfigInfo::unsetresourceNums()
{
    resourceNumsIsSet_ = false;
}

int32_t ChatResourceConfigInfo::getResourceAvailableNums() const
{
    return resourceAvailableNums_;
}

void ChatResourceConfigInfo::setResourceAvailableNums(int32_t value)
{
    resourceAvailableNums_ = value;
    resourceAvailableNumsIsSet_ = true;
}

bool ChatResourceConfigInfo::resourceAvailableNumsIsSet() const
{
    return resourceAvailableNumsIsSet_;
}

void ChatResourceConfigInfo::unsetresourceAvailableNums()
{
    resourceAvailableNumsIsSet_ = false;
}

std::string ChatResourceConfigInfo::getStatus() const
{
    return status_;
}

void ChatResourceConfigInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChatResourceConfigInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ChatResourceConfigInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ChatResourceConfigInfo::getExpireTime() const
{
    return expireTime_;
}

void ChatResourceConfigInfo::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ChatResourceConfigInfo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ChatResourceConfigInfo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}


