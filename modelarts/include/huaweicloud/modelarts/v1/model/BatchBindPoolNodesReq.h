
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchBindPoolNodesReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchBindPoolNodesReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/BindNodeItem.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchBindPoolNodesReq
    : public ModelBase
{
public:
    BatchBindPoolNodesReq();
    virtual ~BatchBindPoolNodesReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchBindPoolNodesReq members

    /// <summary>
    /// **参数解释**：需要进行换绑的节点列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<BindNodeItem>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<BindNodeItem>& value);

    /// <summary>
    /// **参数解释**：是否对换绑的节点进行排水。 **约束限制**：不涉及。 **取值范围**： - true：排水 - false：不排水 **默认取值**：不涉及。
    /// </summary>

    bool isDrain() const;
    bool drainIsSet() const;
    void unsetdrain();
    void setDrain(bool value);


protected:
    std::vector<BindNodeItem> nodes_;
    bool nodesIsSet_;
    bool drain_;
    bool drainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchBindPoolNodesReq_H_
