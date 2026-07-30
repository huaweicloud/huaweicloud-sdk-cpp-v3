
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateHpaRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateHpaRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/HpaRules.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建定时扩缩容策略请求体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateHpaRequestBody
    : public ModelBase
{
public:
    CreateHpaRequestBody();
    virtual ~CreateHpaRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateHpaRequestBody members

    /// <summary>
    /// **参数解释：** 自动扩缩容类型。 **取值范围：** - CRON_HPA：定时扩缩容策略 - METRIC_HPA：指标扩缩容策略 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容策略绑定的目标ID **取值范围：** 实例组ID **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTargetResourceId() const;
    bool targetResourceIdIsSet() const;
    void unsettargetResourceId();
    void setTargetResourceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容策略绑定的目标类型。 **取值范围：** - GROUP：实例组 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTargetResourceType() const;
    bool targetResourceTypeIsSet() const;
    void unsettargetResourceType();
    void setTargetResourceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 自动扩缩容规则。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<HpaRules>& getHpaRules();
    bool hpaRulesIsSet() const;
    void unsethpaRules();
    void setHpaRules(const std::vector<HpaRules>& value);

    /// <summary>
    /// **参数解释：** 工作空间ID。 **取值范围：** - 0：默认空间ID - 由数字和小写字母组成的32位字符：其他空间ID，可参考[工作空间创建](CreateWorkspace.xml) **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string targetResourceId_;
    bool targetResourceIdIsSet_;
    std::string targetResourceType_;
    bool targetResourceTypeIsSet_;
    std::vector<HpaRules> hpaRules_;
    bool hpaRulesIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateHpaRequestBody_H_
