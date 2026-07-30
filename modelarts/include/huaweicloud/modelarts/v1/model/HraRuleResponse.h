
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HraRuleResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HraRuleResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/RoleReplica.h>
#include <huaweicloud/modelarts/v1/model/Metrics.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/SloInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// HRA规则
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HraRuleResponse
    : public ModelBase
{
public:
    HraRuleResponse();
    virtual ~HraRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HraRuleResponse members

    /// <summary>
    /// **参数解释：** 规则ID，在创建HRA策略时即可在返回体中获取，也可通过查询推理单元配比检测信息获取当前用户拥有的HRA策略，其中id字段即为规则ID。 **约束限制：** 不涉及。 **取值范围：** 规则ID。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则是否禁用。 **取值范围：** - true：禁用。 - false：不禁用。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    bool isDisable() const;
    bool disableIsSet() const;
    void unsetdisable();
    void setDisable(bool value);

    /// <summary>
    /// **参数解释：** 扩缩容类型。 **取值范围：** - SIMULATOR_ALGO：模拟器算法扩缩容类型。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getScalerType() const;
    bool scalerTypeIsSet() const;
    void unsetscalerType();
    void setScalerType(const std::string& value);

    /// <summary>
    /// **参数解释：** HRA规则状态。 **取值范围：** - CREATING：创建。 - CONFIG_SUCCESS：配置HRA策略成功。 - EXECUTE_SUCCESS：执行HRA策略成功。 - DELETED：删除。 - FAILED：失败。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getRuleStatus() const;
    bool ruleStatusIsSet() const;
    void unsetruleStatus();
    void setRuleStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** SLO配置参数信息。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<SloInfo>& getSloInfo();
    bool sloInfoIsSet() const;
    void unsetsloInfo();
    void setSloInfo(const std::vector<SloInfo>& value);

    /// <summary>
    /// **参数解释：** 指标信息。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<Metrics>& getMetrics();
    bool metricsIsSet() const;
    void unsetmetrics();
    void setMetrics(const std::vector<Metrics>& value);

    /// <summary>
    /// **参数解释：** 角色扩缩策略（不会进行实质扩缩，因此该配置值无效）。
    /// </summary>

    std::vector<RoleReplica>& getRoleReplica();
    bool roleReplicaIsSet() const;
    void unsetroleReplica();
    void setRoleReplica(const std::vector<RoleReplica>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool disable_;
    bool disableIsSet_;
    std::string scalerType_;
    bool scalerTypeIsSet_;
    std::string ruleStatus_;
    bool ruleStatusIsSet_;
    std::vector<SloInfo> sloInfo_;
    bool sloInfoIsSet_;
    std::vector<Metrics> metrics_;
    bool metricsIsSet_;
    std::vector<RoleReplica> roleReplica_;
    bool roleReplicaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HraRuleResponse_H_
