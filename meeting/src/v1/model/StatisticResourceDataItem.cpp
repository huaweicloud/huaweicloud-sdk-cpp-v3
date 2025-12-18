

#include "huaweicloud/meeting/v1/model/StatisticResourceDataItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




StatisticResourceDataItem::StatisticResourceDataItem()
{
    time_ = "";
    timeIsSet_ = false;
    vmrParties_ = "";
    vmrPartiesIsSet_ = false;
    maxConcurrencyVmrCount_ = "";
    maxConcurrencyVmrCountIsSet_ = false;
    livePortUsedCount_ = "";
    livePortUsedCountIsSet_ = false;
    recordUsedSize_ = "";
    recordUsedSizeIsSet_ = false;
    pstnUsedDuration_ = "";
    pstnUsedDurationIsSet_ = false;
}

StatisticResourceDataItem::~StatisticResourceDataItem() = default;

void StatisticResourceDataItem::validate()
{
}

web::json::value StatisticResourceDataItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(vmrPartiesIsSet_) {
        val[utility::conversions::to_string_t("vmrParties")] = ModelBase::toJson(vmrParties_);
    }
    if(maxConcurrencyVmrCountIsSet_) {
        val[utility::conversions::to_string_t("maxConcurrencyVmrCount")] = ModelBase::toJson(maxConcurrencyVmrCount_);
    }
    if(livePortUsedCountIsSet_) {
        val[utility::conversions::to_string_t("livePortUsedCount")] = ModelBase::toJson(livePortUsedCount_);
    }
    if(recordUsedSizeIsSet_) {
        val[utility::conversions::to_string_t("recordUsedSize")] = ModelBase::toJson(recordUsedSize_);
    }
    if(pstnUsedDurationIsSet_) {
        val[utility::conversions::to_string_t("pstnUsedDuration")] = ModelBase::toJson(pstnUsedDuration_);
    }

    return val;
}
bool StatisticResourceDataItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrParties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrParties"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrParties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxConcurrencyVmrCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxConcurrencyVmrCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrencyVmrCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("livePortUsedCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("livePortUsedCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLivePortUsedCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordUsedSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordUsedSize"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordUsedSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pstnUsedDuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pstnUsedDuration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPstnUsedDuration(refVal);
        }
    }
    return ok;
}


std::string StatisticResourceDataItem::getTime() const
{
    return time_;
}

void StatisticResourceDataItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool StatisticResourceDataItem::timeIsSet() const
{
    return timeIsSet_;
}

void StatisticResourceDataItem::unsettime()
{
    timeIsSet_ = false;
}

std::string StatisticResourceDataItem::getVmrParties() const
{
    return vmrParties_;
}

void StatisticResourceDataItem::setVmrParties(const std::string& value)
{
    vmrParties_ = value;
    vmrPartiesIsSet_ = true;
}

bool StatisticResourceDataItem::vmrPartiesIsSet() const
{
    return vmrPartiesIsSet_;
}

void StatisticResourceDataItem::unsetvmrParties()
{
    vmrPartiesIsSet_ = false;
}

std::string StatisticResourceDataItem::getMaxConcurrencyVmrCount() const
{
    return maxConcurrencyVmrCount_;
}

void StatisticResourceDataItem::setMaxConcurrencyVmrCount(const std::string& value)
{
    maxConcurrencyVmrCount_ = value;
    maxConcurrencyVmrCountIsSet_ = true;
}

bool StatisticResourceDataItem::maxConcurrencyVmrCountIsSet() const
{
    return maxConcurrencyVmrCountIsSet_;
}

void StatisticResourceDataItem::unsetmaxConcurrencyVmrCount()
{
    maxConcurrencyVmrCountIsSet_ = false;
}

std::string StatisticResourceDataItem::getLivePortUsedCount() const
{
    return livePortUsedCount_;
}

void StatisticResourceDataItem::setLivePortUsedCount(const std::string& value)
{
    livePortUsedCount_ = value;
    livePortUsedCountIsSet_ = true;
}

bool StatisticResourceDataItem::livePortUsedCountIsSet() const
{
    return livePortUsedCountIsSet_;
}

void StatisticResourceDataItem::unsetlivePortUsedCount()
{
    livePortUsedCountIsSet_ = false;
}

std::string StatisticResourceDataItem::getRecordUsedSize() const
{
    return recordUsedSize_;
}

void StatisticResourceDataItem::setRecordUsedSize(const std::string& value)
{
    recordUsedSize_ = value;
    recordUsedSizeIsSet_ = true;
}

bool StatisticResourceDataItem::recordUsedSizeIsSet() const
{
    return recordUsedSizeIsSet_;
}

void StatisticResourceDataItem::unsetrecordUsedSize()
{
    recordUsedSizeIsSet_ = false;
}

std::string StatisticResourceDataItem::getPstnUsedDuration() const
{
    return pstnUsedDuration_;
}

void StatisticResourceDataItem::setPstnUsedDuration(const std::string& value)
{
    pstnUsedDuration_ = value;
    pstnUsedDurationIsSet_ = true;
}

bool StatisticResourceDataItem::pstnUsedDurationIsSet() const
{
    return pstnUsedDurationIsSet_;
}

void StatisticResourceDataItem::unsetpstnUsedDuration()
{
    pstnUsedDurationIsSet_ = false;
}

}
}
}
}
}


