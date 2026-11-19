
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/ShowKeyUsageFlowResponseBody_nodes.h>
#include <vector>
#include <huaweicloud/kms/v2/model/ShowKeyUsageFlowResponseBody_edges.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ShowKeyUsageFlowResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKeyUsageFlowResponse();
    virtual ~ShowKeyUsageFlowResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKeyUsageFlowResponse members

    /// <summary>
    /// **参数解释：** 使用流图节点列表，当前固定包含一个元素，元素内按类型分组展示各类节点 **取值范围：** 不涉及
    /// </summary>

    std::vector<ShowKeyUsageFlowResponseBody_nodes>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<ShowKeyUsageFlowResponseBody_nodes>& value);

    /// <summary>
    /// **参数解释：** 使用流关系边列表，表示起点节点到策略节点、策略节点到密钥节点的使用流关系 **取值范围：** 不涉及
    /// </summary>

    std::vector<ShowKeyUsageFlowResponseBody_edges>& getEdges();
    bool edgesIsSet() const;
    void unsetedges();
    void setEdges(const std::vector<ShowKeyUsageFlowResponseBody_edges>& value);


protected:
    std::vector<ShowKeyUsageFlowResponseBody_nodes> nodes_;
    bool nodesIsSet_;
    std::vector<ShowKeyUsageFlowResponseBody_edges> edges_;
    bool edgesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowResponse_H_
