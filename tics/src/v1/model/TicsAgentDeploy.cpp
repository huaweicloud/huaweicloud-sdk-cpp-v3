

#include "huaweicloud/tics/v1/model/TicsAgentDeploy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsAgentDeploy::TicsAgentDeploy()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    agentName_ = "";
    agentNameIsSet_ = false;
    aomFlag_ = false;
    aomFlagIsSet_ = false;
    bcsFlag_ = false;
    bcsFlagIsSet_ = false;
    cceVersion_ = "";
    cceVersionIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    creatorDomainId_ = "";
    creatorDomainIdIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    creatorProjectId_ = "";
    creatorProjectIdIsSet_ = false;
    deployStatus_ = "";
    deployStatusIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
    deploymentEventInformation_ = "";
    deploymentEventInformationIsSet_ = false;
    highAvail_ = false;
    highAvailIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    imageVersion_ = "";
    imageVersionIsSet_ = false;
    leagueId_ = "";
    leagueIdIsSet_ = false;
    leagueName_ = "";
    leagueNameIsSet_ = false;
    leagueRegionName_ = "";
    leagueRegionNameIsSet_ = false;
    leagueVersion_ = "";
    leagueVersionIsSet_ = false;
    natId_ = "";
    natIdIsSet_ = false;
    storageMountType_ = "";
    storageMountTypeIsSet_ = false;
}

TicsAgentDeploy::~TicsAgentDeploy() = default;

void TicsAgentDeploy::validate()
{
}

