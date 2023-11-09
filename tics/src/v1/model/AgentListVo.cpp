

#include "huaweicloud/tics/v1/model/AgentListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




AgentListVo::AgentListVo()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    agentName_ = "";
    agentNameIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    creatorDomainId_ = "";
    creatorDomainIdIsSet_ = false;
    creatorUserName_ = "";
    creatorUserNameIsSet_ = false;
    deployStatus_ = "";
    deployStatusIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
    deploymentEventInformation_ = "";
    deploymentEventInformationIsSet_ = false;
    enableDelete_ = false;
    enableDeleteIsSet_ = false;
    enableUpgrade_ = false;
    enableUpgradeIsSet_ = false;
    imageVersion_ = "";
    imageVersionIsSet_ = false;
    isHighAvail_ = false;
    isHighAvailIsSet_ = false;
    leagueId_ = "";
    leagueIdIsSet_ = false;
    leagueName_ = "";
    leagueNameIsSet_ = false;
    leagueVersion_ = "";
    leagueVersionIsSet_ = false;
}

AgentListVo::~AgentListVo() = default;

void AgentListVo::validate()
{
}

web::json::value AgentListVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(agentNameIsSet_) {
        val[utility::conversions::to_string_t("agent_name")] = ModelBase::toJson(agentName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorDomainIdIsSet_) {
        val[utility::conversions::to_string_t("creator_domain_id")] = ModelBase::toJson(creatorDomainId_);
    }
    if(creatorUserNameIsSet_) {
        val[utility::conversions::to_string_t("creator_user_name")] = ModelBase::toJson(creatorUserName_);
    }
    if(deployStatusIsSet_) {
        val[utility::conversions::to_string_t("deploy_status")] = ModelBase::toJson(deployStatus_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }
    if(deploymentEventInformationIsSet_) {
        val[utility::conversions::to_string_t("deployment_event_information")] = ModelBase::toJson(deploymentEventInformation_);
    }
    if(enableDeleteIsSet_) {
        val[utility::conversions::to_string_t("enable_delete")] = ModelBase::toJson(enableDelete_);
    }
    if(enableUpgradeIsSet_) {
        val[utility::conversions::to_string_t("enable_upgrade")] = ModelBase::toJson(enableUpgrade_);
    }
    if(imageVersionIsSet_) {
        val[utility::conversions::to_string_t("image_version")] = ModelBase::toJson(imageVersion_);
    }
    if(isHighAvailIsSet_) {
        val[utility::conversions::to_string_t("is_high_avail")] = ModelBase::toJson(isHighAvail_);
    }
    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(leagueNameIsSet_) {
        val[utility::conversions::to_string_t("league_name")] = ModelBase::toJson(leagueName_);
    }
    if(leagueVersionIsSet_) {
        val[utility::conversions::to_string_t("league_version")] = ModelBase::toJson(leagueVersion_);
    }

    return val;
}
bool AgentListVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deployment_event_information"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_event_information"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentEventInformation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_upgrade"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_upgrade"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableUpgrade(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_high_avail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_high_avail"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsHighAvail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("league_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueVersion(refVal);
        }
    }
    return ok;
}


std::string AgentListVo::getAgentId() const
{
    return agentId_;
}

void AgentListVo::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool AgentListVo::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void AgentListVo::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string AgentListVo::getAgentName() const
{
    return agentName_;
}

void AgentListVo::setAgentName(const std::string& value)
{
    agentName_ = value;
    agentNameIsSet_ = true;
}

bool AgentListVo::agentNameIsSet() const
{
    return agentNameIsSet_;
}

void AgentListVo::unsetagentName()
{
    agentNameIsSet_ = false;
}

utility::datetime AgentListVo::getCreateTime() const
{
    return createTime_;
}

void AgentListVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AgentListVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AgentListVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AgentListVo::getCreatorDomainId() const
{
    return creatorDomainId_;
}

void AgentListVo::setCreatorDomainId(const std::string& value)
{
    creatorDomainId_ = value;
    creatorDomainIdIsSet_ = true;
}

bool AgentListVo::creatorDomainIdIsSet() const
{
    return creatorDomainIdIsSet_;
}

void AgentListVo::unsetcreatorDomainId()
{
    creatorDomainIdIsSet_ = false;
}

