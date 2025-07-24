

#include "huaweicloud/dbss/v1/model/ConfigAlarmTopicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ConfigAlarmTopicRequest::ConfigAlarmTopicRequest()
{
    alarmCpu_ = 0;
    alarmCpuIsSet_ = false;
    alarmDisk_ = 0;
    alarmDiskIsSet_ = false;
    alarmMemory_ = 0;
    alarmMemoryIsSet_ = false;
    alarmNum_ = 0;
    alarmNumIsSet_ = false;
    alarmRiskIsSet_ = false;
    alarmSwitch_ = "";
    alarmSwitchIsSet_ = false;
    alarmTopicUrn_ = "";
    alarmTopicUrnIsSet_ = false;
}

ConfigAlarmTopicRequest::~ConfigAlarmTopicRequest() = default;

void ConfigAlarmTopicRequest::validate()
{
}

web::json::value ConfigAlarmTopicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alarmCpuIsSet_) {
        val[utility::conversions::to_string_t("alarm_cpu")] = ModelBase::toJson(alarmCpu_);
    }
    if(alarmDiskIsSet_) {
        val[utility::conversions::to_string_t("alarm_disk")] = ModelBase::toJson(alarmDisk_);
    }
    if(alarmMemoryIsSet_) {
        val[utility::conversions::to_string_t("alarm_memory")] = ModelBase::toJson(alarmMemory_);
    }
    if(alarmNumIsSet_) {
        val[utility::conversions::to_string_t("alarm_num")] = ModelBase::toJson(alarmNum_);
    }
    if(alarmRiskIsSet_) {
        val[utility::conversions::to_string_t("alarm_risk")] = ModelBase::toJson(alarmRisk_);
    }
    if(alarmSwitchIsSet_) {
        val[utility::conversions::to_string_t("alarm_switch")] = ModelBase::toJson(alarmSwitch_);
    }
    if(alarmTopicUrnIsSet_) {
        val[utility::conversions::to_string_t("alarm_topic_urn")] = ModelBase::toJson(alarmTopicUrn_);
    }

    return val;
}
bool ConfigAlarmTopicRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alarm_cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_cpu"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_disk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_memory"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_risk"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmRisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmTopicUrn(refVal);
        }
    }
    return ok;
}


int32_t ConfigAlarmTopicRequest::getAlarmCpu() const
{
    return alarmCpu_;
}

void ConfigAlarmTopicRequest::setAlarmCpu(int32_t value)
{
    alarmCpu_ = value;
    alarmCpuIsSet_ = true;
}

bool ConfigAlarmTopicRequest::alarmCpuIsSet() const
{
    return alarmCpuIsSet_;
}

void ConfigAlarmTopicRequest::unsetalarmCpu()
{
    alarmCpuIsSet_ = false;
}

int32_t ConfigAlarmTopicRequest::getAlarmDisk() const
{
    return alarmDisk_;
}

void ConfigAlarmTopicRequest::setAlarmDisk(int32_t value)
{
    alarmDisk_ = value;
    alarmDiskIsSet_ = true;
}

bool ConfigAlarmTopicRequest::alarmDiskIsSet() const
{
    return alarmDiskIsSet_;
}

void ConfigAlarmTopicRequest::unsetalarmDisk()
{
    alarmDiskIsSet_ = false;
}

int32_t ConfigAlarmTopicRequest::getAlarmMemory() const
{
    return alarmMemory_;
}

void ConfigAlarmTopicRequest::setAlarmMemory(int32_t value)
{
    alarmMemory_ = value;
    alarmMemoryIsSet_ = true;
}

bool ConfigAlarmTopicRequest::alarmMemoryIsSet() const
{
    return alarmMemoryIsSet_;
}

void ConfigAlarmTopicRequest::unsetalarmMemory()
{
    alarmMemoryIsSet_ = false;
}

int32_t ConfigAlarmTopicRequest::getAlarmNum() const
{
    return alarmNum_;
}

void ConfigAlarmTopicRequest::setAlarmNum(int32_t value)
{
    alarmNum_ = value;
    alarmNumIsSet_ = true;
}

bool ConfigAlarmTopicRequest::alarmNumIsSet() const
{
    return alarmNumIsSet_;
}

void ConfigAlarmTopicRequest::unsetalarmNum()
{
    alarmNumIsSet_ = false;
}

std::vector<std::string>& ConfigAlarmTopicRequest::getAlarmRisk()
{
    return alarmRisk_;
}

void ConfigAlarmTopicRequest::setAlarmRisk(const std::vector<std::string>& value)
{
    alarmRisk_ = value;
    alarmRiskIsSet_ = true;
}

bool ConfigAlarmTopicRequest::alarmRiskIsSet() const
{
    return alarmRiskIsSet_;
}

void ConfigAlarmTopicRequest::unsetalarmRisk()
{
    alarmRiskIsSet_ = false;
}

std::string ConfigAlarmTopicRequest::getAlarmSwitch() const
{
    return alarmSwitch_;
}

void ConfigAlarmTopicRequest::setAlarmSwitch(const std::string& value)
{
    alarmSwitch_ = value;
    alarmSwitchIsSet_ = true;
}

bool ConfigAlarmTopicRequest::alarmSwitchIsSet() const
{
    return alarmSwitchIsSet_;
}

void ConfigAlarmTopicRequest::unsetalarmSwitch()
{
    alarmSwitchIsSet_ = false;
}

std::string ConfigAlarmTopicRequest::getAlarmTopicUrn() const
{
    return alarmTopicUrn_;
}

void ConfigAlarmTopicRequest::setAlarmTopicUrn(const std::string& value)
{
    alarmTopicUrn_ = value;
    alarmTopicUrnIsSet_ = true;
}

bool ConfigAlarmTopicRequest::alarmTopicUrnIsSet() const
{
    return alarmTopicUrnIsSet_;
}

void ConfigAlarmTopicRequest::unsetalarmTopicUrn()
{
    alarmTopicUrnIsSet_ = false;
}

}
}
}
}
}


