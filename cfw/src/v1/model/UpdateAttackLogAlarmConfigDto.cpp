

#include "huaweicloud/cfw/v1/model/UpdateAttackLogAlarmConfigDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAttackLogAlarmConfigDto::UpdateAttackLogAlarmConfigDto()
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
    severity_ = "";
    severityIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
}

UpdateAttackLogAlarmConfigDto::~UpdateAttackLogAlarmConfigDto() = default;

void UpdateAttackLogAlarmConfigDto::validate()
{
}

web::json::value UpdateAttackLogAlarmConfigDto::toJson() const
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
bool UpdateAttackLogAlarmConfigDto::fromJson(const web::json::value& val)
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


std::string UpdateAttackLogAlarmConfigDto::getAccountName() const
{
    return accountName_;
}

void UpdateAttackLogAlarmConfigDto::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetaccountName()
{
    accountNameIsSet_ = false;
}

std::string UpdateAttackLogAlarmConfigDto::getAlarmId() const
{
    return alarmId_;
}

void UpdateAttackLogAlarmConfigDto::setAlarmId(const std::string& value)
{
    alarmId_ = value;
    alarmIdIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::alarmIdIsSet() const
{
    return alarmIdIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetalarmId()
{
    alarmIdIsSet_ = false;
}

int32_t UpdateAttackLogAlarmConfigDto::getAlarmTimePeriod() const
{
    return alarmTimePeriod_;
}

void UpdateAttackLogAlarmConfigDto::setAlarmTimePeriod(int32_t value)
{
    alarmTimePeriod_ = value;
    alarmTimePeriodIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::alarmTimePeriodIsSet() const
{
    return alarmTimePeriodIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetalarmTimePeriod()
{
    alarmTimePeriodIsSet_ = false;
}

int32_t UpdateAttackLogAlarmConfigDto::getAlarmType() const
{
    return alarmType_;
}

void UpdateAttackLogAlarmConfigDto::setAlarmType(int32_t value)
{
    alarmType_ = value;
    alarmTypeIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::alarmTypeIsSet() const
{
    return alarmTypeIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetalarmType()
{
    alarmTypeIsSet_ = false;
}

int32_t UpdateAttackLogAlarmConfigDto::getEnableStatus() const
{
    return enableStatus_;
}

void UpdateAttackLogAlarmConfigDto::setEnableStatus(int32_t value)
{
    enableStatus_ = value;
    enableStatusIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::enableStatusIsSet() const
{
    return enableStatusIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetenableStatus()
{
    enableStatusIsSet_ = false;
}

int32_t UpdateAttackLogAlarmConfigDto::getFrequencyCount() const
{
    return frequencyCount_;
}

void UpdateAttackLogAlarmConfigDto::setFrequencyCount(int32_t value)
{
    frequencyCount_ = value;
    frequencyCountIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::frequencyCountIsSet() const
{
    return frequencyCountIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetfrequencyCount()
{
    frequencyCountIsSet_ = false;
}

int32_t UpdateAttackLogAlarmConfigDto::getFrequencyTime() const
{
    return frequencyTime_;
}

void UpdateAttackLogAlarmConfigDto::setFrequencyTime(int32_t value)
{
    frequencyTime_ = value;
    frequencyTimeIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::frequencyTimeIsSet() const
{
    return frequencyTimeIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetfrequencyTime()
{
    frequencyTimeIsSet_ = false;
}

std::string UpdateAttackLogAlarmConfigDto::getLanguage() const
{
    return language_;
}

void UpdateAttackLogAlarmConfigDto::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string UpdateAttackLogAlarmConfigDto::getSeverity() const
{
    return severity_;
}

void UpdateAttackLogAlarmConfigDto::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::severityIsSet() const
{
    return severityIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetseverity()
{
    severityIsSet_ = false;
}

std::string UpdateAttackLogAlarmConfigDto::getTopicUrn() const
{
    return topicUrn_;
}

void UpdateAttackLogAlarmConfigDto::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string UpdateAttackLogAlarmConfigDto::getUsername() const
{
    return username_;
}

void UpdateAttackLogAlarmConfigDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool UpdateAttackLogAlarmConfigDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void UpdateAttackLogAlarmConfigDto::unsetusername()
{
    usernameIsSet_ = false;
}

}
}
}
}
}


