

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchShowUpgradeCandidateVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchShowUpgradeCandidateVersionsResponse::BatchShowUpgradeCandidateVersionsResponse()
{
    upgradeTypeListIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    upgradeCandidateVersionsIsSet_ = false;
    hotfixUpgradeInfosIsSet_ = false;
    hotfixRollbackInfosIsSet_ = false;
}

BatchShowUpgradeCandidateVersionsResponse::~BatchShowUpgradeCandidateVersionsResponse() = default;

void BatchShowUpgradeCandidateVersionsResponse::validate()
{
}

web::json::value BatchShowUpgradeCandidateVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upgradeTypeListIsSet_) {
        val[utility::conversions::to_string_t("upgrade_type_list")] = ModelBase::toJson(upgradeTypeList_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }
    if(upgradeCandidateVersionsIsSet_) {
        val[utility::conversions::to_string_t("upgrade_candidate_versions")] = ModelBase::toJson(upgradeCandidateVersions_);
    }
    if(hotfixUpgradeInfosIsSet_) {
        val[utility::conversions::to_string_t("hotfix_upgrade_infos")] = ModelBase::toJson(hotfixUpgradeInfos_);
    }
    if(hotfixRollbackInfosIsSet_) {
        val[utility::conversions::to_string_t("hotfix_rollback_infos")] = ModelBase::toJson(hotfixRollbackInfos_);
    }

    return val;
}
bool BatchShowUpgradeCandidateVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upgrade_type_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_type_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradeTypeInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeTypeList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_candidate_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_candidate_versions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeCandidateVersions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_upgrade_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_upgrade_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<HotfixInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixUpgradeInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_rollback_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_rollback_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<HotfixInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixRollbackInfos(refVal);
        }
    }
    return ok;
}


std::vector<UpgradeTypeInfo>& BatchShowUpgradeCandidateVersionsResponse::getUpgradeTypeList()
{
    return upgradeTypeList_;
}

void BatchShowUpgradeCandidateVersionsResponse::setUpgradeTypeList(const std::vector<UpgradeTypeInfo>& value)
{
    upgradeTypeList_ = value;
    upgradeTypeListIsSet_ = true;
}

bool BatchShowUpgradeCandidateVersionsResponse::upgradeTypeListIsSet() const
{
    return upgradeTypeListIsSet_;
}

void BatchShowUpgradeCandidateVersionsResponse::unsetupgradeTypeList()
{
    upgradeTypeListIsSet_ = false;
}

std::string BatchShowUpgradeCandidateVersionsResponse::getTargetVersion() const
{
    return targetVersion_;
}

void BatchShowUpgradeCandidateVersionsResponse::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool BatchShowUpgradeCandidateVersionsResponse::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void BatchShowUpgradeCandidateVersionsResponse::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::vector<std::string>& BatchShowUpgradeCandidateVersionsResponse::getUpgradeCandidateVersions()
{
    return upgradeCandidateVersions_;
}

void BatchShowUpgradeCandidateVersionsResponse::setUpgradeCandidateVersions(const std::vector<std::string>& value)
{
    upgradeCandidateVersions_ = value;
    upgradeCandidateVersionsIsSet_ = true;
}

bool BatchShowUpgradeCandidateVersionsResponse::upgradeCandidateVersionsIsSet() const
{
    return upgradeCandidateVersionsIsSet_;
}

void BatchShowUpgradeCandidateVersionsResponse::unsetupgradeCandidateVersions()
{
    upgradeCandidateVersionsIsSet_ = false;
}

std::vector<HotfixInfoResult>& BatchShowUpgradeCandidateVersionsResponse::getHotfixUpgradeInfos()
{
    return hotfixUpgradeInfos_;
}

void BatchShowUpgradeCandidateVersionsResponse::setHotfixUpgradeInfos(const std::vector<HotfixInfoResult>& value)
{
    hotfixUpgradeInfos_ = value;
    hotfixUpgradeInfosIsSet_ = true;
}

bool BatchShowUpgradeCandidateVersionsResponse::hotfixUpgradeInfosIsSet() const
{
    return hotfixUpgradeInfosIsSet_;
}

void BatchShowUpgradeCandidateVersionsResponse::unsethotfixUpgradeInfos()
{
    hotfixUpgradeInfosIsSet_ = false;
}

std::vector<HotfixInfoResult>& BatchShowUpgradeCandidateVersionsResponse::getHotfixRollbackInfos()
{
    return hotfixRollbackInfos_;
}

void BatchShowUpgradeCandidateVersionsResponse::setHotfixRollbackInfos(const std::vector<HotfixInfoResult>& value)
{
    hotfixRollbackInfos_ = value;
    hotfixRollbackInfosIsSet_ = true;
}

bool BatchShowUpgradeCandidateVersionsResponse::hotfixRollbackInfosIsSet() const
{
    return hotfixRollbackInfosIsSet_;
}

void BatchShowUpgradeCandidateVersionsResponse::unsethotfixRollbackInfos()
{
    hotfixRollbackInfosIsSet_ = false;
}

}
}
}
}
}