web::json::value TicsAgentDeploy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(agentNameIsSet_) {
        val[utility::conversions::to_string_t("agent_name")] = ModelBase::toJson(agentName_);
    }
    if(aomFlagIsSet_) {
        val[utility::conversions::to_string_t("aom_flag")] = ModelBase::toJson(aomFlag_);
    }
    if(bcsFlagIsSet_) {
        val[utility::conversions::to_string_t("bcs_flag")] = ModelBase::toJson(bcsFlag_);
    }
    if(cceVersionIsSet_) {
        val[utility::conversions::to_string_t("cce_version")] = ModelBase::toJson(cceVersion_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorDomainIdIsSet_) {
        val[utility::conversions::to_string_t("creator_domain_id")] = ModelBase::toJson(creatorDomainId_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(creatorProjectIdIsSet_) {
        val[utility::conversions::to_string_t("creator_project_id")] = ModelBase::toJson(creatorProjectId_);
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
    if(highAvailIsSet_) {
        val[utility::conversions::to_string_t("high_avail")] = ModelBase::toJson(highAvail_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(imageVersionIsSet_) {
        val[utility::conversions::to_string_t("image_version")] = ModelBase::toJson(imageVersion_);
    }
    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(leagueNameIsSet_) {
        val[utility::conversions::to_string_t("league_name")] = ModelBase::toJson(leagueName_);
    }
    if(leagueRegionNameIsSet_) {
        val[utility::conversions::to_string_t("league_region_name")] = ModelBase::toJson(leagueRegionName_);
    }
    if(leagueVersionIsSet_) {
        val[utility::conversions::to_string_t("league_version")] = ModelBase::toJson(leagueVersion_);
    }
    if(natIdIsSet_) {
        val[utility::conversions::to_string_t("nat_id")] = ModelBase::toJson(natId_);
    }
    if(storageMountTypeIsSet_) {
        val[utility::conversions::to_string_t("storage_mount_type")] = ModelBase::toJson(storageMountType_);
    }

    return val;
}
bool TicsAgentDeploy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("aom_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aom_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAomFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bcs_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bcs_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBcsFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cce_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cce_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCceVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("high_avail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high_avail"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighAvail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("league_region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueRegionName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nat_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nat_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNatId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_mount_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_mount_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageMountType(refVal);
        }
    }
    return ok;
}


std::string TicsAgentDeploy::getAgentId() const
{
    return agentId_;
}

void TicsAgentDeploy::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool TicsAgentDeploy::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void TicsAgentDeploy::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string TicsAgentDeploy::getAgentName() const
{
    return agentName_;
}

void TicsAgentDeploy::setAgentName(const std::string& value)
{
    agentName_ = value;
    agentNameIsSet_ = true;
}

bool TicsAgentDeploy::agentNameIsSet() const
{
    return agentNameIsSet_;
}

void TicsAgentDeploy::unsetagentName()
{
    agentNameIsSet_ = false;
}

bool TicsAgentDeploy::isAomFlag() const
{
    return aomFlag_;
}

void TicsAgentDeploy::setAomFlag(bool value)
{
    aomFlag_ = value;
    aomFlagIsSet_ = true;
}

bool TicsAgentDeploy::aomFlagIsSet() const
{
    return aomFlagIsSet_;
}

void TicsAgentDeploy::unsetaomFlag()
{
    aomFlagIsSet_ = false;
}

bool TicsAgentDeploy::isBcsFlag() const
{
    return bcsFlag_;
}

void TicsAgentDeploy::setBcsFlag(bool value)
{
    bcsFlag_ = value;
    bcsFlagIsSet_ = true;
}

bool TicsAgentDeploy::bcsFlagIsSet() const
{
    return bcsFlagIsSet_;
}

void TicsAgentDeploy::unsetbcsFlag()
{
    bcsFlagIsSet_ = false;
}

std::string TicsAgentDeploy::getCceVersion() const
{
    return cceVersion_;
}

void TicsAgentDeploy::setCceVersion(const std::string& value)
{
    cceVersion_ = value;
    cceVersionIsSet_ = true;
}

bool TicsAgentDeploy::cceVersionIsSet() const
{
    return cceVersionIsSet_;
}

void TicsAgentDeploy::unsetcceVersion()
{
    cceVersionIsSet_ = false;
}

utility::datetime TicsAgentDeploy::getCreateTime() const
{
    return createTime_;
}

void TicsAgentDeploy::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TicsAgentDeploy::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TicsAgentDeploy::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TicsAgentDeploy::getCreatorDomainId() const
{
    return creatorDomainId_;
}

void TicsAgentDeploy::setCreatorDomainId(const std::string& value)
{
    creatorDomainId_ = value;
    creatorDomainIdIsSet_ = true;
}

bool TicsAgentDeploy::creatorDomainIdIsSet() const
{
    return creatorDomainIdIsSet_;
}

void TicsAgentDeploy::unsetcreatorDomainId()
{
    creatorDomainIdIsSet_ = false;
}

std::string TicsAgentDeploy::getCreatorId() const
{
    return creatorId_;
}

void TicsAgentDeploy::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool TicsAgentDeploy::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void TicsAgentDeploy::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string TicsAgentDeploy::getCreatorName() const
{
    return creatorName_;
}

void TicsAgentDeploy::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TicsAgentDeploy::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TicsAgentDeploy::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string TicsAgentDeploy::getCreatorProjectId() const
{
    return creatorProjectId_;
}

void TicsAgentDeploy::setCreatorProjectId(const std::string& value)
{
    creatorProjectId_ = value;
    creatorProjectIdIsSet_ = true;
}

bool TicsAgentDeploy::creatorProjectIdIsSet() const
{
    return creatorProjectIdIsSet_;
}

void TicsAgentDeploy::unsetcreatorProjectId()
{
    creatorProjectIdIsSet_ = false;
}

std::string TicsAgentDeploy::getDeployStatus() const
{
    return deployStatus_;
}

void TicsAgentDeploy::setDeployStatus(const std::string& value)
{
    deployStatus_ = value;
    deployStatusIsSet_ = true;
}

bool TicsAgentDeploy::deployStatusIsSet() const
{
    return deployStatusIsSet_;
}

void TicsAgentDeploy::unsetdeployStatus()
{
    deployStatusIsSet_ = false;
}

std::string TicsAgentDeploy::getDeployType() const
{
    return deployType_;
}

void TicsAgentDeploy::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool TicsAgentDeploy::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void TicsAgentDeploy::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::string TicsAgentDeploy::getDeploymentEventInformation() const
{
    return deploymentEventInformation_;
}

void TicsAgentDeploy::setDeploymentEventInformation(const std::string& value)
{
    deploymentEventInformation_ = value;
    deploymentEventInformationIsSet_ = true;
}

bool TicsAgentDeploy::deploymentEventInformationIsSet() const
{
    return deploymentEventInformationIsSet_;
}

void TicsAgentDeploy::unsetdeploymentEventInformation()
{
    deploymentEventInformationIsSet_ = false;
}

bool TicsAgentDeploy::isHighAvail() const
{
    return highAvail_;
}

void TicsAgentDeploy::setHighAvail(bool value)
{
    highAvail_ = value;
    highAvailIsSet_ = true;
}

bool TicsAgentDeploy::highAvailIsSet() const
{
    return highAvailIsSet_;
}

void TicsAgentDeploy::unsethighAvail()
{
    highAvailIsSet_ = false;
}

std::string TicsAgentDeploy::getImageId() const
{
    return imageId_;
}

void TicsAgentDeploy::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool TicsAgentDeploy::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void TicsAgentDeploy::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string TicsAgentDeploy::getImageVersion() const
{
    return imageVersion_;
}

void TicsAgentDeploy::setImageVersion(const std::string& value)
{
    imageVersion_ = value;
    imageVersionIsSet_ = true;
}

bool TicsAgentDeploy::imageVersionIsSet() const
{
    return imageVersionIsSet_;
}

void TicsAgentDeploy::unsetimageVersion()
{
    imageVersionIsSet_ = false;
}

std::string TicsAgentDeploy::getLeagueId() const
{
    return leagueId_;
}

void TicsAgentDeploy::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool TicsAgentDeploy::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void TicsAgentDeploy::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

std::string TicsAgentDeploy::getLeagueName() const
{
    return leagueName_;
}

void TicsAgentDeploy::setLeagueName(const std::string& value)
{
    leagueName_ = value;
    leagueNameIsSet_ = true;
}

bool TicsAgentDeploy::leagueNameIsSet() const
{
    return leagueNameIsSet_;
}

void TicsAgentDeploy::unsetleagueName()
{
    leagueNameIsSet_ = false;
}

std::string TicsAgentDeploy::getLeagueRegionName() const
{
    return leagueRegionName_;
}

void TicsAgentDeploy::setLeagueRegionName(const std::string& value)
{
    leagueRegionName_ = value;
    leagueRegionNameIsSet_ = true;
}

bool TicsAgentDeploy::leagueRegionNameIsSet() const
{
    return leagueRegionNameIsSet_;
}

void TicsAgentDeploy::unsetleagueRegionName()
{
    leagueRegionNameIsSet_ = false;
}

std::string TicsAgentDeploy::getLeagueVersion() const
{
    return leagueVersion_;
}

void TicsAgentDeploy::setLeagueVersion(const std::string& value)
{
    leagueVersion_ = value;
    leagueVersionIsSet_ = true;
}

bool TicsAgentDeploy::leagueVersionIsSet() const
{
    return leagueVersionIsSet_;
}

void TicsAgentDeploy::unsetleagueVersion()
{
    leagueVersionIsSet_ = false;
}

std::string TicsAgentDeploy::getNatId() const
{
    return natId_;
}

void TicsAgentDeploy::setNatId(const std::string& value)
{
    natId_ = value;
    natIdIsSet_ = true;
}

bool TicsAgentDeploy::natIdIsSet() const
{
    return natIdIsSet_;
}

void TicsAgentDeploy::unsetnatId()
{
    natIdIsSet_ = false;
}

std::string TicsAgentDeploy::getStorageMountType() const
{
    return storageMountType_;
}

void TicsAgentDeploy::setStorageMountType(const std::string& value)
{
    storageMountType_ = value;
    storageMountTypeIsSet_ = true;
}

bool TicsAgentDeploy::storageMountTypeIsSet() const
{
    return storageMountTypeIsSet_;
}

void TicsAgentDeploy::unsetstorageMountType()
{
    storageMountTypeIsSet_ = false;
}

}
}
}
}
}


