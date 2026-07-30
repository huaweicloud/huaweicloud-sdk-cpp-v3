
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchResizeRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchResizeRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeResizeParams.h>
#include <huaweicloud/modelarts/v1/model/ResizeNodeInfo.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchResizeRequestBody
    : public ModelBase
{
public:
    BatchResizeRequestBody();
    virtual ~BatchResizeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResizeRequestBody members

    /// <summary>
    /// **参数解释**：扩缩容的超节点批次信息。 **约束限制**：单次最多50个超节点。
    /// </summary>

    std::vector<ResizeNodeInfo>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<ResizeNodeInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    NodeResizeParams getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const NodeResizeParams& value);

    /// <summary>
    /// 
    /// </summary>

    NodeResizeParams getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const NodeResizeParams& value);


protected:
    std::vector<ResizeNodeInfo> nodes_;
    bool nodesIsSet_;
    NodeResizeParams source_;
    bool sourceIsSet_;
    NodeResizeParams target_;
    bool targetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchResizeRequestBody_H_