std::string AgentListVo::getCreatorUserName() const
{
    return creatorUserName_;
}

void AgentListVo::setCreatorUserName(const std::string& value)
{
    creatorUserName_ = value;
    creatorUserNameIsSet_ = true;
}

bool AgentListVo::creatorUserNameIsSet() const
{
    return creatorUserNameIsSet_;
}

void AgentListVo::unsetcreatorUserName()
{
    creatorUserNameIsSet_ = false;
}

std::string AgentListVo::getDeployStatus() const
{
    return deployStatus_;
}

void AgentListVo::setDeployStatus(const std::string& value)
{
    deployStatus_ = value;
    deployStatusIsSet_ = true;
}

bool AgentListVo::deployStatusIsSet() const
{
    return deployStatusIsSet_;
}

void AgentListVo::unsetdeployStatus()
{
    deployStatusIsSet_ = false;
}

std::string AgentListVo::getDeployType() const
{
    return deployType_;
}

void AgentListVo::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool AgentListVo::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void AgentListVo::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::string AgentListVo::getDeploymentEventInformation() const
{
    return deploymentEventInformation_;
}

void AgentListVo::setDeploymentEventInformation(const std::string& value)
{
    deploymentEventInformation_ = value;
    deploymentEventInformationIsSet_ = true;
}

bool AgentListVo::deploymentEventInformationIsSet() const
{
    return deploymentEventInformationIsSet_;
}

void AgentListVo::unsetdeploymentEventInformation()
{
    deploymentEventInformationIsSet_ = false;
}

bool AgentListVo::isEnableDelete() const
{
    return enableDelete_;
}

void AgentListVo::setEnableDelete(bool value)
{
    enableDelete_ = value;
    enableDeleteIsSet_ = true;
}

bool AgentListVo::enableDeleteIsSet() const
{
    return enableDeleteIsSet_;
}

void AgentListVo::unsetenableDelete()
{
    enableDeleteIsSet_ = false;
}

bool AgentListVo::isEnableUpgrade() const
{
    return enableUpgrade_;
}

void AgentListVo::setEnableUpgrade(bool value)
{
    enableUpgrade_ = value;
    enableUpgradeIsSet_ = true;
}

bool AgentListVo::enableUpgradeIsSet() const
{
    return enableUpgradeIsSet_;
}

void AgentListVo::unsetenableUpgrade()
{
    enableUpgradeIsSet_ = false;
}

std::string AgentListVo::getImageVersion() const
{
    return imageVersion_;
}

void AgentListVo::setImageVersion(const std::string& value)
{
    imageVersion_ = value;
    imageVersionIsSet_ = true;
}

bool AgentListVo::imageVersionIsSet() const
{
    return imageVersionIsSet_;
}

void AgentListVo::unsetimageVersion()
{
    imageVersionIsSet_ = false;
}

bool AgentListVo::isIsHighAvail() const
{
    return isHighAvail_;
}

void AgentListVo::setIsHighAvail(bool value)
{
    isHighAvail_ = value;
    isHighAvailIsSet_ = true;
}

bool AgentListVo::isHighAvailIsSet() const
{
    return isHighAvailIsSet_;
}

void AgentListVo::unsetisHighAvail()
{
    isHighAvailIsSet_ = false;
}

std::string AgentListVo::getLeagueId() const
{
    return leagueId_;
}

void AgentListVo::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool AgentListVo::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void AgentListVo::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

std::string AgentListVo::getLeagueName() const
{
    return leagueName_;
}

void AgentListVo::setLeagueName(const std::string& value)
{
    leagueName_ = value;
    leagueNameIsSet_ = true;
}

bool AgentListVo::leagueNameIsSet() const
{
    return leagueNameIsSet_;
}

void AgentListVo::unsetleagueName()
{
    leagueNameIsSet_ = false;
}

std::string AgentListVo::getLeagueVersion() const
{
    return leagueVersion_;
}

void AgentListVo::setLeagueVersion(const std::string& value)
{
    leagueVersion_ = value;
    leagueVersionIsSet_ = true;
}

bool AgentListVo::leagueVersionIsSet() const
{
    return leagueVersionIsSet_;
}

void AgentListVo::unsetleagueVersion()
{
    leagueVersionIsSet_ = false;
}

}
}
}
}
}


