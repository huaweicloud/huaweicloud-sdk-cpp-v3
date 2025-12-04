

#include "huaweicloud/rds/v3/model/AutoCesAlarmInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AutoCesAlarmInfo::AutoCesAlarmInfo()
{
    id_ = "";
    idIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    newInstanceDefault_ = false;
    newInstanceDefaultIsSet_ = false;
    switchStatus_ = "";
    switchStatusIsSet_ = false;
    alarmId_ = "";
    alarmIdIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    createdAt_ = 0L;
    createdAtIsSet_ = false;
    updatedAt_ = 0L;
    updatedAtIsSet_ = false;
}

AutoCesAlarmInfo::~AutoCesAlarmInfo() = default;

void AutoCesAlarmInfo::validate()
{
}

web::json::value AutoCesAlarmInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(newInstanceDefaultIsSet_) {
        val[utility::conversions::to_string_t("new_instance_default")] = ModelBase::toJson(newInstanceDefault_);
    }
    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }
    if(alarmIdIsSet_) {
        val[utility::conversions::to_string_t("alarm_id")] = ModelBase::toJson(alarmId_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool AutoCesAlarmInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_instance_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_instance_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewInstanceDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string AutoCesAlarmInfo::getId() const
{
    return id_;
}

void AutoCesAlarmInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AutoCesAlarmInfo::idIsSet() const
{
    return idIsSet_;
}

void AutoCesAlarmInfo::unsetid()
{
    idIsSet_ = false;
}

std::string AutoCesAlarmInfo::getDomainId() const
{
    return domainId_;
}

void AutoCesAlarmInfo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AutoCesAlarmInfo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AutoCesAlarmInfo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AutoCesAlarmInfo::getDomainName() const
{
    return domainName_;
}

void AutoCesAlarmInfo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool AutoCesAlarmInfo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void AutoCesAlarmInfo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string AutoCesAlarmInfo::getUserId() const
{
    return userId_;
}

void AutoCesAlarmInfo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool AutoCesAlarmInfo::userIdIsSet() const
{
    return userIdIsSet_;
}

void AutoCesAlarmInfo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string AutoCesAlarmInfo::getUserName() const
{
    return userName_;
}

void AutoCesAlarmInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool AutoCesAlarmInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void AutoCesAlarmInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string AutoCesAlarmInfo::getProjectId() const
{
    return projectId_;
}

void AutoCesAlarmInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AutoCesAlarmInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AutoCesAlarmInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AutoCesAlarmInfo::getProjectName() const
{
    return projectName_;
}

void AutoCesAlarmInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool AutoCesAlarmInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void AutoCesAlarmInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string AutoCesAlarmInfo::getEngineName() const
{
    return engineName_;
}

void AutoCesAlarmInfo::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool AutoCesAlarmInfo::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void AutoCesAlarmInfo::unsetengineName()
{
    engineNameIsSet_ = false;
}

bool AutoCesAlarmInfo::isNewInstanceDefault() const
{
    return newInstanceDefault_;
}

void AutoCesAlarmInfo::setNewInstanceDefault(bool value)
{
    newInstanceDefault_ = value;
    newInstanceDefaultIsSet_ = true;
}

bool AutoCesAlarmInfo::newInstanceDefaultIsSet() const
{
    return newInstanceDefaultIsSet_;
}

void AutoCesAlarmInfo::unsetnewInstanceDefault()
{
    newInstanceDefaultIsSet_ = false;
}

std::string AutoCesAlarmInfo::getSwitchStatus() const
{
    return switchStatus_;
}

void AutoCesAlarmInfo::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool AutoCesAlarmInfo::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void AutoCesAlarmInfo::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

std::string AutoCesAlarmInfo::getAlarmId() const
{
    return alarmId_;
}

void AutoCesAlarmInfo::setAlarmId(const std::string& value)
{
    alarmId_ = value;
    alarmIdIsSet_ = true;
}

bool AutoCesAlarmInfo::alarmIdIsSet() const
{
    return alarmIdIsSet_;
}

void AutoCesAlarmInfo::unsetalarmId()
{
    alarmIdIsSet_ = false;
}

std::string AutoCesAlarmInfo::getTopicUrn() const
{
    return topicUrn_;
}

void AutoCesAlarmInfo::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool AutoCesAlarmInfo::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void AutoCesAlarmInfo::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

int64_t AutoCesAlarmInfo::getCreatedAt() const
{
    return createdAt_;
}

void AutoCesAlarmInfo::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool AutoCesAlarmInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void AutoCesAlarmInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int64_t AutoCesAlarmInfo::getUpdatedAt() const
{
    return updatedAt_;
}

void AutoCesAlarmInfo::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool AutoCesAlarmInfo::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void AutoCesAlarmInfo::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


