
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUpdatePoolNodesRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUpdatePoolNodesRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/NodeTag.h>
#include <huaweicloud/modelarts/v1/model/NodeDriver.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchUpdatePoolNodesRequestBody
    : public ModelBase
{
public:
    BatchUpdatePoolNodesRequestBody();
    virtual ~BatchUpdatePoolNodesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdatePoolNodesRequestBody members

    /// <summary>
    /// **参数解释**：需要更新的节点名称列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getNodeNames();
    bool nodeNamesIsSet() const;
    void unsetnodeNames();
    void setNodeNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：节点更新的类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - openHaRedundant：开启节点的高可用冗余标签 - closeHaRedundant：关闭节点的高可用冗余标签 - createTags：批量添加节点资源标签 - deleteTags：批量删除节点资源标签 **默认取值**：不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**：高可用冗余标签效果。 **约束限制**：不涉及。 **取值范围**：可选值如下： - NoSchedule：禁止调度 - NoExecute：禁止执行。 **默认取值**：NoSchedule。
    /// </summary>

    std::string getHaRedundantEffect() const;
    bool haRedundantEffectIsSet() const;
    void unsethaRedundantEffect();
    void setHaRedundantEffect(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeDriver getDriver() const;
    bool driverIsSet() const;
    void unsetdriver();
    void setDriver(const NodeDriver& value);

    /// <summary>
    /// **参数解释**：需要批量操作的资源标签列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<NodeTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<NodeTag>& value);


protected:
    std::vector<std::string> nodeNames_;
    bool nodeNamesIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string haRedundantEffect_;
    bool haRedundantEffectIsSet_;
    NodeDriver driver_;
    bool driverIsSet_;
    std::vector<NodeTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUpdatePoolNodesRequestBody_H_
