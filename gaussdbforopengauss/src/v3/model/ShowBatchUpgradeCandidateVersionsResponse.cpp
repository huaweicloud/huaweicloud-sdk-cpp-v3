

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowBatchUpgradeCandidateVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowBatchUpgradeCandidateVersionsResponse::ShowBatchUpgradeCandidateVersionsResponse()
{
    upgradeTypeListIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    upgradeCandidateVersionsIsSet_ = false;
    hotfixUpgradeInfosIsSet_ = false;
    hotfixRollbackInfosIsSet_ = false;
}

ShowBatchUpgradeCandidateVersionsResponse::~ShowBatchUpgradeCandidateVersionsResponse() = default;

void ShowBatchUpgradeCandidateVersionsResponse::validate()
{
}

web::json::value ShowBatchUpgradeCandidateVersionsResponse::toJson() const
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
bool ShowBatchUpgradeCandidateVersionsResponse::fromJson(const web::json::value& val)
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


std::vector<UpgradeTypeInfo>& ShowBatchUpgradeCandidateVersionsResponse::getUpgradeTypeList()
{
    return upgradeTypeList_;
}

void ShowBatchUpgradeCandidateVersionsResponse::setUpgradeTypeList(const std::vector<UpgradeTypeInfo>& value)
{
    upgradeTypeList_ = value;
    upgradeTypeListIsSet_ = true;
}

bool ShowBatchUpgradeCandidateVersionsResponse::upgradeTypeListIsSet() const
{
    return upgradeTypeListIsSet_;
}

void ShowBatchUpgradeCandidateVersionsResponse::unsetupgradeTypeList()
{
    upgradeTypeListIsSet_ = false;
}

std::string ShowBatchUpgradeCandidateVersionsResponse::getTargetVersion() const
{
    return targetVersion_;
}

void ShowBatchUpgradeCandidateVersionsResponse::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ShowBatchUpgradeCandidateVersionsResponse::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ShowBatchUpgradeCandidateVersionsResponse::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::vector<std::string>& ShowBatchUpgradeCandidateVersionsResponse::getUpgradeCandidateVersions()
{
    return upgradeCandidateVersions_;
}

void ShowBatchUpgradeCandidateVersionsResponse::setUpgradeCandidateVersions(const std::vector<std::string>& value)
{
    upgradeCandidateVersions_ = value;
    upgradeCandidateVersionsIsSet_ = true;
}

bool ShowBatchUpgradeCandidateVersionsResponse::upgradeCandidateVersionsIsSet() const
{
    return upgradeCandidateVersionsIsSet_;
}

void ShowBatchUpgradeCandidateVersionsResponse::unsetupgradeCandidateVersions()
{
    upgradeCandidateVersionsIsSet_ = false;
}

std::vector<HotfixInfoResult>& ShowBatchUpgradeCandidateVersionsResponse::getHotfixUpgradeInfos()
{
    return hotfixUpgradeInfos_;
}

void ShowBatchUpgradeCandidateVersionsResponse::setHotfixUpgradeInfos(const std::vector<HotfixInfoResult>& value)
{
    hotfixUpgradeInfos_ = value;
    hotfixUpgradeInfosIsSet_ = true;
}

bool ShowBatchUpgradeCandidateVersionsResponse::hotfixUpgradeInfosIsSet() const
{
    return hotfixUpgradeInfosIsSet_;
}

void ShowBatchUpgradeCandidateVersionsResponse::unsethotfixUpgradeInfos()
{
    hotfixUpgradeInfosIsSet_ = false;
}

std::vector<HotfixInfoResult>& ShowBatchUpgradeCandidateVersionsResponse::getHotfixRollbackInfos()
{
    return hotfixRollbackInfos_;
}

void ShowBatchUpgradeCandidateVersionsResponse::setHotfixRollbackInfos(const std::vector<HotfixInfoResult>& value)
{
    hotfixRollbackInfos_ = value;
    hotfixRollbackInfosIsSet_ = true;
}

bool ShowBatchUpgradeCandidateVersionsResponse::hotfixRollbackInfosIsSet() const
{
    return hotfixRollbackInfosIsSet_;
}

void ShowBatchUpgradeCandidateVersionsResponse::unsethotfixRollbackInfos()
{
    hotfixRollbackInfosIsSet_ = false;
}

}
}
}
}
}


