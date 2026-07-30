
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferDeploymentScaleResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferDeploymentScaleResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/UnitConfig.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/modelarts/v1/model/AdvancedConfig.h>
#include <huaweicloud/modelarts/v1/model/FrozenInfo.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateInferDeploymentScaleResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateInferDeploymentScaleResponse();
    virtual ~UpdateInferDeploymentScaleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInferDeploymentScaleResponse members

    /// <summary>
    /// 参数解释： 部署ID，在[添加部署](CreateInferDeployment.xml)时即可在返回体中获取，也可通过[查询服务部署列表](ListInferDeployments.xml)获取当前用户拥有的部署，其中deployment_id字段即为部署ID。 约束限制： 不涉及。 取值范围： 部署ID。 默认取值： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务部署名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数解释： 部署id（废弃字段）。 取值范围： 不涉及。
    /// </summary>

    std::string getInferName() const;
    bool inferNameIsSet() const;
    void unsetinferName();
    void setInferName(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间，根据创建时的当前时间自动生成。 **取值范围：** 毫秒级时间戳，13位数字
    /// </summary>

    utility::datetime getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const utility::datetime& value);

    /// <summary>
    /// 参数解释： 描述 取值范围： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 专属资源池ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 算法框架。 **取值范围：** - COMMON： 普通在线服务。
    /// </summary>

    std::string getFramework() const;
    bool frameworkIsSet() const;
    void unsetframework();
    void setFramework(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务优先级。 **约束限制：** 不涉及。 **取值范围：** [1, 3]。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const std::string& value);

    /// <summary>
    /// **参数解释：** 凭证类型相关配置，用户可以在此处选择使用的凭证类型（dew，agency） **约束限制：** 不涉及。 **取值范围：** - [dew：DEW密钥。](tag:hws,hws_hk,fcs) - agency：临时委托凭证。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务部署状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释：** 高可用开关，开启后不同实例的pod将尽量均匀分布到不同的节点上。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** true
    /// </summary>

    std::string getHighAvailSwitch() const;
    bool highAvailSwitchIsSet() const;
    void unsethighAvailSwitch();
    void setHighAvailSwitch(const std::string& value);

    /// <summary>
    /// **参数解释：** 系统日志转储开关。 **约束限制：** 只有NPU资源池有，且逻辑池是没有的 **取值范围：** 不涉及 **默认取值：** false
    /// </summary>

    std::string getSystemLogDumpEnable() const;
    bool systemLogDumpEnableIsSet() const;
    void unsetsystemLogDumpEnable();
    void setSystemLogDumpEnable(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例单元配置。 **约束限制：** 单机推理时，个数只会为1；如果是分布式推理时，根据不同框架，实例单元配置可灵活配置。
    /// </summary>

    std::vector<UnitConfig>& getUnitConfigs();
    bool unitConfigsIsSet() const;
    void unsetunitConfigs();
    void setUnitConfigs(const std::vector<UnitConfig>& value);

    /// <summary>
    /// **参数解释：** 更新时间，根据更新时的当前时间自动生成。 **取值范围：** 毫秒级时间戳，13位数字。
    /// </summary>

    utility::datetime getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 当前服务版本信息。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务版本数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getVersionCount() const;
    bool versionCountIsSet() const;
    void unsetversionCount();
    void setVersionCount(int32_t value);

    /// <summary>
    /// **参数解释：** 权重百分比，分配到此模型的流量权重，仅当模型部署为在线服务时需要配置。 **约束限制：** 不涉及。 **取值范围：** [0, 100]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    AdvancedConfig getAdvancedConfig() const;
    bool advancedConfigIsSet() const;
    void unsetadvancedConfig();
    void setAdvancedConfig(const AdvancedConfig& value);

    /// <summary>
    /// **参数解释：** 巫山工作流ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 参数解释： 服务部署名字。
    /// </summary>

    std::string getDeploymentName() const;
    bool deploymentNameIsSet() const;
    void unsetdeploymentName();
    void setDeploymentName(const std::string& value);

    /// <summary>
    /// **参数解释：** 当服务或者部署被冻结时返回的冻结类型信息。
    /// </summary>

    std::vector<FrozenInfo>& getFrozenInfos();
    bool frozenInfosIsSet() const;
    void unsetfrozenInfos();
    void setFrozenInfos(const std::vector<FrozenInfo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string inferName_;
    bool inferNameIsSet_;
    utility::datetime createAt_;
    bool createAtIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string framework_;
    bool frameworkIsSet_;
    std::string priority_;
    bool priorityIsSet_;
    std::string secretType_;
    bool secretTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string highAvailSwitch_;
    bool highAvailSwitchIsSet_;
    std::string systemLogDumpEnable_;
    bool systemLogDumpEnableIsSet_;
    std::vector<UnitConfig> unitConfigs_;
    bool unitConfigsIsSet_;
    utility::datetime updateAt_;
    bool updateAtIsSet_;
    std::string version_;
    bool versionIsSet_;
    int32_t versionCount_;
    bool versionCountIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    AdvancedConfig advancedConfig_;
    bool advancedConfigIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string deploymentName_;
    bool deploymentNameIsSet_;
    std::vector<FrozenInfo> frozenInfos_;
    bool frozenInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateInferDeploymentScaleResponse_H_
