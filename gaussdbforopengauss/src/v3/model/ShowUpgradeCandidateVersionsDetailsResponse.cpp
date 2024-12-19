

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowUpgradeCandidateVersionsDetailsResponse::ShowUpgradeCandidateVersionsDetailsResponse()
{
    upgradeTypeListIsSet_ = false;
    rollbackEnabled_ = false;
    rollbackEnabledIsSet_ = false;
    sourceVersion_ = "";
    sourceVersionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    rollUpgradeProgressIsSet_ = false;
    upgradeCandidateVersionsIsSet_ = false;
    hotfixUpgradeCandidateVersionsIsSet_ = false;
    hotfixRollbackCandidateVersionsIsSet_ = false;
    hotfixUpgradeInfosIsSet_ = false;
    hotfixRollbackInfosIsSet_ = false;
}

ShowUpgradeCandidateVersionsDetailsResponse::~ShowUpgradeCandidateVersionsDetailsResponse() = default;

void ShowUpgradeCandidateVersionsDetailsResponse::validate()
{
}

web::json::value ShowUpgradeCandidateVersionsDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upgradeTypeListIsSet_) {
        val[utility::conversions::to_string_t("upgrade_type_list")] = ModelBase::toJson(upgradeTypeList_);
    }
    if(rollbackEnabledIsSet_) {
        val[utility::conversions::to_string_t("rollback_enabled")] = ModelBase::toJson(rollbackEnabled_);
    }
    if(sourceVersionIsSet_) {
        val[utility::conversions::to_string_t("source_version")] = ModelBase::toJson(sourceVersion_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }
    if(rollUpgradeProgressIsSet_) {
        val[utility::conversions::to_string_t("roll_upgrade_progress")] = ModelBase::toJson(rollUpgradeProgress_);
    }
    if(upgradeCandidateVersionsIsSet_) {
        val[utility::conversions::to_string_t("upgrade_candidate_versions")] = ModelBase::toJson(upgradeCandidateVersions_);
    }
    if(hotfixUpgradeCandidateVersionsIsSet_) {
        val[utility::conversions::to_string_t("hotfix_upgrade_candidate_versions")] = ModelBase::toJson(hotfixUpgradeCandidateVersions_);
    }
    if(hotfixRollbackCandidateVersionsIsSet_) {
        val[utility::conversions::to_string_t("hotfix_rollback_candidate_versions")] = ModelBase::toJson(hotfixRollbackCandidateVersions_);
    }
    if(hotfixUpgradeInfosIsSet_) {
        val[utility::conversions::to_string_t("hotfix_upgrade_infos")] = ModelBase::toJson(hotfixUpgradeInfos_);
    }
    if(hotfixRollbackInfosIsSet_) {
        val[utility::conversions::to_string_t("hotfix_rollback_infos")] = ModelBase::toJson(hotfixRollbackInfos_);
    }

    return val;
}
bool ShowUpgradeCandidateVersionsDetailsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rollback_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rollback_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollbackEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("roll_upgrade_progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roll_upgrade_progress"));
        if(!fieldValue.is_null())
        {
            RollUpgradeProgress refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollUpgradeProgress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hotfix_upgrade_candidate_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_upgrade_candidate_versions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixUpgradeCandidateVersions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_rollback_candidate_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_rollback_candidate_versions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixRollbackCandidateVersions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_upgrade_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_upgrade_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<CanBeUpgradedHotfixDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixUpgradeInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_rollback_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_rollback_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<CanBeRollbackedHotfixDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixRollbackInfos(refVal);
        }
    }
    return ok;
}


