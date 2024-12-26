

#include "huaweicloud/cfw/v1/model/AlarmConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AlarmConfig::AlarmConfig()
{
    accountName_ = "";
    accountNameIsSet_ = false;
    alarmId_ = "";
    alarmIdIsSet_ = false;
    alarmTimePeriod_ = 0;
    alarmTimePeriodIsSet_ = false;
    alarmType_ = 0;
    alarmTypeIsSet_ = false;
    enableStatus_ = 0;
    enableStatusIsSet_ = false;
    frequencyCount_ = 0;
    frequencyCountIsSet_ = false;
    frequencyTime_ = 0;
    frequencyTimeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
}

AlarmConfig::~AlarmConfig() = default;

void AlarmConfig::validate()
{
}

web::json::value AlarmConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(alarmIdIsSet_) {
        val[utility::conversions::to_string_t("alarm_id")] = ModelBase::toJson(alarmId_);
    }
    if(alarmTimePeriodIsSet_) {
        val[utility::conversions::to_string_t("alarm_time_period")] = ModelBase::toJson(alarmTimePeriod_);
    }
    if(alarmTypeIsSet_) {
        val[utility::conversions::to_string_t("alarm_type")] = ModelBase::toJson(alarmType_);
    }
    if(enableStatusIsSet_) {
        val[utility::conversions::to_string_t("enable_status")] = ModelBase::toJson(enableStatus_);
    }
    if(frequencyCountIsSet_) {
        val[utility::conversions::to_string_t("frequency_count")] = ModelBase::toJson(frequencyCount_);
    }
    if(frequencyTimeIsSet_) {
        val[utility::conversions::to_string_t("frequency_time")] = ModelBase::toJson(frequencyTime_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }

    return val;
}
bool AlarmConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_time_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_time_period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmTimePeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frequency_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequency_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrequencyCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frequency_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequency_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrequencyTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    return ok;
}


std::string AlarmConfig::getAccountName() const
{
    return accountName_;
}

void AlarmConfig::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool AlarmConfig::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void AlarmConfig::unsetaccountName()
{
    accountNameIsSet_ = false;
}

std::string AlarmConfig::getAlarmId() const
{
    return alarmId_;
}

void AlarmConfig::setAlarmId(const std::string& value)
{
    alarmId_ = value;
    alarmIdIsSet_ = true;
}

bool AlarmConfig::alarmIdIsSet() const
{
    return alarmIdIsSet_;
}

void AlarmConfig::unsetalarmId()
{
    alarmIdIsSet_ = false;
}

int32_t AlarmConfig::getAlarmTimePeriod() const
{
    return alarmTimePeriod_;
}

void AlarmConfig::setAlarmTimePeriod(int32_t value)
{
    alarmTimePeriod_ = value;
    alarmTimePeriodIsSet_ = true;
}

bool AlarmConfig::alarmTimePeriodIsSet() const
{
    return alarmTimePeriodIsSet_;
}

void AlarmConfig::unsetalarmTimePeriod()
{
    alarmTimePeriodIsSet_ = false;
}

int32_t AlarmConfig::getAlarmType() const
{
    return alarmType_;
}

void AlarmConfig::setAlarmType(int32_t value)
{
    alarmType_ = value;
    alarmTypeIsSet_ = true;
}

bool AlarmConfig::alarmTypeIsSet() const
{
    return alarmTypeIsSet_;
}

void AlarmConfig::unsetalarmType()
{
    alarmTypeIsSet_ = false;
}

int32_t AlarmConfig::getEnableStatus() const
{
    return enableStatus_;
}

void AlarmConfig::setEnableStatus(int32_t value)
{
    enableStatus_ = value;
    enableStatusIsSet_ = true;
}

bool AlarmConfig::enableStatusIsSet() const
{
    return enableStatusIsSet_;
}

void AlarmConfig::unsetenableStatus()
{
    enableStatusIsSet_ = false;
}

int32_t AlarmConfig::getFrequencyCount() const
{
    return frequencyCount_;
}

void AlarmConfig::setFrequencyCount(int32_t value)
{
    frequencyCount_ = value;
    frequencyCountIsSet_ = true;
}

bool AlarmConfig::frequencyCountIsSet() const
{
    return frequencyCountIsSet_;
}

void AlarmConfig::unsetfrequencyCount()
{
    frequencyCountIsSet_ = false;
}

int32_t AlarmConfig::getFrequencyTime() const
{
    return frequencyTime_;
}

void AlarmConfig::setFrequencyTime(int32_t value)
{
    frequencyTime_ = value;
    frequencyTimeIsSet_ = true;
}

bool AlarmConfig::frequencyTimeIsSet() const
{
    return frequencyTimeIsSet_;
}

void AlarmConfig::unsetfrequencyTime()
{
    frequencyTimeIsSet_ = false;
}

std::string AlarmConfig::getLanguage() const
{
    return language_;
}

void AlarmConfig::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool AlarmConfig::languageIsSet() const
{
    return languageIsSet_;
}

void AlarmConfig::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string AlarmConfig::getName() const
{
    return name_;
}

void AlarmConfig::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlarmConfig::nameIsSet() const
{
    return nameIsSet_;
}

void AlarmConfig::unsetname()
{
    nameIsSet_ = false;
}

std::string AlarmConfig::getSeverity() const
{
    return severity_;
}

void AlarmConfig::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool AlarmConfig::severityIsSet() const
{
    return severityIsSet_;
}

void AlarmConfig::unsetseverity()
{
    severityIsSet_ = false;
}

std::string AlarmConfig::getTopicUrn() const
{
    return topicUrn_;
}

void AlarmConfig::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool AlarmConfig::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void AlarmConfig::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string AlarmConfig::getUsername() const
{
    return username_;
}

void AlarmConfig::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool AlarmConfig::usernameIsSet() const
{
    return usernameIsSet_;
}

void AlarmConfig::unsetusername()
{
    usernameIsSet_ = false;
}

}
}
}
}
}


