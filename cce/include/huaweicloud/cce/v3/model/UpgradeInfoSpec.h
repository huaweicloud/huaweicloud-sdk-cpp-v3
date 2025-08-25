
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeInfoSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeInfoSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/UpgradeFeatureGates.h>
#include <huaweicloud/cce/v3/model/UpgradeInfoStatus.h>
#include <huaweicloud/cce/v3/model/UpgradeVersionInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 升级配置相关信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeInfoSpec
    : public ModelBase
{
public:
    UpgradeInfoSpec();
    virtual ~UpgradeInfoSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeInfoSpec members

    /// <summary>
    /// 
    /// </summary>

    UpgradeInfoStatus getLastUpgradeInfo() const;
    bool lastUpgradeInfoIsSet() const;
    void unsetlastUpgradeInfo();
    void setLastUpgradeInfo(const UpgradeInfoStatus& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeVersionInfo getVersionInfo() const;
    bool versionInfoIsSet() const;
    void unsetversionInfo();
    void setVersionInfo(const UpgradeVersionInfo& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeFeatureGates getUpgradeFeatureGates() const;
    bool upgradeFeatureGatesIsSet() const;
    void unsetupgradeFeatureGates();
    void setUpgradeFeatureGates(const UpgradeFeatureGates& value);


protected:
    UpgradeInfoStatus lastUpgradeInfo_;
    bool lastUpgradeInfoIsSet_;
    UpgradeVersionInfo versionInfo_;
    bool versionInfoIsSet_;
    UpgradeFeatureGates upgradeFeatureGates_;
    bool upgradeFeatureGatesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeInfoSpec_H_
