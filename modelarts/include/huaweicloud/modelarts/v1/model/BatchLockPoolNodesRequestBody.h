
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchLockPoolNodesRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchLockPoolNodesRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchLockPoolNodesRequestBody
    : public ModelBase
{
public:
    BatchLockPoolNodesRequestBody();
    virtual ~BatchLockPoolNodesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchLockPoolNodesRequestBody members

    /// <summary>
    /// **参数解释**：需要变更锁状态的节点名称列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getNodeNames();
    bool nodeNamesIsSet() const;
    void unsetnodeNames();
    void setNodeNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：变更的功能类型。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);


protected:
    std::vector<std::string> nodeNames_;
    bool nodeNamesIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchLockPoolNodesRequestBody_H_
