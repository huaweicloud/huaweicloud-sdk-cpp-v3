
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListFlavorSellPoliciesResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListFlavorSellPoliciesResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ListFlavorSellPoliciesResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListFlavorSellPoliciesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFlavorSellPoliciesResponse();
    virtual ~ListFlavorSellPoliciesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListFlavorSellPoliciesResponse members

    /// <summary>
    /// 云服务器规格销售策略数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 云服务器规格销售策略。
    /// </summary>

    std::vector<ListFlavorSellPoliciesResult>& getSellPolicies();
    bool sellPoliciesIsSet() const;
    void unsetsellPolicies();
    void setSellPolicies(const std::vector<ListFlavorSellPoliciesResult>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<ListFlavorSellPoliciesResult> sellPolicies_;
    bool sellPoliciesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListFlavorSellPoliciesResponse_H_
