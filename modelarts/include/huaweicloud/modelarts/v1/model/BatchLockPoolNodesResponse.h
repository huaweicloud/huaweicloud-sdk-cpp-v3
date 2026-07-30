
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchLockPoolNodesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchLockPoolNodesResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodesResultMsg.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchLockPoolNodesResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchLockPoolNodesResponse();
    virtual ~BatchLockPoolNodesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchLockPoolNodesResponse members

    /// <summary>
    /// **参数解释**：批量操作的资源池节点ID列表及状态。
    /// </summary>

    std::vector<NodesResultMsg>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<NodesResultMsg>& value);


protected:
    std::vector<NodesResultMsg> nodes_;
    bool nodesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchLockPoolNodesResponse_H_
