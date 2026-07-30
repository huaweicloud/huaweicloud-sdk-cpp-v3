
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TerminationGrace.h>
#include <huaweicloud/modelarts/v1/model/CustomResourceSpec.h>
#include <huaweicloud/modelarts/v1/model/Health.h>
#include <huaweicloud/modelarts/v1/model/ServiceSecurityConfig.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ModelResource.h>
#include <huaweicloud/modelarts/v1/model/Code.h>
#include <huaweicloud/modelarts/v1/model/Dump.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ImageInfo.h>
#include <huaweicloud/modelarts/v1/model/FileInfo.h>
#include <huaweicloud/modelarts/v1/model/Affinity.h>
#include <map>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 推理单元配置。 **约束限制：** 单机推理时，个数只会为1；如果是分布式推理时，根据不同框架，实例单元配置可灵活配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UnitConfig
    : public ModelBase
{
public:
    UnitConfig();
    virtual ~UnitConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnitConfig members

    /// <summary>
    /// **参数解释：** 实例单元ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例单元角色名称。 **约束限制：** 最大长度为16字符，且需满足正则：^\\[a-z0-9]([-a-z0-9]*[a-z0-9])?$ **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例单元角色。 **约束限制：** 不涉及。 **取值范围：** - COMMON：表示其他角色。 **默认取值：** 不涉及。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CustomResourceSpec getCustomSpec() const;
    bool customSpecIsSet() const;
    void unsetcustomSpec();
    void setCustomSpec(const CustomResourceSpec& value);

    /// <summary>
    /// **参数解释：** 资源规格，根据所提供版本选择适合业务的规格。当specification为custom为自定义规格。由custom_spec指定部署的规格配置。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源规格的显示名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getFlavorDisplayName() const;
    bool flavorDisplayNameIsSet() const;
    void unsetflavorDisplayName();
    void setFlavorDisplayName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ImageInfo getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const ImageInfo& value);

    /// <summary>
    /// **参数解释：** 废弃参数，推荐使用files进行模型相关配置。 模型相关配置，用户可以在此处选择模型及权重文件配合镜像使用。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<ModelResource>& getModels();
    bool modelsIsSet() const;
    void unsetmodels();
    void setModels(const std::vector<ModelResource>& value);

    /// <summary>
    /// **参数解释：** 废弃参数，推荐使用files进行代码相关配置。 代码相关配置，用户可以在此处选择代码所在的obs路径等。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<Code>& getCodes();
    bool codesIsSet() const;
    void unsetcodes();
    void setCodes(const std::vector<Code>& value);

    /// <summary>
    /// **参数解释：** 模型和代码相关配置，用户可以在此处选择模型及权重文件配合镜像使用以及代码所在的obs路径等。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<FileInfo>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<FileInfo>& value);

    /// <summary>
    /// **参数解释：** 用户转储配置，用户可以在此处选择要转储的目的obs。 **约束限制：** 最多配置20组。
    /// </summary>

    std::vector<Dump>& getDumps();
    bool dumpsIsSet() const;
    void unsetdumps();
    void setDumps(const std::vector<Dump>& value);

    /// <summary>
    /// **参数解释：** 配置实例个数。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释：** 启动命令。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getCmd() const;
    bool cmdIsSet() const;
    void unsetcmd();
    void setCmd(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TerminationGrace getTerminationGrace() const;
    bool terminationGraceIsSet() const;
    void unsetterminationGrace();
    void setTerminationGrace(const TerminationGrace& value);

    /// <summary>
    /// **参数解释：** 环境变量。 **约束限制：** 变量键长度不大于64，由字母、数字、下划线、中划线、点组成，不能以数字开头。值的输入内容不能存在HTML标签，包括&lt;^&gt;。
    /// </summary>

    std::map<std::string, std::string>& getEnvs();
    bool envsIsSet() const;
    void unsetenvs();
    void setEnvs(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Health getReadinessHealth() const;
    bool readinessHealthIsSet() const;
    void unsetreadinessHealth();
    void setReadinessHealth(const Health& value);

    /// <summary>
    /// 
    /// </summary>

    Health getStartupHealth() const;
    bool startupHealthIsSet() const;
    void unsetstartupHealth();
    void setStartupHealth(const Health& value);

    /// <summary>
    /// 
    /// </summary>

    Health getLivenessHealth() const;
    bool livenessHealthIsSet() const;
    void unsetlivenessHealth();
    void setLivenessHealth(const Health& value);

    /// <summary>
    /// **参数解释：** 端口。 **约束限制：** 不涉及。 **取值范围：** [1,65535]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// **参数解释：** 自动重建策略，开启后，由于部署配置变更或者故障等原因导致Pod重启时，平台将按策略自动执行重建。若不开启，平台将不会主动干预处理。 **约束限制：** 不涉及。 **取值范围：** - Instance：部署副本重建，故障时重新拉起整个部署。 - Role：单元重建，当部署单元内的Pod出现故障时，重启该单元内的所有Pod。 - Pod：Pod重建，故障时重新拉起故障pod。 **默认取值：** 不涉及。
    /// </summary>

    std::string getRecovery() const;
    bool recoveryIsSet() const;
    void unsetrecovery();
    void setRecovery(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启恢复策略。 **约束限制：** 不涉及。 **取值范围：** - true：开启恢复策略。 - false：不开启恢复策略。 **默认取值：** 不涉及。
    /// </summary>

    bool isNpuResetEnable() const;
    bool npuResetEnableIsSet() const;
    void unsetnpuResetEnable();
    void setNpuResetEnable(bool value);

    /// <summary>
    /// **参数解释：** 单元副本数，当部署类型deploy_type为SINGLE或工作负载类型workload_type为DEPLOYMENT时，该参数无效。 **约束限制：** 不涉及。 **取值范围：** [1, 100] 或者为空。 **默认取值：** 默认值为1。
    /// </summary>

    int32_t getGroupCount() const;
    bool groupCountIsSet() const;
    void unsetgroupCount();
    void setGroupCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Affinity getAffinity() const;
    bool affinityIsSet() const;
    void unsetaffinity();
    void setAffinity(const Affinity& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceSecurityConfig getSecurityConfig() const;
    bool securityConfigIsSet() const;
    void unsetsecurityConfig();
    void setSecurityConfig(const ServiceSecurityConfig& value);

    /// <summary>
    /// **参数解释：** 节点池资源规格。 **约束限制：** 只能包含字母、数字、点、中划线和下划线。 **取值范围：** 长度不超过128字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPoolResourceFlavor() const;
    bool poolResourceFlavorIsSet() const;
    void unsetpoolResourceFlavor();
    void setPoolResourceFlavor(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string role_;
    bool roleIsSet_;
    CustomResourceSpec customSpec_;
    bool customSpecIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string flavorDisplayName_;
    bool flavorDisplayNameIsSet_;
    ImageInfo image_;
    bool imageIsSet_;
    std::vector<ModelResource> models_;
    bool modelsIsSet_;
    std::vector<Code> codes_;
    bool codesIsSet_;
    std::vector<FileInfo> files_;
    bool filesIsSet_;
    std::vector<Dump> dumps_;
    bool dumpsIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string cmd_;
    bool cmdIsSet_;
    TerminationGrace terminationGrace_;
    bool terminationGraceIsSet_;
    std::map<std::string, std::string> envs_;
    bool envsIsSet_;
    Health readinessHealth_;
    bool readinessHealthIsSet_;
    Health startupHealth_;
    bool startupHealthIsSet_;
    Health livenessHealth_;
    bool livenessHealthIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string recovery_;
    bool recoveryIsSet_;
    bool npuResetEnable_;
    bool npuResetEnableIsSet_;
    int32_t groupCount_;
    bool groupCountIsSet_;
    Affinity affinity_;
    bool affinityIsSet_;
    ServiceSecurityConfig securityConfig_;
    bool securityConfigIsSet_;
    std::string poolResourceFlavor_;
    bool poolResourceFlavorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitConfig_H_
