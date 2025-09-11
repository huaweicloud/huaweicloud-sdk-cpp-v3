

#include "huaweicloud/functiongraph/v2/model/UpdateriggerEventData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateriggerEventData::UpdateriggerEventData()
{
    isSerial_ = false;
    isSerialIsSet_ = false;
    maxFetchBytes_ = 0;
    maxFetchBytesIsSet_ = false;
    pollingInterval_ = 0;
    pollingIntervalIsSet_ = false;
    pollingUnit_ = "";
    pollingUnitIsSet_ = false;
}

UpdateriggerEventData::~UpdateriggerEventData() = default;

void UpdateriggerEventData::validate()
{
}

web::json::value UpdateriggerEventData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isSerialIsSet_) {
        val[utility::conversions::to_string_t("is_serial")] = ModelBase::toJson(isSerial_);
    }
    if(maxFetchBytesIsSet_) {
        val[utility::conversions::to_string_t("max_fetch_bytes")] = ModelBase::toJson(maxFetchBytes_);
    }
    if(pollingIntervalIsSet_) {
        val[utility::conversions::to_string_t("polling_interval")] = ModelBase::toJson(pollingInterval_);
    }
    if(pollingUnitIsSet_) {
        val[utility::conversions::to_string_t("polling_unit")] = ModelBase::toJson(pollingUnit_);
    }

    return val;
}
bool UpdateriggerEventData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_serial"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_serial"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSerial(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_fetch_bytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_fetch_bytes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxFetchBytes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("polling_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("polling_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPollingInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("polling_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("polling_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPollingUnit(refVal);
        }
    }
    return ok;
}


bool UpdateriggerEventData::isIsSerial() const
{
    return isSerial_;
}

void UpdateriggerEventData::setIsSerial(bool value)
{
    isSerial_ = value;
    isSerialIsSet_ = true;
}

bool UpdateriggerEventData::isSerialIsSet() const
{
    return isSerialIsSet_;
}

void UpdateriggerEventData::unsetisSerial()
{
    isSerialIsSet_ = false;
}

int32_t UpdateriggerEventData::getMaxFetchBytes() const
{
    return maxFetchBytes_;
}

void UpdateriggerEventData::setMaxFetchBytes(int32_t value)
{
    maxFetchBytes_ = value;
    maxFetchBytesIsSet_ = true;
}

bool UpdateriggerEventData::maxFetchBytesIsSet() const
{
    return maxFetchBytesIsSet_;
}

void UpdateriggerEventData::unsetmaxFetchBytes()
{
    maxFetchBytesIsSet_ = false;
}

int32_t UpdateriggerEventData::getPollingInterval() const
{
    return pollingInterval_;
}

void UpdateriggerEventData::setPollingInterval(int32_t value)
{
    pollingInterval_ = value;
    pollingIntervalIsSet_ = true;
}

bool UpdateriggerEventData::pollingIntervalIsSet() const
{
    return pollingIntervalIsSet_;
}

void UpdateriggerEventData::unsetpollingInterval()
{
    pollingIntervalIsSet_ = false;
}

std::string UpdateriggerEventData::getPollingUnit() const
{
    return pollingUnit_;
}

void UpdateriggerEventData::setPollingUnit(const std::string& value)
{
    pollingUnit_ = value;
    pollingUnitIsSet_ = true;
}

bool UpdateriggerEventData::pollingUnitIsSet() const
{
    return pollingUnitIsSet_;
}

void UpdateriggerEventData::unsetpollingUnit()
{
    pollingUnitIsSet_ = false;
}

}
}
}
}
}