std::vector<UpgradeTypeInfo>& ShowUpgradeCandidateVersionsDetailsResponse::getUpgradeTypeList()
{
    return upgradeTypeList_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setUpgradeTypeList(const std::vector<UpgradeTypeInfo>& value)
{
    upgradeTypeList_ = value;
    upgradeTypeListIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::upgradeTypeListIsSet() const
{
    return upgradeTypeListIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsetupgradeTypeList()
{
    upgradeTypeListIsSet_ = false;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::isRollbackEnabled() const
{
    return rollbackEnabled_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setRollbackEnabled(bool value)
{
    rollbackEnabled_ = value;
    rollbackEnabledIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::rollbackEnabledIsSet() const
{
    return rollbackEnabledIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsetrollbackEnabled()
{
    rollbackEnabledIsSet_ = false;
}

std::string ShowUpgradeCandidateVersionsDetailsResponse::getSourceVersion() const
{
    return sourceVersion_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setSourceVersion(const std::string& value)
{
    sourceVersion_ = value;
    sourceVersionIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::sourceVersionIsSet() const
{
    return sourceVersionIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsetsourceVersion()
{
    sourceVersionIsSet_ = false;
}

std::string ShowUpgradeCandidateVersionsDetailsResponse::getTargetVersion() const
{
    return targetVersion_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

RollUpgradeProgress ShowUpgradeCandidateVersionsDetailsResponse::getRollUpgradeProgress() const
{
    return rollUpgradeProgress_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setRollUpgradeProgress(const RollUpgradeProgress& value)
{
    rollUpgradeProgress_ = value;
    rollUpgradeProgressIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::rollUpgradeProgressIsSet() const
{
    return rollUpgradeProgressIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsetrollUpgradeProgress()
{
    rollUpgradeProgressIsSet_ = false;
}

std::vector<std::string>& ShowUpgradeCandidateVersionsDetailsResponse::getUpgradeCandidateVersions()
{
    return upgradeCandidateVersions_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setUpgradeCandidateVersions(const std::vector<std::string>& value)
{
    upgradeCandidateVersions_ = value;
    upgradeCandidateVersionsIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::upgradeCandidateVersionsIsSet() const
{
    return upgradeCandidateVersionsIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsetupgradeCandidateVersions()
{
    upgradeCandidateVersionsIsSet_ = false;
}

std::vector<std::string>& ShowUpgradeCandidateVersionsDetailsResponse::getHotfixUpgradeCandidateVersions()
{
    return hotfixUpgradeCandidateVersions_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setHotfixUpgradeCandidateVersions(const std::vector<std::string>& value)
{
    hotfixUpgradeCandidateVersions_ = value;
    hotfixUpgradeCandidateVersionsIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::hotfixUpgradeCandidateVersionsIsSet() const
{
    return hotfixUpgradeCandidateVersionsIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsethotfixUpgradeCandidateVersions()
{
    hotfixUpgradeCandidateVersionsIsSet_ = false;
}

std::vector<std::string>& ShowUpgradeCandidateVersionsDetailsResponse::getHotfixRollbackCandidateVersions()
{
    return hotfixRollbackCandidateVersions_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setHotfixRollbackCandidateVersions(const std::vector<std::string>& value)
{
    hotfixRollbackCandidateVersions_ = value;
    hotfixRollbackCandidateVersionsIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::hotfixRollbackCandidateVersionsIsSet() const
{
    return hotfixRollbackCandidateVersionsIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsethotfixRollbackCandidateVersions()
{
    hotfixRollbackCandidateVersionsIsSet_ = false;
}

std::vector<CanBeUpgradedHotfixDetail>& ShowUpgradeCandidateVersionsDetailsResponse::getHotfixUpgradeInfos()
{
    return hotfixUpgradeInfos_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setHotfixUpgradeInfos(const std::vector<CanBeUpgradedHotfixDetail>& value)
{
    hotfixUpgradeInfos_ = value;
    hotfixUpgradeInfosIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::hotfixUpgradeInfosIsSet() const
{
    return hotfixUpgradeInfosIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsethotfixUpgradeInfos()
{
    hotfixUpgradeInfosIsSet_ = false;
}

std::vector<CanBeRollbackedHotfixDetail>& ShowUpgradeCandidateVersionsDetailsResponse::getHotfixRollbackInfos()
{
    return hotfixRollbackInfos_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::setHotfixRollbackInfos(const std::vector<CanBeRollbackedHotfixDetail>& value)
{
    hotfixRollbackInfos_ = value;
    hotfixRollbackInfosIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsDetailsResponse::hotfixRollbackInfosIsSet() const
{
    return hotfixRollbackInfosIsSet_;
}

void ShowUpgradeCandidateVersionsDetailsResponse::unsethotfixRollbackInfos()
{
    hotfixRollbackInfosIsSet_ = false;
}

}
}
}
}
}


