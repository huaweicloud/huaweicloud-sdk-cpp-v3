
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchShowUpgradeCandidateVersionsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchShowUpgradeCandidateVersionsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/HotfixInfoResult.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BatchShowUpgradeCandidateVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchShowUpgradeCandidateVersionsResponse();
    virtual ~BatchShowUpgradeCandidateVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchShowUpgradeCandidateVersionsResponse members

    /// <summary>
    /// 升级类型信息列表。
    /// </summary>

    std::vector<UpgradeTypeInfo>& getUpgradeTypeList();
    bool upgradeTypeListIsSet() const;
    void unsetupgradeTypeList();
    void setUpgradeTypeList(const std::vector<UpgradeTypeInfo>& value);

    /// <summary>
    /// 升级目标版本，没有在滚动升级中返回null。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 可以升级的版本，包括大小版本。
    /// </summary>

    std::vector<std::string>& getUpgradeCandidateVersions();
    bool upgradeCandidateVersionsIsSet() const;
    void unsetupgradeCandidateVersions();
    void setUpgradeCandidateVersions(const std::vector<std::string>& value);

    /// <summary>
    /// 可以升级的热补丁信息。
    /// </summary>

    std::vector<HotfixInfoResult>& getHotfixUpgradeInfos();
    bool hotfixUpgradeInfosIsSet() const;
    void unsethotfixUpgradeInfos();
    void setHotfixUpgradeInfos(const std::vector<HotfixInfoResult>& value);

    /// <summary>
    /// 可以回滚的热补丁信息。
    /// </summary>

    std::vector<HotfixInfoResult>& getHotfixRollbackInfos();
    bool hotfixRollbackInfosIsSet() const;
    void unsethotfixRollbackInfos();
    void setHotfixRollbackInfos(const std::vector<HotfixInfoResult>& value);


protected:
    std::vector<UpgradeTypeInfo> upgradeTypeList_;
    bool upgradeTypeListIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    std::vector<std::string> upgradeCandidateVersions_;
    bool upgradeCandidateVersionsIsSet_;
    std::vector<HotfixInfoResult> hotfixUpgradeInfos_;
    bool hotfixUpgradeInfosIsSet_;
    std::vector<HotfixInfoResult> hotfixRollbackInfos_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchShowUpgradeCandidateVersionsResponse_H_
