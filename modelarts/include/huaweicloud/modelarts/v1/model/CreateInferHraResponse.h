
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferHraResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferHraResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/HraRuleResponse.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateInferHraResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateInferHraResponse();
    virtual ~CreateInferHraResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInferHraResponse members

    /// <summary>
    /// **参数解释：** hra策略ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作空间ID。未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **取值范围：** 不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** HRA规则列表。
    /// </summary>

    std::vector<HraRuleResponse>& getHraRules();
    bool hraRulesIsSet() const;
    void unsethraRules();
    void setHraRules(const std::vector<HraRuleResponse>& value);

    /// <summary>
    /// **参数解释：** 用户控制的启用/禁用开关。 **取值范围：** true表示禁用，false表示启用 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    bool isDisable() const;
    bool disableIsSet() const;
    void unsetdisable();
    void setDisable(bool value);

    /// <summary>
    /// **参数解释：** 策略状态。 **取值范围：** - CREATING 创建。 - ACTIVE 可用。 - INACTIVE 不可用。 - DELETED 已删除。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPolicyStatus() const;
    bool policyStatusIsSet() const;
    void unsetpolicyStatus();
    void setPolicyStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 最小副本数，由于当前版本不会进行实质扩缩，因此该配置值无效。 **取值范围：** 1~128。
    /// </summary>

    int32_t getMinReplicas() const;
    bool minReplicasIsSet() const;
    void unsetminReplicas();
    void setMinReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 最大副本数，由于当前版本不会进行实质扩缩，因此该配置值无效。 **取值范围：** 1~128。
    /// </summary>

    int32_t getMaxReplicas() const;
    bool maxReplicasIsSet() const;
    void unsetmaxReplicas();
    void setMaxReplicas(int32_t value);

    /// <summary>
    /// **参数解释：** 扩缩容时间窗，由于当前版本不会进行实质扩缩，因此该配置值无效。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getScaleWindow() const;
    bool scaleWindowIsSet() const;
    void unsetscaleWindow();
    void setScaleWindow(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::vector<HraRuleResponse> hraRules_;
    bool hraRulesIsSet_;
    bool disable_;
    bool disableIsSet_;
    std::string policyStatus_;
    bool policyStatusIsSet_;
    int32_t minReplicas_;
    bool minReplicasIsSet_;
    int32_t maxReplicas_;
    bool maxReplicasIsSet_;
    int32_t scaleWindow_;
    bool scaleWindowIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateInferHraResponse_H_
