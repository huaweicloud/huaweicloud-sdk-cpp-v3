
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HraRuleUpdateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HraRuleUpdateRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HraRuleUpdateRequest
    : public ModelBase
{
public:
    HraRuleUpdateRequest();
    virtual ~HraRuleUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HraRuleUpdateRequest members

    /// <summary>
    /// 规则ID，在[创建HRA策略](CreateInferHra.xml)时即可在返回体中获取，也可通过[获取推理单元配比检测信息](ShowInferHra.xml)获取当前用户拥有的HRA策略，其中id字段即为规则ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 操作类型。 **取值范围：** - UPDATE：修改HRA策略规则。 - DELETE：删除HRA策略规则。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getOperate() const;
    bool operateIsSet() const;
    void unsetoperate();
    void setOperate(const std::string& value);

    /// <summary>
    /// **参数解释：** 扩缩容类型。 **取值范围：** - SIMULATOR_ALGO：模拟器算法扩缩容类型。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getScalerType() const;
    bool scalerTypeIsSet() const;
    void unsetscalerType();
    void setScalerType(const std::string& value);

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
    /// **参数解释：** 角色扩缩策略（不会进行实质扩缩，因此该配置值无效）。 **取值范围：** 1~128。
    /// </summary>

    std::vector<RoleReplica>& getRoleReplica();
    bool roleReplicaIsSet() const;
    void unsetroleReplica();
    void setRoleReplica(const std::vector<RoleReplica>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string operate_;
    bool operateIsSet_;
    std::string scalerType_;
    bool scalerTypeIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HraRuleUpdateRequest_H_
