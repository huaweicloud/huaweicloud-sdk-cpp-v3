
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DeleteReadonlyNodesRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DeleteReadonlyNodesRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DeleteReadonlyNodesRequestBody
    : public ModelBase
{
public:
    DeleteReadonlyNodesRequestBody();
    virtual ~DeleteReadonlyNodesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteReadonlyNodesRequestBody members

    /// <summary>
    /// **参数解释**: 即将删除的只读节点ID列表。 **约束限制**: 不涉及。 **取值范围**： 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::vector<std::string>& getNodeIds();
    bool nodeIdsIsSet() const;
    void unsetnodeIds();
    void setNodeIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> nodeIds_;
    bool nodeIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DeleteReadonlyNodesRequestBody_H_
