
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeFeatureGates_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeFeatureGates_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群升级特性开关
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeFeatureGates
    : public ModelBase
{
public:
    UpgradeFeatureGates();
    virtual ~UpgradeFeatureGates();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeFeatureGates members

    /// <summary>
    /// 集群升级Console界面是否支持V4版本，该字段一般由CCE Console使用。
    /// </summary>

    bool isSupportUpgradePageV4() const;
    bool supportUpgradePageV4IsSet() const;
    void unsetsupportUpgradePageV4();
    void setSupportUpgradePageV4(bool value);


protected:
    bool supportUpgradePageV4_;
    bool supportUpgradePageV4IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeFeatureGates_H_
