
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowUpgradeCandidateVersionsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowUpgradeCandidateVersionsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/HotfixUpgradeInfos.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/HotfixRollbackInfos.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RollUpgradeProgress.h>
#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeTypeInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowUpgradeCandidateVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUpgradeCandidateVersionsResponse();
    virtual ~ShowUpgradeCandidateVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUpgradeCandidateVersionsResponse members

    /// <summary>
    /// 升级类型信息列表
    /// </summary>

    std::vector<UpgradeTypeInfo>& getUpgradeTypeList();
    bool upgradeTypeListIsSet() const;
    void unsetupgradeTypeList();
    void setUpgradeTypeList(const std::vector<UpgradeTypeInfo>& value);

    /// <summary>
    /// 是否可以回滚，true可以回滚，false不可以回滚。
    /// </summary>

    bool isRollbackEnabled() const;
    bool rollbackEnabledIsSet() const;
    void unsetrollbackEnabled();
    void setRollbackEnabled(bool value);

    /// <summary>
    /// 原版本
    /// </summary>

    std::string getSourceVersion() const;
    bool sourceVersionIsSet() const;
    void unsetsourceVersion();
    void setSourceVersion(const std::string& value);

    /// <summary>
    /// 升级目标版本，没有在滚动升级中返回null。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RollUpgradeProgress getRollUpgradeProgress() const;
    bool rollUpgradeProgressIsSet() const;
    void unsetrollUpgradeProgress();
    void setRollUpgradeProgress(const RollUpgradeProgress& value);

    /// <summary>
    /// 可以升级的版本，包括大小版本，滚动升级中返回空数组。
    /// </summary>

    std::vector<std::string>& getUpgradeCandidateVersions();
    bool upgradeCandidateVersionsIsSet() const;
    void unsetupgradeCandidateVersions();
    void setUpgradeCandidateVersions(const std::vector<std::string>& value);

    /// <summary>
    /// 可以升级的热补丁版本，滚动升级中返回空数组。
    /// </summary>

    std::vector<std::string>& getHotfixUpgradeCandidateVersions();
    bool hotfixUpgradeCandidateVersionsIsSet() const;
    void unsethotfixUpgradeCandidateVersions();
    void setHotfixUpgradeCandidateVersions(const std::vector<std::string>& value);

    /// <summary>
    /// 可以回滚的热补丁版本，滚动升级中返回空数组。
    /// </summary>

    std::vector<std::string>& getHotfixRollbackCandidateVersions();
    bool hotfixRollbackCandidateVersionsIsSet() const;
    void unsethotfixRollbackCandidateVersions();
    void setHotfixRollbackCandidateVersions(const std::vector<std::string>& value);

    /// <summary>
    /// 可以升级的热补丁信息。
    /// </summary>

    std::vector<HotfixUpgradeInfos>& getHotfixUpgradeInfos();
    bool hotfixUpgradeInfosIsSet() const;
    void unsethotfixUpgradeInfos();
    void setHotfixUpgradeInfos(const std::vector<HotfixUpgradeInfos>& value);

    /// <summary>
    /// 可以回滚的热补丁信息。
    /// </summary>

    std::vector<HotfixRollbackInfos>& getHotfixRollbackInfos();
    bool hotfixRollbackInfosIsSet() const;
    void unsethotfixRollbackInfos();
    void setHotfixRollbackInfos(const std::vector<HotfixRollbackInfos>& value);


protected:
    std::vector<UpgradeTypeInfo> upgradeTypeList_;
    bool upgradeTypeListIsSet_;
    bool rollbackEnabled_;
    bool rollbackEnabledIsSet_;
    std::string sourceVersion_;
    bool sourceVersionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    RollUpgradeProgress rollUpgradeProgress_;
    bool rollUpgradeProgressIsSet_;
    std::vector<std::string> upgradeCandidateVersions_;
    bool upgradeCandidateVersionsIsSet_;
    std::vector<std::string> hotfixUpgradeCandidateVersions_;
    bool hotfixUpgradeCandidateVersionsIsSet_;
    std::vector<std::string> hotfixRollbackCandidateVersions_;
    bool hotfixRollbackCandidateVersionsIsSet_;
    std::vector<HotfixUpgradeInfos> hotfixUpgradeInfos_;
    bool hotfixUpgradeInfosIsSet_;
    std::vector<HotfixRollbackInfos> hotfixRollbackInfos_;
    bool hotfixRollbackInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowUpgradeCandidateVersionsResponse_H_
