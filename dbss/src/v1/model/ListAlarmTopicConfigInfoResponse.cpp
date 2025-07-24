

#include "huaweicloud/dbss/v1/model/ListAlarmTopicConfigInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAlarmTopicConfigInfoResponse::ListAlarmTopicConfigInfoResponse()
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

ListAlarmTopicConfigInfoResponse::~ListAlarmTopicConfigInfoResponse() = default;

void ListAlarmTopicConfigInfoResponse::validate()
{
}

web::json::value ListAlarmTopicConfigInfoResponse::toJson() const
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
bool ListAlarmTopicConfigInfoResponse::fromJson(const web::json::value& val)
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


std::string ListAlarmTopicConfigInfoResponse::getAlarmCpu() const
{
    return alarmCpu_;
}

void ListAlarmTopicConfigInfoResponse::setAlarmCpu(const std::string& value)
{
    alarmCpu_ = value;
    alarmCpuIsSet_ = true;
}

bool ListAlarmTopicConfigInfoResponse::alarmCpuIsSet() const
{
    return alarmCpuIsSet_;
}

void ListAlarmTopicConfigInfoResponse::unsetalarmCpu()
{
    alarmCpuIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoResponse::getAlarmDisk() const
{
    return alarmDisk_;
}

void ListAlarmTopicConfigInfoResponse::setAlarmDisk(const std::string& value)
{
    alarmDisk_ = value;
    alarmDiskIsSet_ = true;
}

bool ListAlarmTopicConfigInfoResponse::alarmDiskIsSet() const
{
    return alarmDiskIsSet_;
}

void ListAlarmTopicConfigInfoResponse::unsetalarmDisk()
{
    alarmDiskIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoResponse::getAlarmMemory() const
{
    return alarmMemory_;
}

void ListAlarmTopicConfigInfoResponse::setAlarmMemory(const std::string& value)
{
    alarmMemory_ = value;
    alarmMemoryIsSet_ = true;
}

bool ListAlarmTopicConfigInfoResponse::alarmMemoryIsSet() const
{
    return alarmMemoryIsSet_;
}

void ListAlarmTopicConfigInfoResponse::unsetalarmMemory()
{
    alarmMemoryIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoResponse::getAlarmNum() const
{
    return alarmNum_;
}

void ListAlarmTopicConfigInfoResponse::setAlarmNum(const std::string& value)
{
    alarmNum_ = value;
    alarmNumIsSet_ = true;
}

bool ListAlarmTopicConfigInfoResponse::alarmNumIsSet() const
{
    return alarmNumIsSet_;
}

void ListAlarmTopicConfigInfoResponse::unsetalarmNum()
{
    alarmNumIsSet_ = false;
}

std::vector<std::string>& ListAlarmTopicConfigInfoResponse::getAlarmRisk()
{
    return alarmRisk_;
}

void ListAlarmTopicConfigInfoResponse::setAlarmRisk(const std::vector<std::string>& value)
{
    alarmRisk_ = value;
    alarmRiskIsSet_ = true;
}

bool ListAlarmTopicConfigInfoResponse::alarmRiskIsSet() const
{
    return alarmRiskIsSet_;
}

void ListAlarmTopicConfigInfoResponse::unsetalarmRisk()
{
    alarmRiskIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoResponse::getAlarmSwitch() const
{
    return alarmSwitch_;
}

void ListAlarmTopicConfigInfoResponse::setAlarmSwitch(const std::string& value)
{
    alarmSwitch_ = value;
    alarmSwitchIsSet_ = true;
}

bool ListAlarmTopicConfigInfoResponse::alarmSwitchIsSet() const
{
    return alarmSwitchIsSet_;
}

void ListAlarmTopicConfigInfoResponse::unsetalarmSwitch()
{
    alarmSwitchIsSet_ = false;
}

std::string ListAlarmTopicConfigInfoResponse::getAlarmTopicUrn() const
{
    return alarmTopicUrn_;
}

void ListAlarmTopicConfigInfoResponse::setAlarmTopicUrn(const std::string& value)
{
    alarmTopicUrn_ = value;
    alarmTopicUrnIsSet_ = true;
}

bool ListAlarmTopicConfigInfoResponse::alarmTopicUrnIsSet() const
{
    return alarmTopicUrnIsSet_;
}

void ListAlarmTopicConfigInfoResponse::unsetalarmTopicUrn()
{
    alarmTopicUrnIsSet_ = false;
}

bool ListAlarmTopicConfigInfoResponse::isSmnEffective() const
{
    return smnEffective_;
}

void ListAlarmTopicConfigInfoResponse::setSmnEffective(bool value)
{
    smnEffective_ = value;
    smnEffectiveIsSet_ = true;
}

bool ListAlarmTopicConfigInfoResponse::smnEffectiveIsSet() const
{
    return smnEffectiveIsSet_;
}

void ListAlarmTopicConfigInfoResponse::unsetsmnEffective()
{
    smnEffectiveIsSet_ = false;
}

}
}
}
}
}


