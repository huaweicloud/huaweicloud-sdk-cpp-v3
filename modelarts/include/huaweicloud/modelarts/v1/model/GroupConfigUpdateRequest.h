
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GroupConfigUpdateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GroupConfigUpdateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/DeploymentTaskLimit.h>
#include <huaweicloud/modelarts/v1/model/UnitConfig.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/AdvancedConfig.h>
#include <huaweicloud/modelarts/v1/model/GroupModel.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 服务实例组配置，当推理方式为BATCH/EDGE时仅支持配置一个模型；当推理方式为REAL_TIME时，可根据业务需要配置多个服务实例并分配权重。 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GroupConfigUpdateRequest
    : public ModelBase
{
public:
    GroupConfigUpdateRequest();
    virtual ~GroupConfigUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupConfigUpdateRequest members

    /// <summary>
    /// **参数解释：** 部署ID。 **约束限制：** 不填保留原有值。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署名称。 **约束限制：** 必填参数，不填不保留原有值。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池ID，查询指定资源池下的服务，默认不过滤。可通过[查询资源池列表](ShowPool.xml)获取。 **约束限制：** 不填保留原有值。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 框架类型。 **约束限制：** 不填则为默认值。 **取值范围：** - COMMON：普通在线服务 - VLLM：VLLM框架 - MINDIE：MINDIE框架 **默认取值：** COMMON
    /// </summary>

    std::string getFramework() const;
    bool frameworkIsSet() const;
    void unsetframework();
    void setFramework(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署场景下，服务实例数量。 **约束限制：** 不填则为默认值。 **取值范围：** [1, 128]。 **默认取值：** 1
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释：** 部署类型。 **约束限制：** 不填保留原有值。 **取值范围：** - SINGLE：常规部署 - MULTI：分布式部署 **默认取值：** 不涉及
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);

    /// <summary>
    /// **参数解释：** 系统日志转储开关。 **约束限制：** 不填则为默认值。 **取值范围：** 不涉及 **默认取值：** false
    /// </summary>

    bool isSystemLogDumpEnable() const;
    bool systemLogDumpEnableIsSet() const;
    void unsetsystemLogDumpEnable();
    void setSystemLogDumpEnable(bool value);

    /// <summary>
    /// **参数解释：** 实例单元配置。 **约束限制：** - 单机推理时，个数只会为1；如果是分布式推理时，根据不同框架，实例单元配置可灵活配置。 - 必填字段。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::vector<UnitConfig>& getUnitConfigs();
    bool unitConfigsIsSet() const;
    void unsetunitConfigs();
    void setUnitConfigs(const std::vector<UnitConfig>& value);

    /// <summary>
    /// **参数解释：** 权重百分比，分配到此模型的流量权重，仅当模型部署为在线服务时需要配置。 **约束限制：** 不填保留原有值。 **取值范围：** [0, 100]。 **默认取值：** 不涉及
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// **参数解释：** 凭证类型相关配置，用户可以在此处选择使用的凭证类型（dew，agency） **约束限制：** 1.使用临时委托凭证类型约束限制:集群已安装CCE容器存储（Everest）v2.4.204及以上版本，且集群版本为v1.28及以上且确保局点已启用IAM5服务。 2.若插件版本不足或集群不支持临时委托凭证，则需通过DEW服务挂载。 3.不填保留原有值。 **取值范围：** - [dew：DEW密钥。](tag:hws,hws_hk,fcs) - agency：临时委托凭证。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);

    /// <summary>
    /// **参数解释**： 认证凭证名称，用户使用dew类型凭证时可以在此处选择使用的凭证。 **约束限制**： secret_type是dew时必填，不填保留原有值。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务优先级。 **约束限制：** - 如服务处于“运行中”，priority字段为必要参数，且value必须为原版的值； - 如服务处于“停止”，priority字段为非必要参数。 - 不填保留原有值。 **取值范围：** [1, 3]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释：** 高可用开关，开启后不同实例的pod将尽量均匀分布到不同的节点上。 **约束限制：** 不填则为默认值 **取值范围：** 不涉及 **默认取值：** true
    /// </summary>

    bool isHighAvailSwitch() const;
    bool highAvailSwitchIsSet() const;
    void unsethighAvailSwitch();
    void setHighAvailSwitch(bool value);

    /// <summary>
    /// **参数解释：** 部署备注。 **约束限制：** 不填则将部署描述清空。 **取值范围：** 长度不可以超过512，不能包含大于号，小于号。 **默认取值：** 默认为空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AdvancedConfig getAdvancedConfig() const;
    bool advancedConfigIsSet() const;
    void unsetadvancedConfig();
    void setAdvancedConfig(const AdvancedConfig& value);

    /// <summary>
    /// 
    /// </summary>

    GroupModel getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const GroupModel& value);

    /// <summary>
    /// **参数解释：** 镜像流量开关。 **约束限制：** 不填保留原有值 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    bool isMirrorTrafficEnable() const;
    bool mirrorTrafficEnableIsSet() const;
    void unsetmirrorTrafficEnable();
    void setMirrorTrafficEnable(bool value);

    /// <summary>
    /// **参数解释：** 镜像流量权重。 **约束限制：** 不填保留原有值。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    int32_t getMirrorTrafficWeight() const;
    bool mirrorTrafficWeightIsSet() const;
    void unsetmirrorTrafficWeight();
    void setMirrorTrafficWeight(int32_t value);

    /// <summary>
    /// **参数解释：** 部署状态。 **约束限制：** 不填保留原有值。 **取值范围：** - DEPLOYING：部署中 - FAILED：失败 - STOPPED：停止 - RUNNING：运行中 - DELETING：删除中 - STOPPING：停止中 - CONCERNING：存在潜在问题 - DELETED：删除 - RESTARTING：重启中 - UPGRADING：更新中 - ERROR：错误 - INTERRUPTING：中断中 **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeploymentTaskLimit getDeploymentTaskLimit() const;
    bool deploymentTaskLimitIsSet() const;
    void unsetdeploymentTaskLimit();
    void setDeploymentTaskLimit(const DeploymentTaskLimit& value);

    /// <summary>
    /// **参数解释：** 调度策略。 **约束限制：** 不涉及。 **取值范围：** - HIGH_AVAILABILITY：高可用调度 - HIGH_UTILIZATION：紧凑调度 - HIGH_PERFORMANCE：高性能调度 **默认取值：** HIGH_AVAILABILITY。
    /// </summary>

    std::string getScheduleStrategy() const;
    bool scheduleStrategyIsSet() const;
    void unsetscheduleStrategy();
    void setScheduleStrategy(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string framework_;
    bool frameworkIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;
    bool systemLogDumpEnable_;
    bool systemLogDumpEnableIsSet_;
    std::vector<UnitConfig> unitConfigs_;
    bool unitConfigsIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    std::string secretType_;
    bool secretTypeIsSet_;
    std::string secretName_;
    bool secretNameIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    bool highAvailSwitch_;
    bool highAvailSwitchIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    AdvancedConfig advancedConfig_;
    bool advancedConfigIsSet_;
    GroupModel model_;
    bool modelIsSet_;
    bool mirrorTrafficEnable_;
    bool mirrorTrafficEnableIsSet_;
    int32_t mirrorTrafficWeight_;
    bool mirrorTrafficWeightIsSet_;
    std::string status_;
    bool statusIsSet_;
    DeploymentTaskLimit deploymentTaskLimit_;
    bool deploymentTaskLimitIsSet_;
    std::string scheduleStrategy_;
    bool scheduleStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GroupConfigUpdateRequest_H_
