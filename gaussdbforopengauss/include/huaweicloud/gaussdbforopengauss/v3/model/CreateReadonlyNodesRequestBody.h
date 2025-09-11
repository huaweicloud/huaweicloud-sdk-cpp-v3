
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateReadonlyNodesRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateReadonlyNodesRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/NodeDistributionOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CreateReadonlyNodesRequestBody
    : public ModelBase
{
public:
    CreateReadonlyNodesRequestBody();
    virtual ~CreateReadonlyNodesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateReadonlyNodesRequestBody members

    /// <summary>
    /// **参数解释**: 新创建只读节点在各可用区的分布情况。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<NodeDistributionOption>& getNodeDistribution();
    bool nodeDistributionIsSet() const;
    void unsetnodeDistribution();
    void setNodeDistribution(const std::vector<NodeDistributionOption>& value);


protected:
    std::vector<NodeDistributionOption> nodeDistribution_;
    bool nodeDistributionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateReadonlyNodesRequestBody_H_
