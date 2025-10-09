
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/DeleteStatus.h>
#include <string>

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
class HUAWEICLOUD_CCE_V3_EXPORT  NodeStatus
    : public ModelBase
{
public:
    NodeStatus();
    virtual ~NodeStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeStatus members

    /// <summary>
    /// **参数解释**： 节点状态 **约束限制**： 创建节点接口返回中无该参数。 **取值范围**： 节点资源生命周期管理（如安装卸载等）状态和集群内K8s node状态的综合体现，取值如下 - Build：创建中，表示节点正处于创建过程中。 - Installing：安装中，表示节点正处于纳管过程中。 - Upgrading：升级中，表示节点正处于升级过程中。 - Active：运行中，表示节点处于正常状态。 - Abnormal：不可用，表示节点处于异常状态。 - Deleting： 删除中，表示节点正处于删除过程中。 - Error：错误，表示节点处于故障状态。
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点最近一次状态检查时间。集群处于异常、冻结或者中间态（例如创建中）时，节点的状态检查动作可能受影响。检查时间超过5分的节点状态不具有参考意义。 **约束限制**： 创建节点接口返回中无该参数。 **取值范围**： 不涉及
    /// </summary>

    std::string getLastProbeTime() const;
    bool lastProbeTimeIsSet() const;
    void unsetlastProbeTime();
    void setLastProbeTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建或删除时的任务ID。 **取值范围**： 不涉及
    /// </summary>

    std::string getJobID() const;
    bool jobIDIsSet() const;
    void unsetjobID();
    void setJobID(const std::string& value);

    /// <summary>
    /// **参数解释**： 底层云服务器或裸金属节点ID。 **约束限制**： 创建节点接口返回中无该参数。 **取值范围**： 不涉及
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点主网卡私有网段IP地址。 **约束限制**： 创建节点接口返回中无该参数。 **取值范围**： 不涉及
    /// </summary>

    std::string getPrivateIP() const;
    bool privateIPIsSet() const;
    void unsetprivateIP();
    void setPrivateIP(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点主网卡私有网段IPv6地址。 **约束限制**： 创建节点接口返回中无该参数。 **取值范围**： 不涉及
    /// </summary>

    std::string getPrivateIPv6IP() const;
    bool privateIPv6IPIsSet() const;
    void unsetprivateIPv6IP();
    void setPrivateIPv6IP(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点弹性公网IP地址。如果ECS的数据没有实时同步，可在界面上通过“同步节点信息”手动进行更新。 **约束限制**： 创建节点接口返回中无该参数。 **取值范围**： 不涉及
    /// </summary>

    std::string getPublicIP() const;
    bool publicIPIsSet() const;
    void unsetpublicIP();
    void setPublicIP(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteStatus getDeleteStatus() const;
    bool deleteStatusIsSet() const;
    void unsetdeleteStatus();
    void setDeleteStatus(const DeleteStatus& value);

    /// <summary>
    /// **参数解释**： 节点配置是否与所属节点池的节点模板最新配置一致。当更新节点池os或runtime后，该节点池中存量节点的os或runtime便与节点池存在差异，configurationUpToDate参数值即为false。重置节点后，存量节点的os和runtime与节点池配置保持一致，configurationUpToDate参数值即为true。 **约束限制**： 创建、更新节点接口返回中无该参数。 **取值范围**： 不涉及
    /// </summary>

    bool isConfigurationUpToDate() const;
    bool configurationUpToDateIsSet() const;
    void unsetconfigurationUpToDate();
    void setConfigurationUpToDate(bool value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string lastProbeTime_;
    bool lastProbeTimeIsSet_;
    std::string jobID_;
    bool jobIDIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    std::string privateIP_;
    bool privateIPIsSet_;
    std::string privateIPv6IP_;
    bool privateIPv6IPIsSet_;
    std::string publicIP_;
    bool publicIPIsSet_;
    DeleteStatus deleteStatus_;
    bool deleteStatusIsSet_;
    bool configurationUpToDate_;
    bool configurationUpToDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeStatus_H_
