
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitConfigResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitConfigResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AffinityResponse.h>
#include <huaweicloud/modelarts/v1/model/ImageInfoResponse.h>
#include <huaweicloud/modelarts/v1/model/TerminationGrace.h>
#include <huaweicloud/modelarts/v1/model/CustomResourceSpec.h>
#include <huaweicloud/modelarts/v1/model/InferModelResponse.h>
#include <huaweicloud/modelarts/v1/model/ServiceSecurityConfig.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/DumpResponse.h>
#include <huaweicloud/modelarts/v1/model/CodeResponse.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/FileResponse.h>
#include <huaweicloud/modelarts/v1/model/HealthResponse.h>
#include <map>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 推理单元配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UnitConfigResponse
    : public ModelBase
{
public:
    UnitConfigResponse();
    virtual ~UnitConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnitConfigResponse members

    /// <summary>
    /// **参数解释：** 实例单元ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例单元名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例单元角色。 **取值范围：** - COMMON：表示其他角色。
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
    /// **参数解释：** 资源规格，根据所提供版本选择适合业务的规格。当specification为custom时表示自定义规格。由custom_spec指定部署的规格配置。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ImageInfoResponse getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const ImageInfoResponse& value);

    /// <summary>
    /// **参数解释：** 模型相关配置，用户可以在此处选择模型及权重文件配合镜像使用。
    /// </summary>

    std::vector<InferModelResponse>& getModels();
    bool modelsIsSet() const;
    void unsetmodels();
    void setModels(const std::vector<InferModelResponse>& value);

    /// <summary>
    /// **参数解释：** 模型和代码相关配置，用户可以在此处选择模型及权重文件配合镜像使用以及代码所在的obs路径等。
    /// </summary>

    std::vector<FileResponse>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<FileResponse>& value);

    /// <summary>
    /// **参数解释：** 代码相关配置，用户可以在此处选择代码所在的obs路径等。
    /// </summary>

    std::vector<CodeResponse>& getCodes();
    bool codesIsSet() const;
    void unsetcodes();
    void setCodes(const std::vector<CodeResponse>& value);

    /// <summary>
    /// **参数解释：** 转储相关配置，用户可以在此处选择转储的目的obs路径等。
    /// </summary>

    std::vector<DumpResponse>& getDumps();
    bool dumpsIsSet() const;
    void unsetdumps();
    void setDumps(const std::vector<DumpResponse>& value);

    /// <summary>
    /// **参数解释：** 配置实例个数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释：** 单元副本数，当部署类型deploy_type为SINGLE或工作负载类型workload_type为DEPLOYMENT时，该参数无效。 **取值范围：** [1, 100] 或者为空。 **默认取值：** 默认值为1。
    /// </summary>

    int32_t getGroupCount() const;
    bool groupCountIsSet() const;
    void unsetgroupCount();
    void setGroupCount(int32_t value);

    /// <summary>
    /// **参数解释：** 启动命令。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCmd() const;
    bool cmdIsSet() const;
    void unsetcmd();
    void setCmd(const std::string& value);

    /// <summary>
    /// **参数解释：** 环境变量。
    /// </summary>

    std::map<std::string, std::string>& getEnvs();
    bool envsIsSet() const;
    void unsetenvs();
    void setEnvs(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    HealthResponse getReadinessHealth() const;
    bool readinessHealthIsSet() const;
    void unsetreadinessHealth();
    void setReadinessHealth(const HealthResponse& value);

    /// <summary>
    /// 
    /// </summary>

    HealthResponse getStartupHealth() const;
    bool startupHealthIsSet() const;
    void unsetstartupHealth();
    void setStartupHealth(const HealthResponse& value);

    /// <summary>
    /// 
    /// </summary>

    HealthResponse getLivenessHealth() const;
    bool livenessHealthIsSet() const;
    void unsetlivenessHealth();
    void setLivenessHealth(const HealthResponse& value);

    /// <summary>
    /// **参数解释：** 端口。 **取值范围：** [1,65535]。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// **参数解释：** 自动重建策略，开启后，由于部署配置变更或者故障等原因导致Pod重启时，平台将按策略自动执行重建。若不开启，平台将不会主动干预处理。 **取值范围：** - Instance：部署副本重建，故障时重新拉起整个部署。 - Role：单元重建，当部署单元内的Pod出现故障时，重启该单元内的所有Pod。 - Pod：Pod重建，故障时重新拉起故障pod。
    /// </summary>

    std::string getRecovery() const;
    bool recoveryIsSet() const;
    void unsetrecovery();
    void setRecovery(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启恢复策略。 **取值范围：** - true：开启恢复策略。 - false：不开启恢复策略。
    /// </summary>

    bool isNpuResetEnable() const;
    bool npuResetEnableIsSet() const;
    void unsetnpuResetEnable();
    void setNpuResetEnable(bool value);

    /// <summary>
    /// 
    /// </summary>

    AffinityResponse getAffinity() const;
    bool affinityIsSet() const;
    void unsetaffinity();
    void setAffinity(const AffinityResponse& value);

    /// <summary>
    /// **参数解释：** 规格展示名。仅使用切分规格部署的服务返回有此字段。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFlavorDisplayName() const;
    bool flavorDisplayNameIsSet() const;
    void unsetflavorDisplayName();
    void setFlavorDisplayName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TerminationGrace getTerminationGrace() const;
    bool terminationGraceIsSet() const;
    void unsetterminationGrace();
    void setTerminationGrace(const TerminationGrace& value);

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
    ImageInfoResponse image_;
    bool imageIsSet_;
    std::vector<InferModelResponse> models_;
    bool modelsIsSet_;
    std::vector<FileResponse> files_;
    bool filesIsSet_;
    std::vector<CodeResponse> codes_;
    bool codesIsSet_;
    std::vector<DumpResponse> dumps_;
    bool dumpsIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t groupCount_;
    bool groupCountIsSet_;
    std::string cmd_;
    bool cmdIsSet_;
    std::map<std::string, std::string> envs_;
    bool envsIsSet_;
    HealthResponse readinessHealth_;
    bool readinessHealthIsSet_;
    HealthResponse startupHealth_;
    bool startupHealthIsSet_;
    HealthResponse livenessHealth_;
    bool livenessHealthIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string recovery_;
    bool recoveryIsSet_;
    bool npuResetEnable_;
    bool npuResetEnableIsSet_;
    AffinityResponse affinity_;
    bool affinityIsSet_;
    std::string flavorDisplayName_;
    bool flavorDisplayNameIsSet_;
    TerminationGrace terminationGrace_;
    bool terminationGraceIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnitConfigResponse_H_
