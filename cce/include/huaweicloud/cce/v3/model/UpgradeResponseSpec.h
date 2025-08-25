
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeResponseSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeResponseSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterUpgradeResponseAction.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 升级任务元数据
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeResponseSpec
    : public ModelBase
{
public:
    UpgradeResponseSpec();
    virtual ~UpgradeResponseSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeResponseSpec members

    /// <summary>
    /// 
    /// </summary>

    ClusterUpgradeResponseAction getClusterUpgradeAction() const;
    bool clusterUpgradeActionIsSet() const;
    void unsetclusterUpgradeAction();
    void setClusterUpgradeAction(const ClusterUpgradeResponseAction& value);


protected:
    ClusterUpgradeResponseAction clusterUpgradeAction_;
    bool clusterUpgradeActionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeResponseSpec_H_
