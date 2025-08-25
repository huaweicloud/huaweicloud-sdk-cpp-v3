
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterUpgradeResponseAction_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterUpgradeResponseAction_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/cce/v3/model/UpgradeStrategy.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterUpgradeResponseAction
    : public ModelBase
{
public:
    ClusterUpgradeResponseAction();
    virtual ~ClusterUpgradeResponseAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterUpgradeResponseAction members

    /// <summary>
    /// 当前集群版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 目标集群版本，例如\&quot;v1.23\&quot;
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 目标集群的平台版本号，表示集群版本(version)下的内部版本，不支持用户指定。
    /// </summary>

    std::string getTargetPlatformVersion() const;
    bool targetPlatformVersionIsSet() const;
    void unsettargetPlatformVersion();
    void setTargetPlatformVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeStrategy getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const UpgradeStrategy& value);

    /// <summary>
    /// 升级过程中指定的集群配置
    /// </summary>

    Object getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const Object& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    std::string targetPlatformVersion_;
    bool targetPlatformVersionIsSet_;
    UpgradeStrategy strategy_;
    bool strategyIsSet_;
    Object config_;
    bool configIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterUpgradeResponseAction_H_
