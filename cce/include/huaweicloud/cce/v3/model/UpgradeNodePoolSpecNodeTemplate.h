
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeNodePoolSpecNodeTemplate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeNodePoolSpecNodeTemplate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/VolumeConfig.h>
#include <huaweicloud/cce/v3/model/NodeLifecycleConfig.h>
#include <huaweicloud/cce/v3/model/Login.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 同步节点池模板参数
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeNodePoolSpecNodeTemplate
    : public ModelBase
{
public:
    UpgradeNodePoolSpecNodeTemplate();
    virtual ~UpgradeNodePoolSpecNodeTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeNodePoolSpecNodeTemplate members

    /// <summary>
    /// 
    /// </summary>

    NodeLifecycleConfig getLifeCycle() const;
    bool lifeCycleIsSet() const;
    void unsetlifeCycle();
    void setLifeCycle(const NodeLifecycleConfig& value);

    /// <summary>
    /// 
    /// </summary>

    Login getLogin() const;
    bool loginIsSet() const;
    void unsetlogin();
    void setLogin(const Login& value);

    /// <summary>
    /// 
    /// </summary>

    VolumeConfig getVolumeConfig() const;
    bool volumeConfigIsSet() const;
    void unsetvolumeConfig();
    void setVolumeConfig(const VolumeConfig& value);


protected:
    NodeLifecycleConfig lifeCycle_;
    bool lifeCycleIsSet_;
    Login login_;
    bool loginIsSet_;
    VolumeConfig volumeConfig_;
    bool volumeConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeNodePoolSpecNodeTemplate_H_
