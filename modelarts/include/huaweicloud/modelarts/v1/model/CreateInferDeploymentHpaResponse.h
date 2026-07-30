
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferDeploymentHpaResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferDeploymentHpaResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/HpaRule.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateInferDeploymentHpaResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateInferDeploymentHpaResponse();
    virtual ~CreateInferDeploymentHpaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInferDeploymentHpaResponse members

    /// <summary>
    /// **参数解释：** 自动扩缩容策略ID **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容策略名称 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容策略绑定的目标ID **取值范围：** 实例组ID
    /// </summary>

    std::string getTargetResourceId() const;
    bool targetResourceIdIsSet() const;
    void unsettargetResourceId();
    void setTargetResourceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容策略绑定的目标类型。 **取值范围：** - GROUP：实例组
    /// </summary>

    std::string getTargetResourceType() const;
    bool targetResourceTypeIsSet() const;
    void unsettargetResourceType();
    void setTargetResourceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容最小实例数。 **取值范围：** 1-128
    /// </summary>

    int32_t getMinReplicas() const;
    bool minReplicasIsSet() const;
    void unsetminReplicas();
    void setMinReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 自动扩缩容最大实例数。 **取值范围：** 1-128
    /// </summary>

    int32_t getMaxReplicas() const;
    bool maxReplicasIsSet() const;
    void unsetmaxReplicas();
    void setMaxReplicas(int32_t value);

    /// <summary>
    /// 参数解释：** 自动扩缩容策略状态。 **取值范围：** - INACTIVE：不启用 - ACTIVE：配置成功 - DELETED：已删除
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作空间ID。 **取值范围：** - 0：默认空间ID - 由数字和小写字母组成的32位字符：其他空间ID，可参考[工作空间创建](CreateWorkspace.xml)
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容规则列表
    /// </summary>

    std::vector<HpaRule>& getHpaRules();
    bool hpaRulesIsSet() const;
    void unsethpaRules();
    void setHpaRules(const std::vector<HpaRule>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string targetResourceId_;
    bool targetResourceIdIsSet_;
    std::string targetResourceType_;
    bool targetResourceTypeIsSet_;
    int32_t minReplicas_;
    bool minReplicasIsSet_;
    int32_t maxReplicas_;
    bool maxReplicasIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::vector<HpaRule> hpaRules_;
    bool hpaRulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferDeploymentHpaResponse_H_
