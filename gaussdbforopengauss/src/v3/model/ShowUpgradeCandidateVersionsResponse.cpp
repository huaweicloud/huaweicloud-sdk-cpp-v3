

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowUpgradeCandidateVersionsResponse::ShowUpgradeCandidateVersionsResponse()
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

ShowUpgradeCandidateVersionsResponse::~ShowUpgradeCandidateVersionsResponse() = default;

void ShowUpgradeCandidateVersionsResponse::validate()
{
}

web::json::value ShowUpgradeCandidateVersionsResponse::toJson() const
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
bool ShowUpgradeCandidateVersionsResponse::fromJson(const web::json::value& val)
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
            std::vector<HotfixUpgradeInfos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixUpgradeInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hotfix_rollback_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfix_rollback_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<HotfixRollbackInfos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixRollbackInfos(refVal);
        }
    }
    return ok;
}


std::vector<UpgradeTypeInfo>& ShowUpgradeCandidateVersionsResponse::getUpgradeTypeList()
{
    return upgradeTypeList_;
}

void ShowUpgradeCandidateVersionsResponse::setUpgradeTypeList(const std::vector<UpgradeTypeInfo>& value)
{
    upgradeTypeList_ = value;
    upgradeTypeListIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::upgradeTypeListIsSet() const
{
    return upgradeTypeListIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsetupgradeTypeList()
{
    upgradeTypeListIsSet_ = false;
}

bool ShowUpgradeCandidateVersionsResponse::isRollbackEnabled() const
{
    return rollbackEnabled_;
}

void ShowUpgradeCandidateVersionsResponse::setRollbackEnabled(bool value)
{
    rollbackEnabled_ = value;
    rollbackEnabledIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::rollbackEnabledIsSet() const
{
    return rollbackEnabledIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsetrollbackEnabled()
{
    rollbackEnabledIsSet_ = false;
}

std::string ShowUpgradeCandidateVersionsResponse::getSourceVersion() const
{
    return sourceVersion_;
}

void ShowUpgradeCandidateVersionsResponse::setSourceVersion(const std::string& value)
{
    sourceVersion_ = value;
    sourceVersionIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::sourceVersionIsSet() const
{
    return sourceVersionIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsetsourceVersion()
{
    sourceVersionIsSet_ = false;
}

std::string ShowUpgradeCandidateVersionsResponse::getTargetVersion() const
{
    return targetVersion_;
}

void ShowUpgradeCandidateVersionsResponse::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

RollUpgradeProgress ShowUpgradeCandidateVersionsResponse::getRollUpgradeProgress() const
{
    return rollUpgradeProgress_;
}

void ShowUpgradeCandidateVersionsResponse::setRollUpgradeProgress(const RollUpgradeProgress& value)
{
    rollUpgradeProgress_ = value;
    rollUpgradeProgressIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::rollUpgradeProgressIsSet() const
{
    return rollUpgradeProgressIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsetrollUpgradeProgress()
{
    rollUpgradeProgressIsSet_ = false;
}

std::vector<std::string>& ShowUpgradeCandidateVersionsResponse::getUpgradeCandidateVersions()
{
    return upgradeCandidateVersions_;
}

void ShowUpgradeCandidateVersionsResponse::setUpgradeCandidateVersions(const std::vector<std::string>& value)
{
    upgradeCandidateVersions_ = value;
    upgradeCandidateVersionsIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::upgradeCandidateVersionsIsSet() const
{
    return upgradeCandidateVersionsIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsetupgradeCandidateVersions()
{
    upgradeCandidateVersionsIsSet_ = false;
}

std::vector<std::string>& ShowUpgradeCandidateVersionsResponse::getHotfixUpgradeCandidateVersions()
{
    return hotfixUpgradeCandidateVersions_;
}

void ShowUpgradeCandidateVersionsResponse::setHotfixUpgradeCandidateVersions(const std::vector<std::string>& value)
{
    hotfixUpgradeCandidateVersions_ = value;
    hotfixUpgradeCandidateVersionsIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::hotfixUpgradeCandidateVersionsIsSet() const
{
    return hotfixUpgradeCandidateVersionsIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsethotfixUpgradeCandidateVersions()
{
    hotfixUpgradeCandidateVersionsIsSet_ = false;
}

std::vector<std::string>& ShowUpgradeCandidateVersionsResponse::getHotfixRollbackCandidateVersions()
{
    return hotfixRollbackCandidateVersions_;
}

void ShowUpgradeCandidateVersionsResponse::setHotfixRollbackCandidateVersions(const std::vector<std::string>& value)
{
    hotfixRollbackCandidateVersions_ = value;
    hotfixRollbackCandidateVersionsIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::hotfixRollbackCandidateVersionsIsSet() const
{
    return hotfixRollbackCandidateVersionsIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsethotfixRollbackCandidateVersions()
{
    hotfixRollbackCandidateVersionsIsSet_ = false;
}

std::vector<HotfixUpgradeInfos>& ShowUpgradeCandidateVersionsResponse::getHotfixUpgradeInfos()
{
    return hotfixUpgradeInfos_;
}

void ShowUpgradeCandidateVersionsResponse::setHotfixUpgradeInfos(const std::vector<HotfixUpgradeInfos>& value)
{
    hotfixUpgradeInfos_ = value;
    hotfixUpgradeInfosIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::hotfixUpgradeInfosIsSet() const
{
    return hotfixUpgradeInfosIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsethotfixUpgradeInfos()
{
    hotfixUpgradeInfosIsSet_ = false;
}

std::vector<HotfixRollbackInfos>& ShowUpgradeCandidateVersionsResponse::getHotfixRollbackInfos()
{
    return hotfixRollbackInfos_;
}

void ShowUpgradeCandidateVersionsResponse::setHotfixRollbackInfos(const std::vector<HotfixRollbackInfos>& value)
{
    hotfixRollbackInfos_ = value;
    hotfixRollbackInfosIsSet_ = true;
}

bool ShowUpgradeCandidateVersionsResponse::hotfixRollbackInfosIsSet() const
{
    return hotfixRollbackInfosIsSet_;
}

void ShowUpgradeCandidateVersionsResponse::unsethotfixRollbackInfos()
{
    hotfixRollbackInfosIsSet_ = false;
}

}
}
}
}
}


