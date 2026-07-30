
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateHpaRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateHpaRequestBody_H_


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
/// 修改定时扩缩容策略请求体
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateHpaRequestBody
    : public ModelBase
{
public:
    UpdateHpaRequestBody();
    virtual ~UpdateHpaRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHpaRequestBody members

    /// <summary>
    /// **参数解释：** 自动扩缩容策略绑定的目标ID **取值范围：** 实例组ID **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

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
    std::string id_;
    bool idIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateHpaRequestBody_H_
