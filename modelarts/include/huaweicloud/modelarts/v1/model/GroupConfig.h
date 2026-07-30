
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GroupConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GroupConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/UnitConfig.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ModelResource.h>
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
/// **参数解释：** 服务实例组配置，当推理方式为BATCH/EDGE时仅支持配置一个模型；当推理方式为REAL_TIME时，可根据业务需要配置多个服务实例并分配权重。 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GroupConfig
    : public ModelBase
{
public:
    GroupConfig();
    virtual ~GroupConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupConfig members

    /// <summary>
    /// **参数解释：** 部署ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池ID，查询指定资源池下的服务，默认不过滤。可通过[查询资源池列表](ShowPool.xml)获取。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
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
    /// **参数解释：** 推理单元配置。 **约束限制：** 单机推理时，个数只会为1；如果是分布式推理时，根据不同框架，实例单元配置可灵活配置。
    /// </summary>

    std::vector<UnitConfig>& getUnitConfigs();
    bool unitConfigsIsSet() const;
    void unsetunitConfigs();
    void setUnitConfigs(const std::vector<UnitConfig>& value);

    /// <summary>
    /// **参数解释：** 权重百分比，分配到此模型的流量权重，仅当模型部署为在线服务时需要配置。 **约束限制：** 不涉及。 **取值范围：** [0, 100]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// **参数解释：** 凭证类型相关配置，用户可以在此处选择使用的凭证类型（dew，agency） **约束限制：** 1.使用临时委托凭证类型约束限制:集群已安装CCE容器存储（Everest）v2.4.204及以上版本，且集群版本为v1.28及以上且确保局点已启用IAM5服务。 2.若插件版本不足或集群不支持临时委托凭证，则需通过DEW服务挂载。 **取值范围：** - [dew：DEW密钥。](tag:hws,hws_hk,fcs) - agency：临时委托凭证。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);

    /// <summary>
    /// **参数解释**： 凭证名称，用户使用dew类型凭证时可以在此处选择使用的凭证。 **约束限制**： 不涉及。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务优先级。 **约束限制：** - 如服务处于\&quot;运行中\&quot;，priority字段为必要参数，且value必须与原服务的priority值相同； - 如服务处于\&quot;停止\&quot;，priority字段为非必要参数。 **取值范围：** [1, 3]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// **参数解释：** 高可用开关，开启后不同实例的pod将尽量均匀分布到不同的节点上。（准备下线，请使用schedule_strategy字段） **约束限制：** 不涉及。 **取值范围：** - true：高可用开启。 - false：高可用关闭。 **默认取值：** true。
    /// </summary>

    bool isHighAvailSwitch() const;
    bool highAvailSwitchIsSet() const;
    void unsethighAvailSwitch();
    void setHighAvailSwitch(bool value);

    /// <summary>
    /// **参数解释：** 调度策略。 **约束限制：** 不涉及。 **取值范围：** - HIGH_AVAILABILITY：高可用调度 - HIGH_UTILIZATION：紧凑调度 - HIGH_PERFORMANCE：高性能调度 **默认取值：** HIGH_AVAILABILITY。
    /// </summary>

    std::string getScheduleStrategy() const;
    bool scheduleStrategyIsSet() const;
    void unsetscheduleStrategy();
    void setScheduleStrategy(const std::string& value);

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
    /// **参数解释：** 服务备注。 **约束限制：** 不涉及。 **取值范围：** 长度不可以超过512，不能包含大于号，小于号。 **默认取值：** 默认为空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务框架。 **约束限制：** 仅支持以下枚举值：COMMON | VLLM | MINDIE。 **取值范围：** 仅支持以下枚举值：COMMON | VLLM | MINDIE。 **默认取值：** COMMON。
    /// </summary>

    std::string getFramework() const;
    bool frameworkIsSet() const;
    void unsetframework();
    void setFramework(const std::string& value);

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
    /// **参数解释：** 工作负载类型。 **取值范围：** - DEPLOYMENT：DEPLOYMENT类型 - LWS：LWS类型
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
    /// 
    /// </summary>

    ModelResource getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const ModelResource& value);

    /// <summary>
    /// 
    /// </summary>

    AdvancedConfig getAdvancedConfig() const;
    bool advancedConfigIsSet() const;
    void unsetadvancedConfig();
    void setAdvancedConfig(const AdvancedConfig& value);


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
    std::string scheduleStrategy_;
    bool scheduleStrategyIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string framework_;
    bool frameworkIsSet_;
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
    ModelResource model_;
    bool modelIsSet_;
    AdvancedConfig advancedConfig_;
    bool advancedConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GroupConfig_H_
