

#include "huaweicloud/cce/v3/model/AlarmInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AlarmInfo::AlarmInfo()
{
    topicsIsSet_ = false;
    alarmRuleTemplateId_ = "";
    alarmRuleTemplateIdIsSet_ = false;
    promInstanceID_ = "";
    promInstanceIDIsSet_ = false;
    promEnterpriseProjectID_ = "";
    promEnterpriseProjectIDIsSet_ = false;
}

AlarmInfo::~AlarmInfo() = default;

void AlarmInfo::validate()
{
}

web::json::value AlarmInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicsIsSet_) {
        val[utility::conversions::to_string_t("topics")] = ModelBase::toJson(topics_);
    }
    if(alarmRuleTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("alarmRuleTemplateId")] = ModelBase::toJson(alarmRuleTemplateId_);
    }
    if(promInstanceIDIsSet_) {
        val[utility::conversions::to_string_t("promInstanceID")] = ModelBase::toJson(promInstanceID_);
    }
    if(promEnterpriseProjectIDIsSet_) {
        val[utility::conversions::to_string_t("promEnterpriseProjectID")] = ModelBase::toJson(promEnterpriseProjectID_);
    }

    return val;
}
bool AlarmInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topics"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarmRuleTemplateId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarmRuleTemplateId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmRuleTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("promInstanceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("promInstanceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromInstanceID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("promEnterpriseProjectID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("promEnterpriseProjectID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromEnterpriseProjectID(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AlarmInfo::getTopics()
{
    return topics_;
}

void AlarmInfo::setTopics(const std::vector<std::string>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool AlarmInfo::topicsIsSet() const
{
    return topicsIsSet_;
}

void AlarmInfo::unsettopics()
{
    topicsIsSet_ = false;
}

std::string AlarmInfo::getAlarmRuleTemplateId() const
{
    return alarmRuleTemplateId_;
}

void AlarmInfo::setAlarmRuleTemplateId(const std::string& value)
{
    alarmRuleTemplateId_ = value;
    alarmRuleTemplateIdIsSet_ = true;
}

bool AlarmInfo::alarmRuleTemplateIdIsSet() const
{
    return alarmRuleTemplateIdIsSet_;
}

void AlarmInfo::unsetalarmRuleTemplateId()
{
    alarmRuleTemplateIdIsSet_ = false;
}

std::string AlarmInfo::getPromInstanceID() const
{
    return promInstanceID_;
}

void AlarmInfo::setPromInstanceID(const std::string& value)
{
    promInstanceID_ = value;
    promInstanceIDIsSet_ = true;
}

bool AlarmInfo::promInstanceIDIsSet() const
{
    return promInstanceIDIsSet_;
}

void AlarmInfo::unsetpromInstanceID()
{
    promInstanceIDIsSet_ = false;
}

std::string AlarmInfo::getPromEnterpriseProjectID() const
{
    return promEnterpriseProjectID_;
}

void AlarmInfo::setPromEnterpriseProjectID(const std::string& value)
{
    promEnterpriseProjectID_ = value;
    promEnterpriseProjectIDIsSet_ = true;
}

bool AlarmInfo::promEnterpriseProjectIDIsSet() const
{
    return promEnterpriseProjectIDIsSet_;
}

void AlarmInfo::unsetpromEnterpriseProjectID()
{
    promEnterpriseProjectIDIsSet_ = false;
}

}
}
}
}
}


