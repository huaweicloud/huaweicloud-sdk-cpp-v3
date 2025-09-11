

#include "huaweicloud/dbss/v1/model/ListAlarmTopicConfigInfoNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAlarmTopicConfigInfoNewResponse::ListAlarmTopicConfigInfoNewResponse()
{
    alarmCpu_ = "";
    alarmCpuIsSet_ = false;
    alarmDisk_ = "";
    alarmDiskIsSet_ = false;
    alarmMemory_ = "";
    alarmMemoryIsSet_ = false;
    alarmNum_ = "";
    alarmNumIsSet_ = false;
    alarmRiskIsSet_ = false;
    alarmSwitch_ = "";
    alarmSwitchIsSet_ = false;
    alarmTopicUrn_ = "";
    alarmTopicUrnIsSet_ = false;
    smnEffective_ = false;
    smnEffectiveIsSet_ = false;
}

ListAlarmTopicConfigInfoNewResponse::~ListAlarmTopicConfigInfoNewResponse() = default;

void ListAlarmTopicConfigInfoNewResponse::validate()
{
}

web::json::value ListAlarmTopicConfigInfoNewResponse::toJson() const
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
    if(smnEffectiveIsSet_) {
        val[utility::conversions::to_string_t("smn_effective")] = ModelBase::toJson(smnEffective_);
    }

    return val;
}
bool ListAlarmTopicConfigInfoNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alarm_cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_disk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_memory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("smn_effective"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_effective"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnEffective(refVal);
        }
    }
    return ok;
}


std::string ListAlarmTopicConfigInfoNewResponse::getAlarmCpu() const
{
    return alarmCpu_;
}

void ListAlarmTopicConfigInfoNewResponse::setAlarmCpu(const std::string& value)
{
    alarmCpu_ = value;
    alarmCpuIsSet_ = true;
}

bool ListAlarmTopicConfigInfoNewResponse::alarmCpuIsSet() const
{
    return alarmCpuIsSet_;
}

void ListAlarmTopicConfigInfoNewResponse::unsetalarmCpu()
{
    alarmCpuIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoNewResponse::getAlarmDisk() const
{
    return alarmDisk_;
}

void ListAlarmTopicConfigInfoNewResponse::setAlarmDisk(const std::string& value)
{
    alarmDisk_ = value;
    alarmDiskIsSet_ = true;
}

bool ListAlarmTopicConfigInfoNewResponse::alarmDiskIsSet() const
{
    return alarmDiskIsSet_;
}

void ListAlarmTopicConfigInfoNewResponse::unsetalarmDisk()
{
    alarmDiskIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoNewResponse::getAlarmMemory() const
{
    return alarmMemory_;
}

void ListAlarmTopicConfigInfoNewResponse::setAlarmMemory(const std::string& value)
{
    alarmMemory_ = value;
    alarmMemoryIsSet_ = true;
}

bool ListAlarmTopicConfigInfoNewResponse::alarmMemoryIsSet() const
{
    return alarmMemoryIsSet_;
}

void ListAlarmTopicConfigInfoNewResponse::unsetalarmMemory()
{
    alarmMemoryIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoNewResponse::getAlarmNum() const
{
    return alarmNum_;
}

void ListAlarmTopicConfigInfoNewResponse::setAlarmNum(const std::string& value)
{
    alarmNum_ = value;
    alarmNumIsSet_ = true;
}

bool ListAlarmTopicConfigInfoNewResponse::alarmNumIsSet() const
{
    return alarmNumIsSet_;
}

void ListAlarmTopicConfigInfoNewResponse::unsetalarmNum()
{
    alarmNumIsSet_ = false;
}

std::vector<std::string>& ListAlarmTopicConfigInfoNewResponse::getAlarmRisk()
{
    return alarmRisk_;
}

void ListAlarmTopicConfigInfoNewResponse::setAlarmRisk(const std::vector<std::string>& value)
{
    alarmRisk_ = value;
    alarmRiskIsSet_ = true;
}

bool ListAlarmTopicConfigInfoNewResponse::alarmRiskIsSet() const
{
    return alarmRiskIsSet_;
}

void ListAlarmTopicConfigInfoNewResponse::unsetalarmRisk()
{
    alarmRiskIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoNewResponse::getAlarmSwitch() const
{
    return alarmSwitch_;
}

void ListAlarmTopicConfigInfoNewResponse::setAlarmSwitch(const std::string& value)
{
    alarmSwitch_ = value;
    alarmSwitchIsSet_ = true;
}

bool ListAlarmTopicConfigInfoNewResponse::alarmSwitchIsSet() const
{
    return alarmSwitchIsSet_;
}

void ListAlarmTopicConfigInfoNewResponse::unsetalarmSwitch()
{
    alarmSwitchIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoNewResponse::getAlarmTopicUrn() const
{
    return alarmTopicUrn_;
}

void ListAlarmTopicConfigInfoNewResponse::setAlarmTopicUrn(const std::string& value)
{
    alarmTopicUrn_ = value;
    alarmTopicUrnIsSet_ = true;
}

bool ListAlarmTopicConfigInfoNewResponse::alarmTopicUrnIsSet() const
{
    return alarmTopicUrnIsSet_;
}

void ListAlarmTopicConfigInfoNewResponse::unsetalarmTopicUrn()
{
    alarmTopicUrnIsSet_ = false;
}

bool ListAlarmTopicConfigInfoNewResponse::isSmnEffective() const
{
    return smnEffective_;
}

void ListAlarmTopicConfigInfoNewResponse::setSmnEffective(bool value)
{
    smnEffective_ = value;
    smnEffectiveIsSet_ = true;
}

bool ListAlarmTopicConfigInfoNewResponse::smnEffectiveIsSet() const
{
    return smnEffectiveIsSet_;
}

void ListAlarmTopicConfigInfoNewResponse::unsetsmnEffective()
{
    smnEffectiveIsSet_ = false;
}

}
}
}
}
}


