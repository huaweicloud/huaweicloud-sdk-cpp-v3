
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListReadonlyNodesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListReadonlyNodesResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ListReadonlyNodesResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListReadonlyNodesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListReadonlyNodesResponse();
    virtual ~ListReadonlyNodesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReadonlyNodesResponse members

    /// <summary>
    /// **参数解释**: 只读节点列表。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<ListReadonlyNodesResult>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<ListReadonlyNodesResult>& value);

    /// <summary>
    /// **参数解释**: 数据库名称。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMaxReadonlyNodeNum() const;
    bool maxReadonlyNodeNumIsSet() const;
    void unsetmaxReadonlyNodeNum();
    void setMaxReadonlyNodeNum(int32_t value);


protected:
    std::vector<ListReadonlyNodesResult> nodes_;
    bool nodesIsSet_;
    int32_t maxReadonlyNodeNum_;
    bool maxReadonlyNodeNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListReadonlyNodesResponse_H_
