
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterUpgradeAction.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeSpec
    : public ModelBase
{
public:
    UpgradeSpec();
    virtual ~UpgradeSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeSpec members

    /// <summary>
    /// 
    /// </summary>

    ClusterUpgradeAction getClusterUpgradeAction() const;
    bool clusterUpgradeActionIsSet() const;
    void unsetclusterUpgradeAction();
    void setClusterUpgradeAction(const ClusterUpgradeAction& value);


protected:
    ClusterUpgradeAction clusterUpgradeAction_;
    bool clusterUpgradeActionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeSpec_H_
