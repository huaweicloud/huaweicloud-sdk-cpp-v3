

#include "huaweicloud/tics/v1/model/TicsLeagueAuditLog.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsLeagueAuditLog::TicsLeagueAuditLog()
{
    createUserDomainId_ = "";
    createUserDomainIdIsSet_ = false;
    createUserProjectId_ = "";
    createUserProjectIdIsSet_ = false;
    creatorAliasName_ = "";
    creatorAliasNameIsSet_ = false;
    eventEndTime_ = utility::datetime();
    eventEndTimeIsSet_ = false;
    eventInfo_ = "";
    eventInfoIsSet_ = false;
    eventStartTime_ = utility::datetime();
    eventStartTimeIsSet_ = false;
    eventStatus_ = "";
    eventStatusIsSet_ = false;
    id_ = 0L;
    idIsSet_ = false;
    leagueId_ = "";
    leagueIdIsSet_ = false;
    sponsorAgentName_ = "";
    sponsorAgentNameIsSet_ = false;
}

TicsLeagueAuditLog::~TicsLeagueAuditLog() = default;

void TicsLeagueAuditLog::validate()
{
}

web::json::value TicsLeagueAuditLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createUserDomainIdIsSet_) {
        val[utility::conversions::to_string_t("create_user_domain_id")] = ModelBase::toJson(createUserDomainId_);
    }
    if(createUserProjectIdIsSet_) {
        val[utility::conversions::to_string_t("create_user_project_id")] = ModelBase::toJson(createUserProjectId_);
    }
    if(creatorAliasNameIsSet_) {
        val[utility::conversions::to_string_t("creator_alias_name")] = ModelBase::toJson(creatorAliasName_);
    }
    if(eventEndTimeIsSet_) {
        val[utility::conversions::to_string_t("event_end_time")] = ModelBase::toJson(eventEndTime_);
    }
    if(eventInfoIsSet_) {
        val[utility::conversions::to_string_t("event_info")] = ModelBase::toJson(eventInfo_);
    }
    if(eventStartTimeIsSet_) {
        val[utility::conversions::to_string_t("event_start_time")] = ModelBase::toJson(eventStartTime_);
    }
    if(eventStatusIsSet_) {
        val[utility::conversions::to_string_t("event_status")] = ModelBase::toJson(eventStatus_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(sponsorAgentNameIsSet_) {
        val[utility::conversions::to_string_t("sponsor_agent_name")] = ModelBase::toJson(sponsorAgentName_);
    }

    return val;
}
bool TicsLeagueAuditLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_user_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUserDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUserProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorAliasName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sponsor_agent_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sponsor_agent_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSponsorAgentName(refVal);
        }
    }
    return ok;
}


std::string TicsLeagueAuditLog::getCreateUserDomainId() const
{
    return createUserDomainId_;
}

void TicsLeagueAuditLog::setCreateUserDomainId(const std::string& value)
{
    createUserDomainId_ = value;
    createUserDomainIdIsSet_ = true;
}

bool TicsLeagueAuditLog::createUserDomainIdIsSet() const
{
    return createUserDomainIdIsSet_;
}

void TicsLeagueAuditLog::unsetcreateUserDomainId()
{
    createUserDomainIdIsSet_ = false;
}

std::string TicsLeagueAuditLog::getCreateUserProjectId() const
{
    return createUserProjectId_;
}

void TicsLeagueAuditLog::setCreateUserProjectId(const std::string& value)
{
    createUserProjectId_ = value;
    createUserProjectIdIsSet_ = true;
}

bool TicsLeagueAuditLog::createUserProjectIdIsSet() const
{
    return createUserProjectIdIsSet_;
}

void TicsLeagueAuditLog::unsetcreateUserProjectId()
{
    createUserProjectIdIsSet_ = false;
}

std::string TicsLeagueAuditLog::getCreatorAliasName() const
{
    return creatorAliasName_;
}

void TicsLeagueAuditLog::setCreatorAliasName(const std::string& value)
{
    creatorAliasName_ = value;
    creatorAliasNameIsSet_ = true;
}

bool TicsLeagueAuditLog::creatorAliasNameIsSet() const
{
    return creatorAliasNameIsSet_;
}

void TicsLeagueAuditLog::unsetcreatorAliasName()
{
    creatorAliasNameIsSet_ = false;
}

utility::datetime TicsLeagueAuditLog::getEventEndTime() const
{
    return eventEndTime_;
}

void TicsLeagueAuditLog::setEventEndTime(const utility::datetime& value)
{
    eventEndTime_ = value;
    eventEndTimeIsSet_ = true;
}

bool TicsLeagueAuditLog::eventEndTimeIsSet() const
{
    return eventEndTimeIsSet_;
}

void TicsLeagueAuditLog::unseteventEndTime()
{
    eventEndTimeIsSet_ = false;
}

std::string TicsLeagueAuditLog::getEventInfo() const
{
    return eventInfo_;
}

void TicsLeagueAuditLog::setEventInfo(const std::string& value)
{
    eventInfo_ = value;
    eventInfoIsSet_ = true;
}

bool TicsLeagueAuditLog::eventInfoIsSet() const
{
    return eventInfoIsSet_;
}

void TicsLeagueAuditLog::unseteventInfo()
{
    eventInfoIsSet_ = false;
}

utility::datetime TicsLeagueAuditLog::getEventStartTime() const
{
    return eventStartTime_;
}

void TicsLeagueAuditLog::setEventStartTime(const utility::datetime& value)
{
    eventStartTime_ = value;
    eventStartTimeIsSet_ = true;
}

bool TicsLeagueAuditLog::eventStartTimeIsSet() const
{
    return eventStartTimeIsSet_;
}

void TicsLeagueAuditLog::unseteventStartTime()
{
    eventStartTimeIsSet_ = false;
}

std::string TicsLeagueAuditLog::getEventStatus() const
{
    return eventStatus_;
}

void TicsLeagueAuditLog::setEventStatus(const std::string& value)
{
    eventStatus_ = value;
    eventStatusIsSet_ = true;
}

bool TicsLeagueAuditLog::eventStatusIsSet() const
{
    return eventStatusIsSet_;
}

void TicsLeagueAuditLog::unseteventStatus()
{
    eventStatusIsSet_ = false;
}

int64_t TicsLeagueAuditLog::getId() const
{
    return id_;
}

void TicsLeagueAuditLog::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TicsLeagueAuditLog::idIsSet() const
{
    return idIsSet_;
}

void TicsLeagueAuditLog::unsetid()
{
    idIsSet_ = false;
}

std::string TicsLeagueAuditLog::getLeagueId() const
{
    return leagueId_;
}

void TicsLeagueAuditLog::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool TicsLeagueAuditLog::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void TicsLeagueAuditLog::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

std::string TicsLeagueAuditLog::getSponsorAgentName() const
{
    return sponsorAgentName_;
}

void TicsLeagueAuditLog::setSponsorAgentName(const std::string& value)
{
    sponsorAgentName_ = value;
    sponsorAgentNameIsSet_ = true;
}

bool TicsLeagueAuditLog::sponsorAgentNameIsSet() const
{
    return sponsorAgentNameIsSet_;
}

void TicsLeagueAuditLog::unsetsponsorAgentName()
{
    sponsorAgentNameIsSet_ = false;
}

}
}
}
}
}


