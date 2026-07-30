
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferDeploymentResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferDeploymentResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/InferModelResponse.h>
#include <huaweicloud/modelarts/v1/model/UnitConfigResponse.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/AdvancedConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateInferDeploymentResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateInferDeploymentResponse();
    virtual ~CreateInferDeploymentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInferDeploymentResponse members

    /// <summary>
    /// **参数解释：** 部署ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池ID，查询指定资源池下的服务，默认不过滤。可通过[查询资源池列表](ShowPool.xml)获取。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署场景下，服务实例数量。 **约束限制：** 不涉及。 **取值范围：** [1, 128]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释：** 系统日志转储开关。 **约束限制：** 只有NPU资源池有，且逻辑池是没有的。 **取值范围：** 不涉及。 **默认取值：** false。
    /// </summary>

    bool isSystemLogDumpEnable() const;
    bool systemLogDumpEnableIsSet() const;
    void unsetsystemLogDumpEnable();
    void setSystemLogDumpEnable(bool value);

    /// <summary>
    /// **参数解释：** 推理单元配置。
    /// </summary>

    std::vector<UnitConfigResponse>& getUnitConfigs();
    bool unitConfigsIsSet() const;
    void unsetunitConfigs();
    void setUnitConfigs(const std::vector<UnitConfigResponse>& value);

    /// <summary>
    /// **参数解释：** 权重百分比，分配到此模型的流量权重，仅当模型部署为在线服务时需要配置。 **取值范围：** [0, 100]。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// **参数解释：** 流量比例，单个部署实例预期接收用户的流量与总流量比值，是由流量权重配置和部署状态计算所得的值。 **取值范围：** 0.00%~100.00%。
    /// </summary>

    std::string getTrafficRatio() const;
    bool trafficRatioIsSet() const;
    void unsettrafficRatio();
    void setTrafficRatio(const std::string& value);

    /// <summary>
    /// **参数解释：** 凭证类型相关配置，用户可以在此处选择使用的凭证类型（dew，agency） **约束限制：** 不涉及。 **取值范围：** - [dew：DEW密钥。](tag:hws,hws_hk,fcs) - agency：临时委托凭证。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);

    /// <summary>
    /// **参数解释：** 凭证名称，用户使用dew类型凭证时可以在此处选择使用的凭证。 **约束限制：** 不涉及。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务优先级。 **约束限制：** 不涉及。 **取值范围：** [1, 3]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释：** 高可用开关，开启后不同实例的pod将尽量均匀分布到不同的节点上。（准备下线，请使用schedule_strategy字段） **取值范围：** - true: 高可用开启 - false: 高可用关闭。
    /// </summary>

    bool isHighAvailSwitch() const;
    bool highAvailSwitchIsSet() const;
    void unsethighAvailSwitch();
    void setHighAvailSwitch(bool value);

    /// <summary>
    /// **参数解释：** 算法框架。 **取值范围：** - COMMON： 普通在线服务。
    /// </summary>

    std::string getFramework() const;
    bool frameworkIsSet() const;
    void unsetframework();
    void setFramework(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务版本号，以数字及点号组成，形如1.0.1。 **约束限制：** 不涉及。 **取值范围：** 1.0.0 ~ 99.99.99，长度不超过8位。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 版本id，可通过查询version列表查询。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务当前状态。 **取值范围：** - DEPLOYING：部署中。 - FAILED：失败。 - STOPPED：停止。 - RUNNING：运行中。 - DELETING：删除中。 - STOPPING：停止中。 - CONCERNING：告警。 - DELETED: 已删除。 - RESTARTING: 重启中。 - UPGRADING：升级中。 - ERROR：异常。 - INTERRUPTING：中断中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署场景下，服务运行实例数量。 **约束限制：** 不涉及。 **取值范围：** [1, 128]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getRunningCount() const;
    bool runningCountIsSet() const;
    void unsetrunningCount();
    void setRunningCount(int32_t value);

    /// <summary>
    /// **参数解释：** 部署类型。 **取值范围：** - SINGLE：单机单卡。 - MULTI：多机多卡。
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启镜像流量。 **取值范围：** 不涉及。
    /// </summary>

    bool isMirrorTrafficEnable() const;
    bool mirrorTrafficEnableIsSet() const;
    void unsetmirrorTrafficEnable();
    void setMirrorTrafficEnable(bool value);

    /// <summary>
    /// **参数解释：** 镜像流量权重。 **取值范围：** 50。
    /// </summary>

    std::string getMirrorTrafficWeight() const;
    bool mirrorTrafficWeightIsSet() const;
    void unsetmirrorTrafficWeight();
    void setMirrorTrafficWeight(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务版本数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getVersionCount() const;
    bool versionCountIsSet() const;
    void unsetversionCount();
    void setVersionCount(int32_t value);

    /// <summary>
    /// **参数解释：** 工作负载类型。 **取值范围：** 不涉及。
    /// </summary>

    std::string getWorkloadType() const;
    bool workloadTypeIsSet() const;
    void unsetworkloadType();
    void setWorkloadType(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间，根据更新时的当前时间自动生成。 **取值范围：** 毫秒级时间戳，13位数字。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);

    /// <summary>
    /// **参数解释：** 部署对接lts状态。 **取值范围：** - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getLtsState() const;
    bool ltsStateIsSet() const;
    void unsetltsState();
    void setLtsState(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署ID。
    /// </summary>

    std::string getInferName() const;
    bool inferNameIsSet() const;
    void unsetinferName();
    void setInferName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InferModelResponse getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const InferModelResponse& value);

    /// <summary>
    /// 
    /// </summary>

    AdvancedConfig getAdvancedConfig() const;
    bool advancedConfigIsSet() const;
    void unsetadvancedConfig();
    void setAdvancedConfig(const AdvancedConfig& value);

    /// <summary>
    /// **参数解释：** 部署描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 参数解释： 创建时间，根据创建时的当前时间自动生成。 取值范围： 毫秒级时间戳，13位数字，如1609459200000。
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 调度策略。 **取值范围：** - HIGH_AVAILABILITY：高可用调度 - HIGH_UTILIZATION：紧凑调度 - HIGH_PERFORMANCE：高性能调度
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
    int32_t count_;
    bool countIsSet_;
    bool systemLogDumpEnable_;
    bool systemLogDumpEnableIsSet_;
    std::vector<UnitConfigResponse> unitConfigs_;
    bool unitConfigsIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    std::string trafficRatio_;
    bool trafficRatioIsSet_;
    std::string secretType_;
    bool secretTypeIsSet_;
    std::string secretName_;
    bool secretNameIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    bool highAvailSwitch_;
    bool highAvailSwitchIsSet_;
    std::string framework_;
    bool frameworkIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t runningCount_;
    bool runningCountIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;
    bool mirrorTrafficEnable_;
    bool mirrorTrafficEnableIsSet_;
    std::string mirrorTrafficWeight_;
    bool mirrorTrafficWeightIsSet_;
    int32_t versionCount_;
    bool versionCountIsSet_;
    std::string workloadType_;
    bool workloadTypeIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    std::string ltsState_;
    bool ltsStateIsSet_;
    std::string inferName_;
    bool inferNameIsSet_;
    InferModelResponse model_;
    bool modelIsSet_;
    AdvancedConfig advancedConfig_;
    bool advancedConfigIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string scheduleStrategy_;
    bool scheduleStrategyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferDeploymentResponse_H_
